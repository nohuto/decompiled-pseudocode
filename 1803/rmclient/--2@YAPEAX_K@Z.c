/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180007550
 * Callers:
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x180002BA0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003D2C (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     CreateResourceManagerProxy @ 0x180003EF8 (CreateResourceManagerProxy.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800070E4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18000DF8C (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z @ 0x18000E594 (-CreateResourceManagerClientProxyInternal@@YAJPEAPEAUIResourceManager@ExecutionModel@@@Z.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18000E620 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 *     ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x18000E910 (-GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z.c)
 * Callees:
 *     malloc_0 @ 0x18000729E (malloc_0.c)
 *     _callnewh_0 @ 0x180007591 (_callnewh_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rdi
  void *v2; // rbx

  for ( i = Size; ; Size = i )
  {
    v2 = malloc_0(Size);
    if ( v2 || !callnewh_0(i) )
      break;
  }
  return v2;
}
