/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180174840
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Ref_count_obj<std::wstring>::_Destroy(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 >= 8 )
    std::_Deallocate(*(char **)(a1 + 16), v1 + 1, 2uLL);
}
