/*
 * XREFs of MiUnmapMdlCommon @ 0x140150654
 * Callers:
 *     MmUnmapReservedMapping @ 0x140150450 (MmUnmapReservedMapping.c)
 *     MmUnmapLockedRestartPages @ 0x1406DF360 (MmUnmapLockedRestartPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiInsertLargeTbFlushEntry @ 0x140110068 (MiInsertLargeTbFlushEntry.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiUnmapMdlCommon(ULONG_PTR BugCheckParameter2, _KPROCESS *a2, __int64 a3, ULONG_PTR a4)
{
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rax
  KIRQL v11; // al
  _QWORD *v12; // r15
  unsigned int v13; // r9d
  KIRQL v14; // di
  _QWORD *v15; // r8
  __int64 PteShadow; // rax
  __int64 v17; // rax
  _QWORD *v18; // r9
  __int64 v19; // rdi
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int BugCheckParameter3; // [rsp+30h] [rbp-D0h]
  unsigned __int64 ValidPte; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+5Ch] [rbp-A4h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]

  v30 = 0;
  v27 = 0;
  v28 = 0;
  v31 = 0LL;
  v32 = 0LL;
  BugCheckParameter3 = (unsigned int)a2;
  v25 = a3 + 48;
  v29 = 20;
  v6 = 0xFFFFF68000000000uLL;
  v7 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v7 + 8 * a4;
  v8 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 0xFFFFF6FB7DBED000uLL;
  v10 = *v8;
  if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
    LOBYTE(v10) = MiReadPteShadow(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v8);
  if ( (v10 & 0x80u) == 0LL )
  {
    v12 = 0LL;
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(&dword_140389010);
    v12 = (_QWORD *)qword_140389020;
    v13 = 0;
    v14 = v11;
    v15 = (_QWORD *)qword_140389020;
    if ( a4 >> 9 != 1 )
    {
      do
      {
        v15 = (_QWORD *)*v15;
        ++v13;
      }
      while ( v13 < (a4 >> 9) - 1 );
    }
    qword_140389020 = *v15;
    *v15 = 0LL;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389010);
    __writecr8(v14);
    v9 = 0xFFFFF6FB7DBED000uLL;
    v6 = 0xFFFFF68000000000uLL;
  }
  if ( v7 < v26 )
  {
    while ( 1 )
    {
      if ( v12 )
      {
        PteShadow = *v8;
        if ( (unsigned __int64)v8 >= v9 && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow(v8, *v8);
        ValidPte = PteShadow;
        if ( (PteShadow & 0x80u) == 0LL || (v17 = MI_GET_PAGE_FRAME_FROM_PTE(&ValidPte), *v18 != v17) )
          KeBugCheckEx(0xDAu, 0x10EuLL, BugCheckParameter2, BugCheckParameter3, a4);
        v19 = (__int64)v12;
        v12 = (_QWORD *)*v12;
        MiInsertLargeTbFlushEntry(&v27, 1u, (unsigned __int64)v8);
        ValidPte = MiMakeValidPte(v7, (v19 + 0x58000000000LL) / 48, -1342177274);
        v20 = MiLockPageInline(v19);
        *(_QWORD *)v19 = 0LL;
        *(_QWORD *)(v19 + 8) = v8;
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v20);
        MiWriteValidPteNewPage(v8++, ValidPte);
        v9 = 0xFFFFF6FB7DBED000uLL;
        v21 = 4096LL;
      }
      else
      {
        v22 = *(_QWORD *)v7;
        if ( v7 >= v9 && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          v22 = MiReadPteShadow(v7, *(_QWORD *)v7);
        ValidPte = v22;
        if ( (v22 & 1) == 0 )
          KeBugCheckEx(0xDAu, 0x10BuLL, BugCheckParameter2, BugCheckParameter3, a4);
        MiInsertTbFlushEntry(&v27, (__int64)((v7 << 25) - (v6 << 25)) >> 16, 1LL, 0);
        v9 = 0xFFFFF6FB7DBED000uLL;
        *(_QWORD *)v7 = 0LL;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow(v7, 0LL);
        v21 = 8LL;
      }
      v7 += v21;
      v25 += v21;
      if ( v7 >= v26 )
        break;
      v6 = 0xFFFFF68000000000uLL;
    }
  }
  MiFlushTbList((__int64)&v27, a2);
}
