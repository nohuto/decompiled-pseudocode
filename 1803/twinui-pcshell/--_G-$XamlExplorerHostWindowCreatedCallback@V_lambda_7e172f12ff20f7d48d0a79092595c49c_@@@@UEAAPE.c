/*
 * XREFs of ??_G?$XamlExplorerHostWindowCreatedCallback@V_lambda_7e172f12ff20f7d48d0a79092595c49c_@@@@UEAAPEAXI@Z @ 0x180216CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_ @ 0x18021687C (_lambda_7e172f12ff20f7d48d0a79092595c49c_--__lambda_7e172f12ff20f7d48d0a79092595c49c_.c)
 */

__int64 *__fastcall XamlExplorerHostWindowCreatedCallback<_lambda_7e172f12ff20f7d48d0a79092595c49c_>::`scalar deleting destructor'(
        __int64 *a1,
        char a2)
{
  lambda_7e172f12ff20f7d48d0a79092595c49c_::__lambda_7e172f12ff20f7d48d0a79092595c49c_(a1 + 6);
  *((_DWORD *)a1 + 11) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 3);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
