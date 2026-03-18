/*
 * XREFs of VidSchiCompletePreemption @ 0x1C002A904
 * Callers:
 *     VidSchiCompleteAllPendingCommand @ 0x1C0033E60 (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00BBF68 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C00BC1C0 (VidSchiResetEngines.c)
 * Callees:
 *     VidSchiWaitForCompletePreemption @ 0x1C00BCA34 (VidSchiWaitForCompletePreemption.c)
 */

__int64 __fastcall VidSchiCompletePreemption(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 2836);
  if ( (_DWORD)result )
    return VidSchiWaitForCompletePreemption(a1);
  return result;
}
