/*
 * XREFs of MiDeleteEnclavePage @ 0x1402295DC
 * Callers:
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 *     MiTerminateHardwareEnclave @ 0x1406E9220 (MiTerminateHardwareEnclave.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14004F970 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     KeRemoveEnclavePage @ 0x1406D8230 (KeRemoveEnclavePage.c)
 */

void __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int *a2)
{
  __int64 PteShadow; // rax
  unsigned __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  PteShadow = *(_QWORD *)a1;
  if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  v10 = PteShadow;
  if ( PteShadow )
  {
    v5 = (__int64)(a1 << 25) >> 16;
    KeRemoveEnclavePage(v5);
    v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v10);
    *(_QWORD *)a1 = 0LL;
    if ( a1 >= 0xFFFFF6FB7DBED000uLL && a1 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow();
    v7 = 48 * v6 - 0x58000000000LL;
    v8 = (unsigned __int8)MiLockPageInline(v7);
    *(_QWORD *)(v7 + 24) |= 0x4000000000000000uLL;
    *(_BYTE *)(v7 + 34) &= ~0x10u;
    v9 = *(_QWORD *)(v7 + 24);
    *(_WORD *)(v7 + 32) = 0;
    *(_QWORD *)(v7 + 24) = v9 ^ (v9 ^ (v9 - 1)) & 0x3FFFFFFFFFFFFFFFLL;
    MiInsertPageInFreeOrZeroedList(v6, 256);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v8);
    if ( a2 )
      MiInsertTbFlushEntry(a2, v5, 1LL, 0);
  }
}
