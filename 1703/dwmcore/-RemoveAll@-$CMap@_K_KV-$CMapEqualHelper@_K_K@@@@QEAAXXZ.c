/*
 * XREFs of ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x1800D2A48
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationContext::s_ParticipatingInteractionMap__ @ 0x1800D6DC0 (_dynamic_atexit_destructor_for__CManipulationContext--s_ParticipatingInteractionMap__.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll()
{
  if ( CManipulationContext::s_ParticipatingInteractionMap )
  {
    WPF::ProcessHeapImpl::Free(CManipulationContext::s_ParticipatingInteractionMap);
    CManipulationContext::s_ParticipatingInteractionMap = 0LL;
  }
  if ( lpMem )
  {
    WPF::ProcessHeapImpl::Free(lpMem);
    lpMem = 0LL;
  }
  dword_1802419C0 = 0;
}
