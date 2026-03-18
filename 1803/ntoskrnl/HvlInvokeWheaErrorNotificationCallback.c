/*
 * XREFs of HvlInvokeWheaErrorNotificationCallback @ 0x140229930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

__int64 HvlInvokeWheaErrorNotificationCallback()
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( HvlpWheaErrorNotificationCallback )
    return ((__int64 (*)(void))HvlpWheaErrorNotificationCallback)();
  return result;
}
