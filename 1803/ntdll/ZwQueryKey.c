/*
 * XREFs of ZwQueryKey @ 0x18009AD80
 * Callers:
 *     sub_18000AF00 @ 0x18000AF00 (sub_18000AF00.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  NTSTATUS result; // eax

  result = 22;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
