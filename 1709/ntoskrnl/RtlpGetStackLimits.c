/*
 * XREFs of RtlpGetStackLimits @ 0x1400D9050
 * Callers:
 *     RtlUnwindEx @ 0x1400D5CB0 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x1400D68B0 (RtlpWalkFrameChain.c)
 *     IoGetStackLimits @ 0x1400D9020 (IoGetStackLimits.c)
 *     RtlDispatchException @ 0x1400D9210 (RtlDispatchException.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1400D9B84 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x140514300 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1407A5A14 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x1407BA808 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x1400D9080 (KeQueryCurrentStackInformation.c)
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
