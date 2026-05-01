/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveApp@@QEAAJPEBG0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@_K@Z @ 0x18004DCF0
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180041C70 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FD7C (-LockExclusive@-$ActivityBase@VCommonStartTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorT.c)
 *     ?ReportStopActivity@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1800100A4 (-ReportStopActivity@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsPro.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180010180 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ?SetAppRequestsSplashScreenSuppression@CFrameApplicationPresentation@@UEAAX_N@Z @ 0x180013680 (-SetAppRequestsSplashScreenSuppression@CFrameApplicationPresentation@@UEAAX_N@Z.c)
 *     ?SetDefaultMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180013C90 (-SetDefaultMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z @ 0x180013CA0 (-SetMinimumSize@CFrameApplicationPresentation@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180013CD0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 *     ?GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z @ 0x180013F50 (-GetFrame@CFrameApplicationPresentation@@UEAAJPEAPEAUIApplicationFrameProxy@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001CD10 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplication2@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002B860 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18002B860.c)
 *     ?PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18003BE40 (-PrivateQueryService@CApplicationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _TlgCreateWsz @ 0x180058BCC (_TlgCreateWsz.c)
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?wil_details_RecordUsageInPropertyCache@@YA?AUwil_details_RecordUsageResult@@PEATwil_details_FeaturePropertyCache@@W4wil_details_ServiceReportingKind@@II@Z @ 0x18005FC70 (-wil_details_RecordUsageInPropertyCache@@YA-AUwil_details_RecordUsageResult@@PEATwil_details_Fea.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x18005FDD0 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ??1?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180072F34 (--1-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$A_ea_180072F34.c)
 *     ?GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180083A80 (-GetManifestedOrientationPreference@CallerIdentity@@YAJPEBGPEAW4ORIENTATION_PREFERENCE@@@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x180085EE0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18008DE98 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param_ea_18008DE98.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18010730C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppressi.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___ @ 0x18012C724 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall CImmersiveApp::RuntimeClassInitialize(
        CImmersiveApp *this,
        const unsigned __int16 *a2,
        char *a3,
        int a4,
        struct IImmersiveMonitor *a5,
        struct PER_APPLICATION_DATA *a6,
        struct IIAMServiceProvider *a7,
        unsigned __int64 a8)
{
  CImmersiveApp *v11; // rsi
  int *v12; // rbx
  __int64 v13; // rbx
  const GUID *v14; // rax
  __int64 v15; // rsi
  DWORD v16; // ebx
  signed __int64 *v17; // rsi
  signed __int64 v18; // rcx
  LPCWSTR *v19; // r12
  HRESULT v20; // eax
  struct IImmersiveMonitor *v21; // rcx
  __int64 v22; // rax
  struct wil_details_RecordUsageResult *v23; // r9
  PCWSTR StringRawBuffer; // rax
  PCWSTR v25; // rbx
  char **v26; // r14
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  char *v29; // rcx
  signed __int64 v30; // rbx
  __int16 v31; // ax
  CApplicationManager *v32; // r14
  enum ORIENTATION_PREFERENCE *v33; // r8
  int v34; // r15d
  struct tagSIZE *v35; // rcx
  __int64 (__fastcall *v36)(struct tagSIZE *, const struct tagSIZE *); // rax
  __int64 (__fastcall *v37)(CApplicationManager *, struct _GUID *, struct _GUID *, void **); // rax
  int v38; // eax
  struct tagSIZE *v39; // rcx
  __int64 (__fastcall *v40)(struct tagSIZE *, const struct tagSIZE *); // rax
  __int64 (__fastcall *v41)(__int64, GUID *, struct IImmersiveApplication **); // rax
  int v42; // eax
  CFrameApplicationPresentation *v43; // rcx
  __int64 (__fastcall *v44)(CFrameApplicationPresentation *, struct IImmersiveApplication *); // rax
  struct IImmersiveApplication *v45; // rcx
  CFrameApplicationPresentation *v46; // rbx
  __int64 (__fastcall *v47)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **); // rax
  int Frame; // eax
  CFrameApplicationPresentation *v49; // rcx
  __int64 v50; // rdx
  void (__fastcall *v51)(CFrameApplicationPresentation *, char); // rax
  struct IApplicationFrameProxy *v52; // rcx
  void *v53; // rcx
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rdx
  char *v56; // rax
  char *v57; // rdi
  __int16 v58; // cx
  HANDLE ProcessHeap; // rax
  _DWORD *v61; // rax
  signed __int64 v62; // rax
  LONG cx; // eax
  void **CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda; // rax
  volatile int *v65; // rdx
  void *v66; // rbx
  char *v67; // rcx
  char v68; // bl
  int v69; // eax
  __int64 v70; // rdx
  void *v71; // rbx
  HANDLE v72; // rax
  HANDLE v73; // rax
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  struct tagSIZE v75; // [rsp+50h] [rbp-B0h] BYREF
  struct IImmersiveApplication *v76; // [rsp+58h] [rbp-A8h] BYREF
  struct IApplicationFrameProxy *v77; // [rsp+60h] [rbp-A0h] BYREF
  void *v78; // [rsp+68h] [rbp-98h] BYREF
  int v79; // [rsp+70h] [rbp-90h]
  __int16 v80; // [rsp+74h] [rbp-8Ch]
  CImmersiveApp *v81; // [rsp+78h] [rbp-88h]
  WINBOOL fPending; // [rsp+80h] [rbp-80h] BYREF
  WINBOOL v83; // [rsp+84h] [rbp-7Ch] BYREF
  DWORD CurrentThreadId; // [rsp+88h] [rbp-78h] BYREF
  int v85; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v86; // [rsp+98h] [rbp-68h] BYREF
  WINBOOL v87; // [rsp+A0h] [rbp-60h] BYREF
  int v88; // [rsp+A4h] [rbp-5Ch] BYREF
  __int16 v89; // [rsp+A8h] [rbp-58h]
  LPVOID Context; // [rsp+B0h] [rbp-50h] BYREF
  LPVOID v91; // [rsp+B8h] [rbp-48h] BYREF
  struct IApplicationFrameProxy *v92; // [rsp+C0h] [rbp-40h] BYREF
  LPVOID v93; // [rsp+C8h] [rbp-38h] BYREF
  LONG v94; // [rsp+D0h] [rbp-30h] BYREF
  LONG v95; // [rsp+D4h] [rbp-2Ch]
  void *v96; // [rsp+D8h] [rbp-28h] BYREF
  char v97[8]; // [rsp+E0h] [rbp-20h] BYREF
  CApplicationManager *v98; // [rsp+E8h] [rbp-18h]
  void *v99; // [rsp+F0h] [rbp-10h] BYREF
  PSRWLOCK SRWLock; // [rsp+F8h] [rbp-8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int16 *v102[4]; // [rsp+110h] [rbp+10h] BYREF
  char v103[24]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v104[2]; // [rsp+148h] [rbp+48h] BYREF
  int v105; // [rsp+158h] [rbp+58h]
  int v106; // [rsp+15Ch] [rbp+5Ch]
  __int128 v107; // [rsp+160h] [rbp+60h] BYREF
  __int64 v108; // [rsp+170h] [rbp+70h]
  void **v109; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v110[2]; // [rsp+188h] [rbp+88h] BYREF
  __int64 v111; // [rsp+198h] [rbp+98h]
  DWORD v112; // [rsp+1A0h] [rbp+A0h]
  int *v113; // [rsp+1A8h] [rbp+A8h]
  int *v114; // [rsp+1B0h] [rbp+B0h]
  int v115; // [rsp+1B8h] [rbp+B8h] BYREF
  char v116; // [rsp+1BCh] [rbp+BCh]
  char v117[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  int v118; // [rsp+1E0h] [rbp+E0h] BYREF
  const char *v119; // [rsp+1E8h] [rbp+E8h]
  LPVOID v120; // [rsp+1F0h] [rbp+F0h]
  char v121; // [rsp+1F8h] [rbp+F8h]
  __int64 v122; // [rsp+200h] [rbp+100h]
  char v123[144]; // [rsp+208h] [rbp+108h] BYREF
  LPVOID lpMem; // [rsp+298h] [rbp+198h]
  __int64 v125; // [rsp+2A0h] [rbp+1A0h]
  __int64 v126; // [rsp+2A8h] [rbp+1A8h]
  void *v127; // [rsp+2B0h] [rbp+1B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+2C0h] [rbp+1C0h] BYREF
  void *v129; // [rsp+2D0h] [rbp+1D0h]
  int v130; // [rsp+2D8h] [rbp+1D8h]
  int v131; // [rsp+2DCh] [rbp+1DCh]
  DWORD *p_CurrentThreadId; // [rsp+2E0h] [rbp+1E0h]
  __int64 v133; // [rsp+2E8h] [rbp+1E8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2F0h] [rbp+1F0h] BYREF

  v102[3] = (unsigned __int16 *)-2LL;
  v11 = this;
  v81 = this;
  v98 = a7;
  v109 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v110[0] = 0LL;
  v110[1] = &v109;
  v111 = 0LL;
  v112 = 0;
  v113 = &v118;
  v114 = &v115;
  v115 = 0;
  v116 = 0;
  v121 = 0;
  v118 = 0;
  v119 = "Initialization";
  v120 = 0LL;
  v122 = 1LL;
  lpMem = 0LL;
  memset_0(v123, 0, sizeof(v123));
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v109 = &CImmersiveAppTelemetry::Initialization::`vftable';
  v12 = v114;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v12 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v12 + 2));
  *v12 = 1;
  v91 = 0LL;
  if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v83, &v91) && v83 )
  {
    v91 = qword_180438670;
    qword_180438670[0] = &LockScreenServiceLogging::`vftable';
    qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
  }
  v13 = *((_QWORD *)v91 + 1);
  if ( *(_DWORD *)v13 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v133 = 4LL;
    TlgCreateWsz(&pDesc, a2);
    v14 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v109);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180388C1F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v13 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v129 = &unk_180388C2A;
    v130 = 49;
    v131 = 1;
    EventWriteTransfer(*(_QWORD *)(v13 + 32), &EventDescriptor, (LPCGUID)(v114 + 2), v14, 4u, &UserData);
  }
  if ( !v112 )
  {
    v15 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_112;
    v16 = GetCurrentThreadId();
    v17 = (signed __int64 *)(v15 + 8 * (v16 % 0xAuLL));
    v18 = *v17;
    if ( *v17 )
    {
      while ( *(_DWORD *)(v18 + 8) != v16 )
      {
        v18 = *(_QWORD *)(v18 + 16);
        if ( !v18 )
          goto LABEL_108;
      }
      goto LABEL_17;
    }
LABEL_108:
    ProcessHeap = GetProcessHeap();
    v61 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v18 = (signed __int64)v61;
    if ( v61 )
    {
      *(_QWORD *)v61 = 0LL;
      v61[2] = v16;
      *((_QWORD *)v61 + 2) = 0LL;
      _m_prefetchw(v17);
      do
      {
        v62 = *v17;
        *(_QWORD *)(v18 + 16) = *v17;
      }
      while ( v62 != _InterlockedCompareExchange64(v17, v18, v62) );
    }
    else
    {
LABEL_112:
      v18 = 0LL;
    }
LABEL_17:
    v110[0] = v18;
    if ( v18 )
    {
      v111 = *(_QWORD *)v18;
      *(_QWORD *)v18 = v110;
      v112 = GetCurrentThreadId();
    }
    v11 = v81;
  }
  v19 = (LPCWSTR *)((char *)v11 + 544);
  v20 = SHStrDupW(a2, (LPWSTR *)v11 + 68);
  if ( v20 < 0 )
  {
    v34 = v20;
    goto LABEL_97;
  }
  *((_DWORD *)v11 + 138) = a4;
  v21 = (struct IImmersiveMonitor *)*((_QWORD *)v11 + 91);
  if ( v21 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a5 + 8LL))(a5);
      v21 = (struct IImmersiveMonitor *)*((_QWORD *)v11 + 91);
    }
    *((_QWORD *)v11 + 91) = a5;
    if ( v21 )
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  *((_BYTE *)v11 + 708) = *((_BYTE *)a6 + 28);
  *((_BYTE *)v11 + 709) = *((_BYTE *)a6 + 29);
  *((_BYTE *)v11 + 710) = *((_BYTE *)a6 + 30);
  *((_BYTE *)v11 + 711) = *((_BYTE *)a6 + 31);
  *((_BYTE *)v11 + 712) = *((_BYTE *)a6 + 32);
  *((_BYTE *)v11 + 713) = *((_BYTE *)a6 + 33);
  *((_BYTE *)v11 + 714) = *((_BYTE *)a6 + 34);
  *((_BYTE *)v11 + 715) = *((_BYTE *)a6 + 35);
  *((_BYTE *)v11 + 716) = *((_BYTE *)a6 + 36);
  *((_BYTE *)v11 + 717) = *((_BYTE *)a6 + 37);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetCachedFeatureEnabledState();
  v79 = 0;
  LOBYTE(v80) = 3;
  v88 = 0;
  v89 = v80;
  v85 = 3;
  UserDataCount[0] = 1;
  v22 = wil_details_RecordUsageInPropertyCache(
          v103,
          &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
          2LL);
  v107 = *(_OWORD *)v22;
  v108 = *(_QWORD *)(v22 + 16);
  if ( g_wil_details_recordFeatureUsage )
  {
    if ( (char *)g_wil_details_recordFeatureUsage == (char *)wil::details::RecordFeatureUsageCallback )
      wil::details::RecordFeatureUsageCallback(
        (wil::details *)0xBF61B,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        (union wil_details_FeaturePropertyCache *)&v107,
        v23);
    else
      g_wil_details_recordFeatureUsage(
        0xBF61Bu,
        (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data,
        (struct wil_details_RecordUsageResult *)&v107);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0x20 )
    {
      v104[0] = 0LL;
      v105 = 0;
      v104[1] = 2LL;
      v106 = (`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetFeaturePropertyCache'::`2'::data >> 2) & 1;
      ((void (__fastcall *)(__int64, _QWORD, _QWORD *))g_wil_details_recordFeatureUsage)(783899LL, 0LL, v104);
    }
  }
  if ( !(_DWORD)v108 && g_wil_details_pfnFeatureLoggingHook )
    g_wil_details_pfnFeatureLoggingHook(
      0xBF61Bu,
      (const struct FEATURE_LOGGED_TRAITS *)&v88,
      0LL,
      1,
      (const enum wil_ReportingKind *)&v85,
      0LL,
      0,
      1uLL);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a6, 0LL);
  v25 = StringRawBuffer;
  v26 = (char **)((char *)v11 + 560);
  if ( !StringRawBuffer )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v11 + 560);
    goto LABEL_48;
  }
  v27 = -1LL;
  do
    ++v27;
  while ( StringRawBuffer[v27] );
  if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (__int64)v26,
              v27) >= 0 )
  {
    v28 = v27 + 1;
    v29 = *v26;
    if ( v27 > 0x7FFFFFFE )
    {
      if ( v27 == -1LL )
        goto LABEL_46;
    }
    else
    {
      v30 = (char *)v25 - v29;
      while ( v28 != 1 )
      {
        v31 = *(_WORD *)&v29[v30];
        if ( !v31 )
          break;
        *(_WORD *)v29 = v31;
        v29 += 2;
        if ( !--v28 )
          goto LABEL_116;
      }
      if ( v28 )
        goto LABEL_45;
LABEL_116:
      v29 -= 2;
    }
LABEL_45:
    *(_WORD *)v29 = 0;
LABEL_46:
    v26[1] = (char *)v27;
  }
  v11 = v81;
LABEL_48:
  v32 = v98;
  v34 = CImmersiveApp::CImmersiveWindowCollection::Initialize((CImmersiveApp *)((char *)v11 + 264), v98);
  if ( v34 >= 0 )
  {
    v75.cx = 500;
    v75.cy = 768;
    if ( (int)CallerIdentity::GetManifestedOrientationPreference(*v19, (const unsigned __int16 *)v11 + 360, v33) < 0 )
      *((_DWORD *)v11 + 180) = 0;
    if ( *((_BYTE *)v11 + 708) )
    {
      v75.cx = 320;
    }
    else if ( *((_BYTE *)v11 + 714) )
    {
      memset(v102, 0, 24);
      if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                  v102,
                  L"%s\\%s",
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\ApplicationView",
                  *v19,
                  *(_QWORD *)UserDataCount) >= 0
        && (int)SHRegGetDWORD(HKEY_CURRENT_USER, v102[0], L"MinWidth", &v86) >= 0 )
      {
        cx = v75.cx;
        if ( v86 == 1 )
          cx = 320;
        v75.cx = cx;
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v102);
    }
    else
    {
      v75.cx = 500;
      v75.cy = 320;
    }
    if ( *((_BYTE *)v11 + 710) )
    {
      v75.cx = 192;
      v75.cy = 48;
    }
    v35 = (struct tagSIZE *)*((_QWORD *)v11 + 50);
    v36 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v35 + 176LL);
    if ( v36 == CFrameApplicationPresentation::SetDefaultMinimumSize )
      CFrameApplicationPresentation::SetDefaultMinimumSize(v35, &v75);
    else
      v36(v35, &v75);
    v78 = 0LL;
    v37 = *(__int64 (__fastcall **)(CApplicationManager *, struct _GUID *, struct _GUID *, void **))(*(_QWORD *)v32 + 24LL);
    if ( v37 == CApplicationManager::PrivateQueryService )
      v38 = CApplicationManager::PrivateQueryService(
              v32,
              &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
              &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
              &v78);
    else
      v38 = v37(v32, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c, &v78);
    if ( v38 >= 0 && (*(int (__fastcall **)(void *, LPCWSTR, LONG *))(*(_QWORD *)v78 + 56LL))(v78, *v19, &v94) >= 0 )
    {
      if ( v94 >= 500 )
        v75.cx = 500;
      else
        v75.cx = v94;
      if ( v95 >= 320 )
        v75.cy = 320;
      else
        v75.cy = v95;
    }
    v39 = (struct tagSIZE *)*((_QWORD *)v11 + 50);
    v40 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v39 + 168LL);
    if ( v40 == CFrameApplicationPresentation::SetMinimumSize )
      CFrameApplicationPresentation::SetMinimumSize(v39, &v75);
    else
      v40(v39, &v75);
    v76 = 0LL;
    v41 = **(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v11;
    if ( (char *)v41 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface )
      v42 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IImmersiveApplication,IImmersiveApplication2,IImmersiveApplicationHolographic,IImmersiveApplicationInternal,Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow,Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility,Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>,IServiceProvider>::QueryInterface(
              (__int64)v11,
              &GUID_8b14e88b_5663_4caf_b196_c31479262831,
              &v76);
    else
      v42 = v41((__int64)v11, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v76);
    if ( v42 >= 0 )
    {
      v43 = (CFrameApplicationPresentation *)*((_QWORD *)v11 + 50);
      v44 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IImmersiveApplication *))(*(_QWORD *)v43 + 152LL);
      if ( v44 == CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons )
        CFrameApplicationPresentation::SynchronizeWindowTitleAndButtons(v43, v76);
      else
        v44(v43, v76);
    }
    v45 = v76;
    if ( v76 )
    {
      v76 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v77 = 0LL;
    v46 = (CFrameApplicationPresentation *)*((_QWORD *)v11 + 50);
    v47 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *, struct IApplicationFrameProxy **))(*(_QWORD *)v46 + 128LL);
    if ( v47 == CFrameApplicationPresentation::GetFrame )
      Frame = CFrameApplicationPresentation::GetFrame(v46, &v77);
    else
      Frame = v47(v46, &v77);
    if ( Frame >= 0 && *((_BYTE *)v11 + 711) )
    {
      v92 = v77;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v92);
      CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = (void **)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda___(&v96, &v92);
      v66 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      v99 = *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda;
      *CAsyncCallbackWithLambda__lambda_ac3f0695b3e319a649b082bba763ceda_____lambda_ac3f0695b3e319a649b082bba763ceda = 0LL;
      v67 = (char *)v96;
      if ( v96 )
      {
        v96 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
          v67,
          v65);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v92);
      if ( v66 )
        (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)v11 + 50) + 200LL))(*((_QWORD *)v11 + 50), v66);
      Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease(&v99);
    }
    v49 = (CFrameApplicationPresentation *)*((_QWORD *)v11 + 50);
    v50 = *((unsigned __int8 *)a6 + 26);
    v51 = *(void (__fastcall **)(CFrameApplicationPresentation *, char))(*(_QWORD *)v49 + 296LL);
    if ( v51 == CFrameApplicationPresentation::SetAppRequestsSplashScreenSuppression )
      CFrameApplicationPresentation::SetAppRequestsSplashScreenSuppression(v49, v50);
    else
      v51(v49, v50);
    v52 = v77;
    if ( v77 )
    {
      v77 = 0LL;
      (*(void (__fastcall **)(struct IApplicationFrameProxy *))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    v54 = -1LL;
    if ( a3 )
    {
      do
        ++v54;
      while ( *(_WORD *)&a3[2 * v54] );
      v34 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
              (__int64)v11 + 600,
              v54);
      if ( v34 >= 0 )
      {
        v55 = v54 + 1;
        v56 = (char *)*((_QWORD *)v11 + 75);
        if ( v54 > 0x7FFFFFFE )
        {
          if ( v54 == -1LL )
            goto LABEL_96;
        }
        else
        {
          v57 = (char *)(a3 - v56);
          while ( v55 != 1 )
          {
            v58 = *(_WORD *)&v57[(_QWORD)v56];
            if ( !v58 )
              break;
            *(_WORD *)v56 = v58;
            v56 += 2;
            if ( !--v55 )
              goto LABEL_141;
          }
          if ( v55 )
            goto LABEL_95;
LABEL_141:
          v56 -= 2;
        }
LABEL_95:
        *(_WORD *)v56 = 0;
LABEL_96:
        *((_QWORD *)v11 + 76) = v54;
      }
    }
  }
LABEL_97:
  *((_QWORD *)v11 + 105) = a8;
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)&v109, v34);
  v109 = &CImmersiveAppTelemetry::Initialization::`vftable';
  if ( !v127 )
    goto LABEL_98;
  wil::ActivityBase<CommonStartTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v109,
    &SRWLock);
  if ( v127 && *(_DWORD *)v127 == 1 )
  {
    v68 = 1;
  }
  else
  {
    v68 = 0;
    wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v127);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v68 )
  {
LABEL_98:
    if ( *v114 == 1 )
    {
      v69 = v114[21];
      v70 = 2147942974LL;
      if ( v69 < 0 )
        v70 = (unsigned int)v69;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v114,
        v70,
        v97);
      wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity((IamTraceLogging::OnShellHookMessage *)&v109);
    }
  }
  if ( v127 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v127, 0xFFFFFFFF) == 1 )
    {
      v71 = v127;
      if ( v127 )
      {
        wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v127 + 8);
        operator delete(v71, (const struct std::nothrow_t *)0x100);
      }
    }
    v127 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v72 = GetProcessHeap();
      HeapFree(v72, 0, lpMem);
    }
    lpMem = 0LL;
    v125 = 0LL;
  }
  if ( v121 )
  {
    v73 = GetProcessHeap();
    HeapFree(v73, 0, v120);
    v121 = 0;
  }
  v120 = 0LL;
  if ( v115 == 1 )
  {
    v115 = 2;
    v93 = 0LL;
    if ( InitOnceBeginInitialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &v87, &v93) && v87 )
    {
      v93 = qword_180438670;
      qword_180438670[0] = &LockScreenServiceLogging::`vftable';
      qword_180438688 = (struct _TlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438670, qword_180438688);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, qword_180438670);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v93 + 1), v117);
  }
  v115 = 3;
  if ( v112 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v110);
  return (unsigned int)v34;
}
