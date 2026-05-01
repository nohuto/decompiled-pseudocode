/*
 * XREFs of ?StartActivity@ApplicationViewBackedViewHostItem_put_Visibility@HolographicPositionerTelemetry@@QEAAXIPEBGW4FRAMEWORK_VIEW_TYPE@@_N@Z @ 0x1801BC96C
 * Callers:
 *     ?put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z @ 0x1801BE450 (-put_Visibility@ApplicationViewBackedViewHostItem@@UEAAJE@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B3F24 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 *     ?zInternalStart@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B4158 (-zInternalStart@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflect.c)
 */

void __fastcall HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_put_Visibility::StartActivity(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        int a4,
        unsigned __int8 a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  int v11; // r10d
  const GUID *v12; // rax
  DWORD CurrentThreadId; // [rsp+30h] [rbp-61h] BYREF
  int v14; // [rsp+34h] [rbp-5Dh] BYREF
  int v15; // [rsp+38h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-31h]
  int v18; // [rsp+68h] [rbp-29h]
  int v19; // [rsp+6Ch] [rbp-25h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-21h] BYREF
  int *v21; // [rsp+80h] [rbp-11h]
  int v22; // [rsp+88h] [rbp-9h]
  int v23; // [rsp+8Ch] [rbp-5h]
  int *v24; // [rsp+90h] [rbp-1h]
  int v25; // [rsp+98h] [rbp+7h]
  int v26; // [rsp+9Ch] [rbp+Bh]
  int *v27; // [rsp+A0h] [rbp+Fh]
  int v28; // [rsp+A8h] [rbp+17h]
  int v29; // [rsp+ACh] [rbp+1Bh]
  int v30; // [rsp+F8h] [rbp+67h] BYREF

  v30 = a2;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(a1);
  v9 = wil::details::static_lazy<HolographicPositionerProvider>::get(
         v8,
         (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_);
  v10 = (const struct _TlgProvider_t *)v9[1];
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x200000000000uLL) )
  {
    v19 = 0;
    CurrentThreadId = GetCurrentThreadId();
    v18 = 4;
    p_CurrentThreadId = &CurrentThreadId;
    TlgCreateWsz(&pDesc, a3);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v24 = &v14;
    v15 = a5;
    v27 = &v15;
    v21 = &v30;
    v22 = v11;
    v14 = a4;
    v25 = v11;
    v28 = v11;
    v12 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(a1);
    TlgWrite(v10, &unk_180392EB9, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), v12, 7u, &pData);
  }
  if ( !*(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
