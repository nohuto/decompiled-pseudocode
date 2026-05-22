/*
 * XREFs of ??$emplace_back@AEBUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@?$vector@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@V?$allocator@UINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@@std@@@std@@QEAAAEAUINPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD@@AEBU2@@Z @ 0x1800907DC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT_CONFIG_MESSAGE_const_____ptr64_::_Do_call @ 0x180090CE0 (std--_Func_impl_no_alloc__lambda_ff5ed09cb565de5bf51fa24310af25d3__void__MIT_INPUT__ea_180090CE0.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::emplace_back<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD const &>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r14
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rsi
  size_t v12; // rcx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  void *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = (v5 - *(_QWORD *)a1) / 24;
    if ( v6 == 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = (v4 - *(_QWORD *)a1) / 24;
    v9 = v8 >> 1;
    if ( v8 <= 0xAAAAAAAAAAAAAAALL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0xAAAAAAAAAAAAAAALL )
        std::_Default_allocate_traits<1>::_Fail();
      v12 = 24 * v10;
      if ( 24 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
          std::_Default_allocate_traits<1>::_Fail();
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = 3 * v6;
      *(_OWORD *)&v11[v14] = *(_OWORD *)a2;
      v11[v14 + 2] = *(_QWORD *)(a2 + 16);
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(v15, (unsigned __int64)v11, v10);
      throw;
    }
    v16 = *(void **)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_23;
    v17 = *(_QWORD *)(a1 + 16) - (_QWORD)v16;
    v18 = v17 / 24;
    if ( (unsigned __int64)(v17 / 24) <= 0xAAAAAAAAAAAAAAALL )
    {
      if ( (unsigned __int64)(24 * v18) < 0x1000 )
      {
LABEL_22:
        operator delete(v16);
LABEL_23:
        *(_QWORD *)a1 = v11;
        *(_QWORD *)(a1 + 8) = &v11[3 * v7];
        *(_QWORD *)(a1 + 16) = &v11[3 * v10];
        return *(_QWORD *)(a1 + 8) - 24LL;
      }
      if ( ((unsigned __int8)v16 & 0x1F) == 0 )
      {
        v19 = *((_QWORD *)v16 - 1);
        if ( v19 < (unsigned __int64)v16 && (unsigned __int64)v16 - v19 - 8 <= 0x1F )
        {
          v16 = (void *)*((_QWORD *)v16 - 1);
          goto LABEL_22;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v17, v18);
    __debugbreak();
  }
  *(_OWORD *)v5 = *(_OWORD *)a2;
  *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) += 24LL;
  return *(_QWORD *)(a1 + 8) - 24LL;
}
