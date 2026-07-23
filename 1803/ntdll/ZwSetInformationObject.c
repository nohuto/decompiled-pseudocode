/*
 * XREFs of ZwSetInformationObject @ 0x18009B630
 * Callers:
 *     sub_18007C574 @ 0x18007C574 (sub_18007C574.c)
 *     sub_180080AE0 @ 0x180080AE0 (sub_180080AE0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationObject(
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
