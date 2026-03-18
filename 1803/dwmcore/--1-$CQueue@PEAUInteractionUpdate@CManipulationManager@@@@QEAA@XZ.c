/*
 * XREFs of ??1?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@QEAA@XZ @ 0x1800DA8BC
 * Callers:
 *     _dynamic_atexit_destructor_for__CManipulationManager::s_InteractionUpdateQueue__ @ 0x1800DEB20 (_dynamic_atexit_destructor_for__CManipulationManager--s_InteractionUpdateQueue__.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void CQueue<CManipulationManager::InteractionUpdate *>::~CQueue<CManipulationManager::InteractionUpdate *>()
{
  void *v0; // rbx
  void **v1; // rcx
  __int64 v2; // rax

  do
  {
    v0 = 0LL;
    EnterCriticalSection(&CriticalSection);
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
      operator delete(v1, 0x18uLL);
      --dword_1802D66F0;
    }
    LeaveCriticalSection(&CriticalSection);
  }
  while ( v0 );
  DeleteCriticalSection(&CriticalSection);
}
