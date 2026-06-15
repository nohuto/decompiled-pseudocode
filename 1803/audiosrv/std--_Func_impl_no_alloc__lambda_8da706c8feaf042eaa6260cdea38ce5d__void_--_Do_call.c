/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call @ 0x1800EFB00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A66F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ReconsiderSpatialOnComboEndpoints @ 0x1800EF668 (ReconsiderSpatialOnComboEndpoints.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8da706c8feaf042eaa6260cdea38ce5d__void_::_Do_call(__int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ReconsiderSpatialOnComboEndpoints(*(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      420LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v2);
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
