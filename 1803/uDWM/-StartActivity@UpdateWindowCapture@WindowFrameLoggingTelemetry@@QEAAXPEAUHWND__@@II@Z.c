/*
 * XREFs of ?StartActivity@UpdateWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x18007C278
 * Callers:
 *     ?UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DC70 (-UpdateWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@AEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004FC8 (_TlgWrite.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18000B0D4 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180037A44 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?zInternalRelatedId@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180048EB8 (-zInternalRelatedId@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03U_TlgReflectorTag_Param0Is.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?zInternalStart@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18007F580 (-zInternalStart@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 */

void __fastcall WindowFrameLoggingTelemetry::UpdateWindowCapture::StartActivity(
        WindowFrameLoggingTelemetry::UpdateWindowCapture *this,
        HWND a2,
        int a3,
        int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const GUID *v10; // rax
  DWORD v11; // [rsp+38h] [rbp-39h] BYREF
  HWND v12; // [rsp+40h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-29h] BYREF
  DWORD *v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+70h] [rbp-1h]
  int v16; // [rsp+74h] [rbp+3h]
  HWND *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  int *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  int *v23; // [rsp+98h] [rbp+27h]
  int v24; // [rsp+A0h] [rbp+2Fh]
  int v25; // [rsp+A4h] [rbp+33h]
  int v26; // [rsp+E8h] [rbp+77h] BYREF
  int v27; // [rsp+F0h] [rbp+7Fh] BYREF

  v27 = a4;
  v26 = a3;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v8 = (const struct _TlgProvider_t *)wil::details::static_lazy<WindowFrameLogging>::get(
                                        v6,
                                        (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v8 > 5u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v16 = 0;
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v11 = CurrentThreadId;
    v14 = &v11;
    v17 = &v12;
    v20 = &v26;
    v23 = &v27;
    v15 = 4;
    v12 = a2;
    v18 = 8;
    v21 = 4;
    v24 = 4;
    v10 = (const GUID *)wil::ActivityBase<AnimationClockLogging,0,0,4,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    TlgWrite(v8, &unk_1800B751B, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v10, 6u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching(
      (WindowFrameLoggingTelemetry::UpdateWindowCapture *)((char *)this + 8),
      v7);
}
