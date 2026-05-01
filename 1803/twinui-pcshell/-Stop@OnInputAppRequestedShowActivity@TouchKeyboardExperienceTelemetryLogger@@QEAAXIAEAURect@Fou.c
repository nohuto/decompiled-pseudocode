/*
 * XREFs of ?Stop@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXIAEAURect@Foundation@Windows@@@Z @ 0x18024E3CC
 * Callers:
 *     ?OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedShowEventArgs@45678@@Z @ 0x18024B390 (-OnInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgCreateSz @ 0x180058D78 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?zInternalStop@?$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1801B41C8 (-zInternalStop@-$ActivityBase@VTaskbarLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1802457E0 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity::Stop(
        TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *this,
        int a2,
        struct Windows::Foundation::Rect *a3)
{
  int *v3; // rsi
  int v6; // eax
  int *v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  const CHAR *v10; // rdx
  const CHAR *v11; // rdx
  const WCHAR *v12; // rdx
  const CHAR *v13; // rdx
  const CHAR *v14; // rdx
  const CHAR *v15; // rdx
  TraceLoggingHProvider v16; // r10
  const struct _TlgProvider_t *v17; // rsi
  int v18; // ecx
  DWORD CurrentThreadId; // eax
  DWORD v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  int *v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  DWORD *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  int *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  struct Windows::Foundation::Rect *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+E0h] [rbp-20h] BYREF
  int *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v44; // [rsp+120h] [rbp+20h]
  __int64 v45; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+130h] [rbp+30h] BYREF
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+150h] [rbp+50h] BYREF
  int *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+170h] [rbp+70h] BYREF
  DWORD *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+190h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v57; // [rsp+1B0h] [rbp+B0h]
  __int64 v58; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+1D0h] [rbp+D0h] BYREF
  int *v61; // [rsp+1E0h] [rbp+E0h]
  __int64 v62; // [rsp+1E8h] [rbp+E8h]
  struct Windows::Foundation::Rect *v63; // [rsp+1F0h] [rbp+F0h]
  __int64 v64; // [rsp+1F8h] [rbp+F8h]
  char *v65; // [rsp+200h] [rbp+100h]
  __int64 v66; // [rsp+208h] [rbp+108h]
  char *v67; // [rsp+210h] [rbp+110h]
  __int64 v68; // [rsp+218h] [rbp+118h]
  char *v69; // [rsp+220h] [rbp+120h]
  __int64 v70; // [rsp+228h] [rbp+128h]
  int v71; // [rsp+278h] [rbp+178h] BYREF

  v71 = a2;
  v3 = (int *)*((_QWORD *)this + 6);
  v6 = v3[19];
  if ( v6 < 0 && v6 == v3[21] )
    v7 = v3 + 20;
  else
    v7 = 0LL;
  wil::ActivityBase<TaskbarLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStop((__int64)this);
  v9 = wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
         v8,
         (void (__cdecl *)())lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_);
  if ( v7 )
  {
    if ( *(_DWORD *)v9[1] > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
    {
      v10 = (const CHAR *)*((_QWORD *)v7 + 6);
      v22 = v7[1];
      v41 = &v22;
      v42 = 4LL;
      TlgCreateSz(&pDesc, v10);
      v11 = (const CHAR *)*((_QWORD *)v7 + 15);
      v44 = v7 + 14;
      v45 = 4LL;
      TlgCreateSz(&v46, v11);
      v12 = (const WCHAR *)*((_QWORD *)v7 + 2);
      v23 = *v7;
      v47 = &v23;
      v48 = 4LL;
      TlgCreateWsz(&v49, v12);
      v13 = (const CHAR *)*((_QWORD *)v7 + 8);
      v24 = v7[6];
      v50 = &v24;
      v51 = 4LL;
      TlgCreateSz(&v52, v13);
      v14 = (const CHAR *)*((_QWORD *)v7 + 10);
      v20 = v7[18];
      v53 = &v20;
      v54 = 4LL;
      TlgCreateSz(&v55, v14);
      TlgCreateWsz(&v56, *((LPCWSTR *)v7 + 11));
      v15 = (const CHAR *)*((_QWORD *)v7 + 13);
      v21 = v7[24];
      v57 = &v21;
      v58 = 4LL;
      TlgCreateSz(&v59, v15);
      TlgCreateWsz(&v60, *((LPCWSTR *)v7 + 14));
      v62 = 4LL;
      v65 = (char *)a3 + 4;
      v61 = &v71;
      v67 = (char *)a3 + 8;
      v63 = a3;
      v69 = (char *)a3 + 12;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 4LL;
      TlgWrite(v16, &unk_18039B6AF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 0x15u, &pData);
    }
  }
  else
  {
    v17 = (const struct _TlgProvider_t *)v9[1];
    if ( *(_DWORD *)v17 > 5u && TlgKeywordOn((TraceLoggingHProvider)v9[1], 0x400000000000uLL) )
    {
      v18 = *(_DWORD *)(*((_QWORD *)this + 6) + 76LL);
      v26 = &v21;
      v21 = v18;
      v27 = 4LL;
      CurrentThreadId = GetCurrentThreadId();
      v29 = 4LL;
      v20 = CurrentThreadId;
      v31 = 4LL;
      v28 = &v20;
      v30 = &v71;
      v34 = (char *)a3 + 4;
      v36 = (char *)a3 + 8;
      v38 = (char *)a3 + 12;
      v32 = a3;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      TlgWrite(v17, &unk_18039B7EE, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 9u, &v25);
    }
  }
  if ( *((_DWORD *)this + 8) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((TouchKeyboardExperienceTelemetryLogger::OnInputAppRequestedShowActivity *)((char *)this + 8));
}
