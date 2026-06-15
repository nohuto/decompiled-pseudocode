/*
 * XREFs of std::_Func_impl_no_alloc__lambda_03ccc7c6494132c92b0b9b9254fb08d1__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64_::_Do_call @ 0x1800CDE90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Find@?$CAtlList@KV?$CElementTraits@K@ATL@@@ATL@@QEBAPEAU__POSITION@@KPEAU3@@Z @ 0x1800CC8B4 (-Find@-$CAtlList@KV-$CElementTraits@K@ATL@@@ATL@@QEBAPEAU__POSITION@@KPEAU3@@Z.c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_03ccc7c6494132c92b0b9b9254fb08d1__bool_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_____ptr64_::_Do_call(
        __int64 a1,
        __int64 **a2)
{
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 **v6; // rsi
  __int64 v7; // r8
  int v8; // ebx
  char v9; // r8

  v4 = (*(__int64 (__fastcall **)(__int64 *))(**a2 + 104))(*a2);
  v5 = *a2;
  v6 = (__int64 **)v4;
  v7 = **a2;
  v8 = **(_DWORD **)(a1 + 8);
  if ( (*(unsigned int (__fastcall **)(__int64 *))(v7 + 96))(v5) == v8 )
    return 1;
  v9 = 0;
  if ( **(_DWORD **)(a1 + 16) == 2 )
  {
    if ( ATL::CAtlList<unsigned long,ATL::CElementTraits<unsigned long>>::Find(v6, v8) )
      return 1;
  }
  return v9;
}
