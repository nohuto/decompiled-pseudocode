/*
 * XREFs of ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x180012F0C
 * Callers:
 *     ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x180012FF8 (-reserve@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rbx

  v4 = (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) / 20LL;
  v5 = (void *)std::_Allocate<std::_Default_allocate_traits<1>>(a2, 20LL);
  memmove(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<D2D1_GRADIENT_STOP>::_Change_array(a1, v5, v4, a2);
}
