/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x1800CB380
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180043ECC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj<std::wstring>::_Destroy(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 8 )
    std::_Deallocate(*(_QWORD **)(a1 + 16), v1 + 1, 2uLL);
  result = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
  return result;
}
