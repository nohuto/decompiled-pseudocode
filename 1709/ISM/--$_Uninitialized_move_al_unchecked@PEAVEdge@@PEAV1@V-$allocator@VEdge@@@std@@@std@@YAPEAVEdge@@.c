/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@00AEAU?$_Wrap_alloc@V?$allocator@VEdge@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002BA3C
 * Callers:
 *     ??$emplace_back@AEAVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z @ 0x18002B70C (--$emplace_back@AEAVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *(_OWORD *)a3 = *(_OWORD *)a1;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
        *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
        *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
        *(_QWORD *)(a3 + 64) = *(_QWORD *)(a1 + 64);
      }
      a3 += 72LL;
      a1 += 72LL;
    }
  }
  catch ( ... )
  {
    throw;
  }
  return a3;
}
