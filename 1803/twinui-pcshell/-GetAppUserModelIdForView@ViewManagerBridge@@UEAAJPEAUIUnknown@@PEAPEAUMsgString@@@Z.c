/*
 * XREFs of ?GetAppUserModelIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEAPEAUMsgString@@@Z @ 0x180055B40
 * Callers:
 *     ?_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@PEA_N@Z @ 0x180032D68 (-_EnsureViewHasWrapperAndListener@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@PEAPEA.c)
 *     ?_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z @ 0x180032FD0 (-_HandleWindowCreatedForExistingView@ViewEventDispatcher@@AEAAJPEAUHWND__@@I@Z.c)
 *     ?ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z @ 0x180035DF0 (-ViewCreated@ViewEventDispatcher@@QEAAXIPEAUIUnknown@@@Z.c)
 *     _lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator() @ 0x1801C8DDC (_lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::GetAppUserModelIdForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        struct MsgString **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_BYTE *)this + 145) )
  {
    v6 = -2147417848;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x246,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)0x80010108LL,
      -2);
    return v6;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 585LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v5,
      -2);
    goto LABEL_4;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, struct MsgString **))(*(_QWORD *)v10 + 24LL))(v10, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 586LL;
    goto LABEL_9;
  }
LABEL_4:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v6;
}
