/*
 * XREFs of VslGetNestedPageProtectionFlags @ 0x140159240
 * Callers:
 *     HvlGetEnlightenmentInfo @ 0x1401E69E0 (HvlGetEnlightenmentInfo.c)
 *     HvlpDetermineEnlightenments @ 0x1401E9D50 (HvlpDetermineEnlightenments.c)
 *     RtlGuardCheckLongJumpTarget @ 0x140240FAC (RtlGuardCheckLongJumpTarget.c)
 *     ExpQuerySystemInformation @ 0x140528170 (ExpQuerySystemInformation.c)
 *     PsLocateSystemDlls @ 0x1405B8A04 (PsLocateSystemDlls.c)
 *     ExpIsKernelCfgActive @ 0x1407152D0 (ExpIsKernelCfgActive.c)
 *     PspInitPhase0 @ 0x1407FC734 (PspInitPhase0.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     MiRebaseDynamicRelocationRegions @ 0x140810AF8 (MiRebaseDynamicRelocationRegions.c)
 *     KiIsKernelCfgActive @ 0x140810DB8 (KiIsKernelCfgActive.c)
 *     MmInitNucleus @ 0x140813B1C (MmInitNucleus.c)
 *     KiAreCodePatchesAllowed @ 0x140834468 (KiAreCodePatchesAllowed.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14002F4C0 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14002F528 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
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
    && VslpEnterIumSecureMode(1, 232LL, 0LL, (__int64)v7) >= 0 )
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
