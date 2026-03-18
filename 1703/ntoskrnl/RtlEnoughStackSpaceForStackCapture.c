/*
 * XREFs of RtlEnoughStackSpaceForStackCapture @ 0x1400E4A50
 * Callers:
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     IovpLogStackTrace @ 0x140763A4C (IovpLogStackTrace.c)
 *     ViPoolLogStackTrace @ 0x140775AE8 (ViPoolLogStackTrace.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1400E77D0 (RtlpGetStackLimits.c)
 *     KeGetCurrentStackPointer @ 0x140181EE0 (KeGetCurrentStackPointer.c)
 */

__int64 RtlEnoughStackSpaceForStackCapture()
{
  unsigned int v0; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  char v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v2, &v3) )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)(KeGetCurrentStackPointer() - v2) >= 0xE30;
  return v0;
}
