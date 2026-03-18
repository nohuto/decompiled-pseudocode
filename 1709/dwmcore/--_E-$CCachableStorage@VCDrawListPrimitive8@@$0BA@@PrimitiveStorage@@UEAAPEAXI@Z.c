/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B5F00
 * Callers:
 *     ??_GCHWDrawListEntry@@EEAAPEAXI@Z @ 0x180023CF0 (--_GCHWDrawListEntry@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180035760 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  int Current; // eax
  struct CThreadContext *v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v7; // [rsp+40h] [rbp+18h] BYREF

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    Current = CThreadContext::GetCurrent(&v7);
    if ( Current < 0 )
      ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
    v4 = v7;
    if ( *((_DWORD *)v7 + 19) >= *((_DWORD *)v7 + 18) )
    {
      WPF::ProcessHeapImpl::Free(lpMem);
    }
    else
    {
      *lpMem = *((_QWORD *)v7 + 10);
      ++*((_DWORD *)v4 + 19);
      *((_QWORD *)v4 + 10) = lpMem;
    }
  }
  return lpMem;
}
