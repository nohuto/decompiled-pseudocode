/*
 * XREFs of ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8A7C
 * Callers:
 *     ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800B8B74 (-ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@.c)
 * Callees:
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180038CD0 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z @ 0x1800BEC34 (-SetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEA_J@Z.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800EA18C (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 */

__int64 __fastcall CPolicyConfig::ConfirmDeviceCanRenderFormat(
        struct CEndpointCharacteristics *a1,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        __int32 a4,
        int a5)
{
  int SharedModeEnginePeriodicity; // ebx
  struct _GUID v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+18h] BYREF

  v11 = *a3;
  SharedModeEnginePeriodicity = CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                                  (__int64)a1,
                                  a4,
                                  &a2->wFormatTag,
                                  &v11,
                                  0,
                                  &v12,
                                  0LL,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity >= 0 && a5 )
  {
    v12 = (unsigned int)(int)((double)(int)v12 * 10000000.0 / (double)(int)a2->nSamplesPerSec + 0.5);
    return (unsigned int)CPolicyConfig::SetProcessingPeriodInternal(a1, &v12);
  }
  else if ( SharedModeEnginePeriodicity == -2004287480 )
  {
    v11 = *a3;
    if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(
           a1,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a4,
           &v11,
           a2) )
    {
      return (unsigned int)-2005139389;
    }
  }
  return (unsigned int)SharedModeEnginePeriodicity;
}
