/*
 * XREFs of ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC
 * Callers:
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x1800397A4 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180049610 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180052AC4 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180095B88 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BCD64 (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     _lambda_e5a48366650dbc4f26b14ee609f3d914_::operator() @ 0x1800E965C (_lambda_e5a48366650dbc4f26b14ee609f3d914_--operator().c)
 * Callees:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180038AA0 (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormat(
        CEndpointCharacteristics *this,
        char a2,
        bool a3,
        int a4,
        struct tWAVEFORMATEX **a5)
{
  GUID v10[2]; // [rsp+30h] [rbp-40h] BYREF
  __m256i v11; // [rsp+50h] [rbp-20h]

  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal((__int64)this, v10, a4, 1);
  *(GUID *)((char *)&v11.m256i_u64[1] + 4) = v10[0];
  v11.m256i_i64[0] = (__int64)this;
  v11.m256i_i32[2] = a4;
  v10[1] = *(GUID *)&v11.m256i_u64[2];
  v10[0] = *(GUID *)v11.m256i_i8;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
           this,
           a2,
           a3,
           a4,
           (__int64 *)v10,
           a5);
}
