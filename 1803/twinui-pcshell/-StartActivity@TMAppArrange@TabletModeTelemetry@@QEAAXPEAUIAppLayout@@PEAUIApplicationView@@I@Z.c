/*
 * XREFs of ?StartActivity@TMAppArrange@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@PEAUIApplicationView@@I@Z @ 0x1802DD1FC
 * Callers:
 *     ?Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1802DCBA0 (-Show@WindowArrangementView@@UEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180152A44 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_.c)
 *     ?ComputeRectAlignment@ImmersiveApplicationLayout@@YA?AW4RectAlignment@1@PEBUtagRECT@@00@Z @ 0x1803050E8 (-ComputeRectAlignment@ImmersiveApplicationLayout@@YA-AW4RectAlignment@1@PEBUtagRECT@@00@Z.c)
 */

void __fastcall TabletModeTelemetry::TMAppArrange::StartActivity(
        TabletModeTelemetry::TMAppArrange *this,
        struct IAppLayout *a2,
        struct IApplicationView *a3,
        int a4)
{
  int v7; // r14d
  void *v8; // r8
  const struct _TlgProvider_t *v9; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-99h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-91h] BYREF
  DWORD v14; // [rsp+3Ch] [rbp-8Dh] BYREF
  int v15; // [rsp+40h] [rbp-89h] BYREF
  int v16; // [rsp+44h] [rbp-85h] BYREF
  char v17[8]; // [rsp+48h] [rbp-81h] BYREF
  LPVOID Context[2]; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v19[48]; // [rsp+60h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-39h] BYREF
  DWORD *v21; // [rsp+B0h] [rbp-19h]
  int v22; // [rsp+B8h] [rbp-11h]
  int v23; // [rsp+BCh] [rbp-Dh]
  int *v24; // [rsp+C0h] [rbp-9h]
  int v25; // [rsp+C8h] [rbp-1h]
  int v26; // [rsp+CCh] [rbp+3h]
  int *v27; // [rsp+D0h] [rbp+7h]
  int v28; // [rsp+D8h] [rbp+Fh]
  int v29; // [rsp+DCh] [rbp+13h]
  int *v30; // [rsp+E0h] [rbp+17h]
  int v31; // [rsp+E8h] [rbp+1Fh]
  int v32; // [rsp+ECh] [rbp+23h]
  int v33; // [rsp+148h] [rbp+7Fh] BYREF

  v33 = a4;
  v7 = 0;
  v16 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( (*(int (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, char *))(*(_QWORD *)a2 + 152LL))(
         a2,
         a3,
         &v12,
         v17) >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v12 + 56LL))(v12, 0LL, Context);
    (*(void (__fastcall **)(struct IAppLayout *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v19);
    v7 = ImmersiveApplicationLayout::ComputeRectAlignment(v19, Context, Context);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
  {
    Context[0] = qword_1804387B0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v8);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v9 > 5u && TlgKeywordOn(*((TraceLoggingHProvider *)Context[0] + 1), 0x400000000000uLL) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v14 = CurrentThreadId;
    v21 = &v14;
    v24 = &v15;
    v27 = &v16;
    v30 = &v33;
    v22 = 4;
    v15 = v7;
    v25 = 4;
    v28 = 4;
    v31 = 4;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v9, &unk_18039E1E6, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v11, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTelemetry::TMAppArrange *)((char *)this + 8));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
}
