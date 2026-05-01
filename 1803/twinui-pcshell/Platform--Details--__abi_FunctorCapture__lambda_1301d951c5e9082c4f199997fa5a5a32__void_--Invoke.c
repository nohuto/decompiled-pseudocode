/*
 * XREFs of Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180201890
 * Callers:
 *     <none>
 * Callees:
 *     ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x1801FBB24 (-get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ.c)
 *     ?Close@IWindow@Xaml@UI@Windows@@UE$AAAXXZ @ 0x180200B10 (-Close@IWindow@Xaml@UI@Windows@@UE$AAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  __int64 v4; // rbx

  v4 = Windows::UI::Xaml::Window::Current::get(a1, a2, a3, a4);
  Windows::UI::Xaml::IWindow::Close(v4);
  return __abi_winrt_ptr_dtor(v4);
}
