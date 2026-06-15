/*
 * XREFs of std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call @ 0x1800451D0
 * Callers:
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x1800450C8 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 * Callees:
 *     ReconsiderSpatialOnComboEndpoints @ 0x180039894 (ReconsiderSpatialOnComboEndpoints.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AD6F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Do_call(
        __int64 a1)
{
  int v2; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ReconsiderSpatialOnComboEndpoints(*(_DWORD *)(a1 + 8), *(const unsigned __int16 **)(a1 + 16));
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1A2,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v2,
      v3);
  CoTaskMemFree(*(LPVOID *)(a1 + 16));
}
