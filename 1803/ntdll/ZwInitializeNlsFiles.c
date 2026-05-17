/*
 * XREFs of ZwInitializeNlsFiles @ 0x18009C9B0
 * Callers:
 *     RtlGetLocaleFileMappingAddress @ 0x18007C4C0 (RtlGetLocaleFileMappingAddress.c)
 * Callees:
 *     <none>
 */

__int64 ZwInitializeNlsFiles()
{
  __int64 result; // rax

  result = 248LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
