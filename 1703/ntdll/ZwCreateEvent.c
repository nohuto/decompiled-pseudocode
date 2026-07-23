/*
 * XREFs of ZwCreateEvent @ 0x1800A5C00
 * Callers:
 *     sub_18000BBA8 @ 0x18000BBA8 (sub_18000BBA8.c)
 *     sub_18000C1F4 @ 0x18000C1F4 (sub_18000C1F4.c)
 *     sub_180010150 @ 0x180010150 (sub_180010150.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180082FA0 @ 0x180082FA0 (sub_180082FA0.c)
 *     RtlWaitForWnfMetaNotification @ 0x180087110 (RtlWaitForWnfMetaNotification.c)
 *     sub_1800D5D50 @ 0x1800D5D50 (sub_1800D5D50.c)
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 *     sub_1800D8360 @ 0x1800D8360 (sub_1800D8360.c)
 *     sub_1800DE2C0 @ 0x1800DE2C0 (sub_1800DE2C0.c)
 *     RtlCreateUmsCompletionList @ 0x1800F23E0 (RtlCreateUmsCompletionList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
