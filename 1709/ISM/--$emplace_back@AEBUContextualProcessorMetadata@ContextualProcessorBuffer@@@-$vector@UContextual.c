/*
 * XREFs of ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAXAEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@Z @ 0x180085AA4
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180084964 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x180085DF4 (-_Change_array@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UCo.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@00AEAU?$_Wrap_alloc@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x180086068 (--$_Uninitialized_move_al_unchecked@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::emplace_back<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  char *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // [rsp+80h] [rbp+18h]
  _QWORD *v22; // [rsp+88h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v8 = (v5 - *a1) / 24;
    v21 = v8;
    if ( v8 == 0xAAAAAAAAAAAAAAALL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v9 = v8 + 1;
    v10 = (v4 - *a1) / 24;
    v11 = v10 >> 1;
    if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v9 )
        v12 = v8 + 1;
    }
    else
    {
      v12 = v8 + 1;
    }
    v13 = std::_Allocate(v12, 0x18uLL);
    v14 = v13;
    v22 = v13;
    try
    {
      v15 = (char *)&v13[3 * v8];
      if ( v15 )
      {
        v16 = *a2;
        *(_QWORD *)v15 = *a2;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
        *((_DWORD *)v15 + 2) = *((_DWORD *)a2 + 2);
        *((_DWORD *)v15 + 3) = *((_DWORD *)a2 + 3);
        v17 = a2[2];
        *((_QWORD *)v15 + 2) = v17;
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      }
      std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        *a1,
        a1[1],
        v14);
    }
    catch ( ... )
    {
      v18 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v22[3 * v21]);
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::destroy<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        v19,
        v18);
      std::_Wrap_alloc<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::deallocate(
        v20,
        v22,
        v12);
      throw;
    }
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(a1, v14, v9, v12);
  }
  else
  {
    if ( v5 )
    {
      v6 = *a2;
      *(_QWORD *)v5 = *a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_DWORD *)(v5 + 8) = *((_DWORD *)a2 + 2);
      *(_DWORD *)(v5 + 12) = *((_DWORD *)a2 + 3);
      v7 = a2[2];
      *(_QWORD *)(v5 + 16) = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    a1[1] += 24LL;
  }
}
