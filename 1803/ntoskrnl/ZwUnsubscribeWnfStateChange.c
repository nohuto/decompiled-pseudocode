/*
 * XREFs of ZwUnsubscribeWnfStateChange @ 0x1401AAD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  _disable();
  __readeflags();
  return KiServiceInternal(StateName);
}
