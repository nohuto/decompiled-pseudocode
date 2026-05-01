/*
 * XREFs of ?OnViewEventQueued@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180065100
 * Callers:
 *     ?OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewEventArg@3456@@Z @ 0x180065D90 (-OnViewEvent@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x180061DB4 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800648D4 (-OnWindowSizeChangeHandled@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x18006CDD0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180073FC8 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ @ 0x1800740C0 (-StopActivity@CortanaExperienceManager_OnEventQueued@CortanaProactiveTelemetry@@MEAAXXZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18007ABD0 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085550 (-OnAppTransitionCompleted@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x180085580 (-OnAppRequestedTransition@CortanaExperienceManagerNotification@@UEAAXXZ.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800F2CE0 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 *     ?SetStopResult@?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1800F7E4C (-SetStopResult@-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F9F70 (--1-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@_ea_1800F9F70.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCortanaProactiveLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18015F668 (-reset@-$shared_object@V-$ActivityData@VCortanaProactiveLogging@@U_TlgReflectorTag__ea_18015F668.c)
 *     ??$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAURect@63@@Z1@Z @ 0x1801847F0 (--$GetValue@URect@Foundation@Windows@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEA.c)
 *     ?ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Windows@@@Z @ 0x18018503C (-ApplyCortanaWindowRegionWithCustomRects@CortanaDesktopExperienceView@@AEAAJURect@Foundation@Win.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180185700 (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x1801859F0 (-FocusNavigate@CortanaDesktopExperienceView@@AEAAJW4FocusNavigateDirection@Experience@Shell@Inte.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CortanaDesktopExperienceView::OnViewEventQueued(
        CortanaExperienceManagerNotification **this,
        Microsoft::WRL::Wrappers::Details *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  PCWSTR StringRawBuffer; // rbx
  int *v7; // rdi
  __int64 v8; // rdi
  const WCHAR *v9; // rcx
  __int64 v10; // rax
  const GUID *v11; // rax
  __int64 v12; // rdi
  DWORD v13; // ebx
  signed __int64 *v14; // rdi
  signed __int64 v15; // rcx
  unsigned __int64 v16; // rax
  HRESULT v17; // eax
  HRESULT v18; // eax
  unsigned __int64 v19; // rax
  HRESULT v20; // eax
  HRESULT v21; // eax
  unsigned __int64 v22; // rax
  HRESULT v23; // eax
  HRESULT v24; // eax
  unsigned __int64 v25; // rax
  HRESULT v26; // eax
  HRESULT v27; // eax
  unsigned __int64 v28; // rax
  HRESULT v29; // eax
  HRESULT v30; // eax
  unsigned __int64 v31; // rax
  HRESULT v32; // eax
  HRESULT v33; // eax
  unsigned __int64 v34; // rax
  HRESULT v35; // eax
  HRESULT v36; // eax
  unsigned __int64 v37; // rax
  HRESULT v38; // eax
  HRESULT v39; // eax
  unsigned __int64 v40; // rax
  HRESULT v41; // eax
  HRESULT v42; // eax
  unsigned __int64 v43; // rax
  HRESULT v44; // eax
  HRESULT v45; // eax
  unsigned __int64 v46; // rax
  HRESULT v47; // eax
  HRESULT v48; // eax
  unsigned __int64 v49; // rax
  HRESULT v50; // eax
  HRESULT v51; // eax
  unsigned __int64 v52; // rax
  HRESULT v53; // eax
  HSTRING v54; // r8
  int v55; // ebx
  CortanaExperienceManagerNotification *v57; // rcx
  void (__fastcall *v58)(CortanaExperienceManagerNotification *__hidden); // rax
  CortanaExperienceManagerNotification *v59; // rcx
  int v60; // eax
  wil::details::in1diag3 *v61; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v63; // rax
  signed __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rbx
  char v70; // di
  int v71; // eax
  __int64 v72; // rdx
  void (__fastcall *v73)(CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *__hidden); // rax
  void *v74; // rdi
  HANDLE v75; // rax
  HANDLE v76; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v78[4]; // [rsp+30h] [rbp-D0h] BYREF
  INT32 result; // [rsp+34h] [rbp-CCh] BYREF
  INT32 v80; // [rsp+38h] [rbp-C8h] BYREF
  INT32 v81; // [rsp+3Ch] [rbp-C4h] BYREF
  INT32 v82; // [rsp+40h] [rbp-C0h] BYREF
  INT32 v83; // [rsp+44h] [rbp-BCh] BYREF
  INT32 v84; // [rsp+48h] [rbp-B8h] BYREF
  INT32 v85; // [rsp+4Ch] [rbp-B4h] BYREF
  INT32 v86; // [rsp+50h] [rbp-B0h] BYREF
  INT32 v87; // [rsp+54h] [rbp-ACh] BYREF
  INT32 v88; // [rsp+58h] [rbp-A8h] BYREF
  INT32 v89; // [rsp+5Ch] [rbp-A4h] BYREF
  INT32 v90; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v92; // [rsp+68h] [rbp-98h] BYREF
  DWORD CurrentThreadId; // [rsp+6Ch] [rbp-94h] BYREF
  WINBOOL v94; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v95; // [rsp+78h] [rbp-88h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v97; // [rsp+88h] [rbp-78h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v98; // [rsp+90h] [rbp-70h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v99; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v100[8]; // [rsp+A0h] [rbp-60h] BYREF
  PSRWLOCK SRWLock; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+C0h] [rbp-40h]
  __int128 v104; // [rsp+D0h] [rbp-30h] BYREF
  void **v105; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v106[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v107; // [rsp+F8h] [rbp-8h]
  DWORD v108; // [rsp+100h] [rbp+0h]
  int *v109; // [rsp+108h] [rbp+8h]
  int *v110; // [rsp+110h] [rbp+10h]
  int v111; // [rsp+118h] [rbp+18h] BYREF
  char v112; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v113[32]; // [rsp+120h] [rbp+20h] BYREF
  int v114; // [rsp+140h] [rbp+40h] BYREF
  const char *v115; // [rsp+148h] [rbp+48h]
  LPVOID v116; // [rsp+150h] [rbp+50h]
  char v117; // [rsp+158h] [rbp+58h]
  __int64 v118; // [rsp+160h] [rbp+60h]
  _BYTE v119[144]; // [rsp+168h] [rbp+68h] BYREF
  LPVOID lpMem; // [rsp+1F8h] [rbp+F8h]
  __int64 v121; // [rsp+200h] [rbp+100h]
  __int64 v122; // [rsp+208h] [rbp+108h]
  void *v123; // [rsp+210h] [rbp+110h] BYREF
  __int128 v124; // [rsp+220h] [rbp+120h]
  HSTRING_HEADER hstringHeader; // [rsp+230h] [rbp+130h] BYREF
  HSTRING string; // [rsp+248h] [rbp+148h] BYREF
  HSTRING_HEADER v127; // [rsp+250h] [rbp+150h] BYREF
  HSTRING string2; // [rsp+268h] [rbp+168h] BYREF
  HSTRING_HEADER v129; // [rsp+270h] [rbp+170h] BYREF
  HSTRING v130; // [rsp+288h] [rbp+188h] BYREF
  HSTRING_HEADER v131; // [rsp+290h] [rbp+190h] BYREF
  HSTRING v132; // [rsp+2A8h] [rbp+1A8h] BYREF
  HSTRING_HEADER v133; // [rsp+2B0h] [rbp+1B0h] BYREF
  HSTRING v134; // [rsp+2C8h] [rbp+1C8h] BYREF
  HSTRING_HEADER v135; // [rsp+2D0h] [rbp+1D0h] BYREF
  HSTRING v136; // [rsp+2E8h] [rbp+1E8h] BYREF
  HSTRING_HEADER v137; // [rsp+2F0h] [rbp+1F0h] BYREF
  HSTRING v138; // [rsp+308h] [rbp+208h] BYREF
  HSTRING_HEADER v139; // [rsp+310h] [rbp+210h] BYREF
  HSTRING v140; // [rsp+328h] [rbp+228h] BYREF
  HSTRING_HEADER v141; // [rsp+330h] [rbp+230h] BYREF
  HSTRING v142; // [rsp+348h] [rbp+248h] BYREF
  HSTRING_HEADER v143; // [rsp+350h] [rbp+250h] BYREF
  HSTRING v144; // [rsp+368h] [rbp+268h] BYREF
  HSTRING_HEADER v145; // [rsp+370h] [rbp+270h] BYREF
  HSTRING v146; // [rsp+388h] [rbp+288h] BYREF
  HSTRING_HEADER v147; // [rsp+390h] [rbp+290h] BYREF
  HSTRING v148; // [rsp+3A8h] [rbp+2A8h] BYREF
  HSTRING_HEADER v149; // [rsp+3B0h] [rbp+2B0h] BYREF
  HSTRING v150; // [rsp+3C8h] [rbp+2C8h] BYREF
  _BYTE v151[32]; // [rsp+3D0h] [rbp+2D0h] BYREF
  _BYTE v152[32]; // [rsp+3F0h] [rbp+2F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+410h] [rbp+310h] BYREF
  void *v154; // [rsp+420h] [rbp+320h]
  int v155; // [rsp+428h] [rbp+328h]
  int v156; // [rsp+42Ch] [rbp+32Ch]
  DWORD *p_CurrentThreadId; // [rsp+430h] [rbp+330h]
  __int64 v158; // [rsp+438h] [rbp+338h]
  const WCHAR *v159; // [rsp+440h] [rbp+340h]
  int v160; // [rsp+448h] [rbp+348h]
  int v161; // [rsp+44Ch] [rbp+34Ch]
  wil::details::in1diag3 *retaddr; // [rsp+498h] [rbp+398h]

  v103 = -2LL;
  StringRawBuffer = WindowsGetStringRawBuffer((HSTRING)a2, 0LL);
  v106[0] = 0LL;
  v106[1] = &v105;
  v107 = 0LL;
  v108 = 0;
  v109 = &v114;
  v110 = &v111;
  v111 = 0;
  v112 = 0;
  v117 = 0;
  v114 = 0;
  v115 = "CortanaExperienceManager_OnEventQueued";
  v116 = 0LL;
  v118 = 1LL;
  lpMem = 0LL;
  memset_0(v119, 0, sizeof(v119));
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v105 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  v7 = v110;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v7 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v7 + 2));
  *v7 = 1;
  v97 = 0LL;
  if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v92, &v97) && v92 )
  {
    v97 = &qword_180438828;
    qword_180438828 = &LockScreenServiceLogging::`vftable';
    qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
    InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
  }
  v8 = *((_QWORD *)v97 + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v158 = 4LL;
    v9 = &word_18035ABCC;
    LODWORD(v10) = 0;
    if ( StringRawBuffer )
    {
      v9 = StringRawBuffer;
      v10 = -1LL;
      do
        ++v10;
      while ( StringRawBuffer[v10] );
    }
    v159 = v9;
    v160 = 2 * v10 + 2;
    v161 = 0;
    v11 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v105);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18038C65B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v8 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v154 = &unk_18038C666;
    v155 = 77;
    v156 = 1;
    EventWriteTransfer(*(_QWORD *)(v8 + 32), &EventDescriptor, (LPCGUID)(v110 + 2), v11, 4u, &UserData);
  }
  if ( !v108 )
  {
    v12 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_136;
    v13 = GetCurrentThreadId();
    v14 = (signed __int64 *)(v12 + 8 * (v13 % 0xAuLL));
    v15 = *v14;
    if ( *v14 )
    {
      while ( *(_DWORD *)(v15 + 8) != v13 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        if ( !v15 )
          goto LABEL_132;
      }
      goto LABEL_20;
    }
LABEL_132:
    ProcessHeap = GetProcessHeap();
    v63 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v15 = (signed __int64)v63;
    if ( v63 )
    {
      *(_QWORD *)v63 = 0LL;
      v63[2] = v13;
      *((_QWORD *)v63 + 2) = 0LL;
      _m_prefetchw(v14);
      do
      {
        v64 = *v14;
        *(_QWORD *)(v15 + 16) = *v14;
      }
      while ( v64 != _InterlockedCompareExchange64(v14, v15, v64) );
    }
    else
    {
LABEL_136:
      v15 = 0LL;
    }
LABEL_20:
    v106[0] = v15;
    if ( v15 )
    {
      v107 = *(_QWORD *)v15;
      *(_QWORD *)v15 = v106;
      v108 = GetCurrentThreadId();
    }
  }
  string = 0LL;
  v16 = -1LL;
  do
    ++v16;
  while ( aFocusnavigateu[v16] );
  if ( v16 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D79E9LL);
  }
  if ( (int)v16 + 1 < (unsigned int)v16 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D81D7LL);
  }
  v17 = WindowsCreateStringReference(L"FocusNavigateUp", v16, &hstringHeader, &string);
  if ( v17 < 0 )
  {
    RaiseException(v17, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A04LL);
  }
  result = 0;
  v18 = WindowsCompareStringOrdinal((HSTRING)a2, string, &result);
  if ( v18 < 0 )
  {
    RaiseException(v18, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A17LL);
  }
  if ( !result )
  {
    CortanaDesktopExperienceView::FocusNavigate(this, 0LL);
    goto LABEL_112;
  }
  string2 = 0LL;
  v19 = -1LL;
  do
    ++v19;
  while ( aFocusnavigated[v19] );
  if ( v19 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A3DLL);
  }
  if ( (int)v19 + 1 < (unsigned int)v19 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D81C1LL);
  }
  v20 = WindowsCreateStringReference(L"FocusNavigateDown", v19, &v127, &string2);
  if ( v20 < 0 )
  {
    RaiseException(v20, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A58LL);
  }
  v80 = 0;
  v21 = WindowsCompareStringOrdinal((HSTRING)a2, string2, &v80);
  if ( v21 < 0 )
  {
    RaiseException(v21, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A6BLL);
  }
  if ( !v80 )
  {
    CortanaDesktopExperienceView::FocusNavigate(this, 1LL);
    goto LABEL_112;
  }
  v130 = 0LL;
  v22 = -1LL;
  do
    ++v22;
  while ( aFocusnavigaten[v22] );
  if ( v22 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7A94LL);
  }
  if ( (int)v22 + 1 < (unsigned int)v22 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D81ABLL);
  }
  v23 = WindowsCreateStringReference(L"FocusNavigateNext", v22, &v129, &v130);
  if ( v23 < 0 )
  {
    RaiseException(v23, 1u, 0, 0LL);
    JUMPOUT(0x1800D7AAFLL);
  }
  v81 = 0;
  v24 = WindowsCompareStringOrdinal((HSTRING)a2, v130, &v81);
  if ( v24 < 0 )
  {
    RaiseException(v24, 1u, 0, 0LL);
    JUMPOUT(0x1800D7AC2LL);
  }
  if ( !v81 )
  {
    CortanaDesktopExperienceView::FocusNavigate(this, 2LL);
    goto LABEL_112;
  }
  v132 = 0LL;
  v25 = -1LL;
  do
    ++v25;
  while ( aFocusnavigatep[v25] );
  if ( v25 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7AEBLL);
  }
  if ( (int)v25 + 1 < (unsigned int)v25 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D8195LL);
  }
  v26 = WindowsCreateStringReference(L"FocusNavigatePrev", v25, &v131, &v132);
  if ( v26 < 0 )
  {
    RaiseException(v26, 1u, 0, 0LL);
    JUMPOUT(0x1800D7B06LL);
  }
  v82 = 0;
  v27 = WindowsCompareStringOrdinal((HSTRING)a2, v132, &v82);
  if ( v27 < 0 )
  {
    RaiseException(v27, 1u, 0, 0LL);
    JUMPOUT(0x1800D7B19LL);
  }
  if ( !v82 )
  {
    CortanaDesktopExperienceView::FocusNavigate(this, 3LL);
    goto LABEL_112;
  }
  v134 = 0LL;
  v28 = -1LL;
  do
    ++v28;
  while ( aDismiss[v28] );
  if ( v28 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7B42LL);
  }
  if ( (int)v28 + 1 < (unsigned int)v28 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D817FLL);
  }
  v29 = WindowsCreateStringReference(L"Dismiss", v28, &v133, &v134);
  if ( v29 < 0 )
  {
    RaiseException(v29, 1u, 0, 0LL);
    JUMPOUT(0x1800D7B5DLL);
  }
  v83 = 0;
  v30 = WindowsCompareStringOrdinal((HSTRING)a2, v134, &v83);
  if ( v30 < 0 )
  {
    RaiseException(v30, 1u, 0, 0LL);
    JUMPOUT(0x1800D7B70LL);
  }
  if ( !v83 )
  {
    v65 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)this);
    v55 = v65;
    if ( v65 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x403,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v65,
        UserDataCount);
      goto LABEL_113;
    }
    goto LABEL_112;
  }
  v136 = 0LL;
  v31 = -1LL;
  do
    ++v31;
  while ( aDismissstartan[v31] );
  if ( v31 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7BB9LL);
  }
  if ( (int)v31 + 1 < (unsigned int)v31 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D8169LL);
  }
  v32 = WindowsCreateStringReference(L"DismissStartAndCortana", v31, &v135, &v136);
  if ( v32 < 0 )
  {
    RaiseException(v32, 1u, 0, 0LL);
    JUMPOUT(0x1800D7BD4LL);
  }
  v84 = 0;
  v33 = WindowsCompareStringOrdinal((HSTRING)a2, v136, &v84);
  if ( v33 < 0 )
  {
    RaiseException(v33, 1u, 0, 0LL);
    JUMPOUT(0x1800D7BE7LL);
  }
  if ( !v84 )
  {
    CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)this, 0);
    v58 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(*(_QWORD *)this[12] + 112LL);
    goto LABEL_130;
  }
  v146 = 0LL;
  v34 = -1LL;
  do
    ++v34;
  while ( aChangeexplicit[v34] );
  if ( v34 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7C17LL);
  }
  if ( (int)v34 + 1 < (unsigned int)v34 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D8153LL);
  }
  v35 = WindowsCreateStringReference(L"ChangeExplicitDismissMode", v34, &v145, &v146);
  if ( v35 < 0 )
  {
    RaiseException(v35, 1u, 0, 0LL);
    JUMPOUT(0x1800D7C32LL);
  }
  v85 = 0;
  v36 = WindowsCompareStringOrdinal((HSTRING)a2, v146, &v85);
  if ( v36 < 0 )
  {
    RaiseException(v36, 1u, 0, 0LL);
    JUMPOUT(0x1800D7C45LL);
  }
  if ( !v85 )
  {
    v66 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v151, (const WCHAR **)&off_18034C5B8);
    v98 = a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v98);
    v55 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
            &v98,
            *(_QWORD *)(v66 + 24),
            v67,
            v78);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v98);
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40E,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v55,
        UserDataCount);
      goto LABEL_113;
    }
    CortanaDesktopExperienceView::SetExplicitDimissEnabled((CortanaDesktopExperienceView *)this, v78[0]);
    goto LABEL_112;
  }
  v138 = 0LL;
  v37 = -1LL;
  do
    ++v37;
  while ( aRequestapptran[v37] );
  if ( v37 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7CD5LL);
  }
  if ( (int)v37 + 1 < (unsigned int)v37 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D813DLL);
  }
  v38 = WindowsCreateStringReference(L"RequestAppTransition", v37, &v137, &v138);
  if ( v38 < 0 )
  {
    RaiseException(v38, 1u, 0, 0LL);
    JUMPOUT(0x1800D7CF0LL);
  }
  v86 = 0;
  v39 = WindowsCompareStringOrdinal((HSTRING)a2, v138, &v86);
  if ( v39 < 0 )
  {
    RaiseException(v39, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D03LL);
  }
  if ( !v86 )
  {
    *((_BYTE *)this + 196) = 1;
    v57 = this[12];
    v58 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(*(_QWORD *)v57 + 40LL);
    if ( v58 == CortanaExperienceManagerNotification::OnAppRequestedTransition )
    {
      CortanaExperienceManagerNotification::OnAppRequestedTransition(v57);
      goto LABEL_112;
    }
LABEL_130:
    ((void (*)(void))v58)();
    goto LABEL_112;
  }
  v140 = 0LL;
  v40 = -1LL;
  do
    ++v40;
  while ( aApptransitionc[v40] );
  if ( v40 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D19LL);
  }
  if ( (int)v40 + 1 < (unsigned int)v40 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D8127LL);
  }
  v41 = WindowsCreateStringReference(L"AppTransitionCompleted", v40, &v139, &v140);
  if ( v41 < 0 )
  {
    RaiseException(v41, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D34LL);
  }
  v87 = 0;
  v42 = WindowsCompareStringOrdinal((HSTRING)a2, v140, &v87);
  if ( v42 < 0 )
  {
    RaiseException(v42, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D47LL);
  }
  if ( !v87 )
  {
    *((_BYTE *)this + 196) = 0;
    v59 = this[12];
    v58 = *(void (__fastcall **)(CortanaExperienceManagerNotification *__hidden))(*(_QWORD *)v59 + 48LL);
    if ( v58 == CortanaExperienceManagerNotification::OnAppTransitionCompleted )
    {
      CortanaExperienceManagerNotification::OnAppTransitionCompleted(v59);
      goto LABEL_112;
    }
    goto LABEL_130;
  }
  v142 = 0LL;
  v43 = -1LL;
  do
    ++v43;
  while ( aShowanimationc[v43] );
  if ( v43 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D5DLL);
  }
  if ( (int)v43 + 1 < (unsigned int)v43 )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x1800D8111LL);
  }
  v44 = WindowsCreateStringReference(L"ShowAnimationComplete", v43, &v141, &v142);
  if ( v44 < 0 )
  {
    RaiseException(v44, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D78LL);
  }
  v88 = 0;
  v45 = WindowsCompareStringOrdinal((HSTRING)a2, v142, &v88);
  if ( v45 < 0 )
  {
    RaiseException(v45, 1u, 0, 0LL);
    JUMPOUT(0x1800D7D8BLL);
  }
  if ( v88 )
  {
    v144 = 0LL;
    v46 = -1LL;
    do
      ++v46;
    while ( aQfwideanimatio[v46] );
    if ( v46 > 0xFFFFFFFF )
    {
      RaiseException(0x80070216, 1u, 0, 0LL);
      JUMPOUT(0x1800D7DA1LL);
    }
    if ( (int)v46 + 1 < (unsigned int)v46 )
    {
      RaiseException(0x80070216, 1u, 0, 0LL);
      JUMPOUT(0x1800D80FBLL);
    }
    v47 = WindowsCreateStringReference(L"QFWideAnimationCompleted", v46, &v143, &v144);
    if ( v47 < 0 )
    {
      RaiseException(v47, 1u, 0, 0LL);
      JUMPOUT(0x1800D7DBCLL);
    }
    v89 = 0;
    v48 = WindowsCompareStringOrdinal((HSTRING)a2, v144, &v89);
    if ( v48 < 0 )
    {
      RaiseException(v48, 1u, 0, 0LL);
      JUMPOUT(0x1800D7DCFLL);
    }
    if ( v89 )
    {
      v150 = 0LL;
      v49 = -1LL;
      do
        ++v49;
      while ( aWindowsizechan[v49] );
      if ( v49 > 0xFFFFFFFF )
      {
        RaiseException(0x80070216, 1u, 0, 0LL);
        JUMPOUT(0x1800D7DFDLL);
      }
      if ( (int)v49 + 1 < (unsigned int)v49 )
      {
        RaiseException(0x80070216, 1u, 0, 0LL);
        JUMPOUT(0x1800D80E5LL);
      }
      v50 = WindowsCreateStringReference(L"WindowSizeChangeHandled", v49, &v149, &v150);
      if ( v50 < 0 )
      {
        RaiseException(v50, 1u, 0, 0LL);
        JUMPOUT(0x1800D7E18LL);
      }
      v90 = 0;
      v51 = WindowsCompareStringOrdinal((HSTRING)a2, v150, &v90);
      if ( v51 < 0 )
      {
        RaiseException(v51, 1u, 0, 0LL);
        JUMPOUT(0x1800D7E2BLL);
      }
      if ( v90 )
      {
        v148 = 0LL;
        v52 = -1LL;
        do
          ++v52;
        while ( aRequestupdatew[v52] );
        if ( v52 > 0xFFFFFFFF )
        {
          RaiseException(0x80070216, 1u, 0, 0LL);
          JUMPOUT(0x1800D7E4BLL);
        }
        if ( (int)v52 + 1 < (unsigned int)v52 )
        {
          RaiseException(0x80070216, 1u, 0, 0LL);
          JUMPOUT(0x1800D80CFLL);
        }
        v53 = WindowsCreateStringReference(L"RequestUpdateWindowRegion", v52, &v147, &v148);
        if ( v53 < 0 )
        {
          RaiseException(v53, 1u, 0, 0LL);
          JUMPOUT(0x1800D7E66LL);
        }
        if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a2, v148, v54) )
          goto LABEL_112;
        v69 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                (__int64)v152,
                (const WCHAR **)&off_18034C5A0);
        v99 = a3;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v99);
        Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<Windows::Foundation::Rect>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v99,
          *(HSTRING *)(v69 + 24));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v99);
        v104 = v124;
        v60 = CortanaDesktopExperienceView::ApplyCortanaWindowRegionWithCustomRects(this, &v104);
        v61 = retaddr;
        if ( v60 >= 0 )
          goto LABEL_112;
        v68 = 1068LL;
        goto LABEL_188;
      }
      v60 = CortanaDesktopExperienceView::OnWindowSizeChangeHandled((CortanaDesktopExperienceView *)this);
      v61 = retaddr;
      if ( v60 < 0 )
      {
        v68 = 1062LL;
LABEL_188:
        wil::details::in1diag3::_Log_Hr(
          v61,
          (void *)v68,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v60,
          UserDataCount);
      }
    }
    else
    {
      *((_BYTE *)this + 209) = 0;
      CortanaDesktopExperienceView::ShowBorder((CortanaDesktopExperienceView *)this, 0LL);
    }
  }
  else
  {
    CortanaDesktopExperienceView::ShowBorder((CortanaDesktopExperienceView *)this, 0LL);
  }
LABEL_112:
  wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v105);
  v55 = 0;
LABEL_113:
  v105 = &CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::`vftable';
  if ( !v123 )
    goto LABEL_114;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v105,
    &SRWLock);
  if ( v123 && *(_DWORD *)v123 == 1 )
  {
    v70 = 1;
  }
  else
  {
    v70 = 0;
    wil::details::shared_object<wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v123);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v70 )
  {
LABEL_114:
    if ( *v110 == 1 )
    {
      v71 = v110[21];
      v72 = 2147942974LL;
      if ( v71 < 0 )
        v72 = (unsigned int)v71;
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<TrayNotificationAreaLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
        v110,
        v72,
        v100);
      v73 = (void (__fastcall *)(CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *__hidden))v105[1];
      if ( v73 == CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity )
        CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued::StopActivity((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v105);
      else
        v73((CortanaProactiveTelemetry::CortanaExperienceManager_OnEventQueued *)&v105);
    }
  }
  if ( v123 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v123, 0xFFFFFFFF) == 1 )
    {
      v74 = v123;
      if ( v123 )
      {
        wil::ActivityBase<CortanaProactiveLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<CortanaProactiveLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v123 + 8);
        operator delete(v74, (const struct std::nothrow_t *)0x100);
      }
    }
    v123 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v75 = GetProcessHeap();
      HeapFree(v75, 0, lpMem);
    }
    lpMem = 0LL;
    v121 = 0LL;
  }
  if ( v117 )
  {
    v76 = GetProcessHeap();
    HeapFree(v76, 0, v116);
    v117 = 0;
  }
  v116 = 0LL;
  if ( v111 == 1 )
  {
    v111 = 2;
    v95 = 0LL;
    if ( InitOnceBeginInitialize(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &v94, &v95) && v94 )
    {
      v95 = &qword_180438828;
      qword_180438828 = &LockScreenServiceLogging::`vftable';
      qword_180438840 = (struct _TlgProvider_t *)&`CortanaProactiveLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_0a4c5659e8368aeb314f53434332ab54_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_180438828, qword_180438840);
      InitOnceComplete(&`CortanaProactiveLogging::Instance'::`2'::wrapper, 0, &qword_180438828);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v95 + 1), v113);
  }
  v111 = 3;
  if ( v108 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v106);
  return (unsigned int)v55;
}
