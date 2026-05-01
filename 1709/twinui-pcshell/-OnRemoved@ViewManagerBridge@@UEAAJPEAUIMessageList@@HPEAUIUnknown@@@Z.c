/*
 * XREFs of ?OnRemoved@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x1801364C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18011E3B8 (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z @ 0x18012FD1C (-StartActivity@OnRemoved@ViewManagerInteropTraceLogging@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  void *v18; // rcx
  void *v20; // [rsp+20h] [rbp-198h] BYREF
  __int64 v21; // [rsp+28h] [rbp-190h] BYREF
  __int64 v22; // [rsp+30h] [rbp-188h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-180h] BYREF
  __int64 v24; // [rsp+40h] [rbp-178h]
  _QWORD v25[4]; // [rsp+50h] [rbp-168h] BYREF
  int v26; // [rsp+70h] [rbp-148h]
  int *v27; // [rsp+78h] [rbp-140h]
  int *v28; // [rsp+80h] [rbp-138h]
  int v29; // [rsp+88h] [rbp-130h] BYREF
  char v30; // [rsp+8Ch] [rbp-12Ch]
  int v31; // [rsp+B0h] [rbp-108h] BYREF
  const char *v32; // [rsp+B8h] [rbp-100h]
  __int64 v33; // [rsp+C0h] [rbp-F8h]
  char v34; // [rsp+C8h] [rbp-F0h]
  __int64 v35; // [rsp+D0h] [rbp-E8h]
  _BYTE v36[144]; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v37; // [rsp+168h] [rbp-50h]
  __int64 v38; // [rsp+170h] [rbp-48h]
  __int64 v39; // [rsp+178h] [rbp-40h]
  __int64 v40; // [rsp+180h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+0h]

  v24 = -2LL;
  try
  {
    v20 = 0LL;
    lpVtbl = a4->lpVtbl;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v20);
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
    v25[1] = 0LL;
    v25[2] = v25;
    v25[3] = 0LL;
    v26 = 0;
    v27 = &v31;
    v28 = &v29;
    v29 = 0;
    v30 = 0;
    v34 = 0;
    v31 = 0;
    v32 = "OnRemoved";
    v33 = 0LL;
    v35 = 1LL;
    v37 = 0LL;
    v38 = 0LL;
    memset(v36, 0, sizeof(v36));
    v39 = 0LL;
    v40 = 0LL;
    v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
    ViewManagerInteropTraceLogging::OnRemoved::StartActivity((ViewManagerInteropTraceLogging::OnRemoved *)v25, v20);
    v9 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v20 + 152LL))(v20, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3F5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    ViewEventDispatcher::ViewDestroyed(this[9], v23);
    v22 = 0LL;
    v10 = (*(__int64 (__fastcall **)(void *, __int64 *))(*(_QWORD *)v20 + 104LL))(v20, &v22);
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
    v13 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v20)(
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
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25);
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
        v25[0] = &ViewManagerInteropTraceLogging::OnRemoved::`vftable';
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
        v18 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
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
