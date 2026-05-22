/*
 * XREFs of ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800B9104
 * Callers:
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800B4C5C (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

unsigned __int64 *__fastcall std::vector<unsigned char>::vector<unsigned char>(
        unsigned __int64 *a1,
        unsigned __int64 a2)
{
  void *v4; // rax
  char *v5; // rax
  char *v6; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v4 = std::_Allocate(a2, 1uLL);
    *a1 = (unsigned __int64)v4;
    a1[1] = (unsigned __int64)v4;
    v5 = (char *)*a1;
    a1[2] = a2 + *a1;
    try
    {
      v6 = &v5[a2];
      memset(v5, 0, a2);
      a1[1] = (unsigned __int64)v6;
    }
    catch ( ... )
    {
      std::vector<unsigned char>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
