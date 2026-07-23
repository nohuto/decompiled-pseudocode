/*
 * XREFs of NtSetInformationObject @ 0x1800A0C30
 * Callers:
 *     TppCritResetThread @ 0x18000A5D4 (TppCritResetThread.c)
 *     TppCritSetThread @ 0x18000B5F4 (TppCritSetThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength)
{
  NTSTATUS result; // eax

  result = 92;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
