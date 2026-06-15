/*
 * XREFs of ?IsLegacyVssRelevant@CSpatialAudioTech@@UEBA_NXZ @ 0x18004EF70
 * Callers:
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800540EC (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x180062B98 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall CSpatialAudioTech::IsLegacyVssRelevant(CSpatialAudioTech *this)
{
  bool v1; // bl
  CLSID pClsid; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  if ( byte_18018B0E9 )
    return byte_18018B0E8;
  byte_18018B0E9 = 1;
  if ( !(unsigned __int8)IsGetDefaultSpatialRenderingModePresent(this)
    || (unsigned int)IsVirtualSurroundAllowedOnCurrentPlatform() )
  {
    v1 = CoGetPSClsid(&GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &pClsid) >= 0;
    byte_18018B0E8 = v1;
  }
  else
  {
    byte_18018B0E8 = 0;
  }
  return v1;
}
