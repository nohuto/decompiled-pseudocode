/*
 * XREFs of ??$emplace_back@AEAVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAXAEAVEdge@@@Z @ 0x18002B70C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z @ 0x18002B084 (-AddOrUpdate@Edges@@QEAAJAEBUEdgyInputSource@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@00AEAU?$_Wrap_alloc@V?$allocator@VEdge@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x18002BA3C (--$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall std::vector<Edge>::emplace_back<Edge &>(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r15
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  void *v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a1[2];
  v6 = a1[1];
  if ( v5 == v6 )
  {
    v7 = (v6 - *a1) / 72;
    if ( v7 == 0x38E38E38E38E38ELL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = (v5 - *a1) / 72;
    v10 = v9 >> 1;
    if ( v9 <= 0x38E38E38E38E38ELL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    v12 = std::_Allocate(v11, 0x48uLL);
    try
    {
      v13 = &v12[9 * v7];
      if ( v13 )
      {
        *(_OWORD *)v13 = *(_OWORD *)a2;
        *((_OWORD *)v13 + 1) = *(_OWORD *)(a2 + 16);
        *((_OWORD *)v13 + 2) = *(_OWORD *)(a2 + 32);
        *((_OWORD *)v13 + 3) = *(_OWORD *)(a2 + 48);
        v13[8] = *(_QWORD *)(a2 + 64);
      }
      std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(*a1, a1[1], v12);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<Edge>>::deallocate(v14, v12, v11);
      throw;
    }
    v15 = (void *)*a1;
    if ( !*a1 )
      goto LABEL_24;
    v16 = a1[2] - (_QWORD)v15;
    if ( (unsigned __int64)(v16 / 72) <= 0x38E38E38E38E38ELL )
    {
      if ( (unsigned __int64)(72 * (v16 / 72)) < 0x1000 )
      {
LABEL_22:
        operator delete(v15);
LABEL_24:
        *a1 = v12;
        a1[1] = &v12[9 * v8];
        result = 9 * v11;
        a1[2] = &v12[9 * v11];
        return result;
      }
      if ( ((unsigned __int8)v15 & 0x1F) == 0 )
      {
        v17 = *((_QWORD *)v15 - 1);
        if ( v17 < (unsigned __int64)v15 && (unsigned __int64)v15 - v17 - 8 <= 0x1F )
        {
          v15 = (void *)*((_QWORD *)v15 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v16);
    __debugbreak();
  }
  if ( v6 )
  {
    *(_OWORD *)v6 = *(_OWORD *)a2;
    *(_OWORD *)(v6 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v6 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v6 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v6 + 64) = *(_QWORD *)(a2 + 64);
  }
  a1[1] += 72LL;
  return result;
}
