/*
 * XREFs of ??$emplace_back@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAAEAUContextualProcessorMetadata@ContextualProcessorBuffer@@AEBU23@@Z @ 0x1800B0E04
 * Callers:
 *     ?AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x1800AFD1C (-AddProcessor@ContextualProcessorBuffer@@QEAAJPEAUIContextualProcessor@@UContextualProcessorInit.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ?_Change_array@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUContextualProcessorMetadata@ContextualProcessorBuffer@@_K1@Z @ 0x1800B11E0 (-_Change_array@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UCo.c)
 *     ??$_Uninitialized_move_al_unchecked@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@YAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@PEAU12@00AEAV?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@0@U_General_ptr_iterator_tag@0@U_Unused_parameter@0@@Z @ 0x1800B1494 (--$_Uninitialized_move_al_unchecked@PEAUContextualProcessorMetadata@ContextualProcessorBuffer@@P.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::emplace_back<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rbx
  size_t v14; // rcx
  void *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+88h] [rbp+20h]

  v4 = a1[2];
  v5 = a1[1];
  if ( v4 == v5 )
  {
    v8 = (v5 - *a1) / 24;
    v23 = v8;
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
    if ( v12 )
    {
      if ( v12 > 0xAAAAAAAAAAAAAAALL )
        std::_Default_allocate_traits<1>::_Fail();
      v14 = 24 * v12;
      if ( 24 * v12 < 0x1000 )
      {
        v13 = operator new(v14);
      }
      else
      {
        if ( v14 + 39 < v14 )
          std::_Default_allocate_traits<1>::_Fail();
        v15 = operator new(v14 + 39);
        v13 = (_QWORD *)(((unsigned __int64)v15 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v13 - 1) = v15;
      }
    }
    else
    {
      v13 = 0LL;
    }
    try
    {
      v16 = 3 * v8;
      v17 = *a2;
      v13[v16] = *a2;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      LODWORD(v13[v16 + 1]) = *((_DWORD *)a2 + 2);
      HIDWORD(v13[v16 + 1]) = *((_DWORD *)a2 + 3);
      v18 = a2[2];
      v13[v16 + 2] = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      std::_Uninitialized_move_al_unchecked<ContextualProcessorBuffer::ContextualProcessorMetadata *,ContextualProcessorBuffer::ContextualProcessorMetadata *,std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>(
        *a1,
        a1[1],
        v13);
    }
    catch ( ... )
    {
      v20 = std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>((__int64)&v13[3 * v23]);
      std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::ContextualProcessorMetadata>>::destroy<ContextualProcessorBuffer::ContextualProcessorMetadata>(
        v21,
        v20);
      std::allocator<INPUT_SYSTEM_OUTPUT_CONFIG_PAYLOAD>::deallocate(v22, (unsigned __int64)v13, v12);
      throw;
    }
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Change_array(a1, v13, v9, v12);
  }
  else
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
    a1[1] += 24LL;
  }
  return a1[1] - 24LL;
}
