/*
 * XREFs of ??_E?$XamlExplorerHostWindowCreatedCallback@V_lambda_d4c350abf5d24183546902bae9e0768c_@@@@UEAAPEAXI@Z @ 0x1802088D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_ @ 0x1802071D8 (_lambda_d4c350abf5d24183546902bae9e0768c_--__lambda_d4c350abf5d24183546902bae9e0768c_.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_d4c350abf5d24183546902bae9e0768c_>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_d4c350abf5d24183546902bae9e0768c_::__lambda_d4c350abf5d24183546902bae9e0768c_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x90);
  return a1;
}
