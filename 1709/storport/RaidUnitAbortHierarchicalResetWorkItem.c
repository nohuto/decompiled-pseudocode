/*
 * XREFs of RaidUnitAbortHierarchicalResetWorkItem @ 0x1C003DD48
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C001AF90 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterResetBus @ 0x1C002E0E4 (RaidAdapterResetBus.c)
 *     McTemplateK0qcj @ 0x1C003B86C (McTemplateK0qcj.c)
 *     StorIsEventQueueEmpty @ 0x1C0040044 (StorIsEventQueueEmpty.c)
 */

__int64 __fastcall RaidUnitAbortHierarchicalResetWorkItem(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1536), &LockHandle);
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_DWORD *)(a1 + 1520) = 0;
  ++*(_DWORD *)(a1 + 1528);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !*(_BYTE *)(a1 + 2624)
    || (result = StorIsEventQueueEmpty(*(_QWORD *)(a1 + 208)), !(_BYTE)result)
    || *(_DWORD *)(a1 + 1036) )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x40000000) != 0 )
      McTemplateK0qcj(
        *(_QWORD *)(a1 + 24),
        v2,
        v3,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 88),
        a1 + 1720);
    return RaidAdapterResetBus(*(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 88));
  }
  return result;
}
