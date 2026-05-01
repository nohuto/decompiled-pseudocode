/*
 * XREFs of ?RaiseViewPropertyChanged@ViewManagerBridge@@AEAAJPEAUIMessageMap@@PEAUMsgString@@@Z @ 0x180054F60
 * Callers:
 *     ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x180057270 (-OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z @ 0x1801DD9C0 (-OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@@Z.c)
 *     ?OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z @ 0x1801DDA00 (-OnReplaced@ViewManagerBridge@@UEAAJPEAUIMessageMap@@PEAUMsgString@@PEAUIUnknown@@2@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z @ 0x180035190 (-ViewPropertyChanged@ViewEventDispatcher@@QEAAXIPEBG@Z.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewManagerBridge::RaiseViewPropertyChanged(
        ViewManagerBridge *this,
        struct IMessageMap *a2,
        struct MsgString *a3)
{
  int *v6; // rbx
  __int64 v7; // rbx
  const GUID *v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  signed __int64 *v11; // rdi
  signed __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // eax
  unsigned int v30; // eax
  const WCHAR *v31; // rbx
  __int64 v32; // r10
  const WCHAR *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // eax
  const unsigned __int16 *v36; // r8
  __int64 v37; // rcx
  __int64 v38; // rcx
  volatile signed __int32 *v39; // rdx
  int *v40; // r8
  HANDLE ProcessHeap; // rax
  _DWORD *v43; // rax
  signed __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // rdx
  bool v48; // di
  int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  void *v52; // rdi
  HANDLE v53; // rax
  HANDLE v54; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  __int64 v56; // [rsp+30h] [rbp-D0h] BYREF
  char v57; // [rsp+38h] [rbp-C8h]
  char v58; // [rsp+39h] [rbp-C7h]
  char v59; // [rsp+3Ah] [rbp-C6h]
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v61)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B0h] BYREF
  int v63; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v64; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v65; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  WINBOOL v67; // [rsp+6Ch] [rbp-94h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp-90h] BYREF
  WINBOOL v69; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v70; // [rsp+78h] [rbp-88h] BYREF
  WINBOOL v71; // [rsp+7Ch] [rbp-84h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v73; // [rsp+88h] [rbp-78h] BYREF
  LPVOID v74; // [rsp+90h] [rbp-70h] BYREF
  LPVOID v75; // [rsp+98h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  int v77; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  int v79; // [rsp+B8h] [rbp-48h]
  PSRWLOCK SRWLock; // [rsp+C0h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v82; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-18h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  void **v85; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v86[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v87; // [rsp+118h] [rbp+18h]
  DWORD v88; // [rsp+120h] [rbp+20h]
  int *v89; // [rsp+128h] [rbp+28h]
  int *v90; // [rsp+130h] [rbp+30h]
  int v91; // [rsp+138h] [rbp+38h] BYREF
  char v92; // [rsp+13Ch] [rbp+3Ch]
  _BYTE v93[32]; // [rsp+140h] [rbp+40h] BYREF
  int v94; // [rsp+160h] [rbp+60h] BYREF
  const char *v95; // [rsp+168h] [rbp+68h]
  LPVOID v96; // [rsp+170h] [rbp+70h]
  char v97; // [rsp+178h] [rbp+78h]
  __int64 v98; // [rsp+180h] [rbp+80h]
  _BYTE v99[144]; // [rsp+188h] [rbp+88h] BYREF
  LPVOID lpMem; // [rsp+218h] [rbp+118h]
  __int64 v101; // [rsp+220h] [rbp+120h]
  __int64 v102; // [rsp+228h] [rbp+128h]
  void *v103; // [rsp+230h] [rbp+130h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+240h] [rbp+140h] BYREF
  void *v105; // [rsp+250h] [rbp+150h]
  int v106; // [rsp+258h] [rbp+158h]
  int v107; // [rsp+25Ch] [rbp+15Ch]
  DWORD *p_CurrentThreadId; // [rsp+260h] [rbp+160h]
  __int64 v109; // [rsp+268h] [rbp+168h]
  struct _EVENT_DATA_DESCRIPTOR v110; // [rsp+270h] [rbp+170h] BYREF
  void *v111; // [rsp+280h] [rbp+180h]
  int v112; // [rsp+288h] [rbp+188h]
  int v113; // [rsp+28Ch] [rbp+18Ch]
  unsigned int *v114; // [rsp+290h] [rbp+190h]
  __int64 v115; // [rsp+298h] [rbp+198h]
  const WCHAR *v116; // [rsp+2A0h] [rbp+1A0h]
  int v117; // [rsp+2A8h] [rbp+1A8h]
  int v118; // [rsp+2ACh] [rbp+1ACh]
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v83 = -2LL;
  v86[0] = 0LL;
  v86[1] = &v85;
  v87 = 0LL;
  v88 = 0;
  v89 = &v94;
  v90 = &v91;
  v91 = 0;
  v92 = 0;
  v97 = 0;
  v94 = 0;
  v95 = "RaiseViewPropertyChanged";
  v96 = 0LL;
  v98 = 1LL;
  lpMem = 0LL;
  memset_0(v99, 0, sizeof(v99));
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v85 = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  v84 = 0LL;
  v6 = v90;
  v57 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  if ( **((_DWORD **)Context + 1) <= 5u )
    *((_QWORD *)v6 + 1) = 0LL;
  else
    EventActivityIdControl(3u, (LPGUID)(v6 + 2));
  *v6 = 1;
  v58 = 0;
  v73 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v67, &v73) && v67 )
  {
    v73 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v7 = *((_QWORD *)v73 + 1);
  if ( *(_DWORD *)v7 > 5u )
  {
    CurrentThreadId = GetCurrentThreadId();
    p_CurrentThreadId = &CurrentThreadId;
    v109 = 4LL;
    v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v85);
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180394B8A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&EventDescriptor.Level = 261;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = *(_QWORD *)(v7 + 8);
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    UserData.Reserved = 2;
    v105 = &unk_180394B95;
    v106 = 52;
    v107 = 1;
    EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v90 + 2), v8, 3u, &UserData);
  }
  if ( v88 )
    goto LABEL_19;
  v9 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_85;
  v10 = GetCurrentThreadId();
  v11 = (signed __int64 *)(v9 + 8 * (v10 % 0xA));
  v12 = *v11;
  if ( *v11 )
  {
    while ( *(_DWORD *)(v12 + 8) != (_DWORD)v10 )
    {
      v12 = *(_QWORD *)(v12 + 16);
      if ( !v12 )
        goto LABEL_81;
    }
    goto LABEL_17;
  }
LABEL_81:
  ProcessHeap = GetProcessHeap();
  v43 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v12 = (signed __int64)v43;
  if ( v43 )
  {
    *(_QWORD *)v43 = 0LL;
    v43[2] = v10;
    *((_QWORD *)v43 + 2) = 0LL;
    _m_prefetchw(v11);
    do
    {
      v44 = *v11;
      *(_QWORD *)(v12 + 16) = *v11;
    }
    while ( v44 != _InterlockedCompareExchange64(v11, v12, v44) );
  }
  else
  {
LABEL_85:
    v12 = 0LL;
  }
LABEL_17:
  v86[0] = v12;
  if ( v12 )
  {
    v87 = *(_QWORD *)v12;
    *(_QWORD *)v12 = v86;
    v88 = GetCurrentThreadId();
  }
LABEL_19:
  v76 = 0LL;
  v77 = 0;
  v13 = (*(__int64 (__fastcall **)(struct IMessageMap *, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, &v76);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x606,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v13,
      UserDataCount);
    goto LABEL_68;
  }
  v65 = 0LL;
  v15 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 15))(
          *((_QWORD *)this + 15),
          &GUID_17d276d3_f5ad_4668_9d53_1ef0996b8363,
          &v65);
  v14 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x609,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v15,
      UserDataCount);
    goto LABEL_66;
  }
  v62 = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v65 + 48LL))(v65, &v63);
  v14 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x60F,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v16,
      UserDataCount);
    goto LABEL_64;
  }
  v17 = 0;
  if ( v63 <= 0 )
    goto LABEL_47;
  while ( 1 )
  {
    v61 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v65 + 80LL))(v65, v17, &v61);
    v14 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x613,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v18,
        UserDataCount);
      goto LABEL_96;
    }
    v56 = 0LL;
    v19 = (**v61)(v61, &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e, &v56);
    v14 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x616,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v19,
        UserDataCount);
      goto LABEL_94;
    }
    v60 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 104LL))(v56, &v60);
    v14 = v20;
    if ( v20 < 0 )
    {
      v45 = 1561LL;
      goto LABEL_92;
    }
    v78 = 0LL;
    v79 = 0;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v60 + 24LL))(v60, &v78);
    v14 = v20;
    if ( v20 < 0 )
    {
      v45 = 1564LL;
      goto LABEL_92;
    }
    if ( v78 == v76 && v79 == v77 )
      break;
    v22 = v60;
    if ( v60 )
    {
      v60 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v23 = v56;
    if ( v56 )
    {
      v56 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = (__int64)v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    if ( (int)++v17 >= v63 )
      goto LABEL_47;
  }
  v25 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v20 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v56)(
          v56,
          &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
          &v62);
  v14 = v20;
  if ( v20 < 0 )
  {
    v45 = 1567LL;
LABEL_92:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v45,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v20,
      UserDataCount);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v60);
LABEL_94:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v56);
LABEL_96:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v61);
    goto LABEL_64;
  }
  v26 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v27 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = (__int64)v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
LABEL_47:
  if ( !v62 )
  {
    v14 = -2147023728;
    v46 = 2147943568LL;
    v47 = 1572LL;
LABEL_99:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v47,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)v46,
      UserDataCount);
    goto LABEL_64;
  }
  v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v62 + 152LL))(v62, &v64);
  v14 = v29;
  if ( v29 < 0 )
  {
    v46 = (unsigned int)v29;
    v47 = 1575LL;
    goto LABEL_99;
  }
  if ( a3 )
  {
    v30 = *(_DWORD *)a3 & 0xE0000000;
    if ( v30 == 0x80000000 )
    {
      v31 = (const WCHAR *)*((_QWORD *)a3 + 1);
    }
    else
    {
      if ( v30 != 0x40000000 )
        __debugbreak();
      v31 = (const WCHAR *)((char *)a3 + 8);
    }
  }
  else
  {
    v31 = 0LL;
  }
  v59 = 0;
  v74 = 0LL;
  if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v69, &v74) && v69 )
  {
    v74 = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
  }
  v32 = *((_QWORD *)v74 + 1);
  if ( *(_DWORD *)v32 > 5u )
  {
    v70 = v64;
    v114 = &v70;
    v115 = 4LL;
    v33 = &word_18035ABCC;
    LODWORD(v34) = 0;
    if ( v31 )
    {
      v33 = v31;
      v34 = -1LL;
      do
        ++v34;
      while ( v31[v34] );
    }
    v116 = v33;
    v117 = 2 * v34 + 2;
    v118 = 0;
    *(_DWORD *)&v82.Id = ((unsigned int)&unk_180394840 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    *(_DWORD *)&v82.Level = 5;
    v82.Keyword = 0LL;
    v110.Ptr = *(_QWORD *)(v32 + 8);
    v110.Size = *(unsigned __int16 *)v110.Ptr;
    v110.Reserved = 2;
    v111 = &unk_18039484B;
    v112 = 48;
    v113 = 1;
    EventWriteTransfer(*(_QWORD *)(v32 + 32), &v82, (LPCGUID)(v90 + 2), 0LL, 4u, &v110);
  }
  if ( a3 )
  {
    v35 = *(_DWORD *)a3 & 0xE0000000;
    if ( v35 == 0x80000000 )
    {
      v36 = (const unsigned __int16 *)*((_QWORD *)a3 + 1);
    }
    else
    {
      if ( v35 != 0x40000000 )
        __debugbreak();
      v36 = (const unsigned __int16 *)((char *)a3 + 8);
    }
  }
  else
  {
    v36 = 0LL;
  }
  ViewEventDispatcher::ViewPropertyChanged(*((RTL_SRWLOCK **)this + 10), v64, v36);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v85);
  v14 = 0;
LABEL_64:
  v37 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_66:
  v38 = v65;
  if ( v65 )
  {
    v65 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
LABEL_68:
  v85 = &ViewManagerInteropTraceLogging::RaiseViewPropertyChanged::`vftable';
  v39 = (volatile signed __int32 *)v103;
  if ( !v103 )
    goto LABEL_69;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)&v85,
    &SRWLock);
  v39 = (volatile signed __int32 *)v103;
  v48 = v103 && *(_DWORD *)v103 == 1;
  if ( !v48 )
  {
    wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v103);
    v39 = (volatile signed __int32 *)v103;
  }
  if ( SRWLock )
  {
    ReleaseSRWLockExclusive(SRWLock);
    v39 = (volatile signed __int32 *)v103;
  }
  if ( v48 )
  {
LABEL_69:
    v40 = v90;
    if ( *v90 == 1 )
    {
      v49 = v90[21];
      v50 = 2147942974LL;
      if ( v49 < 0 )
        v50 = (unsigned int)v49;
      v51 = v90[18];
      if ( v51 < 1 )
        __fastfail(7u);
      if ( v90[19] >= 0 )
        v90[19] = v50;
      v40[18] = v51 - 1;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        &v85,
        v50);
      v39 = (volatile signed __int32 *)v103;
    }
  }
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd(v39, 0xFFFFFFFF) == 1 )
    {
      v52 = v103;
      if ( v103 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v103 + 8);
        operator delete(v52, (const struct std::nothrow_t *)0x100);
      }
    }
    v103 = 0LL;
  }
  if ( lpMem )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
    {
      v53 = GetProcessHeap();
      HeapFree(v53, 0, lpMem);
    }
    lpMem = 0LL;
    v101 = 0LL;
  }
  if ( v97 )
  {
    v54 = GetProcessHeap();
    HeapFree(v54, 0, v96);
    v97 = 0;
  }
  v96 = 0LL;
  if ( v91 == 1 )
  {
    v91 = 2;
    v75 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v71, &v75) && v71 )
    {
      v75 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v75 + 1), v93);
  }
  v91 = 3;
  if ( v88 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v86);
  return v14;
}
