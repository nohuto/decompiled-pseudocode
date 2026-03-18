/*
 * XREFs of CleanupRimDevObjInUserModeCallback @ 0x1C00DE410
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 */

LONG_PTR __fastcall CleanupRimDevObjInUserModeCallback(_QWORD *Object)
{
  __int64 v1; // rbx

  v1 = Object[51];
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
  return ObfDereferenceObject(Object);
}
