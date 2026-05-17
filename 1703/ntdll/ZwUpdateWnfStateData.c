/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A8AF0
 * Callers:
 *     sub_1800040A0 @ 0x1800040A0 (sub_1800040A0.c)
 *     RtlPublishWnfStateData @ 0x180082250 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087FD0 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 448LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
