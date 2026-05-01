/*
 * XREFs of ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801098F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800F04B8 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800FBD30 (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800FC148 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??$Start@AEAIAEAI@AddWindowToView@ViewManagerInteropTraceLogging@@SA?AV01@AEAI0@Z @ 0x18010D500 (--$Start@AEAIAEAI@AddWindowToView@ViewManagerInteropTraceLogging@@SA-AV01@AEAI0@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C0h]
  _OWORD v17[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+80h] [rbp-80h]
  _OWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-50h]
  _QWORD v21[40]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v18 = -2LL;
  v16 = a3;
  if ( *((_BYTE *)this + 137) )
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
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v15 + 152LL))(v15, &v14);
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
  ViewManagerInteropTraceLogging::AddWindowToView::Start<unsigned int &,unsigned int &>((ViewManagerInteropTraceLogging::AddWindowToView *)v21);
  memset(v17, 0, 0x28uLL);
  v19[0] = v17[0];
  v19[1] = v17[1];
  v20 = *(_QWORD *)&v17[2];
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, _OWORD *))(**((_QWORD **)this + 12) + 64LL))(
          *((_QWORD *)this + 12),
          a3,
          v17,
          v19);
  v6 = v10;
  if ( v10 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 12) + 80LL))(
            *((_QWORD *)this + 12),
            a3,
            v14);
    v6 = v10;
    if ( v10 >= 0 )
    {
      wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v21);
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
  v21[0] = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v21);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v21);
LABEL_12:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
