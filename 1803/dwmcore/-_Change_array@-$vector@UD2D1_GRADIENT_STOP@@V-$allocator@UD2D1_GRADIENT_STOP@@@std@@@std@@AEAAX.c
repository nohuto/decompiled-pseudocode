/*
 * XREFs of ?_Change_array@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAXQEAUD2D1_GRADIENT_STOP@@_K1@Z @ 0x180012F98
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x180012020 (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 *     ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x180012F0C (-_Reallocate_exactly@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate(v6, (*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 20LL, 0x14uLL);
  *(_QWORD *)a1 = a2;
  result = 5 * a4;
  *(_QWORD *)(a1 + 8) = a2 + 20 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 20 * a4;
  return result;
}
