/*
 * XREFs of ??0?$vector@GV?$allocator@G@std@@@std@@QEAA@_KAEBV?$allocator@G@1@@Z @ 0x1800973DC
 * Callers:
 *     ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x18008CAF4 (--$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPR.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180008A84 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

char **__fastcall std::vector<unsigned short>::vector<unsigned short>(char **a1, unsigned __int64 a2)
{
  char *v4; // rax
  size_t v5; // r8
  char *v6; // rax
  char *v7; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
    v4 = (char *)std::_Allocate(a2, 2uLL);
    *a1 = v4;
    a1[1] = v4;
    v5 = 2 * a2;
    v6 = *a1;
    a1[2] = &(*a1)[2 * a2];
    try
    {
      v7 = &v6[v5];
      memset(v6, 0, v5);
      a1[1] = v7;
    }
    catch ( ... )
    {
      std::vector<unsigned short>::_Tidy(a1);
      throw;
    }
  }
  return a1;
}
