/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1404676B0
 * Callers:
 *     WdipSemDisableScenario @ 0x140467560 (WdipSemDisableScenario.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140467734 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rbx
  __int64 EnabledInstanceTable; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140345B58, 0LL);
  if ( a1 )
  {
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v2 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v2 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140345B58, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
