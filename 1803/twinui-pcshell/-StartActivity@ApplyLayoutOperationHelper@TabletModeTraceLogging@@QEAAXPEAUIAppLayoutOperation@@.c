/*
 * XREFs of ?StartActivity@ApplyLayoutOperationHelper@TabletModeTraceLogging@@QEAAXPEAUIAppLayoutOperation@@@Z @ 0x1802CB470
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180018200 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18028DA08 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOperationData@1@@Z @ 0x1802C6A04 (-GetAppLayoutOperationData@TabletModeTraceLogging@@CAJPEAUIAppLayoutOperation@@PEAUAppLayoutOper.c)
 */

void __fastcall TabletModeTraceLogging::ApplyLayoutOperationHelper::StartActivity(
        TabletModeTraceLogging::ApplyLayoutOperationHelper *this,
        struct IAppLayoutOperation *a2)
{
  int AppLayoutOperationData; // eax
  void *v4; // r8
  const struct _TlgProvider_t *v5; // rdi
  const GUID *v6; // rax
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  DWORD CurrentThreadId; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v10[4]; // [rsp+40h] [rbp-C0h] BYREF
  char v11; // [rsp+44h] [rbp-BCh] BYREF
  char v12; // [rsp+48h] [rbp-B8h] BYREF
  char v13; // [rsp+4Ch] [rbp-B4h] BYREF
  LPCWSTR pwsz; // [rsp+68h] [rbp-98h] BYREF
  __int128 v15; // [rsp+70h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR v17[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-60h]
  __int64 v19; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h] BYREF
  char v21; // [rsp+B8h] [rbp-48h] BYREF
  char v22; // [rsp+BCh] [rbp-44h] BYREF
  char v23; // [rsp+C0h] [rbp-40h] BYREF
  char v24; // [rsp+C4h] [rbp-3Ch] BYREF
  LPCWSTR v25[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v28; // [rsp+100h] [rbp+0h] BYREF
  LPCWSTR v29; // [rsp+108h] [rbp+8h] BYREF
  __int128 v30; // [rsp+110h] [rbp+10h]
  __int128 v31; // [rsp+120h] [rbp+20h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF
  DWORD *p_CurrentThreadId; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  _BYTE *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  char *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  char *v39; // [rsp+180h] [rbp+80h]
  __int64 v40; // [rsp+188h] [rbp+88h]
  char *v41; // [rsp+190h] [rbp+90h]
  __int64 v42; // [rsp+198h] [rbp+98h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 *v44; // [rsp+1B0h] [rbp+B0h]
  __int64 v45; // [rsp+1B8h] [rbp+B8h]
  char *v46; // [rsp+1C0h] [rbp+C0h]
  __int64 v47; // [rsp+1C8h] [rbp+C8h]
  char *v48; // [rsp+1D0h] [rbp+D0h]
  __int64 v49; // [rsp+1D8h] [rbp+D8h]
  char *v50; // [rsp+1E0h] [rbp+E0h]
  __int64 v51; // [rsp+1E8h] [rbp+E8h]
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 *v53; // [rsp+200h] [rbp+100h]
  __int64 v54; // [rsp+208h] [rbp+108h]
  char *v55; // [rsp+210h] [rbp+110h]
  __int64 v56; // [rsp+218h] [rbp+118h]
  __int64 *v57; // [rsp+220h] [rbp+120h]
  __int64 v58; // [rsp+228h] [rbp+128h]
  char *v59; // [rsp+230h] [rbp+130h]
  __int64 v60; // [rsp+238h] [rbp+138h]
  char *v61; // [rsp+240h] [rbp+140h]
  __int64 v62; // [rsp+248h] [rbp+148h]
  char *v63; // [rsp+250h] [rbp+150h]
  __int64 v64; // [rsp+258h] [rbp+158h]
  char *v65; // [rsp+260h] [rbp+160h]
  __int64 v66; // [rsp+268h] [rbp+168h]
  char *v67; // [rsp+270h] [rbp+170h]
  __int64 v68; // [rsp+278h] [rbp+178h]
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v70; // [rsp+290h] [rbp+190h]
  __int64 v71; // [rsp+298h] [rbp+198h]
  char *v72; // [rsp+2A0h] [rbp+1A0h]
  __int64 v73; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v74; // [rsp+2B0h] [rbp+1B0h]
  __int64 v75; // [rsp+2B8h] [rbp+1B8h]
  char *v76; // [rsp+2C0h] [rbp+1C0h]
  __int64 v77; // [rsp+2C8h] [rbp+1C8h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+2D0h] [rbp+1D0h] BYREF
  __int128 *v79; // [rsp+2E0h] [rbp+1E0h]
  __int64 v80; // [rsp+2E8h] [rbp+1E8h]
  char *v81; // [rsp+2F0h] [rbp+1F0h]
  __int64 v82; // [rsp+2F8h] [rbp+1F8h]
  char *v83; // [rsp+300h] [rbp+200h]
  __int64 v84; // [rsp+308h] [rbp+208h]
  char *v85; // [rsp+310h] [rbp+210h]
  __int64 v86; // [rsp+318h] [rbp+218h]
  wil::details::in1diag3 *retaddr; // [rsp+348h] [rbp+248h]

  pwsz = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  AppLayoutOperationData = TabletModeTraceLogging::GetAppLayoutOperationData(
                             a2,
                             (struct TabletModeTraceLogging::AppLayoutOperationData *)v10);
  if ( AppLayoutOperationData >= 0 )
  {
    wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
    {
      Context = qword_1804387B0;
      wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
      qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
      qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v4);
      InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v35 = v10;
      v37 = &v11;
      v39 = &v12;
      v41 = &v13;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      TlgCreateWsz(&pDesc, pwsz);
      v46 = (char *)&v16 + 4;
      v44 = &v16;
      v48 = (char *)&v16 + 8;
      v45 = 4LL;
      v50 = (char *)&v16 + 12;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      TlgCreateWsz(&v52, v17[0]);
      v55 = (char *)&v19 + 4;
      v53 = &v19;
      v57 = &v20;
      v54 = 4LL;
      v59 = (char *)&v20 + 4;
      v61 = &v21;
      v63 = &v22;
      v65 = &v23;
      v67 = &v24;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      TlgCreateWsz(&v69, v25[0]);
      v72 = (char *)&v27 + 4;
      v70 = &v27;
      v74 = &v28;
      v71 = 4LL;
      v76 = (char *)&v28 + 4;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      TlgCreateWsz(&v78, v29);
      v80 = 4LL;
      v79 = &v31;
      v81 = (char *)&v31 + 4;
      v83 = (char *)&v31 + 8;
      v85 = (char *)&v31 + 12;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v6 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
      TlgWrite(v5, &unk_18039CD34, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), v6, 0x1Fu, &pData);
    }
    if ( !*((_DWORD *)this + 8) )
      wil::details::ThreadFailureCallbackHolder::StartWatching((TabletModeTraceLogging::ApplyLayoutOperationHelper *)((char *)this + 8));
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      198LL,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\Telemetry.h",
      (const char *)(unsigned int)AppLayoutOperationData);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v29);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v25);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v17);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&pwsz);
}
