/*
 * XREFs of ??$emplace_back@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@?$vector@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@QEAAX$$QEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@1@@Z @ 0x18001F404
 * Callers:
 *     ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x18001C5A0 (-RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??1?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18000A554 (--1-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUtagInpu.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@PEAU12@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@0@PEAU10@00AEAU?$_Wrap_alloc@V?$allocator@U?$pair@KV?$vector@PEAUIDisplayBindingObserver@@V?$allocator@PEAUIDisplayBindingObserver@@@std@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180020264 (--$_Uninitialized_move_al_unchecked@PEAU-$pair@KV-$vector@PEAUIDisplayBindingObserver@@V-$alloca.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::vector<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>::emplace_back<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rax
  _QWORD *v12; // r13
  char *v13; // rdx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD *v22; // [rsp+98h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v6 = (__int64)(v5 - *a1) >> 5;
    if ( v6 == 0x7FFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = v6 + 1;
    v8 = (__int64)(v4 - *a1) >> 5;
    v9 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v10 = v8 + v9;
      if ( v8 + v9 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    v11 = std::_Allocate(v10, 0x20uLL);
    v12 = v11;
    v22 = v11;
    try
    {
      v13 = (char *)&v11[4 * v6];
      if ( v13 )
      {
        *(_DWORD *)v13 = *(_DWORD *)a2;
        *((_QWORD *)v13 + 1) = 0LL;
        *((_QWORD *)v13 + 2) = 0LL;
        *((_QWORD *)v13 + 3) = 0LL;
        *((_QWORD *)v13 + 1) = *(_QWORD *)(a2 + 8);
        *((_QWORD *)v13 + 2) = *(_QWORD *)(a2 + 16);
        *((_QWORD *)v13 + 3) = *(_QWORD *)(a2 + 24);
        *(_QWORD *)(a2 + 8) = 0LL;
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
      }
      std::_Uninitialized_move_al_unchecked<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *,std::pair<unsigned long,std::vector<IDisplayBindingObserver *>> *,std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>(
        *a1,
        a1[1],
        v11);
    }
    catch ( ... )
    {
      v19 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v22[4 * v6]);
      std::_Wrap_alloc<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>::destroy<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>(
        v20,
        v19);
      std::_Wrap_alloc<std::allocator<std::pair<unsigned long,std::vector<IDisplayBindingObserver *>>>>::deallocate(
        v21,
        v22,
        v10);
      throw;
    }
    v14 = *a1;
    if ( !*a1 )
      goto LABEL_27;
    v15 = a1[1];
    while ( v14 != v15 )
    {
      std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>::~vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>,std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>>>((unsigned __int64 *)(v14 + 8));
      v14 += 32LL;
    }
    v16 = *a1;
    v17 = (__int64)(a1[2] - *a1) >> 5;
    if ( v17 <= 0x7FFFFFFFFFFFFFFLL )
    {
      if ( 32 * v17 < 0x1000 )
      {
LABEL_25:
        operator delete((void *)v16);
LABEL_27:
        *a1 = (unsigned __int64)v12;
        a1[1] = (unsigned __int64)&v12[4 * v7];
        a1[2] = (unsigned __int64)&v12[4 * v10];
        return;
      }
      if ( (v16 & 0x1F) == 0 )
      {
        v18 = *(_QWORD *)(v16 - 8);
        if ( v18 < v16 )
        {
          v16 = v16 - v18 - 8;
          if ( v16 <= 0x1F )
          {
            v16 = v18;
            goto LABEL_25;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v16);
    __debugbreak();
  }
  if ( v5 )
  {
    *(_DWORD *)v5 = *(_DWORD *)a2;
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    *(_QWORD *)(v5 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  a1[1] += 32LL;
}
