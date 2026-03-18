/*
 * XREFs of ExUnlockHandleTableEntry @ 0x140756A20
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14017D4F0 (ExfUnblockPushLock.c)
 */

LONG __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  LONG result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
