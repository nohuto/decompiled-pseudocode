/*
 * XREFs of RtlpGetStackLimits @ 0x1400E77D0
 * Callers:
 *     RtlDispatchException @ 0x140009410 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x140009D90 (RtlUnwindEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400E4A50 (RtlEnoughStackSpaceForStackCapture.c)
 *     RtlpWalkFrameChain @ 0x1400E4C20 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1400E77A0 (IoGetStackLimits.c)
 *     PspGetSetContextInternal @ 0x140521E20 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x140763CB8 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x140778910 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400E7800 (KeQueryCurrentStackInformation.c)
 */

__int64 __fastcall RtlpGetStackLimits(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // [rsp+40h] [rbp+18h] BYREF

  result = KeQueryCurrentStackInformation(&v3, a1, a2);
  if ( !(_BYTE)result )
    __fastfail(4u);
  return result;
}
