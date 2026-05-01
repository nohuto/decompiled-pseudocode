/*
 * XREFs of ?OnAdded@ViewManagerBridge@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18010B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x1800F32D4 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@PEAUIShellView@Server@Navigation@@@OnAdded@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAPEAUIShellView@Server@Navigation@@@Z @ 0x18010DC60 (--$Start@PEAUIShellView@Server@Navigation@@@OnAdded@ViewManagerInteropTraceLogging@@SA-AV01@$$QE.c)
 *     ??$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLogging@@SAX$$QEAPEAUIShellView@Server@Navigation@@AEAI@Z @ 0x18010DD1C (--$ViewToViewInstanceIdMapping@PEAUIShellView@Server@Navigation@@AEAI@ViewManagerInteropTraceLog.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewManagerBridge::OnAdded(
        ViewEventDispatcher **this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v7; // rax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct IUnknown *v16; // rcx
  struct IUnknown *v18; // [rsp+20h] [rbp-188h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-180h] BYREF
  __int64 v20; // [rsp+30h] [rbp-178h] BYREF
  __int64 v21; // [rsp+38h] [rbp-170h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v23[40]; // [rsp+50h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v22[1] = -2LL;
  try
  {
    v18 = 0LL;
    lpVtbl = a4->lpVtbl;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v18);
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a4,
           &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
           v7);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3C5,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v8);
    v22[0] = v18;
    ViewManagerInteropTraceLogging::OnAdded::Start<Navigation::Server::IShellView *>((ViewManagerInteropTraceLogging::OnAdded *)v23);
    v21 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v18->lpVtbl[4].AddRef)(v18, &v21);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3CE,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v21 + 56LL))(
            v21,
            (unsigned __int64)(this + 1) & ((unsigned __int128)-(__int128)(unsigned __int64)(this - 2) >> 64));
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3CF,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v10);
    v20 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v18->lpVtbl->QueryInterface)(
            v18,
            &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
            &v20);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3D6,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v11);
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v20 + 56LL))(
            v20,
            (unsigned __int64)(this - 1) & -(__int64)(this != (ViewEventDispatcher **)16));
    if ( v12 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3D7,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v12);
    v13 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v18->lpVtbl[6].AddRef)(v18, &v19);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3DA,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v13);
    v22[0] = v18;
    ViewManagerInteropTraceLogging::ViewToViewInstanceIdMapping<Navigation::Server::IShellView *,unsigned int &>(
      v22,
      &v19);
    ViewEventDispatcher::ViewCreated(this[7], v19, v18);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v23);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v23[0] = &ViewManagerInteropTraceLogging::OnAdded::`vftable';
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v23);
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v23);
    v16 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
    }
  }
  catch ( ... )
  {
  }
  return 0LL;
}
