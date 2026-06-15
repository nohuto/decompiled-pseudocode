/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x18001F800
 * Callers:
 *     ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@_NU_GUID@@4PEAUtWAVEFORMATEX@@5_JPEAPEAUSaDeviceParams@@@Z @ 0x18002C2A0 (-DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__M.c)
 * Callees:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     ?GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x18004CA8C (-GetAliasedEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int AliasedEndpointCharacteristics; // ebx
  struct CEndpointCharacteristics *v9; // [rsp+20h] [rbp-18h] BYREF

  v9 = 0LL;
  AliasedEndpointCharacteristics = GetAliasedEndpointCharacteristics(a2, 0, &v9);
  if ( AliasedEndpointCharacteristics < 0
    || (AliasedEndpointCharacteristics = CPolicyConfig::GetProcessingPeriodInternal(v9, a3, a4, a5),
        AliasedEndpointCharacteristics < 0) )
  {
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        21LL,
        &WPP_063b73282fa230620b2f84334c1c051f_Traceguids,
        (unsigned int)AliasedEndpointCharacteristics);
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)AliasedEndpointCharacteristics;
}
