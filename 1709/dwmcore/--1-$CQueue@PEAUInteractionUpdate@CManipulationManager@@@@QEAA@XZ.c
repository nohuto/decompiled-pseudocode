/*
 * XREFs of ??1?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800C2380
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800C7730 (_dynamic_atexit_destructor_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void CQueue<CManipulationManager::InteractionUpdate *>::~CQueue<CManipulationManager::InteractionUpdate *>()
{
  void *v0; // rbx
  void **v1; // rcx
  __int64 v2; // rax

  do
  {
    v0 = 0LL;
    EnterCriticalSection(&stru_180272558);
    v1 = (void **)CManipulationManager::s_InteractionUpdateQueue;
    v2 = *(_QWORD *)CManipulationManager::s_InteractionUpdateQueue;
    if ( *((void ***)CManipulationManager::s_InteractionUpdateQueue + 1) != &CManipulationManager::s_InteractionUpdateQueue
      || *(void **)(v2 + 8) != CManipulationManager::s_InteractionUpdateQueue )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InteractionUpdateQueue = *(void **)CManipulationManager::s_InteractionUpdateQueue;
    *(_QWORD *)(v2 + 8) = &CManipulationManager::s_InteractionUpdateQueue;
    if ( v1 != &CManipulationManager::s_InteractionUpdateQueue )
    {
      v0 = v1[2];
      WPF::ProcessHeapImpl::Free(v1);
      --dword_180272550;
    }
    LeaveCriticalSection(&stru_180272558);
  }
  while ( v0 );
  DeleteCriticalSection(&stru_180272558);
}
