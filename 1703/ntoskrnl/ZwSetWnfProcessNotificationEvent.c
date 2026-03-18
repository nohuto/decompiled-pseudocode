/*
 * XREFs of ZwSetWnfProcessNotificationEvent @ 0x140181400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetWnfProcessNotificationEvent(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
