/*
 * XREFs of ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x180083918
 * Callers:
 *     ?HitTestRequestWithRetry@HitTestHelper@@CA?AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@@Z @ 0x180083400 (-HitTestRequestWithRetry@HitTestHelper@@CA-AUInternalHitTestResult@1@AEBUHitTestRequest@1@PEAUID.c)
 * Callees:
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180007F6C (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ?_Fail@?$_Default_allocate_traits@$00@std@@SAXXZ @ 0x18000932C (-_Fail@-$_Default_allocate_traits@$00@std@@SAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::vector<void *>::vector<void *>(unsigned __int64 *a1, unsigned __int64 a2)
{
  size_t v3; // rsi
  void *v4; // rax
  _QWORD *v5; // rcx
  char *v6; // rax
  char *v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v3 = 8 * a2;
    if ( 8 * a2 < 0x1000 )
    {
      v5 = operator new(8 * a2);
    }
    else
    {
      if ( v3 + 39 < v3 )
        std::_Default_allocate_traits<1>::_Fail();
      v4 = operator new(v3 + 39);
      v5 = (_QWORD *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v5 - 1) = v4;
    }
    *a1 = (unsigned __int64)v5;
    a1[1] = (unsigned __int64)v5;
    v6 = (char *)*a1;
    a1[2] = v3 + *a1;
    try
    {
      v7 = &v6[v3];
      memset_0(v6, 0, v3);
      a1[1] = (unsigned __int64)v7;
    }
    catch ( ... )
    {
      std::vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>::~vector<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<ISystemContextObserver *>>,std::_Iterator_base0>>(a1);
      throw;
    }
  }
  return a1;
}
