/*
 * XREFs of EtwTraceCompletePowerRequest @ 0x1C0064D00
 * Callers:
 *     QueuePowerRequest @ 0x1C00649B0 (QueuePowerRequest.c)
 *     xxxUserPowerCalloutWorker @ 0x1C0064B40 (xxxUserPowerCalloutWorker.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C00D6170 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 * Callees:
 *     Template_xq @ 0x1C00DE128 (Template_xq.c)
 */

__int64 __fastcall EtwTraceCompletePowerRequest(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return Template_xq(a1, &CompletedPowerRequest, a3, a1, a2);
  return result;
}
