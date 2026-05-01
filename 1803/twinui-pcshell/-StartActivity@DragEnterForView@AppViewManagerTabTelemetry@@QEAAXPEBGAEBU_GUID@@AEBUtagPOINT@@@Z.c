/*
 * XREFs of ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x180122278
 * Callers:
 *     ?DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z @ 0x18011FB60 (-DragEnterForView@CAppViewManager@@UEAAJAEBU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ?get@?$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@P6AXXZ@Z @ 0x180128104 (-get@-$static_lazy@VTabShellTelemetryProvider@@@details@wil@@QEAAPEAVTabShellTelemetryProvider@@.c)
 *     ?zInternalStart@?$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180128244 (-zInternalStart@-$ActivityBase@VTabShellTelemetryProvider@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTa.c)
 *     ?_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x180256628 (-_TlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 */

void __fastcall AppViewManagerTabTelemetry::DragEnterForView::StartActivity(
        AppViewManagerTabTelemetry::DragEnterForView *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        const struct tagPOINT *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // rdi
  const unsigned __int16 *v11; // rdx
  const WCHAR *v12; // rax
  __int64 v13; // r8
  const GUID *v14; // rcx
  DWORD CurrentThreadId; // [rsp+30h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-49h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+60h] [rbp-29h]
  int v18; // [rsp+68h] [rbp-21h]
  int v19; // [rsp+6Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-19h] BYREF
  const struct _GUID *v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+88h] [rbp-1h]
  int v23; // [rsp+8Ch] [rbp+3h]
  const struct tagPOINT *v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+98h] [rbp+Fh]
  int v26; // [rsp+9Ch] [rbp+13h]
  LONG *p_y; // [rsp+A0h] [rbp+17h]
  int v28; // [rsp+A8h] [rbp+1Fh]
  int v29; // [rsp+ACh] [rbp+23h]

  wil::ActivityBase<TabShellTelemetryProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart();
  v9 = wil::details::static_lazy<TabShellTelemetryProvider>::get(
         v8,
         lambda_e53bbca54556f26c08250baf48169049_::_lambda_invoker_cdecl_);
  v10 = *(const struct _TlgProvider_t **)(v9 + 8);
  if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x400000000000uLL) )
  {
    v19 = 0;
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v18 = 4;
    v12 = SQM::CensorAppID(a2, v11);
    TlgCreateWsz(&pDesc, v12);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    p_y = &a4->y;
    v21 = a3;
    v22 = 16;
    v24 = a4;
    v25 = 4;
    v28 = 4;
    v13 = *((_QWORD *)this + 6);
    if ( !*(_BYTE *)(v13 + 4) || _TlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    TlgWrite(v10, &unk_180386A26, (LPCGUID)(v13 + 8), v14, 7u, &pData);
  }
  if ( !*((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((AppViewManagerTabTelemetry::DragEnterForView *)((char *)this + 8));
}
