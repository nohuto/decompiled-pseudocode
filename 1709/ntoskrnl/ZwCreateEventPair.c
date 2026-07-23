/*
 * XREFs of ZwCreateEventPair @ 0x14017ED40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEventPair(
        PHANDLE EventPairHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventPairHandle);
}
