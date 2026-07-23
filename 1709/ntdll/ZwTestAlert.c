/*
 * XREFs of ZwTestAlert @ 0x1800A3770
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 *     KiUserApcHandler @ 0x1800A3C10 (KiUserApcHandler.c)
 * Callees:
 *     <none>
 */

NTSTATUS ZwTestAlert(void)
{
  NTSTATUS result; // eax

  result = 438;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
