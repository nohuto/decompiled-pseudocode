/*
 * XREFs of ??$emplace_back@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAAEAVEdge@@AEBV2@@Z @ 0x18006925C
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x18006829C (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18006839C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z @ 0x180068494 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdate@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800696F4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1800697D8 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@PEAV1@00AEAV?$allocator@VEdge@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x180069998 (--$_Uninitialized_move_al_unchecked@PEAVEdge@@PEAV1@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::vector<Edge>::emplace_back<Edge const &>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  char *v15; // r14
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-48h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 96;
    v21 = v7;
    if ( v7 == 0x2AAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = v7 + 1;
    v9 = (v4 - *a1) / 96;
    v10 = v9 >> 1;
    if ( v9 <= 0x2AAAAAAAAAAAAAALL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 )
        v11 = v7 + 1;
    }
    else
    {
      v11 = v7 + 1;
    }
    if ( v11 )
    {
      if ( v11 > 0x2AAAAAAAAAAAAAALL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 96 * v11;
      if ( 96 * v11 < 0x1000 )
      {
        v12 = operator new(v13);
      }
      else
      {
        if ( v13 + 39 < v13 )
          std::_Default_allocate_traits<1>::_Fail();
        v14 = operator new(v13 + 39);
        v12 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v12 - 1) = v14;
      }
    }
    else
    {
      v12 = 0LL;
    }
    try
    {
      v15 = (char *)&v12[12 * v7];
      *(_QWORD *)v15 = *(_QWORD *)a2;
      std::wstring::wstring(v15 + 8, a2 + 8);
      v16 = *(_QWORD *)(a2 + 40);
      *((_QWORD *)v15 + 5) = v16;
      if ( v16 )
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 24));
      *((_DWORD *)v15 + 12) = *(_DWORD *)(a2 + 48);
      *(_OWORD *)(v15 + 52) = *(_OWORD *)(a2 + 52);
      *(_OWORD *)(v15 + 68) = *(_OWORD *)(a2 + 68);
      *(_QWORD *)(v15 + 84) = *(_QWORD *)(a2 + 84);
      std::_Uninitialized_move_al_unchecked<Edge *,Edge *,std::allocator<Edge>>(*a1, a1[1], v12);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[12 * v21]);
      std::_Default_allocator_traits<std::allocator<Edge>>::destroy<Edge>(v19, v18);
      std::allocator<Edge>::deallocate(v20, (unsigned __int64)v12, v11);
      throw;
    }
    std::vector<Edge>::_Change_array(a1, v12, v8, v11);
  }
  else
  {
    *(_QWORD *)v5 = *(_QWORD *)a2;
    std::wstring::wstring(v5 + 8, a2 + 8);
    v6 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(v5 + 40) = v6;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 24));
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(a2 + 48);
    *(_OWORD *)(v5 + 52) = *(_OWORD *)(a2 + 52);
    *(_OWORD *)(v5 + 68) = *(_OWORD *)(a2 + 68);
    *(_QWORD *)(v5 + 84) = *(_QWORD *)(a2 + 84);
    a1[1] += 96LL;
  }
  return a1[1] - 96LL;
}
