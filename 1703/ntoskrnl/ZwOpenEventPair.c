/*
 * XREFs of ZwOpenEventPair @ 0x140180180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenEventPair(
        PHANDLE EventPairHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
