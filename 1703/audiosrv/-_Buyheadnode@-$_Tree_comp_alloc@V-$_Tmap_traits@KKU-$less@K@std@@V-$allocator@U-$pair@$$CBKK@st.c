/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x1800093F8
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180009A60 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000A6B0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode()
{
  HANDLE ProcessHeap; // rax
  _QWORD *result; // rax
  __int64 v2; // rcx

  ProcessHeap = GetProcessHeap();
  result = HeapAlloc(ProcessHeap, 0, 0x28uLL);
  if ( !result )
  {
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x180009455LL);
  }
  try
  {
    *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    if ( result != (_QWORD *)-16LL )
      result[2] = result;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x28uLL);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
