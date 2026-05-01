/*
 * XREFs of ?StartActivity@ControlGained@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801B02E8
 * Callers:
 *     ?ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1801AD920 (-ControlGained@HolographicPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnkno.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     GetViewId @ 0x1801AEC3C (GetViewId.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B3F24 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B4158 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HolographicPositionerTelemetry::ControlGained::StartActivity(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  int ViewId; // eax
  WCHAR *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  const struct _TlgProvider_t *v12; // rsi
  int v13; // r10d
  const GUID *v14; // rax
  LPCWSTR pwsz; // [rsp+38h] [rbp-59h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-51h] BYREF
  int v17; // [rsp+44h] [rbp-4Dh] BYREF
  __int64 v18; // [rsp+48h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+84h] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-9h] BYREF
  int *v24; // [rsp+98h] [rbp+7h]
  int v25; // [rsp+A0h] [rbp+Fh]
  int v26; // [rsp+A4h] [rbp+13h]
  LPCWSTR *p_pwsz; // [rsp+A8h] [rbp+17h]
  int v28; // [rsp+B0h] [rbp+1Fh]
  int v29; // [rsp+B4h] [rbp+23h]

  v18 = -2LL;
  pwsz = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&pwsz,
    0LL);
  ViewId = GetViewId(a2, &pwsz);
  v9 = (WCHAR *)pwsz;
  if ( ViewId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
    v11 = wil::details::static_lazy<HolographicPositionerProvider>::get(
            v10,
            lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
    v12 = *(const struct _TlgProvider_t **)(v11 + 8);
    if ( *(_DWORD *)v12 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v11 + 8), 0x200000000000uLL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v21 = 4;
      v22 = 0;
      TlgCreateWsz(&pDesc, v9);
      v17 = a3;
      v24 = &v17;
      v25 = v13;
      v26 = 0;
      LODWORD(pwsz) = a4 == 0;
      p_pwsz = &pwsz;
      v28 = v13;
      v29 = 0;
      v14 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
      TlgWrite(v12, &unk_18039263E, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v14, 6u, &pData);
    }
    if ( !*(_DWORD *)(a1 + 32) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
  }
  if ( v9 )
    CoTaskMemFree(v9);
}
