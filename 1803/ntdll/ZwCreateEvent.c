/*
 * XREFs of ZwCreateEvent @ 0x18009B3C0
 * Callers:
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800494E0 (RtlWaitForWnfMetaNotification.c)
 *     sub_18004AE34 @ 0x18004AE34 (sub_18004AE34.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     InitFn @ 0x1800571C0 (InitFn.c)
 *     sub_18005CE48 @ 0x18005CE48 (sub_18005CE48.c)
 *     sub_1800CB510 @ 0x1800CB510 (sub_1800CB510.c)
 *     RtlCreateProcessReflection @ 0x1800D0D60 (RtlCreateProcessReflection.c)
 *     sub_1800D12F0 @ 0x1800D12F0 (sub_1800D12F0.c)
 *     sub_1800D7B88 @ 0x1800D7B88 (sub_1800D7B88.c)
 *     RtlCreateUmsCompletionList @ 0x1800EF490 (RtlCreateUmsCompletionList.c)
 *     sub_1800F7614 @ 0x1800F7614 (sub_1800F7614.c)
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
