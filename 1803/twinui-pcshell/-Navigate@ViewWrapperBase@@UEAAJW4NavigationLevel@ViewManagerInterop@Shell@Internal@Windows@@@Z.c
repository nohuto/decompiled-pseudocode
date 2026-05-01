/*
 * XREFs of ?Navigate@ViewWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800501C0
 * Callers:
 *     ?s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z @ 0x180004038 (-s_UpdateNavigationLevel@CTaskWindow@@CAXPEAUIImmersiveApplicationInternal@@PEAUTASK_WINDOW@1@@Z.c)
 *     ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x180091368 (-NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewMa.c)
 * Callees:
 *     ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x1800325CC (-_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV-$function@$$A6AXPEAUIViewWrapperInternal@@@Z@.c)
 *     std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this @ 0x18003A410 (std--_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_--_Delete_this.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 *     ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0 (-SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z.c)
 *     ?GetNavigationLevelForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800577A0 (-GetNavigationLevelForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAW4NavigationLevel@ViewManage.c)
 *     ?v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA?AW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@XZ @ 0x18005AC10 (-v_GetDesiredNavigationLevel@UAPViewWrapper@@EEAA-AW4NavigationLevel@ViewManagerInterop@Shell@In.c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18005AFF0 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewWrapperBase::Navigate(__int64 a1, int a2)
{
  int v2; // edi
  char v4; // r15
  RTL_SRWLOCK *v5; // rsi
  HWND v6; // r14
  int v7; // eax
  int v9; // edx
  __int16 v10; // r8
  struct IUnknown *v11; // rdx
  ViewManagerBridge *v12; // rcx
  __int64 v13; // r8
  void (__fastcall *v14)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  _DWORD *v15; // rcx
  ViewManagerInteropTraceLogging *v16; // rcx
  ViewWrapperBase *v17; // r14
  struct IUnknown *v18; // rdx
  ViewManagerBridge *v19; // rcx
  __int64 (__fastcall *v20)(ViewManagerBridge *__hidden, struct IUnknown *, enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *); // rax
  int v21; // eax
  unsigned int v22; // r12d
  int v23; // eax
  __int64 v24; // r10
  __int64 (__fastcall *v25)(ViewWrapperBase *); // rax
  int DesiredNavigationLevel; // eax
  void (__fastcall *v27)(ViewWrapperBase *, _QWORD); // rax
  __int64 v28; // r13
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(ViewWrapperBase *); // rax
  int v31; // eax
  int v32; // ebx
  struct Windows::Internal::IComPoolTask *v33; // rdi
  _DWORD *v34; // rax
  _DWORD *v35; // rbx
  void (*v36)(void); // rax
  volatile int *v37; // rdx
  void (__fastcall *v38)(struct Windows::Internal::IComPoolTask *); // rax
  __int64 v39; // rdx
  void (__fastcall *v40)(void *, char); // rax
  int UserDataCount; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+34h] [rbp-CCh] BYREF
  int v43; // [rsp+38h] [rbp-C8h]
  WINBOOL fPending; // [rsp+3Ch] [rbp-C4h] BYREF
  WINBOOL v45; // [rsp+40h] [rbp-C0h] BYREF
  WINBOOL v46; // [rsp+44h] [rbp-BCh] BYREF
  int v47; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v48; // [rsp+4Ch] [rbp-B4h] BYREF
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+54h] [rbp-ACh]
  LPVOID Context; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v52; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v53; // [rsp+68h] [rbp-98h] BYREF
  _DWORD *v54; // [rsp+70h] [rbp-90h]
  ViewWrapperBase *v55; // [rsp+78h] [rbp-88h]
  HWND v56; // [rsp+80h] [rbp-80h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+88h] [rbp-78h] BYREF
  ViewWrapperBase *v58; // [rsp+98h] [rbp-68h]
  _QWORD v59[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B4h] [rbp-4Ch]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  RTL_SRWLOCK *v63; // [rsp+C0h] [rbp-40h]
  __int64 v64; // [rsp+C8h] [rbp-38h]
  __int64 v65; // [rsp+D0h] [rbp-30h]
  struct Windows::Internal::IComPoolTask *v66; // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall **v67)(); // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v68; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ***v69)(); // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp+20h] BYREF
  void *v71; // [rsp+130h] [rbp+30h]
  int v72; // [rsp+138h] [rbp+38h]
  int v73; // [rsp+13Ch] [rbp+3Ch]
  int *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  unsigned int *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  int *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v62 = -2LL;
  v2 = a2;
  if ( a2 == 5 )
  {
    v4 = 1;
    v2 = 4;
  }
  else
  {
    v4 = 0;
  }
  v5 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 160) + 296LL);
  AcquireSRWLockExclusive(v5);
  v63 = v5;
  v6 = *(HWND *)(a1 + 256);
  v56 = v6;
  v7 = *(_DWORD *)(a1 + 272);
  if ( v2 == v7 )
  {
LABEL_4:
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( v4 )
    {
      if ( v6 )
        SetForegroundWindow(v6);
    }
    return 0LL;
  }
  if ( v7 )
  {
    *(_DWORD *)(a1 + 272) = v2;
    if ( (*(_BYTE *)(a1 + 448) & 4) == 0 )
    {
      if ( (unsigned int)(v2 - 4) > 1 )
      {
        v9 = 2;
        v10 = 4;
      }
      else
      {
        v9 = 4;
        v10 = 8;
      }
      if ( v9 != ((*(unsigned __int16 *)(a1 + 340) >> 1) & 7) )
      {
        *(_WORD *)(a1 + 340) = v10 | *(_WORD *)(a1 + 340) & 0xFFF1;
        v11 = *(struct IUnknown **)(a1 + 184);
        if ( v11 )
        {
          v12 = *(ViewManagerBridge **)(*(_QWORD *)(a1 + 160) + 520LL);
          v13 = *(unsigned int *)(a1 + 340);
          v14 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v12 + 72LL);
          if ( v14 == ViewManagerBridge::SetImportanceVectorForView )
            ViewManagerBridge::SetImportanceVectorForView(v12, v11, v13);
          else
            v14(v12, v11, v13);
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context)
            && fPending )
          {
            Context = &qword_180438968;
            qword_180438968 = &IamTraceLogging::`vftable';
            atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
            ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
            InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
          }
          v15 = (_DWORD *)*((_QWORD *)Context + 1);
          if ( v15 && *v15 )
          {
            v53 = 0LL;
            if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &v45, &v53)
              && v45 )
            {
              v53 = &qword_180438968;
              qword_180438968 = &IamTraceLogging::`vftable';
              atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
              ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
              InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
            }
            ViewManagerInteropTraceLogging::CommitImportanceVector_(
              v16,
              *(_DWORD *)(a1 + 140),
              (const union _RM_ACTIVITY_IMPORTANCE *)(a1 + 340));
          }
        }
      }
    }
    v17 = (ViewWrapperBase *)(a1 - 8);
    v42 = *(_DWORD *)(a1 - 8 + 280);
    v18 = *(struct IUnknown **)(a1 - 8 + 192);
    if ( v18 )
    {
      v19 = *(ViewManagerBridge **)(*((_QWORD *)v17 + 21) + 520LL);
      v20 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *))(*(_QWORD *)v19 + 256LL);
      v21 = v20 == ViewManagerBridge::GetNavigationLevelForView
          ? ViewManagerBridge::GetNavigationLevelForView(
              v19,
              v18,
              (enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *)&v42)
          : v20(v19, v18, (enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel *)&v42);
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x952,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
          (const char *)(unsigned int)v21,
          UserDataCount);
    }
    v22 = *((_DWORD *)v17 + 70);
    v23 = *((_DWORD *)v17 + 24);
    if ( (v23 & 0x10) != 0 && (v23 & 0x20) == 0 )
      v22 = v22 != 0;
    if ( (signed int)v22 >= *((_DWORD *)v17 + 72) )
      v22 = *((_DWORD *)v17 + 72);
    v52 = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &v46, &v52) && v46 )
    {
      v52 = qword_180438940;
      qword_180438940[0] = &LockScreenServiceLogging::`vftable';
      qword_180438958 = (struct _TlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438940, qword_180438958);
      InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, qword_180438940);
    }
    v24 = *((_QWORD *)v52 + 1);
    if ( *(_DWORD *)v24 > 5u )
    {
      v47 = *((_DWORD *)v17 + 37);
      v74 = &v47;
      v75 = 4LL;
      v48 = v22;
      v76 = &v48;
      v77 = 4LL;
      v49 = *((_DWORD *)v17 + 70);
      v78 = &v49;
      v79 = 4LL;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18039714B - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      *(_DWORD *)&EventDescriptor.Level = 5;
      EventDescriptor.Keyword = 0LL;
      UserData.Ptr = *(_QWORD *)(v24 + 8);
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      UserData.Reserved = 2;
      v71 = &unk_180397156;
      v72 = 117;
      v73 = 1;
      EventWriteTransfer(*(_QWORD *)(v24 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
    v25 = *(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v17 + 120LL);
    if ( (char *)v25 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
      DesiredNavigationLevel = UAPViewWrapper::v_GetDesiredNavigationLevel(v17);
    else
      DesiredNavigationLevel = v25(v17);
    if ( v22 != DesiredNavigationLevel )
    {
      v27 = *(void (__fastcall **)(ViewWrapperBase *, _QWORD))(*(_QWORD *)v17 + 144LL);
      if ( (char *)v27 == (char *)UAPViewWrapper::v_SetDesiredNavigationLevel )
        UAPViewWrapper::v_SetDesiredNavigationLevel(v17, v22);
      else
        v27(v17, v22);
      v28 = *((_QWORD *)v17 + 33);
      if ( v28 && (*((_BYTE *)v17 + 456) & 1) == 0 )
      {
        v64 = a1 - 8;
        (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v17 + 8LL))(v17);
        v29 = *(_QWORD *)v17;
        v30 = *(__int64 (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v17 + 120LL);
        if ( (char *)v30 == (char *)UAPViewWrapper::v_GetDesiredNavigationLevel )
        {
          v31 = UAPViewWrapper::v_GetDesiredNavigationLevel(v17);
        }
        else
        {
          v31 = v30(v17);
          v29 = *(_QWORD *)v17;
        }
        v43 = v31;
        v32 = v31;
        v58 = v17;
        v55 = v17;
        v59[0] = v17;
        (*(void (__fastcall **)(ViewWrapperBase *))(v29 + 8))(v17);
        v59[1] = v28;
        v60 = 2;
        v61 = v32;
        v50 = *((_DWORD *)v17 + 46);
        v33 = 0LL;
        v65 = 0LL;
        v34 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v35 = v34;
        v54 = 0LL;
        if ( v34 )
        {
          *(_QWORD *)v34 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
          v34[3] = 1;
          *(_QWORD *)v34 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
          {
            v36 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
            if ( (char *)v36 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
              Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
            else
              v36();
          }
          *(_QWORD *)v35 = off_18031AF70;
          *((_QWORD *)v35 + 2) = v17;
          *((_QWORD *)v35 + 3) = 0LL;
          if ( v35 + 6 != (_DWORD *)v59 )
          {
            *((_QWORD *)v35 + 3) = v17;
            v55 = 0LL;
            v59[0] = 0LL;
          }
          *((_QWORD *)v35 + 4) = v28;
          v35[10] = 2;
          v35[11] = v43;
          v33 = (struct Windows::Internal::IComPoolTask *)v35;
          v54 = v35;
        }
        v66 = v33;
        Windows::Internal::ComTaskPool::RunTask(3u, 2u, v50, 0, v33, 0LL);
        if ( v54 )
        {
          v38 = *(void (__fastcall **)(struct Windows::Internal::IComPoolTask *))(*(_QWORD *)v33 + 16LL);
          if ( (char *)v38 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
              v33,
              v37);
          else
            v38(v33);
        }
        if ( v55 )
          (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v55 + 16LL))(v55);
        (*(void (__fastcall **)(ViewWrapperBase *))(*(_QWORD *)v17 + 16LL))(v17);
      }
      if ( v22 == 1 && v42 > 1 )
        v22 = 3;
      v67 = off_180323138;
      v68 = v22;
      v69 = &v67;
      ViewEventDispatcher::_ForEachComponent(*((ViewEventDispatcher **)v17 + 21), *((_DWORD *)v17 + 37), (__int64)&v67);
      if ( v69 )
      {
        if ( v69 == &v67 )
          v39 = 0LL;
        else
          LOBYTE(v39) = 1;
        v40 = (void (__fastcall *)(void *, char))(*v69)[4];
        if ( v40 == std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this )
          std::_Func_impl_no_alloc__lambda_50b3f89cea81ac99891e676c02ace6a0__void_bool_::_Delete_this(v69, v39);
        else
          v40(v69, v39);
      }
      ViewWrapperBase::_ReconcileSessionIdleTaskCompletion(v17);
    }
    v6 = v56;
    goto LABEL_4;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A2,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)0x8007139FLL,
    UserDataCount);
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
  return 2147947423LL;
}
