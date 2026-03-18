/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x14017D610
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x140229430 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x14022DF7C (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x14028F66C (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x1405AE850 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x14063B20C (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x1407BB2F0 (ExpIsKernelCfgActive.c)
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 *     PspInitPhase0 @ 0x1408A0D54 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     MiRebaseDynamicRelocationRegions @ 0x1408BB1A4 (MiRebaseDynamicRelocationRegions.c)
 *     KiIsKernelCfgActive @ 0x1408BB470 (KiIsKernelCfgActive.c)
 *     KiAreCodePatchesAllowed @ 0x1408E00E0 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x140084C68 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
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
