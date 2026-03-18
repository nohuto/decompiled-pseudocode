/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x18007B120
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x1800AB6D0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18007B164 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 */

struct CDrawListPrimitive8 *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        struct CDrawListPrimitive8 *lpMem,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    ObjectCache = CThreadContext::GetObjectCache(lpMem);
    if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
    {
      WPF::ProcessHeapImpl::Free(lpMem);
    }
    else
    {
      *(_QWORD *)lpMem = *((_QWORD *)ObjectCache + 1);
      ++*((_DWORD *)ObjectCache + 1);
      *((_QWORD *)ObjectCache + 1) = lpMem;
    }
  }
  return lpMem;
}
