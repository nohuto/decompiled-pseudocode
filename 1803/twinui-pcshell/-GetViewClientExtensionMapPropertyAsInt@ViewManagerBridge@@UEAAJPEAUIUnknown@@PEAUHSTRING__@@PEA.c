/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAH@Z @ 0x180057290
 * Callers:
 *     ?GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x1800507E0 (-GetPropertyAsInt@ViewWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
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
 *     ??$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z @ 0x1801DB448 (--$Value@AEAH@GetViewClientExtensionMapPropertyAsInt@ViewManagerInteropTraceLogging@@QEAAXAEAH@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        int *a4)
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
  int v18; // eax
  PCWSTR v19; // rax
  int v20; // eax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  volatile signed __int32 *v23; // r8
  int *v24; // rdx
  int v25; // r8d
  int v26; // eax
  __int64 v27; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v30; // rax
  signed __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  char v34; // di
  void *v35; // rdi
  HANDLE v36; // rax
  HANDLE v37; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v40)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  WINBOOL v45; // [rsp+5Ch] [rbp-A4h] BYREF
  DWORD CurrentThreadId; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL v47; // [rsp+64h] [rbp-9Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  LPVOID v49; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  PSRWLOCK SRWLock; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h]
  _BYTE v56[16]; // [rsp+B0h] [rbp-50h] BYREF
  void **v57; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v58[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D8h] [rbp-28h]
  DWORD v60; // [rsp+E0h] [rbp-20h]
  int *v61; // [rsp+E8h] [rbp-18h]
  int *v62; // [rsp+F0h] [rbp-10h]
  int v63; // [rsp+F8h] [rbp-8h] BYREF
  char v64; // [rsp+FCh] [rbp-4h]
  _BYTE v65[32]; // [rsp+100h] [rbp+0h] BYREF
  int v66; // [rsp+120h] [rbp+20h] BYREF
  const char *v67; // [rsp+128h] [rbp+28h]
  LPVOID v68; // [rsp+130h] [rbp+30h]
  char v69; // [rsp+138h] [rbp+38h]
  __int64 v70; // [rsp+140h] [rbp+40h]
  _BYTE v71[144]; // [rsp+148h] [rbp+48h] BYREF
  LPVOID lpMem; // [rsp+1D8h] [rbp+D8h]
  __int64 v73; // [rsp+1E0h] [rbp+E0h]
  __int64 v74; // [rsp+1E8h] [rbp+E8h]
  void *v75; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+200h] [rbp+100h] BYREF
  void *v77; // [rsp+210h] [rbp+110h]
  int v78; // [rsp+218h] [rbp+118h]
  int v79; // [rsp+21Ch] [rbp+11Ch]
  DWORD *p_CurrentThreadId; // [rsp+220h] [rbp+120h]
  __int64 v81; // [rsp+228h] [rbp+128h]
  __int64 *v82; // [rsp+230h] [rbp+130h]
  __int64 v83; // [rsp+238h] [rbp+138h]
  const WCHAR *v84; // [rsp+240h] [rbp+140h]
  int v85; // [rsp+248h] [rbp+148h]
  int v86; // [rsp+24Ch] [rbp+14Ch]
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v55 = -2LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 145) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x273,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL,
      UserDataCount);
    return 2147549448LL;
  }
  v41 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
         &v41);
  v7 = v6;
  if ( v6 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    v58[0] = 0LL;
    v58[1] = &v57;
    v59 = 0LL;
    v60 = 0;
    v61 = &v66;
    v62 = &v63;
    v63 = 0;
    v64 = 0;
    v69 = 0;
    v66 = 0;
    v67 = "GetViewClientExtensionMapPropertyAsInt";
    v68 = 0LL;
    v70 = 1LL;
    lpMem = 0LL;
    memset_0(v71, 0, sizeof(v71));
    v73 = 0LL;
    v74 = 0LL;
    v75 = 0LL;
    v57 = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::`vftable';
    v51 = v41;
    v9 = v62;
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
    v49 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v45, &v49) && v45 )
    {
      v49 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v10 = *((_QWORD *)v49 + 1);
    if ( *(_DWORD *)v10 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      p_CurrentThreadId = &CurrentThreadId;
      v81 = 4LL;
      v82 = &v51;
      v83 = 8LL;
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
      v84 = v11;
      v85 = 2 * v12 + 2;
      v86 = 0;
      v13 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v57);
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180396334 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 261;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v10 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v77 = &unk_18039633F;
      v78 = 77;
      v79 = 1;
      EventWriteTransfer(*(_QWORD *)(v10 + 32), &EventDescriptor, (LPCGUID)(v62 + 2), v13, 5u, &UserData);
    }
    if ( v60 )
      goto LABEL_24;
    v14 = wil::details::g_pThreadFailureCallbacks;
    if ( !wil::details::g_pThreadFailureCallbacks )
      goto LABEL_58;
    v15 = GetCurrentThreadId();
    v16 = (signed __int64 *)(v14 + 8 * (v15 % 0xA));
    v17 = *v16;
    if ( *v16 )
    {
      while ( *(_DWORD *)(v17 + 8) != (_DWORD)v15 )
      {
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v17 )
          goto LABEL_54;
      }
      goto LABEL_22;
    }
LABEL_54:
    ProcessHeap = GetProcessHeap();
    v30 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v17 = (signed __int64)v30;
    if ( v30 )
    {
      *(_QWORD *)v30 = 0LL;
      v30[2] = v15;
      *((_QWORD *)v30 + 2) = 0LL;
      _m_prefetchw(v16);
      do
      {
        v31 = *v16;
        *(_QWORD *)(v17 + 16) = *v16;
      }
      while ( v31 != _InterlockedCompareExchange64(v16, v17, v31) );
    }
    else
    {
LABEL_58:
      v17 = 0LL;
    }
LABEL_22:
    v58[0] = v17;
    if ( v17 )
    {
      v59 = *(_QWORD *)v17;
      *(_QWORD *)v17 = v58;
      v60 = GetCurrentThreadId();
    }
LABEL_24:
    v43 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 104LL))(v41, &v43);
    v7 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x27B,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v18,
        UserDataCount);
    }
    else
    {
      v19 = WindowsGetStringRawBuffer(a3, 0LL);
      v20 = MsgStringCreateStack(v19, 0xFFFFFFFFLL, v56, &v52);
      v7 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x280,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
          (const char *)(unsigned int)v20,
          UserDataCount);
      }
      else
      {
        v40 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v43 + 48LL))(v43, v52, &v40);
        v21 = v40;
        if ( v7 >= 0 )
        {
          if ( v40 )
          {
            v42 = 0LL;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
            v32 = (**v40)(v40, &GUID_10285360_82e3_4e40_8d56_8e270c16414f, &v42);
            v7 = v32;
            if ( v32 >= 0 )
            {
              v33 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 24LL))(v42, &v39);
              v7 = v33;
              if ( v33 >= 0 )
              {
                ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::Value<int &>(&v57, &v39);
                *a4 = v39;
                wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v57);
                v7 = 0;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x28A,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                  (const char *)(unsigned int)v33,
                  UserDataCount);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x287,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                (const char *)(unsigned int)v32,
                UserDataCount);
            }
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
            v21 = v40;
          }
          else
          {
            v7 = -2147023728;
          }
        }
        if ( v21 )
        {
          v40 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
        }
      }
    }
    v22 = v43;
    if ( v43 )
    {
      v43 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    v57 = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsInt::`vftable';
    v23 = (volatile signed __int32 *)v75;
    if ( !v75 )
      goto LABEL_34;
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
      (__int64)&v57,
      &SRWLock);
    v23 = (volatile signed __int32 *)v75;
    if ( v75 && *(_DWORD *)v75 == 1 )
    {
      v34 = 1;
    }
    else
    {
      v34 = 0;
      wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v75);
      v23 = (volatile signed __int32 *)v75;
    }
    if ( SRWLock )
    {
      ReleaseSRWLockExclusive(SRWLock);
      v23 = (volatile signed __int32 *)v75;
    }
    if ( v34 )
    {
LABEL_34:
      v24 = v62;
      if ( *v62 == 1 )
      {
        v25 = -2147024322;
        if ( v62[21] < 0 )
          v25 = v62[21];
        v26 = v62[18];
        if ( v26 < 1 )
          __fastfail(7u);
        if ( v62[19] >= 0 )
          v62[19] = v25;
        v24[18] = v26 - 1;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
          &v57,
          v24);
        v23 = (volatile signed __int32 *)v75;
      }
    }
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23, 0xFFFFFFFF) == 1 )
      {
        v35 = v75;
        if ( v75 )
        {
          wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v75 + 8);
          operator delete(v35, (const struct std::nothrow_t *)0x100);
        }
      }
      v75 = 0LL;
    }
    if ( lpMem )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
      {
        v36 = GetProcessHeap();
        HeapFree(v36, 0, lpMem);
      }
      lpMem = 0LL;
      v73 = 0LL;
    }
    if ( v69 )
    {
      v37 = GetProcessHeap();
      HeapFree(v37, 0, v68);
      v69 = 0;
    }
    v68 = 0LL;
    if ( v63 == 1 )
    {
      v63 = 2;
      v50 = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v47, &v50) && v47 )
      {
        v50 = qword_180438940;
        qword_180438940[0] = &LockScreenServiceLogging::`vftable';
        qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
        InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
      }
      _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v50 + 1), v65);
    }
    v63 = 3;
    if ( v60 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v58);
    goto LABEL_48;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x276,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v6,
    UserDataCount);
LABEL_48:
  v27 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return (unsigned int)v7;
}
