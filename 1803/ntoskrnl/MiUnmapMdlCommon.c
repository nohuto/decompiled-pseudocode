/*
 * XREFs of MiUnmapMdlCommon @ 0x140001568
 * Callers:
 *     MmUnmapReservedMapping @ 0x140001420 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x14074A2D0 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140002750 (MiWriteValidPteNewPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  _QWORD *v4; // r12
  ULONG_PTR v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rax
  KIRQL v13; // al
  unsigned int v14; // r9d
  KIRQL v15; // bl
  _QWORD *v16; // r8
  _QWORD *v17; // rbx
  unsigned __int8 v18; // al
  __int64 ValidPte; // [rsp+38h] [rbp-C8h] BYREF
  ULONG_PTR v21; // [rsp+40h] [rbp-C0h]
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v23; // [rsp+54h] [rbp-ACh]
  int v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+5Ch] [rbp-A4h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]

  v25 = 0;
  v4 = (_QWORD *)(a3 + 48);
  v22 = 0;
  v23 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v24 = 20;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v21 = v7 + 8 * a4;
  v8 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (MI_READ_PTE_LOCK_FREE(v8) & 0x80u) != 0LL )
  {
    v13 = ExAcquireSpinLockExclusive(&SpinLock);
    v9 = (_QWORD *)qword_1403CC2D0;
    v14 = 0;
    v15 = v13;
    v16 = (_QWORD *)qword_1403CC2D0;
    if ( a4 >> 9 != 1 )
    {
      do
      {
        v16 = (_QWORD *)*v16;
        ++v14;
      }
      while ( v14 < (a4 >> 9) - 1 );
    }
    qword_1403CC2D0 = *v16;
    *v16 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&SpinLock);
    __writecr8(v15);
  }
  else
  {
    v9 = 0LL;
  }
  for ( ; v7 < v21; v4 = (_QWORD *)((char *)v4 + v11) )
  {
    if ( v9 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v8);
      if ( (ValidPte & 0x80u) == 0LL
        || *v4 != (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&ValidPte) >> 12) & 0xFFFFFFFFFLL) )
      {
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a2, a4);
      }
      v17 = v9;
      v9 = (_QWORD *)*v9;
      MiInsertLargeTbFlushEntry(&v22, 1LL, v8);
      ValidPte = MiMakeValidPte(v7, (__int64)(v17 + 0xB000000000LL) / 48, 2952790022LL);
      v18 = MiLockPageInline(v17);
      *v17 = 0LL;
      v17[1] = v8;
      _InterlockedAnd64(v17 + 3, 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v18);
      MiWriteValidPteNewPage(v8, ValidPte);
      v8 += 8LL;
      v11 = 4096LL;
    }
    else
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v7);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a2, a4);
      MiInsertTbFlushEntry(&v22, (__int64)((v7 << 25) - (v10 << 25)) >> 16, 1LL, 0LL);
      *(_QWORD *)v7 = ZeroPte;
      if ( (unsigned int)MiPteInShadowRange(v7) )
        MiWritePteShadow();
      v11 = 8LL;
    }
    v7 += v11;
  }
  return MiFlushTbList(&v22);
}
