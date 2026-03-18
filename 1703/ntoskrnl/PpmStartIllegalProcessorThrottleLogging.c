/*
 * XREFs of PpmStartIllegalProcessorThrottleLogging @ 0x14003CC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmStartIllegalProcessorThrottleLogging(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 24176) = 1;
  result = 0LL;
  *(_BYTE *)(a1 + 24184) = 0;
  return result;
}
