/*
 * XREFs of RtlpGetStackLimits @ 0x1401307E0
 * Callers:
 *     RtlpWalkFrameChain @ 0x14012B860 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x14012DE70 (RtlUnwindEx.c)
 *     RtlDispatchException @ 0x14012EE80 (RtlDispatchException.c)
 *     IoGetStackLimits @ 0x1401307B0 (IoGetStackLimits.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x1401309A0 (RtlEnoughStackSpaceForStackCapture.c)
 *     PspGetSetContextInternal @ 0x1405B7BD0 (PspGetSetContextInternal.c)
 *     MmVerifierTrimMemory @ 0x1408129E4 (MmVerifierTrimMemory.c)
 *     ViKeWaitSanityChecks @ 0x140827BB0 (ViKeWaitSanityChecks.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x140130810 (KeQueryCurrentStackInformation.c)
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
