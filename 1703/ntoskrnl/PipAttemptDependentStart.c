/*
 * XREFs of PipAttemptDependentStart @ 0x140692C70
 * Callers:
 *     PipAttemptDependentsStart @ 0x1404A7558 (PipAttemptDependentsStart.c)
 *     PipDeleteAllDependencyRelations @ 0x140692E3C (PipDeleteAllDependencyRelations.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14003CFA4 (PnpRequestDeviceAction.c)
 *     PipClearDevNodeProblem @ 0x14045D5E8 (PipClearDevNodeProblem.c)
 *     PipCheckForUnsatisfiedDependencies @ 0x14048C0A4 (PipCheckForUnsatisfiedDependencies.c)
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
