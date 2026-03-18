/*
 * XREFs of MiRemoveUserPhysicalPagesVad @ 0x1406E5880
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 * Callees:
 *     MiGetPteAddress @ 0x14003799C (MiGetPteAddress.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1400A5D30 (MiInitializeTbFlushList.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400BAD00 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140113B10 (ExReleaseAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiRemoveUserPhysicalPagesVad(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 result; // rax
  unsigned __int64 PteAddress; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // r14
  __int64 v6; // r9
  ULONG_PTR v7; // rbp
  _KPROCESS *v8; // rdx
  __int64 PteShadow; // rax
  __int64 v10; // [rsp+20h] [rbp-F8h] BYREF
  int v11[48]; // [rsp+30h] [rbp-E8h] BYREF

  CurrentThread = KeGetCurrentThread();
  result = (__int64)CurrentThread->ApcState.Process;
  if ( *(_QWORD *)(result + 1600) )
  {
    PteAddress = MiGetPteAddress((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12);
    v5 = MiGetPteAddress(((*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) << 12) | 0xFFF);
    MiInitializeTbFlushList((__int64)v11, 1, 20);
    --CurrentThread->SpecialApcDisable;
    v7 = v6 + 16;
    ExAcquireAutoExpandPushLockExclusive(v6 + 16, 0LL);
    for ( ; PteAddress <= v5; PteAddress += 8LL )
    {
      PteShadow = *(_QWORD *)PteAddress;
      if ( PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow();
      v10 = PteShadow;
      if ( (PteShadow & 1) != 0 )
      {
        _InterlockedAnd64(
          (volatile signed __int64 *)(48 * MI_GET_PAGE_FRAME_FROM_PTE((unsigned __int64 *)&v10) - 0x57FFFFFFFF8LL),
          0LL);
        MiInsertTbFlushEntry(v11, (__int64)(PteAddress << 25) >> 16, 1LL, 0);
        *(_QWORD *)PteAddress = 0LL;
        if ( PteAddress >= 0xFFFFF6FB7DBED000uLL && PteAddress <= 0xFFFFF6FB7DBED7F8uLL )
          MiWritePteShadow();
      }
    }
    MiFlushTbList((__int64)v11, v8);
    ExReleaseAutoExpandPushLockExclusive(v7, 0LL);
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return result;
}
