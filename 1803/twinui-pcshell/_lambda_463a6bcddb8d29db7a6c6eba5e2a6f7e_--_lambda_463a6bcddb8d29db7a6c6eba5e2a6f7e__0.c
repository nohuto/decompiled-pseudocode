/*
 * XREFs of _lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0 @ 0x1802F0474
 * Callers:
 *     ?Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z @ 0x1802F1010 (-Hide@CDragVisual@@UEAAXW4DragVisualHideFlags@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e_::_lambda_463a6bcddb8d29db7a6c6eba5e2a6f7e__0(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1);
  a1[1] = *a3;
  return a1;
}
