/*
 * XREFs of VidSchiCompletePreemption @ 0x1C0025B64
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C002AAF8 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00AAC54 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00AAEA4 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C006DB54 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2780);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
