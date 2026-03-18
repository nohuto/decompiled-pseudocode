/*
 * XREFs of VfFailDeviceNode @ 0x14014AA70
 * Callers:
 *     <none>
 * Callees:
 *     VfIsVerificationEnabled @ 0x14014AAB0 (VfIsVerificationEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDeviceNode(__int64 a1, ULONG a2)
{
  __int64 result; // rax

  result = VfIsVerificationEnabled(1LL, a1);
  if ( (_DWORD)result )
    return VerifierBugCheckIfAppropriate(a2, 0LL);
  return result;
}
