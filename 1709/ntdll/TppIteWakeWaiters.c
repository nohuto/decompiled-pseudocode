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

__int64 __fastcall TppIteWakeWaiters(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = (_QWORD *)*a1;
      result = ZwAlertThreadByThreadId(a1[1]);
      a1 = v1;
    }
    while ( v1 );
  }
  return result;
}
