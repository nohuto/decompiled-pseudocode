/*
 * XREFs of ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180056710
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18000FA24 (-LockExclusive@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18001833C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?ReportStopActivity@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180058DA8 (-ReportStopActivity@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Para.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18008FD64 (--1-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?reset@?$shared_object@V?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800958A4 (-reset@-$shared_object@V-$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsPro.c)
 *     ?zInternalRelatedId@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180097C0C (-zInternalRelatedId@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04U_.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180103574 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnAdded(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  int *v4; // rbx
  int v6; // eax
  unsigned __int64 v7; // rbx
  const GUID *v8; // rax
  __int64 v9; // rdi
  signed __int64 *v10; // rdi
  signed __int64 v11; // rcx
  int v12; // eax
  char *v13; // rdx
  int v14; // eax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  ViewEventDispatcher **v17; // rdx
  int v18; // eax
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rcx
  volatile signed __int32 *v24; // rdx
  int *v25; // r8
  struct IUnknown *v26; // rcx
  HANDLE v28; // rax
  _DWORD *v29; // rax
  signed __int64 v30; // rax
  char v31; // bl
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  void *v35; // rdi
  HANDLE ProcessHeap; // rax
  HANDLE v37; // rax
  ULONG UserDataCount; // [rsp+20h] [rbp-2A8h]
  struct IUnknown *v39; // [rsp+30h] [rbp-298h] BYREF
  unsigned int v40; // [rsp+38h] [rbp-290h] BYREF
  __int64 v41; // [rsp+40h] [rbp-288h] BYREF
  __int64 v42; // [rsp+48h] [rbp-280h] BYREF
  WINBOOL fPending; // [rsp+50h] [rbp-278h] BYREF
  WINBOOL v44; // [rsp+54h] [rbp-274h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-270h] BYREF
  WINBOOL v46; // [rsp+5Ch] [rbp-26Ch] BYREF
  unsigned int v47; // [rsp+60h] [rbp-268h] BYREF
  WINBOOL v48; // [rsp+64h] [rbp-264h] BYREF
  LPVOID Context; // [rsp+68h] [rbp-260h] BYREF
  LPVOID v50; // [rsp+70h] [rbp-258h] BYREF
  LPVOID v51; // [rsp+78h] [rbp-250h] BYREF
  LPVOID v52; // [rsp+80h] [rbp-248h] BYREF
  struct IUnknown *v53; // [rsp+88h] [rbp-240h] BYREF
  unsigned __int64 v54; // [rsp+90h] [rbp-238h] BYREF
  PSRWLOCK SRWLock; // [rsp+98h] [rbp-230h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+A0h] [rbp-228h] BYREF
  EVENT_DESCRIPTOR v57; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v58; // [rsp+C0h] [rbp-208h]
  void **v59; // [rsp+D0h] [rbp-1F8h] BYREF
  _QWORD v60[2]; // [rsp+D8h] [rbp-1F0h] BYREF
  __int64 v61; // [rsp+E8h] [rbp-1E0h]
  DWORD v62; // [rsp+F0h] [rbp-1D8h]
  int *v63; // [rsp+F8h] [rbp-1D0h]
  int *v64; // [rsp+100h] [rbp-1C8h]
  int v65; // [rsp+108h] [rbp-1C0h] BYREF
  char v66; // [rsp+10Ch] [rbp-1BCh]
  char v67[32]; // [rsp+110h] [rbp-1B8h] BYREF
  int v68; // [rsp+130h] [rbp-198h] BYREF
  const char *v69; // [rsp+138h] [rbp-190h]
  LPVOID v70; // [rsp+140h] [rbp-188h]
  char v71; // [rsp+148h] [rbp-180h]
  __int64 v72; // [rsp+150h] [rbp-178h]
  char v73[144]; // [rsp+158h] [rbp-170h] BYREF
  LPVOID lpMem; // [rsp+1E8h] [rbp-E0h]
  __int64 v75; // [rsp+1F0h] [rbp-D8h]
  __int64 v76; // [rsp+1F8h] [rbp-D0h]
  void *v77; // [rsp+200h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+210h] [rbp-B8h] BYREF
  void *v79; // [rsp+220h] [rbp-A8h]
  int v80; // [rsp+228h] [rbp-A0h]
  int v81; // [rsp+22Ch] [rbp-9Ch]
  DWORD *p_CurrentThreadId; // [rsp+230h] [rbp-98h]
  __int64 v83; // [rsp+238h] [rbp-90h]
  struct IUnknown **v84; // [rsp+240h] [rbp-88h]
  __int64 v85; // [rsp+248h] [rbp-80h]
  struct _EVENT_DATA_DESCRIPTOR v86; // [rsp+250h] [rbp-78h] BYREF
  void *v87; // [rsp+260h] [rbp-68h]
  int v88; // [rsp+268h] [rbp-60h]
  int v89; // [rsp+26Ch] [rbp-5Ch]
  unsigned __int64 *v90; // [rsp+270h] [rbp-58h]
  __int64 v91; // [rsp+278h] [rbp-50h]
  unsigned int *v92; // [rsp+280h] [rbp-48h]
  __int64 v93; // [rsp+288h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v58 = -2LL;
  try
  {
    v39 = 0LL;
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))a4->lpVtbl->QueryInterface)(
           a4,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           &v39);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3EB,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        UserDataCount);
    }
    else
    {
      v60[0] = 0LL;
      v60[1] = &v59;
      v61 = 0LL;
      v62 = 0;
      v63 = &v68;
      v64 = &v65;
      v65 = 0;
      v66 = 0;
      v71 = 0;
      v68 = 0;
      v69 = "OnAdded";
      v70 = 0LL;
      v72 = 1LL;
      lpMem = 0LL;
      memset_0(v73, 0, sizeof(v73));
      v75 = 0LL;
      v76 = 0LL;
      v77 = 0LL;
      v59 = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
      v53 = v39;
      v4 = v64;
      Context = 0LL;
      if ( !InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        || !fPending )
      {
LABEL_5:
        if ( **((_DWORD **)Context + 1) <= 5u )
          *((_QWORD *)v4 + 1) = 0LL;
        else
          EventActivityIdControl(3u, (LPGUID)(v4 + 2));
        *v4 = 1;
        v50 = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v44, &v50) && v44 )
        {
          v50 = qword_180438940;
          qword_180438940[0] = &LockScreenServiceLogging::`vftable';
          qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
          InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
        }
        v7 = *((_QWORD *)v50 + 1);
        if ( *(_DWORD *)v7 > 5u )
        {
          CurrentThreadId = GetCurrentThreadId();
          p_CurrentThreadId = &CurrentThreadId;
          v83 = 4LL;
          v84 = &v53;
          v85 = 8LL;
          v8 = (const GUID *)wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId(&v59);
          *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180395C21 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
          *(_DWORD *)&EventDescriptor.Level = 261;
          EventDescriptor.Keyword = 0LL;
          UserData.Ptr = *(_QWORD *)(v7 + 8);
          UserData.Size = *(unsigned __int16 *)UserData.Ptr;
          UserData.Reserved = 2;
          v79 = &unk_180395C2C;
          v80 = 41;
          v81 = 1;
          EventWriteTransfer(*(_QWORD *)(v7 + 32), &EventDescriptor, (LPCGUID)(v64 + 2), v8, 4u, &UserData);
        }
        if ( v62 )
        {
LABEL_20:
          v42 = 0LL;
          v12 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v39->lpVtbl[4].AddRef)(v39, &v42);
          if ( v12 < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3F4,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v12,
              UserDataCount);
          }
          else
          {
            v7 = (unsigned __int64)(this - 2);
            if ( this != (ViewEventDispatcher **)16 )
            {
              v13 = (char *)(this + 1);
              goto LABEL_23;
            }
          }
          v13 = 0LL;
LABEL_23:
          v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v42 + 56LL))(v42, v13);
          if ( v14 < 0 )
          {
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x3F5,
              (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
              (const char *)(unsigned int)v14,
              UserDataCount);
          }
          else
          {
            v41 = 0LL;
            v15 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v39->lpVtbl->QueryInterface)(
                    v39,
                    &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
                    &v41);
            v16 = retaddr;
            if ( v15 >= 0 )
            {
              if ( v7 )
              {
                v17 = this - 1;
                goto LABEL_27;
              }
LABEL_61:
              v17 = 0LL;
LABEL_27:
              v18 = (*(__int64 (__fastcall **)(__int64, ViewEventDispatcher **))(*(_QWORD *)v41 + 56LL))(v41, v17);
              if ( v18 < 0 )
              {
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x3FD,
                  (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                  (const char *)(unsigned int)v18,
                  UserDataCount);
              }
              else
              {
                v19 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v39->lpVtbl[6].AddRef)(v39, &v40);
                v20 = retaddr;
                if ( v19 >= 0 )
                {
                  v7 = (unsigned __int64)v39;
                  v51 = 0LL;
                  if ( !InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v46, &v51)
                    || !v46 )
                  {
                    goto LABEL_31;
                  }
                  goto LABEL_64;
                }
              }
              wil::details::in1diag3::Throw_Hr(
                v20,
                (void *)0x400,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
                (const char *)(unsigned int)v19,
                UserDataCount);
LABEL_64:
              v51 = qword_180438940;
              qword_180438940[0] = &LockScreenServiceLogging::`vftable';
              qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
              InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
LABEL_31:
              v21 = *((_QWORD *)v51 + 1);
              if ( *(_DWORD *)v21 > 5u )
              {
                v54 = v7;
                v90 = &v54;
                v91 = 8LL;
                v47 = v40;
                v92 = &v47;
                v93 = 4LL;
                *(_DWORD *)&v57.Id = ((unsigned int)&unk_18039474B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                *(_DWORD *)&v57.Level = 5;
                v57.Keyword = 0LL;
                v86.Ptr = *(_QWORD *)(v21 + 8);
                v86.Size = *(unsigned __int16 *)v86.Ptr;
                v86.Reserved = 2;
                v87 = &unk_180394756;
                v88 = 45;
                v89 = 1;
                EventWriteTransfer(*(_QWORD *)(v21 + 32), &v57, 0LL, 0LL, 4u, &v86);
              }
              ViewEventDispatcher::ViewCreated(this[8], v40, v39);
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(&v59);
              v22 = v41;
              if ( v41 )
              {
                v41 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
              }
              v23 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
              }
              v59 = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
              v24 = (volatile signed __int32 *)v77;
              if ( !v77 )
                goto LABEL_38;
              wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
                (__int64)&v59,
                &SRWLock);
              v24 = (volatile signed __int32 *)v77;
              if ( v77 && *(_DWORD *)v77 == 1 )
              {
                v31 = 1;
              }
              else
              {
                v31 = 0;
                wil::details::shared_object<wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v77);
                v24 = (volatile signed __int32 *)v77;
              }
              if ( SRWLock )
              {
                ReleaseSRWLockExclusive(SRWLock);
                v24 = (volatile signed __int32 *)v77;
              }
              if ( v31 )
              {
LABEL_38:
                v25 = v64;
                if ( *v64 == 1 )
                {
                  v32 = v64[21];
                  v33 = 2147942974LL;
                  if ( v32 < 0 )
                    v33 = (unsigned int)v32;
                  v34 = v64[18];
                  if ( v34 < 1 )
                    __fastfail(7u);
                  if ( v64[19] >= 0 )
                    v64[19] = v33;
                  v25[18] = v34 - 1;
                  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
                    &v59,
                    v33);
                  v24 = (volatile signed __int32 *)v77;
                }
              }
              if ( v24 )
              {
                if ( _InterlockedExchangeAdd(v24, 0xFFFFFFFF) == 1 )
                {
                  v35 = v77;
                  if ( v77 )
                  {
                    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>((char *)v77 + 8);
                    operator delete(v35, (const struct std::nothrow_t *)0x100);
                  }
                }
                v77 = 0LL;
              }
              if ( lpMem )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)lpMem, 0xFFFFFFFF) == 1 )
                {
                  ProcessHeap = GetProcessHeap();
                  HeapFree(ProcessHeap, 0, lpMem);
                }
                lpMem = 0LL;
                v75 = 0LL;
              }
              if ( v71 )
              {
                v37 = GetProcessHeap();
                HeapFree(v37, 0, v70);
                v71 = 0;
              }
              v70 = 0LL;
              if ( v65 == 1 )
              {
                v65 = 2;
                v52 = 0LL;
                if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v48, &v52) && v48 )
                {
                  v52 = qword_180438940;
                  qword_180438940[0] = &LockScreenServiceLogging::`vftable';
                  qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
                  atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
                  wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
                  InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
                }
                _TlgWriteActivityAutoStop<0,5>(*((_QWORD *)v52 + 1), v67);
              }
              v65 = 3;
              if ( v62 )
                wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v60);
              v26 = v39;
              if ( v39 )
              {
                v39 = 0LL;
                ((void (__fastcall *)(struct IUnknown *))v26->lpVtbl->Release)(v26);
              }
              return 0LL;
            }
          }
          wil::details::in1diag3::Throw_Hr(
            v16,
            (void *)0x3FC,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
            (const char *)(unsigned int)v15,
            UserDataCount);
          goto LABEL_61;
        }
        v9 = wil::details::g_pThreadFailureCallbacks;
        if ( !wil::details::g_pThreadFailureCallbacks )
          goto LABEL_56;
        v7 = GetCurrentThreadId();
        v10 = (signed __int64 *)(v9 + 8 * (v7 % 0xA));
        v11 = *v10;
        if ( *v10 )
        {
          while ( *(_DWORD *)(v11 + 8) != (_DWORD)v7 )
          {
            v11 = *(_QWORD *)(v11 + 16);
            if ( !v11 )
              goto LABEL_52;
          }
          goto LABEL_18;
        }
LABEL_52:
        v28 = GetProcessHeap();
        v29 = HeapAlloc(v28, 0, 0x18uLL);
        v11 = (signed __int64)v29;
        if ( v29 )
        {
          *(_QWORD *)v29 = 0LL;
          v29[2] = v7;
          *((_QWORD *)v29 + 2) = 0LL;
          _m_prefetchw(v10);
          do
          {
            v30 = *v10;
            *(_QWORD *)(v11 + 16) = *v10;
          }
          while ( v30 != _InterlockedCompareExchange64(v10, v11, v30) );
        }
        else
        {
LABEL_56:
          v11 = 0LL;
        }
LABEL_18:
        v60[0] = v11;
        if ( v11 )
        {
          v61 = *(_QWORD *)v11;
          *(_QWORD *)v11 = v60;
          v62 = GetCurrentThreadId();
        }
        goto LABEL_20;
      }
    }
    Context = qword_180438940;
    qword_180438940[0] = &LockScreenServiceLogging::`vftable';
    qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    goto LABEL_5;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
