/*
 * XREFs of _lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator() @ 0x18013A300
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___::Run @ 0x18013A6A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9d1d8d58343981d67c57f7f39dcd56a0___--Run.c)
 * Callees:
 *     ?_Xlength@?$vector@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x180025030 (-_Xlength@-$vector@V-$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevelOverride@@@Z @ 0x180122688 (-OverrideNavigationLevelForView@ViewEventDispatcher@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Sh.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x180128B80 (-_Reallocate_exactly@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@.c)
 *     ??$emplace_back@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18012A010 (--$emplace_back@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsof.c)
 *     ?StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z @ 0x180139B5C (-StartActivity@PdcNotificationCallback@ViewManagerInteropTraceLogging@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall lambda_9d1d8d58343981d67c57f7f39dcd56a0_::operator()(_DWORD *a1)
{
  BOOL v2; // ebx
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v4; // rdi
  unsigned __int64 Ptr; // rdx
  unsigned __int64 *v6; // rsi
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  void (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 *v14; // rbx
  __int64 *v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  void *Block[2]; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v19; // [rsp+30h] [rbp-1A8h]
  unsigned __int64 v20[5]; // [rsp+38h] [rbp-1A0h] BYREF
  _QWORD v21[4]; // [rsp+60h] [rbp-178h] BYREF
  int v22; // [rsp+80h] [rbp-158h]
  int *v23; // [rsp+88h] [rbp-150h]
  int *v24; // [rsp+90h] [rbp-148h]
  int v25; // [rsp+98h] [rbp-140h] BYREF
  char v26; // [rsp+9Ch] [rbp-13Ch]
  int v27; // [rsp+C0h] [rbp-118h] BYREF
  const char *v28; // [rsp+C8h] [rbp-110h]
  __int64 v29; // [rsp+D0h] [rbp-108h]
  char v30; // [rsp+D8h] [rbp-100h]
  __int64 v31; // [rsp+E0h] [rbp-F8h]
  _BYTE v32[144]; // [rsp+E8h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+178h] [rbp-60h]
  __int64 v34; // [rsp+180h] [rbp-58h]
  __int64 v35; // [rsp+188h] [rbp-50h]
  __int64 v36; // [rsp+190h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v20[1] = -2LL;
  *(_BYTE *)(*(_QWORD *)a1 + 40LL) = a1[6] == 1;
  v2 = *(_BYTE *)(*(_QWORD *)a1 + 40LL) != 0;
  v21[1] = 0LL;
  v21[2] = v21;
  v21[3] = 0LL;
  v22 = 0;
  v23 = &v27;
  v24 = &v25;
  v25 = 0;
  v26 = 0;
  v30 = 0;
  v27 = 0;
  v28 = "PdcNotificationCallback";
  v29 = 0LL;
  v31 = 1LL;
  v33 = 0LL;
  v34 = 0LL;
  memset(v32, 0, sizeof(v32));
  v35 = 0LL;
  v36 = 0LL;
  v21[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  ViewManagerInteropTraceLogging::PdcNotificationCallback::StartActivity(
    (ViewManagerInteropTraceLogging::PdcNotificationCallback *)v21,
    v2);
  try
  {
    *(_OWORD *)Block = 0LL;
    v19 = 0LL;
    v3 = *(RTL_SRWLOCK **)(*(_QWORD *)a1 + 24LL);
    v4 = v3 + 37;
    AcquireSRWLockShared(v3 + 37);
    v20[2] = (unsigned __int64)&v3[37];
    Ptr = (unsigned __int64)v3[47].Ptr;
    if ( Ptr )
    {
      if ( Ptr > 0x1FFFFFFFFFFFFFFFLL )
        std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IViewHostItem>>::_Xlength();
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        (__int64 **)Block,
        Ptr);
    }
    v6 = (unsigned __int64 *)v3[46].Ptr;
    v7 = &v6[(__int64)v3[47].Ptr];
    while ( v6 != v7 )
    {
      v8 = *v6;
      v20[3] = v8;
      if ( v8 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))(v8);
      v20[0] = v8;
      if ( v8 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 8LL))(v8);
      std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::emplace_back<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
        (__int64)Block,
        v20);
      if ( v20[0] )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
      if ( v8 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8);
      ++v6;
    }
    if ( v4 )
      ReleaseSRWLockShared(v4);
    v9 = Block[0];
    v10 = Block[1];
    while ( v9 != v10 )
    {
      v11 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9;
      if ( *v9 )
        ((void (__fastcall *)(_QWORD))(*v11)[1])(*v9);
      ViewEventDispatcher::OverrideNavigationLevelForView(
        *(RTL_SRWLOCK **)(*(_QWORD *)a1 + 24LL),
        v11,
        *(_BYTE *)(*(_QWORD *)a1 + 40LL) != 0 ? 2 : 0);
      if ( v11 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
      ++v9;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21);
    v14 = (__int64 *)Block[0];
    if ( Block[0] )
    {
      v15 = (__int64 *)Block[1];
      if ( Block[0] != Block[1] )
      {
        do
        {
          v12 = *v14;
          if ( *v14 )
          {
            *v14 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
          ++v14;
        }
        while ( v14 != v15 );
        v14 = (__int64 *)Block[0];
      }
      v16 = (v19 - (__int64)v14) >> 3;
      if ( v16 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        if ( 8 * v16 < 0x1000 )
        {
LABEL_38:
          operator delete(v14);
          goto LABEL_43;
        }
        if ( ((unsigned __int8)v14 & 0x1F) == 0 )
        {
          v17 = *(v14 - 1);
          if ( v17 < (unsigned __int64)v14 && (unsigned __int64)v14 - v17 - 8 <= 0x1F )
          {
            v14 = (__int64 *)*(v14 - 1);
            goto LABEL_38;
          }
        }
      }
      _o__invalid_parameter_noinfo_noreturn(v12);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x61,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\connectedstandbyhelper.cpp",
      v13);
  }
LABEL_43:
  v21[0] = &ViewManagerInteropTraceLogging::PdcNotificationCallback::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
}
