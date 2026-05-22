/*
 * XREFs of ??$emplace_back@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAAXAEBQEAVPropertyNode@Input@@@Z @ 0x180032930
 * Callers:
 *     ?Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z @ 0x180032160 (-Append@PropertyVector@Input@@UEAAJ$$QEAVPropertyNode@2@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@AEAAXQEAPEAVPropertyNode@Input@@_K1@Z @ 0x180032A1C (-_Change_array@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropertyNode@Input@@@std@@@std@.c)
 */

__int64 __fastcall std::vector<Input::PropertyNode *>::emplace_back<Input::PropertyNode * const &>(
        __int64 a1,
        __int64 *a2)
{
  __int64 result; // rax
  __int64 *v5; // rbx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  char *v10; // rax
  void *v11; // r14
  __int64 *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // [rsp+70h] [rbp+18h]

  result = *(_QWORD *)(a1 + 16);
  v5 = *(__int64 **)(a1 + 8);
  if ( (__int64 *)result == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
    if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v7 = (result - *(_QWORD *)a1) >> 3;
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < v6 + 1 )
        v9 = v6 + 1;
    }
    else
    {
      v9 = v6 + 1;
    }
    v10 = (char *)std::_Allocate(v9, 8uLL);
    v11 = v10;
    v14 = v10;
    try
    {
      v12 = (__int64 *)&v10[8 * v6];
      if ( v12 )
        *v12 = *a2;
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v13,
        v14,
        v9);
      throw;
    }
    return std::vector<Input::PropertyNode *>::_Change_array(a1, v11, v6 + 1, v9, -2LL);
  }
  else
  {
    if ( v5 )
    {
      result = *a2;
      *v5 = *a2;
    }
    *(_QWORD *)(a1 + 8) += 8LL;
  }
  return result;
}
