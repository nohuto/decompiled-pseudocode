/*
 * XREFs of ?RunCallback@XamlExplorerHostWindow@@UEAAXPEAUIXamlExplorerHostWindowCreatedCallback@@@Z @ 0x180201910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___ @ 0x180200EAC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlExplorerHostWindow::RunCallback(
        XamlExplorerHostWindow *this,
        struct IXamlExplorerHostWindowCreatedCallback *a2)
{
  RTL_SRWLOCK *v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // [rsp+28h] [rbp-28h]
  XamlExplorerHostWindow *v8; // [rsp+30h] [rbp-20h] BYREF
  XamlExplorerHostWindow *v9; // [rsp+38h] [rbp-18h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v10; // [rsp+40h] [rbp-10h] BYREF
  struct IXamlExplorerHostWindowCreatedCallback *v11; // [rsp+80h] [rbp+30h] BYREF
  XamlExplorerHostWindow *v12; // [rsp+88h] [rbp+38h] BYREF
  RTL_SRWLOCK *v13; // [rsp+90h] [rbp+40h]
  _QWORD *v14; // [rsp+98h] [rbp+48h]

  v4 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockExclusive((PSRWLOCK)this + 12);
  v13 = v4;
  v12 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v11 = a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v11);
  if ( *((_QWORD *)this + 9) )
  {
    v5 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v14 = v5;
    v8 = this;
    v9 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    v10 = a2;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v10);
    v6 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___(
           v5,
           (__int64)&v8);
    v14 = v6;
    v7 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v6);
    __abi_winrt_ptr_dtor(v7);
    __abi_winrt_ptr_dtor((__int64)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
