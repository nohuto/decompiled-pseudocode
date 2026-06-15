/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B81AC
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x1800B7AFC (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800B541C (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z @ 0x1800C9420 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@@Z.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x1800CB530 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 */

void __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        __int64 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  struct _GUID v6; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v7[24]; // [rsp+48h] [rbp-9h]
  __int64 v8; // [rsp+60h] [rbp+Fh] BYREF
  __int128 v9; // [rsp+68h] [rbp+17h]
  __int64 v10; // [rsp+78h] [rbp+27h]
  __int64 *v11; // [rsp+98h] [rbp+47h]

  if ( *((_DWORD *)this + 37) || !a4 || a3 )
  {
    CSpatialProperties::ClearSpatialAudioSettings((LPCRITICAL_SECTION)this + 39, *((struct IMMDevice **)this + 2));
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v6, eHostProcessConnector);
    v8 = (__int64)off_1800F45D8;
    *(struct _GUID *)&v7[8] = v6;
    *(_QWORD *)v7 = this;
    v11 = &v8;
    v9 = *(_OWORD *)v7;
    v10 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v7[8], *(__m128d *)&v7[8]);
    CSpatialProperties::SetSpatialAudioSettings((LPCRITICAL_SECTION)this + 39, (__int64)a4, (__int64)&v8);
  }
}
