/*
 * XREFs of ??$emplace_back@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAX$$QEAUInputSample@ContextualProcessorBuffer@@@Z @ 0x180085980
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x180084F80 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180085CE8 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@QEAAXPEAUInputSample@ContextualProcessorBuffer@@$$QEAU23@@Z @ 0x180085F10 (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Wrap_alloc@V-$allocator@UInputSampl.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180086014 (--$_Uninitialized_move_al_unchecked@PEAUInputSample@ContextualProcessorBuffer@@PEAU12@V-$allocat.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::emplace_back<ContextualProcessorBuffer::InputSample>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // [rsp+80h] [rbp+18h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v7 = (v5 - *a1) / 2856;
    if ( v7 == 0x16F26016F26016LL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v8 = (v4 - *a1) / 2856;
    v9 = v8 >> 1;
    if ( v8 <= 0x16F26016F26016LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 + 1 )
        v10 = v7 + 1;
    }
    else
    {
      v10 = v7 + 1;
    }
    v11 = std::_Allocate(v10, 0xB28uLL);
    v13 = v11;
    v17 = v11;
    try
    {
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
        v12,
        &v11[357 * v7],
        a2);
      std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::InputSample *,ContextualProcessorBuffer::InputSample *,std::allocator<ContextualProcessorBuffer::InputSample>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v14 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v17[357 * v7]);
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::destroy<ContextualProcessorBuffer::InputSample>(
        v15,
        v14);
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::deallocate(v16, v17, v10);
      throw;
    }
    return std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v13, v7 + 1, v10);
  }
  else
  {
    result = std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
               v5,
               v5,
               a2);
    a1[1] += 2856LL;
  }
  return result;
}
