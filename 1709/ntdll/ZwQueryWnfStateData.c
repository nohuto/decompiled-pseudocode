/*
 * XREFs of ZwQueryWnfStateData @ 0x1800A2BD0
 * Callers:
 *     RtlQueryWnfStateData @ 0x1800801A0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180086DB0 (RtlQueryWnfStateDataWithExplicitScope.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryWnfStateData()
{
  __int64 result; // rax

  result = 345LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
