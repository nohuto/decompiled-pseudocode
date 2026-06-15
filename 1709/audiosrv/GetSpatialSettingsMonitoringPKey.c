/*
 * XREFs of GetSpatialSettingsMonitoringPKey @ 0x18000873C
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ @ 0x180089410 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXXZ.c)
 *     ??0CSpatialProperties@@QEAA@XZ @ 0x1800C9198 (--0CSpatialProperties@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall GetSpatialSettingsMonitoringPKey(__int64 a1)
{
  TLG_STATUS result; // eax
  LPCGUID v2; // r8
  LPCGUID v3; // r9
  int v4; // [rsp+30h] [rbp-19h] BYREF
  int v5; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v8; // [rsp+70h] [rbp+27h]
  int v9; // [rsp+78h] [rbp+2Fh]
  int v10; // [rsp+7Ch] [rbp+33h]
  int *v11; // [rsp+80h] [rbp+37h]
  int v12; // [rsp+88h] [rbp+3Fh]
  int v13; // [rsp+8Ch] [rbp+43h]

  if ( a1 )
  {
    result = 2;
    *(_OWORD *)a1 = PKEY_SpatialAudio_Signaling_Key;
    *(_DWORD *)(a1 + 16) = 2;
  }
  else if ( (unsigned int)dword_18014A3B0 > 2 )
  {
    TlgCreateSz(&pDesc, "GetSpatialSettingsMonitoringPKey");
    v10 = 0;
    v13 = 0;
    v8 = &v4;
    v11 = &v5;
    v4 = 402;
    v9 = 4;
    v5 = -2147467261;
    v12 = 4;
    return TlgWrite((TraceLoggingHProvider)&dword_18014A3B0, &unk_1801122B2, v2, v3, 5u, &pData);
  }
  return result;
}
