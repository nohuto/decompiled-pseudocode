/*
 * XREFs of _lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator() @ 0x1801F7A78
 * Callers:
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IXamlExplorerHostWindow_________lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e___ @ 0x1801F74E4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IX.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall lambda_a3c0ee3324251dd54d4d9fdc0ecbe67e_::operator()(_DWORD *a1, __int64 *a2)
{
  HWND v4; // rax
  bool v5; // bl
  struct tagRECT Rect; // [rsp+30h] [rbp-28h] BYREF

  v4 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 40LL))(*a2);
  v5 = 0;
  if ( GetWindowRect(v4, &Rect) && Rect.left == *a1 && Rect.top == a1[1] && Rect.right == a1[2] )
    v5 = Rect.bottom == a1[3];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v5;
}
