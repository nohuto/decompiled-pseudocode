/*
 * XREFs of ZwTestAlert @ 0x18009E1B0
 * Callers:
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_18009E650 @ 0x18009E650 (sub_18009E650.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 440;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
