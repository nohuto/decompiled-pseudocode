/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003C444
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C001AE20 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002D15C (RaidAdapterResetBus.c)
 *     StorIsEventQueueEmpty @ 0x1C003F870 (StorIsEventQueueEmpty.c)
 *     Template_qcj @ 0x1C003FACC (Template_qcj.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  int v2; // edx
  int v3; // r8d
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1504), &LockHandle);
  *(_QWORD *)(a1 + 1480) = 0LL;
  *(_DWORD *)(a1 + 1488) = 0;
  ++*(_DWORD *)(a1 + 1496);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 2576)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1004) )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
      Template_qcj(
        *(_QWORD *)(a1 + 24),
        v2,
        v3,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        a1 + 1688);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  return result;
}
