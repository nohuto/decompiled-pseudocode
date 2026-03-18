/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0027C08
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C002C5F8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00B3568 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00B37B8 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C007592C (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2804);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
