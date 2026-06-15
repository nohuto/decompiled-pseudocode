/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x1800CE920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180034CF8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this)
{
  bool v1; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( byte_18014CAD1 )
    return byte_18014CAD0;
  byte_18014CAD1 = 1;
  if ( !IsGetDefaultSpatialRenderingModePresent() || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
    v1 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
  byte_18014CAD0 = v1;
  return v1;
}
