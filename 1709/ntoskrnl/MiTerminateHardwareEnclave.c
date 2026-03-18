/*
 * XREFs of MiTerminateHardwareEnclave @ 0x1406E9220
 * Callers:
 *     MiDeleteEnclavePages @ 0x1406E87CC (MiDeleteEnclavePages.c)
 *     MiTerminateEnclave @ 0x1406E917C (MiTerminateEnclave.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140101100 (ExAcquireAutoExpandPushLockShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1401038D0 (ExReleaseAutoExpandPushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiDeleteEnclavePage @ 0x1402295DC (MiDeleteEnclavePage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

void __fastcall MiTerminateHardwareEnclave(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 PteAddress; // rsi
  __int64 v5; // rdx
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  ULONG_PTR v11; // r13
  _KPROCESS *v12; // rdx
  unsigned __int64 *v13; // rdi
  __int64 PteShadow; // rax
  __int64 v15; // rbx
  unsigned __int64 ValidPte; // rax
  _KPROCESS *v17; // rdx
  __int64 v18; // [rsp+20h] [rbp-118h] BYREF
  int v19[48]; // [rsp+30h] [rbp-108h] BYREF

  v3 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  PteAddress = MiGetPteAddress(v3);
  v6 = MiGetPteAddress((*(unsigned int *)(v5 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v5 + 33) << 32)) << 12);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  v10 = *(_QWORD *)(v9 + 1032);
  --CurrentThread->SpecialApcDisable;
  v11 = ExAcquireAutoExpandPushLockShared(v10 + 16, 0LL);
  MiInitializeTbFlushList((__int64)v19, 1, 20);
  v13 = (unsigned __int64 *)PteAddress;
  if ( PteAddress <= v8 )
  {
    do
    {
      PteShadow = *v13;
      if ( (unsigned __int64)v13 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v13 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v18 = PteShadow;
      if ( PteShadow )
      {
        v15 = MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v18);
        MiInsertTbFlushEntry(v19, v3, 1LL, 0);
        ValidPte = MiMakeValidPte((unsigned __int64)v13, v15, -1073741820);
        MiWriteValidPteNewPage(v13, ValidPte);
      }
      v3 += 4096LL;
      ++v13;
    }
    while ( (unsigned __int64)v13 <= v8 );
  }
  MiFlushTbList((__int64)v19, v12);
  while ( PteAddress <= v8 )
  {
    MiDeleteEnclavePage(PteAddress, v19);
    PteAddress += 8LL;
  }
  ExReleaseAutoExpandPushLockShared(v11, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFlushTbList((__int64)v19, v17);
  *(_DWORD *)(a2 + 64) |= 8u;
}
