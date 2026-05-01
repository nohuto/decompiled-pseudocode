/*
 * XREFs of ??_E?$__abi_FunctorCapture@V_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_@@XPE$AAVWindow@Xaml@UI@Windows@@PEAUHWND__@@@Details@Platform@@UEAAPEAXI@Z @ 0x180149370
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_ @ 0x1801482CC (_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_--__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall Platform::Details::__abi_FunctorCapture<_lambda_59c80d91275ef09dee0ea9ccd3ec1c84_,void,Windows::UI::Xaml::Window __gc *,HWND__ *>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  lambda_59c80d91275ef09dee0ea9ccd3ec1c84_::__lambda_59c80d91275ef09dee0ea9ccd3ec1c84_((__int64)(Block + 1));
  *Block = &Platform::Details::__abi_CaptureBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
