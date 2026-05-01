/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B790
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x1800F373C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@PEAUIShellView@Server@Navigation@@@OnRemoved@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAPEAUIShellView@Server@Navigation@@@Z @ 0x18010DDCC (--$Start@PEAUIShellView@Server@Navigation@@@OnRemoved@ViewManagerInteropTraceLogging@@SA-AV01@$$.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnRemoved(
        RTL_SRWLOCK **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-188h] BYREF
  __int64 v21; // [rsp+28h] [rbp-180h] BYREF
  __int64 v22; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-170h] BYREF
  __int64 v24; // [rsp+40h] [rbp-168h]
  __int64 v25; // [rsp+48h] [rbp-160h]
  _QWORD v26[40]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v25 = -2LL;
  try
  {
    v20 = 0LL;
    lpVtbl = a4->lpVtbl;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a4,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3F0,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v24 = v20;
    ViewManagerInteropTraceLogging::OnRemoved::Start<Navigation::Server::IShellView *>((ViewManagerInteropTraceLogging::OnRemoved *)v26);
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 152LL))(v20, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3F5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    ViewEventDispatcher::ViewDestroyed(this[7], v23);
    v22 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 104LL))(v20, &v22);
    v11 = retaddr;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v22 + 64LL))(
              v22,
              (unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 2) >> 64));
      v11 = retaddr;
      if ( v10 >= 0 )
        goto LABEL_11;
      v12 = 1020LL;
    }
    else
    {
      v12 = 1018LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v11,
      (void *)v12,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    v21 = 0LL;
    v13 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
            v20,
            &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
            &v21);
    v14 = retaddr;
    if ( v13 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 64LL))(
              v21,
              (unsigned __int64)(this - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 2) >> 64));
      v14 = retaddr;
      if ( v13 >= 0 )
      {
LABEL_16:
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v26);
        v16 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        v26[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v26);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v26);
        v18 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        return 0LL;
      }
      v15 = 1026LL;
    }
    else
    {
      v15 = 1024LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v14,
      (void *)v15,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_16;
  }
  catch ( ... )
  {
  }
  return 0LL;
}
