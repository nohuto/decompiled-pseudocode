/*
 * XREFs of ?AddWindowToView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DB9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB7A8 (--1AddWindowToView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801DE084 (-StartActivity@AddWindowToView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::AddWindowToView(ViewManagerBridge *this, struct IUnknown *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  _OWORD v16[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-60h]
  _QWORD v18[40]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v15 = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    v12 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v12);
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 152LL))(v12, v11);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1FB,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      return v6;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v18,
      (__int64)"AddWindowToView");
    v18[0] = &ViewManagerInteropTraceLogging::AddWindowToView::`vftable';
    ViewManagerInteropTraceLogging::AddWindowToView::StartActivity(
      (ViewManagerInteropTraceLogging::AddWindowToView *)v18,
      a3,
      v11[0]);
    memset_0(v13, 0, 0x28uLL);
    v16[0] = v13[0];
    v16[1] = v13[1];
    v17 = v14;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *, _OWORD *))(**((_QWORD **)this + 13) + 64LL))(
           *((_QWORD *)this + 13),
           a3,
           v13,
           v16);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 80LL))(
             *((_QWORD *)this + 13),
             a3,
             v11[0]);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18);
        v6 = 0;
        goto LABEL_11;
      }
      v9 = 514LL;
    }
    else
    {
      v9 = 512LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    ViewManagerInteropTraceLogging::AddWindowToView::~AddWindowToView((ViewManagerInteropTraceLogging::AddWindowToView *)v18);
    goto LABEL_12;
  }
  v6 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F5,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return v6;
}
