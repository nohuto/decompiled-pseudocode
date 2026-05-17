/*
 * XREFs of ZwFsControlFile @ 0x1800A07E0
 * Callers:
 *     RtlpReferenceCurrentDirectory @ 0x18007A934 (RtlpReferenceCurrentDirectory.c)
 * Callees:
 *     <none>
 */

__int64 ZwFsControlFile()
{
  __int64 result; // rax

  result = 57LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
