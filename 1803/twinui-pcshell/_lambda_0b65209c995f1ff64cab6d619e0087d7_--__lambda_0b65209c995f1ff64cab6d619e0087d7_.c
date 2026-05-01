/*
 * XREFs of _lambda_0b65209c995f1ff64cab6d619e0087d7_::__lambda_0b65209c995f1ff64cab6d619e0087d7_ @ 0x1801C83B4
 * Callers:
 *     __lambda_c3441874af9188b8377da12ab0198c01_::operator()_::_1_::dtor$1 @ 0x1801C97AC (__lambda_c3441874af9188b8377da12ab0198c01_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_0b65209c995f1ff64cab6d619e0087d7_::__lambda_0b65209c995f1ff64cab6d619e0087d7_(__int64 a1)
{
  volatile int *v2; // rdx

  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease((__int64 *)(a1 + 8), v2);
}
