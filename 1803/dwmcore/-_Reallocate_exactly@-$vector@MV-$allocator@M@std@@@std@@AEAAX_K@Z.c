/*
 * XREFs of ?_Reallocate_exactly@?$vector@MV?$allocator@M@std@@@std@@AEAAX_K@Z @ 0x1801A53AC
 * Callers:
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x1801A541C (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 */

__int64 __fastcall std::vector<float>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  void *v5; // rbx

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v5 = (void *)std::_Allocate<std::_Default_allocate_traits<1>>(a2, 4uLL);
  memmove(v5, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned int>::_Change_array(a1, (__int64)v5, v4, a2);
}
