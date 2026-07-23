/*
 * XREFs of ZwTestAlert @ 0x1800A8930
 * Callers:
 *     sub_180079D70 @ 0x180079D70 (sub_180079D70.c)
 *     sub_1800A8E80 @ 0x1800A8E80 (sub_1800A8E80.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 434;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
