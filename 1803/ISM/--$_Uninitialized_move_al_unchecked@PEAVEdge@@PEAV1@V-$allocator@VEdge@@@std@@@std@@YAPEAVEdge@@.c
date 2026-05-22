/*
 * XREFs of ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@00AEAV?$allocator@VEdge@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180069998
 * Callers:
 *     ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C (--$emplace_back@AEBVEdge@@@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  _QWORD *v4; // r9
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 *v8; // [rsp+50h] [rbp+18h]
  __int64 *v9; // [rsp+58h] [rbp+20h]

  v8 = a3;
  v9 = a3;
  try
  {
    if ( a1 != a2 )
    {
      v4 = a3 + 5;
      v5 = a1 + 8;
      do
      {
        *a3 = *(_QWORD *)(v5 - 8);
        *(v4 - 2) = 0LL;
        *(v4 - 1) = 0LL;
        *((_OWORD *)v4 - 2) = *(_OWORD *)v5;
        *((_OWORD *)v4 - 1) = *(_OWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = 0LL;
        *(_QWORD *)(v5 + 24) = 7LL;
        *(_WORD *)v5 = 0;
        *v4 = 0LL;
        v6 = (_QWORD *)(v5 + 32);
        if ( v4 != (_QWORD *)(v5 + 32) )
        {
          *v4 = *v6;
          *v6 = 0LL;
        }
        *((_DWORD *)v4 + 2) = *(_DWORD *)(v5 + 40);
        *(_OWORD *)((char *)v4 + 12) = *(_OWORD *)(v5 + 44);
        *(_OWORD *)((char *)v4 + 28) = *(_OWORD *)(v5 + 60);
        *(_QWORD *)((char *)v4 + 44) = *(_QWORD *)(v5 + 76);
        a3 += 12;
        v8 = a3;
        v4 += 12;
        v5 += 96LL;
      }
      while ( v5 - 8 != a2 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Edge>>(v9, v8);
    throw;
  }
  return a3;
}
