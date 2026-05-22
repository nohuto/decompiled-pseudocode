/*
 * XREFs of ??$emplace_back@AEBQEAUIDisplayBindingObserver@@@?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@QEAAXAEBQEAUIDisplayBindingObserver@@@Z @ 0x18001F5D4
 * Callers:
 *     ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x18001C5A0 (-RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<IDisplayBindingObserver *>::emplace_back<IDisplayBindingObserver * const &>(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdi
  __int64 v6; // rdi
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  char *v11; // rax
  char *v12; // r14
  char *v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  _QWORD *v18; // [rsp+70h] [rbp+18h]

  v4 = *(_QWORD **)(a1 + 16);
  v5 = *(_QWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
    v9 = v8 >> 1;
    if ( v8 <= 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = (char *)std::_Allocate(v10, 8uLL);
    v12 = v11;
    v18 = v11;
    try
    {
      v13 = &v11[8 * v6];
      if ( v13 )
        *(_QWORD *)v13 = *a2;
      memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v14,
        v18,
        v10);
      throw;
    }
    v15 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      goto LABEL_24;
    v16 = (__int64)(*(_QWORD *)(a1 + 16) - v15) >> 3;
    if ( v16 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v16 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v15);
LABEL_24:
        *(_QWORD *)a1 = v12;
        *(_QWORD *)(a1 + 8) = &v12[8 * v7];
        *(_QWORD *)(a1 + 16) = &v12[8 * v10];
        return;
      }
      if ( (v15 & 0x1F) == 0 )
      {
        v17 = *(_QWORD *)(v15 - 8);
        if ( v17 < v15 )
        {
          v15 = v15 - v17 - 8;
          if ( v15 <= 0x1F )
          {
            v15 = v17;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v15);
    __debugbreak();
  }
  if ( v5 )
    *v5 = *a2;
  *(_QWORD *)(a1 + 8) += 8LL;
}
