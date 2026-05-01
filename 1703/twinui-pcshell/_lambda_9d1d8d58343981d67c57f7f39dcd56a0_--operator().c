/*
 * XREFs of _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18010FD50
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___::Run @ 0x1801101B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___--Run.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ?_Xlength@?$vector@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@CAXXZ @ 0x18002478C (-_Xlength@-$vector@V-$com_ptr_t@UIThumbnailEvents@@Uerr_exception_policy@wil@@@wil@@V-$allocator.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x1800F7418 (-OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1800FD990 (-_Reallocate_exactly@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800FF6A0 (--$emplace_back@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsof.c)
 *     ??$Start@H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAH@Z @ 0x180110030 (--$Start@H@PdcNotificationCallback@ViewManagerInteropTraceLogging@@SA-AV01@$$QEAH@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()(_DWORD *a1)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned __int64 Ptr; // rdx
  RTL_SRWLOCK **v4; // rdi
  RTL_SRWLOCK **v5; // rsi
  RTL_SRWLOCK *v6; // rbx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rdi
  const char *v10; // r9
  char *v11; // rbx
  char *v12; // rdi
  __int64 v13; // rcx
  void *v14[2]; // [rsp+28h] [rbp-190h] BYREF
  __int64 v15; // [rsp+38h] [rbp-180h]
  RTL_SRWLOCK *v16; // [rsp+40h] [rbp-178h] BYREF
  PSRWLOCK SRWLock[3]; // [rsp+48h] [rbp-170h] BYREF
  _QWORD v18[40]; // [rsp+60h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  *(_BYTE *)(*(_QWORD *)a1 + 40LL) = a1[6] == 1;
  ViewManagerInteropTraceLogging::PdcNotificationCallback::Start<int>((ViewManagerInteropTraceLogging::PdcNotificationCallback *)v18);
  try
  {
    *(_OWORD *)v14 = 0LL;
    v15 = 0LL;
    v2 = *(RTL_SRWLOCK **)(*(_QWORD *)a1 + 24LL);
    Microsoft::WRL::Wrappers::SRWLock::LockShared(v2 + 28, SRWLock);
    Ptr = (unsigned __int64)v2[38].Ptr;
    if ( Ptr )
    {
      if ( Ptr > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<wil::com_ptr_t<IThumbnailEvents,wil::err_exception_policy>>::_Xlength();
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        (__int64 **)v14,
        Ptr);
    }
    v4 = (RTL_SRWLOCK **)v2[37].Ptr;
    v5 = &v4[(__int64)v2[38].Ptr];
    while ( v4 != v5 )
    {
      v6 = *v4;
      SRWLock[2] = v6;
      if ( v6 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 1))(v6);
      v16 = v6;
      if ( v6 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 1))(v6);
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        (__int64)v14,
        (__int64 *)&v16);
      if ( v16 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v16->Ptr + 2))(v16);
      if ( v6 )
        (*((void (__fastcall **)(RTL_SRWLOCK *))v6->Ptr + 2))(v6);
      ++v4;
    }
    if ( SRWLock[0] )
      ReleaseSRWLockShared(SRWLock[0]);
    v7 = v14[0];
    v8 = v14[1];
    while ( v7 != v8 )
    {
      v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v7;
      if ( *v7 )
        ((void (__fastcall *)(_QWORD))(*v9)[1])(*v7);
      ViewEventDispatcher::OverrideNavigationLevelForView(
        *(RTL_SRWLOCK **)(*(_QWORD *)a1 + 24LL),
        v9,
        *(_BYTE *)(*(_QWORD *)a1 + 40LL) != 0 ? 2 : 0);
      if ( v9 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
      ++v7;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18);
    v11 = (char *)v14[0];
    if ( v14[0] )
    {
      v12 = (char *)v14[1];
      if ( v14[0] != v14[1] )
      {
        do
        {
          v13 = *(_QWORD *)v11;
          if ( *(_QWORD *)v11 )
          {
            *(_QWORD *)v11 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          v11 += 8;
        }
        while ( v11 != v12 );
        v11 = (char *)v14[0];
      }
      std::_Deallocate(v11, (v15 - (__int64)v11) >> 3, 8uLL);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v10);
  }
  v18[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
}
