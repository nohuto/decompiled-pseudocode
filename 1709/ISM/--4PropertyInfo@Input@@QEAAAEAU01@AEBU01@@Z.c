/*
 * XREFs of ??4PropertyInfo@Input@@QEAAAEAU01@AEBU01@@Z @ 0x180033D28
 * Callers:
 *     ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180033864 (-DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z.c)
 * Callees:
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 */

__int64 __fastcall Input::PropertyInfo::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  char **v5; // rcx
  const void *v6; // r9
  char *v7; // rdx
  char *v8; // rbp
  __int64 v9; // rbx

  *(_OWORD *)a1 = *(_OWORD *)a2;
  v5 = (char **)(a1 + 16);
  if ( v5 != (char **)(a2 + 16) )
  {
    v6 = (const void *)(a2 + 16);
    if ( *(_QWORD *)(a2 + 40) >= 8uLL )
      v6 = *(const void **)(a2 + 16);
    v7 = *(char **)(a2 + 32);
    if ( v7 > v5[3] )
    {
      std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        v5,
        v7,
        a3,
        v6);
    }
    else
    {
      v8 = (char *)v5;
      if ( (unsigned __int64)v5[3] >= 8 )
        v8 = *v5;
      v9 = 2LL * (_QWORD)v7;
      v5[2] = v7;
      memmove(v8, v6, 2LL * (_QWORD)v7);
      *(_WORD *)&v8[v9] = 0;
    }
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  return a1;
}
