/*
 * XREFs of ??$emplace@AEBQEAVPropertyNode@Input@@@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVPropertyNode@Input@@@std@@@std@@@1@AEBQEAVPropertyNode@Input@@@Z @ 0x1800327B8
 * Callers:
 *     ?Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z @ 0x180032114 (-Insert@PropertyVector@Input@@IEAAJKPEAVPropertyNode@2@@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Change_array@?$vector@PEAVPropertyNode@Input@@V?$allocator@PEAVPropertyNode@Input@@@std@@@std@@AEAAXQEAPEAVPropertyNode@Input@@_K1@Z @ 0x180032A1C (-_Change_array@-$vector@PEAVPropertyNode@Input@@V-$allocator@PEAVPropertyNode@Input@@@std@@@std@.c)
 */

_QWORD *__fastcall std::vector<Input::PropertyNode *>::emplace<Input::PropertyNode * const &>(
        const void **a1,
        _QWORD *a2,
        char *a3,
        _QWORD *a4)
{
  _QWORD *v5; // r15
  __int64 v7; // r13
  char *v8; // rdi
  char *v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  char *v15; // rax
  char *v16; // r15
  char *v17; // rax
  _BYTE *v18; // rdx
  char *v19; // rcx
  size_t v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v25; // [rsp+80h] [rbp+18h]

  v5 = a2;
  v7 = (a3 - (_BYTE *)*a1) >> 3;
  v8 = (char *)a1[1];
  v9 = (char *)a1[2];
  if ( v9 == v8 )
  {
    v10 = (v8 - (_BYTE *)*a1) >> 3;
    if ( v10 == 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v11 = v10 + 1;
    v12 = (v9 - (_BYTE *)*a1) >> 3;
    v13 = v12 >> 1;
    if ( v12 <= 0x1FFFFFFFFFFFFFFFLL - (v12 >> 1) )
    {
      v14 = v13 + v12;
      if ( v13 + v12 < v11 )
        v14 = v11;
    }
    else
    {
      v14 = v11;
    }
    v15 = (char *)std::_Allocate(v14, 8uLL);
    v16 = v15;
    v25 = v15;
    try
    {
      v17 = &v15[8 * v7];
      if ( v17 )
        *(_QWORD *)v17 = *a4;
      v18 = *a1;
      v19 = v16;
      if ( a3 == v8 )
      {
        v20 = (_BYTE *)a1[1] - v18;
      }
      else
      {
        memmove(v16, v18, a3 - (_BYTE *)*a1);
        v19 = &v16[8 * v7 + 8];
        v20 = (_BYTE *)a1[1] - a3;
        v18 = a3;
      }
      memmove(v19, v18, v20);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        v21,
        v25,
        v14);
      throw;
    }
    std::vector<Input::PropertyNode *>::_Change_array(a1, v16, v11, v14, -2LL);
    v5 = a2;
  }
  else if ( a3 == v8 )
  {
    if ( v8 )
      *(_QWORD *)v8 = *a4;
    a1[1] = (char *)a1[1] + 8;
  }
  else
  {
    v22 = *a4;
    if ( v8 )
      *(_QWORD *)v8 = *((_QWORD *)v8 - 1);
    a1[1] = (char *)a1[1] + 8;
    memmove(a3 + 8, a3, v8 - a3 - 8);
    *(_QWORD *)a3 = v22;
  }
  *v5 = (char *)*a1 + 8 * v7;
  return v5;
}
