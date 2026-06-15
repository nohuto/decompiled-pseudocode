/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800BCD64
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039070 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180039570 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _TlgWrite @ 0x180043BEC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180043DA4 (_TlgCreateWsz.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800497AC (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180095A9C (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BDE10 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        struct IUnknown **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v4; // rcx
  __int64 cData; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  struct IUnknown *v9; // rbx
  struct IUnknown *v10; // rcx
  int DeviceFormat; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r14d
  void *v13; // rsi
  int v15; // [rsp+38h] [rbp-49h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-41h] BYREF
  struct IUnknown *v17; // [rsp+48h] [rbp-39h] BYREF
  struct IUnknown *v18; // [rsp+50h] [rbp-31h] BYREF
  LPVOID pv[2]; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+7h] BYREF
  struct IUnknown **v22; // [rsp+98h] [rbp+17h]
  __int64 v23; // [rsp+A0h] [rbp+1Fh]

  pv[1] = (LPVOID)-2LL;
  v17 = 0LL;
  v15 = 0;
  pv[0] = 0LL;
  v18 = 0LL;
  pwsz = 0LL;
  CEndpointCharacteristics::GetEndpointId((CEndpointCharacteristics *)this, (unsigned __int16 **)&pwsz);
  if ( **((_DWORD **)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                       v4,
                       lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
        + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, pwsz);
    LODWORD(v18) = a2;
    v22 = &v18;
    v23 = cData;
    TlgWrite(v8, &unk_180145728, v6, v7, cData, &pData);
  }
  v9 = this[2];
  v18 = v9;
  ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->AddRef)(v9);
  v10 = v17;
  if ( v17 != v9 )
  {
    ATL::AtlComQIPtrAssign(&v17, v9, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    v10 = v17;
  }
  if ( v10 )
  {
    DeviceFormat = ((__int64 (__fastcall *)(struct IUnknown *, int *))v10->lpVtbl[3].Release)(v10, &v15);
    if ( DeviceFormat < 0 )
      goto LABEL_14;
  }
  v12 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v12 = eHostProcessConnector;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                   (CEndpointCharacteristics *)this,
                   0,
                   v15 != 0,
                   v12,
                   (struct tWAVEFORMATEX **)pv);
  v13 = pv[0];
  if ( DeviceFormat >= 0 )
    DeviceFormat = CPolicyConfig::SetDeviceFormatInternal(
                     (struct IMMDevice *)v9,
                     v15,
                     v12,
                     (const struct tWAVEFORMATEX *)pv[0]);
  if ( v13 )
    CoTaskMemFree(v13);
  if ( DeviceFormat < 0 )
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::RefreshDeviceFormat", 3089, DeviceFormat);
  CoTaskMemFree((LPVOID)pwsz);
  pwsz = 0LL;
  ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  return (unsigned int)DeviceFormat;
}
