/*
 * XREFs of HamIpcChannelObjectMakeZombie @ 0x18000D90C
 * Callers:
 *     HamCloseActivity @ 0x18000D0D0 (HamCloseActivity.c)
 *     HamCompleteExtendedExecution @ 0x18000D190 (HamCompleteExtendedExecution.c)
 * Callees:
 *     HampIpcChannelFindCallbackContextByPayload @ 0x18000D970 (HampIpcChannelFindCallbackContextByPayload.c)
 *     HampIpcChannelObjectMakeZombieUnsafe @ 0x18000D9D4 (HampIpcChannelObjectMakeZombieUnsafe.c)
 */

__int64 __fastcall HamIpcChannelObjectMakeZombie(__int64 a1, __int64 a2)
{
  __int64 CallbackContextByPayload; // rax

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  CallbackContextByPayload = HampIpcChannelFindCallbackContextByPayload(a1, a2);
  if ( CallbackContextByPayload )
    HampIpcChannelObjectMakeZombieUnsafe(CallbackContextByPayload, a1);
  *(_DWORD *)(a1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 8);
}
