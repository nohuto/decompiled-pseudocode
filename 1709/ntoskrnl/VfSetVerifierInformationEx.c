/*
 * XREFs of VfSetVerifierInformationEx @ 0x1407CA600
 * Callers:
 *     NtSetSystemInformation @ 0x140469CA0 (NtSetSystemInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1407A2530 (VfDriverLock.c)
 *     VfProbeAndCaptureUnicodeString @ 0x1407A6AF8 (VfProbeAndCaptureUnicodeString.c)
 *     VfSetVerifierRunningMode @ 0x1407B6A74 (VfSetVerifierRunningMode.c)
 *     VfWdSetCancelTimeout @ 0x1407BE438 (VfWdSetCancelTimeout.c)
 */

__int64 __fastcall VfSetVerifierInformationEx(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  unsigned int v5; // ecx
  __m128i v6; // xmm6
  __int128 v8; // [rsp+28h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-30h]

  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = VfSetVerifierRunningMode(v3), v4 >= 0) )
  {
    if ( !v2 || (v2 != -1 ? (v5 = v2) : (v5 = 0), v4 = VfWdSetCancelTimeout(v5), v4 >= 0) )
    {
      ++dword_14036A138;
      v4 = VfProbeAndCaptureUnicodeString((__int64)&v8, (unsigned __int64)(a1 + 2), 0x200u);
      if ( v4 >= 0 )
      {
        VfDriverLock();
        v6 = (__m128i)xmmword_14036A140;
        *(_OWORD *)P = xmmword_14036A140;
        xmmword_14036A140 = v8;
        ViDriversLoadLockOwner = 0LL;
        KeReleaseMutex(&ViDriversLoadLock, 0);
        if ( (unsigned __int16)_mm_cvtsi128_si32(v6) )
          ExFreePoolWithTag(P[1], 0);
      }
    }
  }
  return (unsigned int)v4;
}
