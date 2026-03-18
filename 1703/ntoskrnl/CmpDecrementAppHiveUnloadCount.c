/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x14007EC20
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS CmpDecrementAppHiveUnloadCount()
{
  bool v0; // zf
  NTSTATUS result; // eax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = CmpActiveAppHiveUnloadCount-- == 1;
  result = CmpActiveAppHiveUnloadCount;
  if ( v0 )
  {
    _InterlockedOr(v2, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
  return result;
}
