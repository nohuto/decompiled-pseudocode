/*
 * XREFs of SetThreadPriority @ 0x1C00929F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C0091A10 (SetThreadBasePriority.c)
 */

void SetThreadPriority()
{
  __int64 v0; // rbx

  v0 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  if ( *(_DWORD *)(v0 + 16) == 1 )
    SetThreadBasePriority(**(PETHREAD **)(v0 + 24), 16);
  *(_QWORD *)(v0 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
