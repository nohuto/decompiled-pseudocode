/*
 * XREFs of std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___ @ 0x1801F74E4
 * Callers:
 *     ?GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPEAX@Z @ 0x1801F87A0 (-GrabAvailableWindowForSize@XamlExplorerHostShellComponent@@AEAAJUtagRECT@@PEA_NAEBU_GUID@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ??0?$CAutoHandle@PEAX@@QEAA@PEAX@Z @ 0x1801F7330 (--0-$CAutoHandle@PEAX@@QEAA@PEAX@Z.c)
 *     _lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator() @ 0x1801F7A78 (_lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_--operator().c)
 */

__int64 **__fastcall std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 v7; // rdi
  __int64 *v8; // r8
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h] BYREF

  v7 = *CAutoHandle<void *>::CAutoHandle<void *>(&v11, a4);
  if ( a2 != v8 )
  {
    do
    {
      v10 = *a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v10);
      if ( (unsigned __int8)lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator()(v7, &v10) )
        break;
      ++a2;
    }
    while ( a2 != a3 );
  }
  *a1 = a2;
  return a1;
}
