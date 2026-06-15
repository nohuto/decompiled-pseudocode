/*
 * XREFs of ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x180079E28
 * Callers:
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x18009F330 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 * Callees:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x1800031B0 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180041EF0 (-GetDefaultConnectorProcessingModeForSpatialStream@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__M.c)
 *     ?IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z @ 0x18007B5D8 (-IsPropertyChangeRelevant@CSpatialProperties@@QEAA_NAEBU_tagpropertykey@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CEndpointCharacteristics::ProcessPropertyChange(
        struct IMMDevice **this,
        struct tWAVEFORMATEX *a2,
        const struct _tagpropertykey *a3,
        int *a4)
{
  struct IPolicyConfig *v6; // r14
  int v8; // eax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // r8d
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // [rsp+28h] [rbp-49h]
  struct _GUID v13; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-19h]
  __int64 v15; // [rsp+70h] [rbp-1h] BYREF
  __int128 v16; // [rsp+78h] [rbp+7h]
  __int64 v17; // [rsp+88h] [rbp+17h]
  __int64 *v18; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  struct tWAVEFORMATEX *v20; // [rsp+E0h] [rbp+6Fh] BYREF

  v20 = a2;
  *a4 = 0;
  v6 = g_PolicyConfig;
  if ( !*((_DWORD *)this + 37) )
  {
    v8 = SpatialPolicy::OnPropertyChange(this[2], a3);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1995,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v8,
        v12);
  }
  if ( !*((_DWORD *)this + 37) && CSpatialProperties::IsPropertyChangeRelevant((CSpatialProperties *)this, a3) )
  {
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeForSpatialStream(
      (CEndpointCharacteristics *)this,
      &v13,
      v9);
    v20 = 0LL;
    CEndpointCharacteristics::GetDeviceFormat((CEndpointCharacteristics *)this, 0, 0, 0, &v20);
    v10 = (__int64)this[4];
    v11 = (__int64)this[2];
    v15 = (__int64)off_1800DB4E8;
    *(struct _GUID *)&v14[8] = v13;
    v18 = &v15;
    *(_QWORD *)v14 = this;
    v17 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v14[8], *(__m128d *)&v14[8]);
    v16 = *(_OWORD *)v14;
    CSpatialProperties::ProcessPropertyChange(
      (__int64)(this + 188),
      (__int64)a3,
      v11,
      v10,
      v6,
      (__int64)v20,
      (__int64)&v15,
      a4);
  }
}
