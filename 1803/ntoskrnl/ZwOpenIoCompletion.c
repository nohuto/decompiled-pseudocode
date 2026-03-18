/*
 * XREFs of ZwOpenIoCompletion @ 0x1401A97A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenIoCompletion(
        PHANDLE CompetionPort,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(CompetionPort, *(_QWORD *)&DesiredAccess, ObjectAttributes);
}
