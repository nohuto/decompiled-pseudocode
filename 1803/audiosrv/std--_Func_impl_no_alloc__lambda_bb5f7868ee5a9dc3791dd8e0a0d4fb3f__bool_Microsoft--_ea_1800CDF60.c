/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bb5f7868ee5a9dc3791dd8e0a0d4fb3f__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64_::_Do_call @ 0x1800CDF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_bb5f7868ee5a9dc3791dd8e0a0d4fb3f__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  LPCWCH *v5; // rbx
  const WCHAR *v6; // rax
  char v7; // di

  if ( **(_DWORD **)(a1 + 8) != (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 168LL))(*a2) )
    return 0;
  v4 = *a2;
  v5 = *(LPCWCH **)(a1 + 16);
  v6 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 160LL))(v4);
  v7 = 1;
  if ( CompareStringOrdinal(v6, -1, *v5, -1, 1) != 2 )
    return 0;
  return v7;
}
