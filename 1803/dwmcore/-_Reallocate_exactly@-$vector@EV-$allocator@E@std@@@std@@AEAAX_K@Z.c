/*
 * XREFs of ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1802097B8
 * Callers:
 *     ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x180209824 (-reserve@-$vector@EV-$allocator@E@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::vector<unsigned char>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  void *v5; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = (void *)std::_Allocate<std::_Default_allocate_traits<1>>(a2, 1uLL);
  memmove(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned char>::_Change_array(a1, (__int64)v5, v3, a2);
}
