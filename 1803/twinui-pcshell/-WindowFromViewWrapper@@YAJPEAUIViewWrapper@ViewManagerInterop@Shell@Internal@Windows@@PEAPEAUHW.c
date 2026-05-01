/*
 * XREFs of ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x180003CC8
 * Callers:
 *     _lambda_cc443415f5ecfa248de51aa242c4a017_::operator() @ 0x180003950 (_lambda_cc443415f5ecfa248de51aa242c4a017_--operator().c)
 *     _lambda_3c4ff4ccd576f8db880f0fb482543cc9_::operator() @ 0x18011DCEC (_lambda_3c4ff4ccd576f8db880f0fb482543cc9_--operator().c)
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180127238 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z @ 0x1800534D0 (-get_ClientWindow@ViewWrapperBase@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowFromViewWrapper(
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a1,
        HWND *a2)
{
  int v4; // ebx
  __int64 (__fastcall *v5)(ViewWrapperBase *__hidden, unsigned int *); // rax
  int ClientWindow; // eax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  ViewWrapperBase *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  v4 = (**(__int64 (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, ViewWrapperBase **))a1)(
         a1,
         &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
         &v9);
  if ( v4 >= 0 )
  {
    v5 = *(__int64 (__fastcall **)(ViewWrapperBase *__hidden, unsigned int *))(*(_QWORD *)v9 + 48LL);
    if ( v5 == ViewWrapperBase::get_ClientWindow )
      ClientWindow = ViewWrapperBase::get_ClientWindow(v9, &v8);
    else
      ClientWindow = v5(v9, &v8);
    v4 = ClientWindow;
    if ( ClientWindow >= 0 )
      *a2 = (HWND)(int)v8;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return (unsigned int)v4;
}
