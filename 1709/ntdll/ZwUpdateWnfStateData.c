/*
 * XREFs of ZwUpdateWnfStateData @ 0x1800A3930
 * Callers:
 *     SignalStartWerSvc @ 0x1800027D0 (SignalStartWerSvc.c)
 *     RtlPublishWnfStateData @ 0x1800805E0 (RtlPublishWnfStateData.c)
 *     RtlTestAndPublishWnfStateData @ 0x180087280 (RtlTestAndPublishWnfStateData.c)
 * Callees:
 *     <none>
 */

__int64 ZwUpdateWnfStateData()
{
  __int64 result; // rax

  result = 452LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
