/*
 * XREFs of MiUnmapMdlCommon @ 0x14020F570
 * Callers:
 *     MmUnmapReservedMapping @ 0x14020FA40 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1406B3390 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x14002820C (MiWriteValidPteNewPage.c)
 *     MiInsertLargeTbFlushEntry @ 0x1400344A8 (MiInsertLargeTbFlushEntry.c)
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  KIRQL v9; // al
  _QWORD *v10; // r15
  unsigned int v11; // r9d
  KIRQL v12; // di
  _QWORD *v13; // r8
  unsigned __int64 v14; // rax
  _QWORD *v15; // r9
  __int64 v16; // rdi
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r10
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v24; // [rsp+48h] [rbp-B8h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v26; // [rsp+54h] [rbp-ACh]
  int v27; // [rsp+58h] [rbp-A8h]
  int v28; // [rsp+5Ch] [rbp-A4h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]

  v28 = 0;
  v25 = 0;
  v26 = 0;
  v29 = 0LL;
  v30 = 0LL;
  v23 = a3 + 48;
  v27 = 20;
  v6 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v24 = v6 + 8 * a4;
  v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (MI_READ_PTE_LOCK_FREE(v7) & 0x80u) == 0LL )
  {
    v10 = 0LL;
  }
  else
  {
    v9 = ExAcquireSpinLockExclusive(&dword_14036CDA0);
    v10 = (_QWORD *)qword_14036CDB0;
    v11 = 0;
    v12 = v9;
    v13 = (_QWORD *)qword_14036CDB0;
    if ( a4 >> 9 != 1 )
    {
      do
      {
        v13 = (_QWORD *)*v13;
        ++v11;
      }
      while ( v11 < (a4 >> 9) - 1 );
    }
    qword_14036CDB0 = *v13;
    *v13 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CDA0);
    __writecr8(v12);
  }
  for ( ; v6 < v24; v23 += v18 )
  {
    if ( v10 )
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v7);
      if ( (ValidPte & 0x80u) == 0LL || (v14 = MI_READ_PTE_LOCK_FREE(&ValidPte), *v15 != ((v14 >> 12) & 0xFFFFFFFFFLL)) )
        KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, a2, a4);
      v16 = (__int64)v10;
      v10 = (_QWORD *)*v10;
      MiInsertLargeTbFlushEntry((__int64)&v25, 1u, v7);
      ValidPte = MiMakeValidPte(v6, (v16 + 0x58000000000LL) / 48, -1342177274);
      v17 = MiLockPageInline(v16);
      *(_QWORD *)(v16 + 8) = v7;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v17);
      MiWriteValidPteNewPage(v7);
      v8 = 4096LL;
      v7 += 8LL;
      v18 = 4096LL;
      v19 = 4096LL;
    }
    else
    {
      ValidPte = MI_READ_PTE_LOCK_FREE(v6);
      if ( (ValidPte & 1) == 0 )
        KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, a2, a4);
      MiInsertTbFlushEntry((__int64)&v25, (__int64)((v6 << 25) - (v20 << 25)) >> 16, 1LL, 0);
      *(_QWORD *)v6 = 0LL;
      if ( MiPteInShadowRange(v6) )
        MiWritePteShadow();
      v18 = 8LL;
      v19 = 8LL;
    }
    v6 += v19;
  }
  MiFlushTbList((__int64)&v25, (_KPROCESS *)v8);
}
