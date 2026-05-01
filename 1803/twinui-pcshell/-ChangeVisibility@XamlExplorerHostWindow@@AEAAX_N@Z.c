/*
 * XREFs of ?ChangeVisibility@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x18020167C
 * Callers:
 *     ?Hide@XamlExplorerHostWindow@@UEAAXXZ @ 0x180201880 (-Hide@XamlExplorerHostWindow@@UEAAXXZ.c)
 *     ?Show@XamlExplorerHostWindow@@UEAAXXZ @ 0x180201C30 (-Show@XamlExplorerHostWindow@@UEAAXXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___ @ 0x180201088 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x180201848 (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall XamlExplorerHostWindow::ChangeVisibility(XamlExplorerHostWindow *this, char a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rbx
  XamlExplorerHostWindow *v6; // [rsp+28h] [rbp-30h] BYREF
  char v7; // [rsp+30h] [rbp-28h]
  XamlExplorerHostWindow *v8; // [rsp+38h] [rbp-20h] BYREF
  XamlExplorerHostWindow *v9; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+70h] [rbp+18h]
  __int64 v11; // [rsp+78h] [rbp+20h]

  if ( a2 )
    XamlExplorerHostWindow::Cloak(this);
  if ( *((_QWORD *)this + 9) )
  {
    v9 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v10 = v4;
    v6 = this;
    v7 = a2;
    v8 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    v5 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ce1757ecd12cf6f9278b9e6ca5e18ec8___(
           v4,
           (__int64)&v6);
    v10 = v5;
    v11 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v5);
    __abi_winrt_ptr_dtor(v11);
    __abi_winrt_ptr_dtor((__int64)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
  }
}
