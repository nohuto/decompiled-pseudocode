/*
 * XREFs of _lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_ @ 0x18020116C
 * Callers:
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971___ @ 0x180200EAC (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_7ccf9452fd50a88876f719357fe01971.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_7ccf9452fd50a88876f719357fe01971_::_lambda_7ccf9452fd50a88876f719357fe01971_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx

  *a1 = *a2;
  v4 = a1 + 1;
  *v4 = a2[1];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v4);
  a1[2] = a2[2];
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(a1 + 2);
  return a1;
}
