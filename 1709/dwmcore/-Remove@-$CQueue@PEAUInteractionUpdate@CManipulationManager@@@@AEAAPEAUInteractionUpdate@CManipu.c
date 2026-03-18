/*
 * XREFs of ?Remove@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAPEAUInteractionUpdate@CManipulationManager@@_NPEAI@Z @ 0x1800B9CE8
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x180009FF8 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void *__fastcall CQueue<CManipulationManager::InteractionUpdate *>::Remove(__int64 a1, __int64 a2, int *a3)
{
  void *v4; // rdi
  void **v5; // rcx
  __int64 v6; // rax
  int v7; // eax

  v4 = 0LL;
  EnterCriticalSection(&stru_180272558);
  v5 = (void **)CManipulationManager::s_InteractionUpdateQueue;
  v6 = *(_QWORD *)CManipulationManager::s_InteractionUpdateQueue;
  if ( *((void ***)CManipulationManager::s_InteractionUpdateQueue + 1) != &CManipulationManager::s_InteractionUpdateQueue
    || *(void **)(v6 + 8) != CManipulationManager::s_InteractionUpdateQueue )
  {
    __fastfail(3u);
  }
  CManipulationManager::s_InteractionUpdateQueue = *(void **)CManipulationManager::s_InteractionUpdateQueue;
  *(_QWORD *)(v6 + 8) = &CManipulationManager::s_InteractionUpdateQueue;
  if ( v5 == &CManipulationManager::s_InteractionUpdateQueue )
  {
    v7 = dword_180272550;
  }
  else
  {
    v4 = v5[2];
    WPF::ProcessHeapImpl::Free(v5);
    v7 = --dword_180272550;
  }
  if ( a3 )
    *a3 = v7;
  LeaveCriticalSection(&stru_180272558);
  return v4;
}
