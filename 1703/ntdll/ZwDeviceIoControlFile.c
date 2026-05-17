/*
 * XREFs of ZwDeviceIoControlFile @ 0x1800A53E0
 * Callers:
 *     sub_18008CE44 @ 0x18008CE44 (sub_18008CE44.c)
 *     sub_180109DC0 @ 0x180109DC0 (sub_180109DC0.c)
 * Callees:
 *     <none>
 */

__int64 ZwDeviceIoControlFile()
{
  __int64 result; // rax

  result = 7LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
