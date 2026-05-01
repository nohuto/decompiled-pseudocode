/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x180057850
 * Callers:
 *     ?GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x180050930 (-GetPropertyAsUInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
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

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsUInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        unsigned int *a4)
{
  int v6; // eax
  int v7; // ebx
  PCWSTR StringRawBuffer; // rbx
  int *v9; // rdi
  __int64 v10; // rdi
  const WCHAR *v11; // rcx
  __int64 v12; // rax
  const GUID *v13; // rax
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  signed __int64 *v16; // rdi
  signed __int64 v17; // rcx
  HANDLE v18; // rax
  _DWORD *v19; // rax
  signed __int64 v20; // rax
  int v21; // eax
  PCWSTR v22; // rax
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v24; // rcx
  volatile signed __int32 *v25; // r8
  int *v26; // rdx
  int v27; // r8d
  int v28; // eax
  __int64 v29; // rcx
  int v31; // eax
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdx
  char v36; // di
  void *v37; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v39; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  unsigned int v41; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v42)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL v47; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v49; // [rsp+64h] [rbp-9Ch] BYREF
  WINBOOL v50; // [rsp+68h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v52; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v53; // [rsp+80h] [rbp-80h] BYREF
  LPVOID v54; // [rsp+88h] [rbp-78h] BYREF
  __int64 v55; // [rsp+90h] [rbp-70h] BYREF
  __int64 v56; // [rsp+98h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A8h] [rbp-58h] BYREF
  EVENT_DESCRIPTOR v59; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-38h]
  _BYTE v61[16]; // [rsp+D0h] [rbp-30h] BYREF
  void **v62; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v63[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v64; // [rsp+F8h] [rbp-8h]
  DWORD v65; // [rsp+100h] [rbp+0h]
  int *v66; // [rsp+108h] [rbp+8h]
  int *v67; // [rsp+110h] [rbp+10h]
  int v68; // [rsp+118h] [rbp+18h] BYREF
  char v69; // [rsp+11Ch] [rbp+1Ch]
  _BYTE v70[32]; // [rsp+120h] [rbp+20h] BYREF
  int v71; // [rsp+140h] [rbp+40h] BYREF
  const char *v72; // [rsp+148h] [rbp+48h]
  LPVOID v73; // [rsp+150h] [rbp+50h]
  char v74; // [rsp+158h] [rbp+58h]
  __int64 v75; // [rsp+160h] [rbp+60h]
  _BYTE v76[144]; // [rsp+168h] [rbp+68h] BYREF
  LPVOID lpMem; // [rsp+1F8h] [rbp+F8h]
  __int64 v78; // [rsp+200h] [rbp+100h]
  __int64 v79; // [rsp+208h] [rbp+108h]
  void *v80; // [rsp+210h] [rbp+110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+220h] [rbp+120h] BYREF
  void *v82; // [rsp+230h] [rbp+130h]
  int v83; // [rsp+238h] [rbp+138h]
  int v84; // [rsp+23Ch] [rbp+13Ch]
  unsigned int *v85; // [rsp+240h] [rbp+140h]
  __int64 v86; // [rsp+248h] [rbp+148h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+250h] [rbp+150h] BYREF
  void *v88; // [rsp+260h] [rbp+160h]
  int v89; // [rsp+268h] [rbp+168h]
  int v90; // [rsp+26Ch] [rbp+16Ch]
  DWORD *p_CurrentThreadId; // [rsp+270h] [rbp+170h]
  __int64 v92; // [rsp+278h] [rbp+178h]
  __int64 *v93; // [rsp+280h] [rbp+180h]
  __int64 v94; // [rsp+288h] [rbp+188h]
  const WCHAR *v95; // [rsp+290h] [rbp+190h]
  int v96; // [rsp+298h] [rbp+198h]
  int v97; // [rsp+29Ch] [rbp+19Ch]
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+1E8h]

  v60 = -2LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x295,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL,
      UserDataCount);
    return 2147549448LL;
  }
  v43 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
         &v43);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v63[0] = 0LL;
    v63[1] = &v62;
    v64 = 0LL;
    v65 = 0;
    v66 = &v71;
    v67 = &v68;
    v68 = 0;
    v69 = 0;
    v74 = 0;
    v71 = 0;
    v72 = "GetViewClientExtensionMapPropertyAsUInt";
    v73 = 0LL;
    v75 = 1LL;
    lpMem = 0LL;
    memset_0(v76, 0, sizeof(v76));
    v78 = 0LL;
    v79 = 0LL;
    v80 = 0LL;
    v62 = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
    v55 = v43;
    v9 = v67;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    if ( **((_DWORD **)Context + 1) <= 5u )
      *((_QWORD *)v9 + 1) = 0LL;
    else
      EventActivityIdControl(3u, (LPGUID)(v9 + 2));
    *v9 = 1;
    v52 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v47, &v52) && v47 )
    {
      v52 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v10 = *((_QWORD *)v52 + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v92 = 4LL;
      v93 = &v55;
      v94 = 8LL;
      v11 = &word_18035ABCC;
      LODWORD(v12) = 0;
      if ( StringRawBuffer )
      {
        v11 = StringRawBuffer;
        v12 = -1LL;
        do
          ++v12;
        while ( StringRawBuffer[v12] );
      }
      v95 = v11;
      v96 = 2 * v12 + 2;
      v97 = 0;
      v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v62);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180396128 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v88 = &unk_180396133;
      v89 = 78;
      v90 = 1;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, (LPCGUID)(v67 + 2), v13, 5u, &UserData);
    }
    if ( v65 )
    {
LABEL_26:
      v45 = 0LL;
      v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v43 + 104LL))(v43, &v45);
      v7 = v21;
      if ( v21 < 0 )
      {
        v34 = 669LL;
      }
      else
      {
        v22 = WindowsGetStringRawBuffer(a3, 0LL);
        v21 = MsgStringCreateStack(v22, 0xFFFFFFFFLL, v61, &v56);
        v7 = v21;
        if ( v21 >= 0 )
        {
          v42 = 0LL;
          v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v45 + 48LL))(v45, v56, &v42);
          v23 = v42;
          if ( v7 < 0 )
            goto LABEL_31;
          if ( !v42 )
          {
            v7 = -2147023728;
LABEL_31:
            if ( v23 )
            {
              v42 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v23)[2])(v23);
            }
            goto LABEL_33;
          }
          v44 = 0LL;
          v31 = (**v42)(v42, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v44);
          v7 = v31;
          if ( v31 < 0 )
          {
            v35 = 681LL;
          }
          else
          {
            v31 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v44 + 24LL))(v44, &v41);
            v7 = v31;
            if ( v31 >= 0 )
            {
              v53 = 0LL;
              if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v49, &v53) && v49 )
              {
                v53 = qword_180438940;
                qword_180438940[0] = &LockScreenServiceLogging::`vftable';
                qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
                InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
              }
              v32 = *((_QWORD *)v53 + 1);
              if ( *(_DWORD *)v32 > 5u )
              {
                v85 = &v41;
                v86 = 4LL;
                *(_DWORD *)&v59.Id = ((unsigned int)&unk_1803949D0 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                *(_DWORD *)&v59.Level = 5;
                v59.Keyword = 0LL;
                v81.Ptr = *(_QWORD *)(v32 + 8);
                v81.Size = *(unsigned __int16 *)v81.Ptr;
                v81.Reserved = 2;
                v82 = &unk_1803949DB;
                v83 = 16;
                v84 = 1;
                EventWriteTransfer(*(_QWORD *)(v32 + 32), &v59, (LPCGUID)(v67 + 2), 0LL, 3u, &v81);
              }
              *a4 = v41;
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v62);
              v7 = 0;
              goto LABEL_61;
            }
            v35 = 684LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v31,
            UserDataCount);
LABEL_61:
          v33 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          }
          v23 = v42;
          goto LABEL_31;
        }
        v34 = 674LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v34,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v21,
        UserDataCount);
LABEL_33:
      v24 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v62 = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
      v25 = (volatile signed __int32 *)v80;
      if ( !v80 )
        goto LABEL_36;
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
        (__int64)&v62,
        &SRWLock);
      v25 = (volatile signed __int32 *)v80;
      if ( v80 && *(_DWORD *)v80 == 1 )
      {
        v36 = 1;
      }
      else
      {
        v36 = 0;
        wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v80);
        v25 = (volatile signed __int32 *)v80;
      }
      if ( SRWLock )
      {
        ReleaseSRWLockExclusive(SRWLock);
        v25 = (volatile signed __int32 *)v80;
      }
      if ( v36 )
      {
LABEL_36:
        v26 = v67;
        if ( *v67 == 1 )
        {
          v27 = -2147024322;
          if ( v67[21] < 0 )
            v27 = v67[21];
          v28 = v67[18];
          if ( v28 < 1 )
            __fastfail(7u);
          if ( v67[19] >= 0 )
            v67[19] = v27;
          v26[18] = v28 - 1;
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
            &v62,
            v26);
          v25 = (volatile signed __int32 *)v80;
        }
      }
      if ( v25 )
      {
        if ( _InterlockedExchangeAdd(v25, 0xFFFFFFFF) == 1 )
        {
          v37 = v80;
          if ( v80 )
          {
            wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v80 + 8);
            operator delete(v37, (const struct std::nothrow_t *)0x100);
          }
        }
        v80 = 0LL;
      }
      if ( lpMem )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, lpMem);
        }
        lpMem = 0LL;
        v78 = 0LL;
      }
      if ( v74 )
      {
        v39 = GetProcessHeap();
        HeapFree(v39, 0, v73);
        v74 = 0;
      }
      v73 = 0LL;
      if ( v68 == 1 )
      {
        v68 = 2;
        v54 = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v50, &v54) && v50 )
        {
          v54 = qword_180438940;
          qword_180438940[0] = &LockScreenServiceLogging::`vftable';
          qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
          InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
        }
        _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v54 + 1), v70);
      }
      v68 = 3;
      if ( v65 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v63);
      goto LABEL_50;
    }
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_67;
    v15 = GetCurrentThreadId();
    v16 = (signed __int64 *)(v14 + 8 * (v15 % 0xA));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *(_DWORD *)(v17 + 8) != (_DWORD)v15 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_21;
      }
      goto LABEL_24;
    }
LABEL_21:
    v18 = GetProcessHeap();
    v19 = HeapAlloc(v18, 0, 0x18uLL);
    v17 = (signed __int64)v19;
    if ( v19 )
    {
      *(_QWORD *)v19 = 0LL;
      v19[2] = v15;
      *((_QWORD *)v19 + 2) = 0LL;
      _m_prefetchw(v16);
      do
      {
        v20 = *v16;
        *(_QWORD *)(v17 + 16) = *v16;
      }
      while ( v20 != _InterlockedCompareExchange64(v16, v17, v20) );
    }
    else
    {
LABEL_67:
      v17 = 0LL;
    }
LABEL_24:
    v63[0] = v17;
    if ( v17 )
    {
      v64 = *(_QWORD *)v17;
      *(_QWORD *)v17 = v63;
      v65 = GetCurrentThreadId();
    }
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x298,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v6,
    UserDataCount);
LABEL_50:
  v29 = v43;
  if ( v43 )
  {
    v43 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  return (unsigned int)v7;
}
