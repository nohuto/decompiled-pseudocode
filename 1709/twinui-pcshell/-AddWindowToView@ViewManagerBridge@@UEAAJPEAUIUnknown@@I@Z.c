/*
 * XREFs of ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x180134190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18011AEE8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801270C0 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801274D8 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x18012D7AC (-StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::AddWindowToView(ViewManagerBridge *this, struct IUnknown *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  struct IUnknownVtbl *lpVtbl; // rbx
  __int64 *v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v14[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v16[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  _OWORD v18[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v19; // [rsp+A8h] [rbp-60h]
  _QWORD v20[4]; // [rsp+B8h] [rbp-50h] BYREF
  int v21; // [rsp+D8h] [rbp-30h]
  int *v22; // [rsp+E0h] [rbp-28h]
  int *v23; // [rsp+E8h] [rbp-20h]
  int v24; // [rsp+F0h] [rbp-18h] BYREF
  char v25; // [rsp+F4h] [rbp-14h]
  int v26; // [rsp+118h] [rbp+10h] BYREF
  const char *v27; // [rsp+120h] [rbp+18h]
  __int64 v28; // [rsp+128h] [rbp+20h]
  char v29; // [rsp+130h] [rbp+28h]
  __int64 v30; // [rsp+138h] [rbp+30h]
  _BYTE v31[144]; // [rsp+140h] [rbp+38h] BYREF
  __int64 v32; // [rsp+1D0h] [rbp+C8h]
  __int64 v33; // [rsp+1D8h] [rbp+D0h]
  __int64 v34; // [rsp+1E0h] [rbp+D8h]
  __int64 v35; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  v17 = -2LL;
  if ( *((_BYTE *)this + 153) )
  {
    v6 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x200,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL);
    return v6;
  }
  v15 = 0LL;
  lpVtbl = a2->lpVtbl;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
  ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
    a2,
    &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
    v8);
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 152LL))(v15, v14);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x206,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_12;
  }
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "AddWindowToView";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  v33 = 0LL;
  memset(v31, 0, sizeof(v31));
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
  ViewManagerInteropTraceLogging::AddWindowToView::StartActivity(
    (ViewManagerInteropTraceLogging::AddWindowToView *)v20,
    a3,
    v14[0]);
  memset(v16, 0, sizeof(v16));
  v18[0] = *(_OWORD *)v16;
  v18[1] = *(_OWORD *)&v16[16];
  v19 = *(_QWORD *)&v16[32];
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, _OWORD *))(**((_QWORD **)this + 14) + 64LL))(
          *((_QWORD *)this + 14),
          a3,
          v16,
          v18);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 14) + 80LL))(
            *((_QWORD *)this + 14),
            a3,
            v14[0]);
    v6 = v10;
    if ( v10 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20);
      v6 = 0;
      goto LABEL_11;
    }
    v11 = 525LL;
  }
  else
  {
    v11 = 523LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v10);
LABEL_11:
  v20[0] = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v20);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v20);
LABEL_12:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
