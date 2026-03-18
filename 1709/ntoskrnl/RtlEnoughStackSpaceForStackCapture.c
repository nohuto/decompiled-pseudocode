/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x1400D9B84
 * Callers:
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     IovpLogStackTrace @ 0x1407A57A8 (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x1407B78E8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400D9050 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x140181960 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v2, (__int64)&v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)(KeGetCurrentStackPointer() - v2) >= 0xE30;
  return v0;
}
