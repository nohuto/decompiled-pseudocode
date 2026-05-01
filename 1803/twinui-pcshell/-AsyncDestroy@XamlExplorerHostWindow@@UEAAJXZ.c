/*
 * XREFs of ?AsyncDestroy@XamlExplorerHostWindow@@UEAAJXZ @ 0x180201560
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x180200C38 (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___ @ 0x180200FA4 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc.c)
 *     ?Cloak@XamlExplorerHostWindow@@AEAAXXZ @ 0x180201848 (-Cloak@XamlExplorerHostWindow@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlExplorerHostWindow::AsyncDestroy(XamlExplorerHostWindow *this)
{
  RTL_SRWLOCK *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  unsigned int v5; // ebx
  XamlExplorerHostWindow *v7; // [rsp+28h] [rbp-30h] BYREF
  XamlExplorerHostWindow *v8; // [rsp+30h] [rbp-28h] BYREF
  XamlExplorerHostWindow *v9; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+68h] [rbp+10h]
  _QWORD *v11; // [rsp+70h] [rbp+18h]
  __int64 v12; // [rsp+78h] [rbp+20h]

  v2 = (RTL_SRWLOCK *)((char *)this + 96);
  AcquireSRWLockShared((PSRWLOCK)this + 12);
  v10 = v2;
  XamlExplorerHostWindow::Cloak(this);
  if ( *((_QWORD *)this + 9) )
  {
    v9 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v9);
    v3 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v11 = v3;
    v7 = this;
    v8 = this;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v8);
    v4 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_bf3c92b221d60276737ef151eb6f13fc___(
           v3,
           (__int64)&v7);
    v11 = v4;
    v12 = Windows::UI::Core::ICoreDispatcher::RunAsync(*((_QWORD *)this + 9), 0LL, (__int64)v4);
    __abi_winrt_ptr_dtor(v12);
    __abi_winrt_ptr_dtor((__int64)v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    v5 = 0;
  }
  else
  {
    v5 = -2147019873;
  }
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return v5;
}
