/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x140015C74
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 */

__int64 CmpDecrementAppHiveUnloadCount()
{
  bool v0; // zf
  __int64 result; // rax
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = CmpActiveAppHiveUnloadCount-- == 1;
  result = (unsigned int)CmpActiveAppHiveUnloadCount;
  if ( v0 )
  {
    _InterlockedOr(v2, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0LL);
  }
  return result;
}
