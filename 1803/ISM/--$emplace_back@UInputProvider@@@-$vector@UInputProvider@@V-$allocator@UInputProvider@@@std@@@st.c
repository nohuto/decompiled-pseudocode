/*
 * XREFs of ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAAEAUInputProvider@@$$QEAU2@@Z @ 0x18001A260
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18001A088 (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputProvider@@_K1@Z @ 0x18001A40C (-_Change_array@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@AEAAXQEAUInputP.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUInputProvider@@PEAU1@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@PEAU1@00AEAV?$allocator@UInputProvider@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x18001A510 (--$_Uninitialized_move_al_unchecked@PEAUInputProvider@@PEAU1@V-$allocator@UInputProvider@@@std@@.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<InputProvider>::emplace_back<InputProvider>(_QWORD *a1, _OWORD *a2)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  _QWORD *v12; // rsi
  size_t v13; // rcx
  void *v14; // rax
  _QWORD *v15; // r15
  _QWORD *v16; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx

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
    if ( v11 )
    {
      if ( v11 > 0xAAAAAAAAAAAAAAALL )
        std::_Default_allocate_traits<1>::_Fail();
      v13 = 24 * v11;
      if ( 24 * v11 < 0x1000 )
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
      *(_OWORD *)&v12[3 * v8] = *a2;
      v15 = a2 + 1;
      v16 = &v12[3 * v8 + 2];
      *v16 = 0LL;
      if ( v16 != v15 )
      {
        *v16 = *v15;
        *v15 = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<InputProvider *,InputProvider *,std::allocator<InputProvider>>(
        *a1,
        a1[1],
        v12);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v12[3 * v8]);
      std::_Default_allocator_traits<std::allocator<InputProvider>>::destroy<InputProvider>(v19, v18);
      std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(v20, (unsigned __int64)v12, v11);
      throw;
    }
    std::vector<InputProvider>::_Change_array(a1, v12, v8 + 1, v11);
  }
  else
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
    a1[1] += 24LL;
  }
  return a1[1] - 24LL;
}
