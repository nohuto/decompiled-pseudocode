/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x1800407F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18004AE50 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this)
{
  bool v1; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( byte_18012C418 )
    return byte_18012C419;
  byte_18012C418 = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    v1 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
  }
  byte_18012C419 = v1;
  return v1;
}
