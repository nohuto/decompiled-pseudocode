/*
 * XREFs of ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x180201234
 * Callers:
 *     ??_GXamlExplorerHostWindow@@UEAAPEAXI@Z @ 0x1801FA8C0 (--_GXamlExplorerHostWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___ @ 0x180200E0C (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall XamlExplorerHostWindow::~XamlExplorerHostWindow(
        XamlExplorerHostWindow *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  XamlExplorerHostWindow *v4; // rbx
  _QWORD *v5; // rax
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  _QWORD *v10; // [rsp+60h] [rbp+18h]

  v4 = this;
  *(_QWORD *)this = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &XamlExplorerHostWindow::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  try
  {
    if ( *((_QWORD *)this + 9) )
    {
      v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
      v10 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_1301d951c5e9082c4f199997fa5a5a32___(v5);
      v6 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)v4 + 9), 0LL, (__int64)v10);
      __abi_winrt_ptr_dtor(v6);
      __abi_winrt_ptr_dtor((__int64)v10);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x21,
      (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostwindow.cpp",
      a4);
    v4 = this;
  }
  __abi_winrt_ptr_dtor(*((_QWORD *)v4 + 9));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4 + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4 + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4 + 6);
  *((_DWORD *)v4 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v4 + 4);
}
