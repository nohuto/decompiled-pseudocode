/*
 * XREFs of ?RemoveWindowFromView@ViewManagerBridge@@UEAAJPEAUIUnknown@@I@Z @ 0x1801DDBE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180058E0C (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180058F40 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1801DB910 (--1RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ?CloseServerWindow@ViewManagerBridge@@UEAAJI@Z @ 0x1801DBE00 (-CloseServerWindow@ViewManagerBridge@@UEAAJI@Z.c)
 *     ?StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1801DEC28 (-StartActivity@RemoveWindowFromView@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewManagerBridge::RemoveWindowFromView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v12[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v13[40]; // [rsp+48h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B0h] [rbp+A8h]

  v12[1] = -2LL;
  if ( !*((_BYTE *)this + 145) )
  {
    v12[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      v12);
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12[0] + 152LL))(v12[0], v11);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22C,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v7);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v12);
      return v6;
    }
    wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v13,
      (__int64)"RemoveWindowFromView");
    v13[0] = &ViewManagerInteropTraceLogging::RemoveWindowFromView::`vftable';
    ViewManagerInteropTraceLogging::RemoveWindowFromView::StartActivity(
      (ViewManagerInteropTraceLogging::RemoveWindowFromView *)v13,
      a3,
      v11[0]);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 88LL))(
           *((_QWORD *)this + 13),
           a3,
           v11[0]);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v8 = ViewManagerBridge::CloseServerWindow(this, a3);
      v6 = v8;
      if ( v8 >= 0 )
      {
        wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
        v6 = 0;
        goto LABEL_11;
      }
      v9 = 561LL;
    }
    else
    {
      v9 = 559LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v8);
LABEL_11:
    ViewManagerInteropTraceLogging::RemoveWindowFromView::~RemoveWindowFromView((ViewManagerInteropTraceLogging::RemoveWindowFromView *)v13);
    goto LABEL_12;
  }
  v6 = -2147417848;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x226,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)0x80010108LL);
  return v6;
}
