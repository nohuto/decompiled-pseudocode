/*
 * XREFs of ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180042F88
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180043D9C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 * Callees:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18003DD18 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180041EF0 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C7264 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 */

void __fastcall CEndpointCharacteristics::SetSpatialAudioSettings(
        CEndpointCharacteristics *this,
        unsigned __int8 a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 v7; // r9
  __int64 v8; // r8
  struct _GUID v9; // [rsp+38h] [rbp-19h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-9h]
  __int64 (__fastcall **v11)(); // [rsp+60h] [rbp+Fh] BYREF
  __int128 v12; // [rsp+68h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+27h]
  __int64 (__fastcall ***v14)(); // [rsp+98h] [rbp+47h]

  if ( *((_DWORD *)this + 37) || !a4 || a3 )
  {
    CSpatialProperties::ClearSpatialAudioSettings(
      (CEndpointCharacteristics *)((char *)this + 1504),
      *((struct IMMDevice **)this + 2),
      *((struct IPropertyStore **)this + 4));
  }
  else
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(this, &v9, eHostProcessConnector);
    v7 = *((_QWORD *)this + 4);
    v8 = *((_QWORD *)this + 2);
    v11 = off_1800DB518;
    *(struct _GUID *)&v10[8] = v9;
    *(_QWORD *)v10 = this;
    v14 = &v11;
    v12 = *(_OWORD *)v10;
    v13 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v10[8], *(__m128d *)&v10[8]);
    CSpatialProperties::SetSpatialAudioSettings((__int64)this + 1504, a2, v8, v7, (__int64)a4, (__int64)&v11);
  }
}
