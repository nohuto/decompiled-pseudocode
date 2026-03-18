/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1C00D7FEC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *a1)
{
  __int64 v1; // rbx

  v1 = a1[51];
  RIMLockExclusive(v1 + 96);
  if ( *(_BYTE *)(v1 + 72) && !*(_BYTE *)(v1 + 73) )
    RIMLockExclusive(v1 + 696);
  *(_BYTE *)(v1 + 75) = 0;
  *(_QWORD *)(v1 + 104) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 96, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_BYTE *)(v1 + 72) && !*(_BYTE *)(v1 + 73) )
  {
    *(_QWORD *)(v1 + 704) = 0LL;
    ExReleasePushLockExclusiveEx(v1 + 696, 0LL);
    KeLeaveCriticalRegion();
  }
  return ObfDereferenceObject(a1);
}
