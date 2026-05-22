/*
 * XREFs of ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x1800B0BA0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x1800AFE60 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x1800B10EC (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800B1430 (--$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocat.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::emplace_back<ContextualProcessorBuffer::InputSample>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r15
  _QWORD *v14; // r14
  size_t v15; // rcx
  void *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rcx
  _QWORD *v19; // r12
  _QWORD *v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)a1[2];
  v5 = (_QWORD *)a1[1];
  if ( v4 == v5 )
  {
    v9 = ((__int64)v5 - *a1) >> 4;
    v25 = v9;
    if ( v9 == 0xFFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v10 = v9 + 1;
    v11 = ((__int64)v4 - *a1) >> 4;
    v12 = v11 >> 1;
    if ( v11 <= 0xFFFFFFFFFFFFFFFLL - (v11 >> 1) )
    {
      v13 = v12 + v11;
      if ( v12 + v11 < v10 )
        v13 = v9 + 1;
    }
    else
    {
      v13 = v9 + 1;
    }
    if ( v13 )
    {
      if ( v13 > 0xFFFFFFFFFFFFFFFLL )
        std::_Default_allocate_traits<1>::_Fail();
      v15 = 16 * v13;
      if ( 16 * v13 < 0x1000 )
      {
        v14 = operator new(v15);
      }
      else
      {
        if ( v15 + 39 < v15 )
          std::_Default_allocate_traits<1>::_Fail();
        v16 = operator new(v15 + 39);
        v14 = (_QWORD *)(((unsigned __int64)v16 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v14 - 1) = v16;
      }
    }
    else
    {
      v14 = 0LL;
    }
    try
    {
      v17 = 2 * v9;
      v18 = *a2;
      *a2 = 0LL;
      v14[v17] = v18;
      v19 = a2 + 1;
      v20 = &v14[v17 + 1];
      *v20 = 0LL;
      if ( v20 != v19 )
      {
        *v20 = *v19;
        *v19 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        *a1,
        a1[1],
        v14);
    }
    catch ( ... )
    {
      v22 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v14[2 * v25]);
      std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::destroy<ContextualProcessorBuffer::InputSample>(
        v23,
        v22);
      std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(v24, (unsigned __int64)v14, v13);
      throw;
    }
    std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v14, v10, v13);
  }
  else
  {
    v6 = *a2;
    *a2 = 0LL;
    *v5 = v6;
    v7 = a2 + 1;
    v8 = v5 + 1;
    *v8 = 0LL;
    if ( v8 != a2 + 1 )
    {
      *v8 = *v7;
      *v7 = 0LL;
    }
    a1[1] += 16LL;
  }
  return a1[1] - 16LL;
}
