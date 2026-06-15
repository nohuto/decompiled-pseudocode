/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@@Z @ 0x180087B64
 * Callers:
 *     _lambda_e1bf6d97dd671a2597185e44ea385b56_::operator() @ 0x18007F85C (_lambda_e1bf6d97dd671a2597185e44ea385b56_--operator().c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087CF0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000A05C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z @ 0x180061CB8 (-GetOffloadMixFormat@@YAJPEBGPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z @ 0x18006388C (-SetOffloadDeviceFormat@@YAJPEBGPEAUtWAVEFORMATEX@@@Z.c)
 *     WPP_SF_d @ 0x180064B14 (WPP_SF_d.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800B8198 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormatHwAudioEngine(
        struct CEndpointCharacteristics *this,
        struct tWAVEFORMATEX *a2)
{
  __int64 v4; // rbx
  int updated; // eax
  int OffloadMixFormat; // edi
  struct tagPROPVARIANT v8; // [rsp+28h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+30h] BYREF
  struct tWAVEFORMATEX *v10; // [rsp+78h] [rbp+38h] BYREF
  __int64 v11; // [rsp+80h] [rbp+40h]

  v10 = 0LL;
  pv = 0LL;
  memset(&v8, 0, sizeof(v8));
  v4 = *((_QWORD *)this + 2);
  v11 = v4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, 0LL);
LABEL_9:
    OffloadMixFormat = updated;
    goto LABEL_10;
  }
  OffloadMixFormat = ValidateUncompressedWaveFormatEx(a2);
  if ( OffloadMixFormat >= 0 )
  {
    OffloadMixFormat = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, eHostProcessConnector, a2);
    if ( OffloadMixFormat >= 0 )
    {
      OffloadMixFormat = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v4 + 40LL))(v4, &pv);
      if ( OffloadMixFormat >= 0 )
      {
        OffloadMixFormat = SetOffloadDeviceFormat((const unsigned __int16 *)pv, a2);
        if ( OffloadMixFormat >= 0 )
        {
          OffloadMixFormat = GetOffloadMixFormat((const unsigned __int16 *)pv, &v10);
          if ( OffloadMixFormat >= 0 )
          {
            v8.vt = 65;
            v8.lVal = v10->cbSize + 18;
            v8.bstrblobVal.pData = (BYTE *)v10;
            updated = CEndpointCharacteristics::SetPropertyStoreProperty(this, &PKEY_AudioEngine_HWMixFormat, &v8);
            goto LABEL_9;
          }
        }
      }
    }
  }
LABEL_10:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v10 = 0LL;
  }
  if ( OffloadMixFormat < 0
    && WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x14u,
      (__int64)&WPP_4050dfb3bbe6354b31e7862a02621f78_Traceguids,
      OffloadMixFormat);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)OffloadMixFormat;
}
