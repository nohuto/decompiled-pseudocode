/*
 * XREFs of ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N@Z @ 0x18020FBE8
 * Callers:
 *     ?ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ @ 0x180210530 (-ToggleAllUpView@XamlAllUpViewHost@@UEAAJXZ.c)
 *     ?ViewLoaded@XamlAllUpViewHost@@UEAAJXZ @ 0x180210980 (-ViewLoaded@XamlAllUpViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180085F20 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B41C8 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z @ 0x1802158BC (-get@-$static_lazy@VXamlSwitcherLogging@@@details@wil@@QEAAPEAVXamlSwitcherLogging@@P6AXXZ@Z.c)
 */

void __fastcall XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        XamlSwitcherTelemetry::ShowXamlTaskView *this,
        int a2,
        unsigned __int8 a3)
{
  int *v3; // rsi
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  const struct _TlgProvider_t *v10; // r14
  const CHAR *v11; // rdx
  const CHAR *v12; // rdx
  const WCHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  const CHAR *v16; // rdx
  enum _TABLETMODESTATE *v17; // rdx
  const struct _TlgProvider_t *v18; // rsi
  int v19; // ecx
  enum _TABLETMODESTATE *v20; // rdx
  TabletModeHelpers *v21; // rcx
  int v22; // [rsp+38h] [rbp-D0h] BYREF
  int v23; // [rsp+3Ch] [rbp-CCh] BYREF
  DWORD IsTabletMode; // [rsp+40h] [rbp-C8h] BYREF
  int v25; // [rsp+44h] [rbp-C4h] BYREF
  int v26; // [rsp+48h] [rbp-C0h] BYREF
  int v27; // [rsp+4Ch] [rbp-BCh] BYREF
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+58h] [rbp-B0h] BYREF
  int *v30; // [rsp+78h] [rbp-90h]
  __int64 v31; // [rsp+80h] [rbp-88h]
  DWORD *v32; // [rsp+88h] [rbp-80h]
  __int64 v33; // [rsp+90h] [rbp-78h]
  int *v34; // [rsp+98h] [rbp-70h]
  __int64 v35; // [rsp+A0h] [rbp-68h]
  int *v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  int *v38; // [rsp+B8h] [rbp-50h]
  __int64 v39; // [rsp+C0h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C8h] [rbp-40h] BYREF
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v44; // [rsp+108h] [rbp+0h]
  __int64 v45; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+118h] [rbp+10h] BYREF
  int *v47; // [rsp+128h] [rbp+20h]
  __int64 v48; // [rsp+130h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+138h] [rbp+30h] BYREF
  int *v50; // [rsp+148h] [rbp+40h]
  __int64 v51; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+158h] [rbp+50h] BYREF
  int *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+178h] [rbp+70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+188h] [rbp+80h] BYREF
  int *v57; // [rsp+198h] [rbp+90h]
  __int64 v58; // [rsp+1A0h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1A8h] [rbp+A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1B8h] [rbp+B0h] BYREF
  int *v61; // [rsp+1C8h] [rbp+C0h]
  __int64 v62; // [rsp+1D0h] [rbp+C8h]
  DWORD *p_IsTabletMode; // [rsp+1D8h] [rbp+D0h]
  __int64 v64; // [rsp+1E0h] [rbp+D8h]
  int *v65; // [rsp+1E8h] [rbp+E0h]
  __int64 v66; // [rsp+1F0h] [rbp+E8h]
  int v67; // [rsp+240h] [rbp+138h] BYREF

  v67 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v9 = wil::details::static_lazy<XamlSwitcherLogging>::get(
         v8,
         lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
  if ( v7 )
  {
    v10 = *(const struct _TlgProvider_t **)(v9 + 8);
    if ( *(_DWORD *)v10 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x400000000000uLL) )
    {
      v11 = (const CHAR *)*((_QWORD *)v7 + 6);
      v26 = v7[1];
      v41 = &v26;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v11);
      v12 = (const CHAR *)*((_QWORD *)v7 + 15);
      v44 = v7 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, v12);
      v13 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v27 = *v7;
      v47 = &v27;
      v48 = 4LL;
      TlgCreateWsz(&v49, v13);
      v14 = (const CHAR *)*((_QWORD *)v7 + 8);
      v28 = v7[6];
      v50 = &v28;
      v51 = 4LL;
      TlgCreateSz(&v52, v14);
      v15 = (const CHAR *)*((_QWORD *)v7 + 10);
      v22 = v7[18];
      v53 = &v22;
      v54 = 4LL;
      TlgCreateSz(&v55, v15);
      TlgCreateWsz(&v56, *((LPCWSTR *)v7 + 11));
      v16 = (const CHAR *)*((_QWORD *)v7 + 13);
      v23 = v7[24];
      v57 = &v23;
      v58 = 4LL;
      TlgCreateSz(&v59, v16);
      TlgCreateWsz(&v60, *((LPCWSTR *)v7 + 14));
      v62 = 4LL;
      v61 = &v67;
      IsTabletMode = (unsigned __int8)TabletModeHelpers::IsTabletMode((TabletModeHelpers *)&v67, v17);
      v64 = 4LL;
      p_IsTabletMode = &IsTabletMode;
      v25 = a3;
      v65 = &v25;
      v66 = 4LL;
      TlgWrite(v10, &unk_180397D43, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x13u, &pData);
    }
  }
  else
  {
    v18 = *(const struct _TlgProvider_t **)(v9 + 8);
    if ( *(_DWORD *)v18 > 5u && TlgKeywordOn(*(TraceLoggingHProvider *)(v9 + 8), 0x400000000000uLL) )
    {
      v19 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v30 = &v25;
      v25 = v19;
      v31 = 4LL;
      IsTabletMode = GetCurrentThreadId();
      v32 = &IsTabletMode;
      v34 = &v67;
      v33 = 4LL;
      v35 = 4LL;
      v23 = (unsigned __int8)TabletModeHelpers::IsTabletMode(v21, v20);
      v37 = 4LL;
      v36 = &v23;
      v22 = a3;
      v38 = &v22;
      v39 = 4LL;
      TlgWrite(v18, &unk_180397E79, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 7u, &v29);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((XamlSwitcherTelemetry::ShowXamlTaskView *)((char *)this + 8));
}
