/*
 * XREFs of ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801345D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18012DD0C (-StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x180134800 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::RemoveWindowFromView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v14[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  int *v18; // [rsp+70h] [rbp-98h]
  int *v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+80h] [rbp-88h] BYREF
  char v21; // [rsp+84h] [rbp-84h]
  int v22; // [rsp+A8h] [rbp-60h] BYREF
  const char *v23; // [rsp+B0h] [rbp-58h]
  __int64 v24; // [rsp+B8h] [rbp-50h]
  char v25; // [rsp+C0h] [rbp-48h]
  __int64 v26; // [rsp+C8h] [rbp-40h]
  _BYTE v27[144]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v28; // [rsp+160h] [rbp+58h]
  __int64 v29; // [rsp+168h] [rbp+60h]
  __int64 v30; // [rsp+170h] [rbp+68h]
  __int64 v31; // [rsp+178h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v15[1] = -2LL;
  if ( *((_BYTE *)this + 153) )
  {
    v6 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x231,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return v6;
  }
  v15[0] = 0LL;
  lpVtbl = a2->lpVtbl;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v15);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a2,
    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
    v8);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15[0] + 152LL))(v15[0], v14);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x237,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  v16[1] = 0LL;
  v16[2] = v16;
  v16[3] = 0LL;
  LODWORD(v17) = 0;
  v18 = &v22;
  v19 = &v20;
  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "RemoveWindowFromView";
  v24 = 0LL;
  v26 = 1LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  v30 = 0LL;
  v31 = 0LL;
  v16[0] = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
  ViewManagerInteropTraceLogging::RemoveWindowFromView::StartActivity(
    (ViewManagerInteropTraceLogging::RemoveWindowFromView *)v16,
    a3,
    v14[0]);
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 14) + 88LL))(
          *((_QWORD *)this + 14),
          a3,
          v14[0]);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v10 = ViewManagerBridge::CloseServerWindow(this, a3);
    v6 = v10;
    if ( v10 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16);
      v6 = 0;
      goto LABEL_11;
    }
    v11 = 572LL;
  }
  else
  {
    v11 = 570LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v10);
LABEL_11:
  v16[0] = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
LABEL_12:
  v12 = v15[0];
  if ( v15[0] )
  {
    v15[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
