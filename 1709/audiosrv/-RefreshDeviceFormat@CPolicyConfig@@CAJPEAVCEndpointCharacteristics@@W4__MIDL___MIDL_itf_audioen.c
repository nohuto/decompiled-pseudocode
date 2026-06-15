/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18008682C
 * Callers:
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022020 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P6AJPEAV1@0@ZPEAPEAUtWAVEFORMATEX@@@Z @ 0x180022814 (-GetDevicePipeFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     _TlgCreateWsz @ 0x18002C198 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     atexit @ 0x18003313C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x18005A438 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18005FD5C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087CF0 (-SetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoi.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        struct IUnknown **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  void *v4; // r8
  __int64 cData; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  struct IUnknown *v9; // rbx
  struct IUnknown *v10; // rcx
  int DeviceFormat; // edi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r14d
  void *v13; // rsi
  int v15; // [rsp+38h] [rbp-59h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-51h] BYREF
  struct IUnknown *v17; // [rsp+48h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-41h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-39h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v20; // [rsp+5Ch] [rbp-35h] BYREF
  LPVOID pv[3]; // [rsp+60h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+7h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v24; // [rsp+A8h] [rbp+17h]
  __int64 v25; // [rsp+B0h] [rbp+1Fh]

  pv[1] = (LPVOID)-2LL;
  v17 = 0LL;
  v15 = 0;
  pv[0] = 0LL;
  Context = 0LL;
  pwsz = 0LL;
  CEndpointCharacteristics::GetEndpointId((CEndpointCharacteristics *)this, (unsigned __int16 **)&pwsz);
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18014C2B8;
    qword_18014C2B8[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18014C2D0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18014C2B8, qword_18014C2D0, v4);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18014C2B8);
  }
  if ( **((_DWORD **)Context + 1) > 4u )
  {
    TlgCreateWsz(&pDesc, pwsz);
    v20 = a2;
    v24 = &v20;
    v25 = cData;
    TlgWrite(v8, &unk_18010F23E, v6, v7, cData, &pData);
  }
  v9 = this[2];
  Context = v9;
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
      goto LABEL_16;
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
LABEL_16:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::RefreshDeviceFormat", 3081, DeviceFormat);
  CoTaskMemFree((LPVOID)pwsz);
  pwsz = 0LL;
  ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v17 )
    ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
  return (unsigned int)DeviceFormat;
}
