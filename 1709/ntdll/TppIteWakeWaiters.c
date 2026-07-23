/*
 * XREFs of TppIteWakeWaiters @ 0x18000A5B0
 * Callers:
 *     TppCallbackEpilog @ 0x18000E3F0 (TppCallbackEpilog.c)
 *     TppAlpcpExecuteCallback @ 0x18000F0A0 (TppAlpcpExecuteCallback.c)
 *     TppSingleTimerExpiration @ 0x180010418 (TppSingleTimerExpiration.c)
 *     TppWorkPost @ 0x180047168 (TppWorkPost.c)
 *     TppBarrierAdjust @ 0x180071CD8 (TppBarrierAdjust.c)
 * Callees:
 *     ZwAlertThreadByThreadId @ 0x1800A0E90 (ZwAlertThreadByThreadId.c)
 */

NTSTATUS __fastcall TppIteWakeWaiters(__int64 **a1)
{
  __int64 *v1; // rbx
  NTSTATUS result; // eax

  if ( a1 )
  {
    do
    {
      v1 = *a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = (__int64 **)v1;
    }
    while ( v1 );
  }
  return result;
}
