/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x140143BC0
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1401EBDE0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1401EEFA8 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1402572FC (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x1405BF504 (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x1407549D0 (ExpIsKernelCfgActive.c)
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140839610 (MiRebaseDynamicRelocationRegions.c)
 *     KiIsKernelCfgActive @ 0x140839914 (KiIsKernelCfgActive.c)
 *     PspInitPhase0 @ 0x1408413C0 (PspInitPhase0.c)
 *     KiAreCodePatchesAllowed @ 0x14086B630 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14011D800 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14011D9FC (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 VslGetNestedPageProtectionFlags()
{
  int v0; // ecx
  int v2; // r8d
  int v3; // edx
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  _BYTE v7[16]; // [rsp+20h] [rbp-88h] BYREF
  int v8; // [rsp+30h] [rbp-78h]

  if ( HvlQueryVsmConnection(0LL)
    && VslpNestedPageProtectionFlags == v0
    && VslpEnterIumSecureMode(2u, 232LL, 0, (__int64)v7) >= 0 )
  {
    v2 = (2 * (v8 & 1) + 4) | 0x20;
    if ( (v8 & 2) == 0 )
      v2 = 2 * (v8 & 1) + 4;
    v3 = v2 | 0x10;
    if ( (v8 & 4) != 0 )
      v3 = v2;
    v4 = v3 | 0x40;
    if ( (v8 & 8) == 0 )
      v4 = v3;
    v5 = v4 | 0x80;
    if ( (v8 & 0x10) == 0 )
      v5 = v4;
    v6 = v5 | 0x100;
    if ( (v8 & 0x20) == 0 )
      v6 = v5;
    VslpNestedPageProtectionFlags = v6;
  }
  return (unsigned int)VslpNestedPageProtectionFlags;
}
