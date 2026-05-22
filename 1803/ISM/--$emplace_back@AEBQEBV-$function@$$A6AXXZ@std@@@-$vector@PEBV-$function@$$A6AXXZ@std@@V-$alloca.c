/*
 * XREFs of ??$emplace_back@AEBQEBV?$function@$$A6AXXZ@std@@@?$vector@PEBV?$function@$$A6AXXZ@std@@V?$allocator@PEBV?$function@$$A6AXXZ@std@@@2@@std@@QEAAXAEBQEBV?$function@$$A6AXXZ@1@@Z @ 0x1800C99A4
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

char *__fastcall std::vector<std::function<void (void)> const *,std::allocator<std::function<void (void)> const *>>::emplace_back<std::function<void (void)> const * const &>(
        __int64 a1,
        char **a2)
{
  char **v4; // rcx
  char **v5; // r14
  char *result; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  size_t v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax

  v4 = *(char ***)(a1 + 16);
  v5 = *(char ***)(a1 + 8);
  if ( v4 != v5 )
  {
    result = *a2;
    *v5 = *a2;
    *(_QWORD *)(a1 + 8) += 8LL;
    return result;
  }
  v7 = ((__int64)v5 - *(_QWORD *)a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v7 + 1;
  v9 = ((__int64)v4 - *(_QWORD *)a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  if ( v11 )
  {
    if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Default_allocate_traits<1>::_Fail();
    v13 = 8 * v11;
    if ( 8 * v11 < 0x1000 )
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
    v12[v7] = *a2;
    memmove(v12, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  }
  catch ( ... )
  {
    std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
      v16,
      (unsigned __int64)v12,
      v11);
    throw;
  }
  v17 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v18 = (__int64)(*(_QWORD *)(a1 + 16) - v17) >> 3;
    if ( v18 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v18 < 0x1000 )
      {
LABEL_22:
        operator delete((void *)v17);
        goto LABEL_23;
      }
      if ( (v17 & 0x1F) == 0 )
      {
        v19 = *(_QWORD *)(v17 - 8);
        if ( v19 < v17 )
        {
          v17 = v17 - v19 - 8;
          if ( v17 <= 0x1F )
          {
            v17 = v19;
            goto LABEL_22;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v17, v15);
    __debugbreak();
  }
LABEL_23:
  *(_QWORD *)a1 = v12;
  *(_QWORD *)(a1 + 8) = &v12[v8];
  result = (char *)&v12[v11];
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
