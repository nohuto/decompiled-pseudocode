/*
 * XREFs of VfSetVerifierInformationEx @ 0x140837B68
 * Callers:
 *     NtSetSystemInformation @ 0x14048D108 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400FD530 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x14080F570 (VfDriverLock.c)
 *     VfProbeAndCaptureUnicodeString @ 0x140813C78 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x140824760 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x14082B884 (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  __m128i v5; // xmm6
  __int128 v7; // [rsp+28h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-30h]

  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 )
      goto LABEL_7;
    if ( v2 == -1 )
      v2 = 0;
    v4 = VfWdSetCancelTimeout(v2);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_1403AD1D8;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v7, (unsigned __int64)(a1 + 2), 0x200u);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v5 = (__m128i)xmmword_1403AD1E0;
        *(_OWORD *)P = xmmword_1403AD1E0;
        xmmword_1403AD1E0 = v7;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        if ( (unsigned __int16)_mm_cvtsi128_si32(v5) )
          ExFreePoolWithTag(P[1], 0);
      }
    }
  }
  return (unsigned int)v4;
}
