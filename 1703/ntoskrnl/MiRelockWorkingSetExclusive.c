/*
 * XREFs of MiRelockWorkingSetExclusive @ 0x1400406A4
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     NtLockVirtualMemory @ 0x14007687C (NtLockVirtualMemory.c)
 *     MiOutSwapWorkingSetCallback @ 0x140079C70 (MiOutSwapWorkingSetCallback.c)
 *     MiWalkVaRange @ 0x14007B280 (MiWalkVaRange.c)
 *     MiEmptyWsPrivatePagesCallback @ 0x14007C430 (MiEmptyWsPrivatePagesCallback.c)
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     NtUnlockVirtualMemory @ 0x1400FA8B0 (NtUnlockVirtualMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140123508 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140162EEC (MiInsertViewOfPhysicalSection.c)
 *     MiReleaseCommitForResetPageCallback @ 0x14020C030 (MiReleaseCommitForResetPageCallback.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 */

KIRQL __fastcall MiRelockWorkingSetExclusive(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bp
  __int64 SharedVm; // rax
  int v5; // edi
  __int64 v6; // rbx
  int v7; // esi
  KIRQL result; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  MiPreUnlockWorkingSetExclusive(a1, a2);
  SharedVm = MiGetSharedVm(a1);
  v5 = 0;
  v6 = SharedVm;
  v7 = *(_DWORD *)SharedVm & 0x40000000;
  if ( v7 )
    *(_DWORD *)(SharedVm + 4) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)SharedVm);
  __writecr8(v2);
  if ( v7 )
  {
    v9 = 0;
    while ( *(_DWORD *)(v6 + 4) )
    {
      KeYieldProcessorEx(&v9);
      if ( (v9 & 0x3F) == 0 )
      {
        v5 = 1;
        break;
      }
    }
  }
  result = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v6);
  if ( !v5 )
    *(_DWORD *)(v6 + 4) = 0;
  return result;
}
