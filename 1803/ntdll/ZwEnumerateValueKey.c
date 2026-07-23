/*
 * XREFs of ZwEnumerateValueKey @ 0x18009AD20
 * Callers:
 *     sub_18000A6BC @ 0x18000A6BC (sub_18000A6BC.c)
 *     sub_18006FF54 @ 0x18006FF54 (sub_18006FF54.c)
 *     sub_1800D94B4 @ 0x1800D94B4 (sub_1800D94B4.c)
 *     sub_1800FAB18 @ 0x1800FAB18 (sub_1800FAB18.c)
 *     sub_1800FB0E8 @ 0x1800FB0E8 (sub_1800FB0E8.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 19;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
