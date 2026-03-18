/*
 * XREFs of PipAttemptDependentStart @ 0x140723984
 * Callers:
 *     PipAttemptDependentsStart @ 0x1405CC078 (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x14064F6FC (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x140145AE4 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeProblem @ 0x1405C73B4 (PipClearDevNodeProblem.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x1405CE3A4 (PipCheckForUnsatisfiedDependencies.c)
 */

__int64 __fastcall PipAttemptDependentStart(_QWORD *Object)
{
  __int64 v2; // rbx

  if ( Object )
    v2 = *(_QWORD *)(Object[39] + 40LL);
  else
    v2 = 0LL;
  if ( !v2
    || (*(_DWORD *)(v2 + 396) & 0x2000) == 0
    || *(_DWORD *)(v2 + 404) != 51
    || PipCheckForUnsatisfiedDependencies(v2, 3u) )
  {
    return 3221225473LL;
  }
  PipClearDevNodeProblem(v2);
  return PnpRequestDeviceAction(Object, 16, 1, 0LL, 0LL, 0LL, 0LL);
}
