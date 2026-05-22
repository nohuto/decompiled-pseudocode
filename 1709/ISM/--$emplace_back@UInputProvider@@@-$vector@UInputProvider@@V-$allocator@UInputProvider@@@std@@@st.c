/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x180036244
 * Callers:
 *     ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18003606C (-CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x1800363A0 (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@PEAU1@00AEAU?$_Wrap_alloc@V?$allocator@UInputProvider@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800364A4 (--$_Uninitialized_move_al_unchecked@PEAUInputProvider@@PEAU1@V-$allocator@UInputProvider@@@std@@.c)
 */

void __fastcall std::vector<InputProvider>::emplace_back<InputProvider>(_QWORD *a1, _OWORD *a2)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  _OWORD *v14; // rcx
  _QWORD *v15; // r14
  _QWORD *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // [rsp+88h] [rbp+20h]

  v4 = (_OWORD *)a1[2];
  v5 = (_OWORD *)a1[1];
  if ( v4 == v5 )
  {
    v8 = ((__int64)v5 - *a1) / 24;
    if ( v8 == 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v9 = ((__int64)v4 - *a1) / 24;
    v10 = v9 >> 1;
    if ( v9 <= 0xAAAAAAAAAAAAAAALL - (v9 >> 1) )
    {
      v11 = v10 + v9;
      if ( v10 + v9 < v8 + 1 )
        v11 = v8 + 1;
    }
    else
    {
      v11 = v8 + 1;
    }
    v12 = std::_Allocate(v11, 0x18uLL);
    v13 = v12;
    v20 = v12;
    try
    {
      v14 = &v12[3 * v8];
      if ( v14 )
      {
        *v14 = *a2;
        v15 = a2 + 1;
        v16 = v14 + 1;
        *v16 = 0LL;
        if ( v16 != v15 )
        {
          *v16 = *v15;
          *v15 = 0LL;
        }
      }
      std::_Uninitialized_move_al_unchecked<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v17 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v20[3 * v8]);
      std::_Wrap_alloc<std::allocator<InputProvider>>::destroy<InputProvider>(v18, v17);
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::deallocate(
        v19,
        v20,
        v11);
      throw;
    }
    std::vector<InputProvider>::_Change_array(a1, v13, v8 + 1, v11);
  }
  else
  {
    if ( v5 )
    {
      *v5 = *a2;
      v6 = a2 + 1;
      v7 = v5 + 1;
      *v7 = 0LL;
      if ( v7 != v6 )
      {
        *v7 = *v6;
        *v6 = 0LL;
      }
    }
    a1[1] += 24LL;
  }
}
