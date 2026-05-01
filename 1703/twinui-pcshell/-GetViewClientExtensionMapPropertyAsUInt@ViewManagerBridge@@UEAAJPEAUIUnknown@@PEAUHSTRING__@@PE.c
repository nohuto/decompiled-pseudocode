/*
 * XREFs of ?GetViewClientExtensionMapPropertyAsUInt@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAUHSTRING__@@PEAI@Z @ 0x18010A2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@PEAUIShellView@Server@Navigation@@PEBG@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAPEAUIShellView@Server@Navigation@@$$QEAPEBG@Z @ 0x18010D868 (--$Start@PEAUIShellView@Server@Navigation@@PEBG@GetViewClientExtensionMapPropertyAsUInt@ViewMana.c)
 *     ??$Value@AEAI@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXAEAI@Z @ 0x18010D934 (--$Value@AEAI@GetViewClientExtensionMapPropertyAsUInt@ViewManagerInteropTraceLogging@@QEAAXAEAI@.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewManagerBridge::GetViewClientExtensionMapPropertyAsUInt(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        HSTRING a3,
        unsigned int *a4)
{
  int v7; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v9; // rax
  int v10; // eax
  int Stack; // eax
  __int64 v12; // rdx
  PCWSTR StringRawBuffer; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-E0h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v26[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v27[24]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[40]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v26[1] = -2LL;
  *a4 = 0;
  if ( *((_BYTE *)this + 137) )
  {
    v7 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27E,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return (unsigned int)v7;
  }
  v23 = 0LL;
  lpVtbl = a2->lpVtbl;
  v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v23);
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
          a2,
          &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
          v9);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v25[1] = WindowsGetStringRawBuffer(a3, 0LL);
    v25[2] = v23;
    ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::Start<Navigation::Server::IShellView *,unsigned short const *>((ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt *)v28);
    v25[0] = 0LL;
    Stack = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v23 + 104LL))(v23, v25);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v12 = 646LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v12,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)Stack);
LABEL_24:
      v18 = v25[0];
      if ( v25[0] )
      {
        v25[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v28[0] = &ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::`vftable';
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v28);
      goto LABEL_27;
    }
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    Stack = MsgStringCreateStack(StringRawBuffer, 0xFFFFFFFFLL, v27, v26);
    v7 = Stack;
    if ( Stack < 0 )
    {
      v12 = 651LL;
      goto LABEL_9;
    }
    v22 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v25[0] + 48LL))(v25[0], v26[0], &v22);
    v14 = v22;
    if ( v7 < 0 )
    {
LABEL_22:
      if ( v14 )
      {
        v22 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
      }
      goto LABEL_24;
    }
    if ( !v22 )
    {
      v7 = -2147023728;
      goto LABEL_22;
    }
    v24 = 0LL;
    v15 = (**v22)(v22, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v24);
    v7 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v24 + 24LL))(v24, &v21);
      v7 = v15;
      if ( v15 >= 0 )
      {
        ViewManagerInteropTraceLogging::GetViewClientExtensionMapPropertyAsUInt::Value<unsigned int &>(v28, &v21);
        *a4 = v21;
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v28);
        v7 = 0;
        goto LABEL_19;
      }
      v16 = 661LL;
    }
    else
    {
      v16 = 658LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v15);
LABEL_19:
    v17 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v14 = v22;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x281,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v10);
LABEL_27:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  return (unsigned int)v7;
}
