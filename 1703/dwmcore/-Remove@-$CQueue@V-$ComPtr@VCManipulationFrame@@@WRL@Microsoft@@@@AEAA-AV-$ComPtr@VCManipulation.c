/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800CBC6C
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18004E3CC (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800D20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D2B74 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180134F3C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

_QWORD *__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(__int64 a1, _QWORD *a2, char a3, int *a4)
{
  int v7; // eax
  __int64 *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx

  *a2 = 0LL;
  EnterCriticalSection(&stru_18023E7A8);
  if ( a3 )
  {
    v9 = (__int64 *)CManipulationManager::s_InputQueue;
    v10 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) != &CManipulationManager::s_InputQueue
      || *(void **)(v10 + 8) != CManipulationManager::s_InputQueue )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v10 + 8) = &CManipulationManager::s_InputQueue;
  }
  else
  {
    v9 = (__int64 *)qword_18023E798;
    v11 = *(_QWORD **)(qword_18023E798 + 8);
    if ( *(void ***)qword_18023E798 != &CManipulationManager::s_InputQueue || *v11 != qword_18023E798 )
      __fastfail(3u);
    qword_18023E798 = *(_QWORD *)(qword_18023E798 + 8);
    *v11 = &CManipulationManager::s_InputQueue;
  }
  if ( v9 == (__int64 *)&CManipulationManager::s_InputQueue )
  {
    v7 = dword_18023E7A0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v9 + 2);
    if ( v9 )
    {
      Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v9 + 2);
      WPF::ProcessHeapImpl::Free(v9);
    }
    v7 = --dword_18023E7A0;
  }
  if ( a4 )
    *a4 = v7;
  LeaveCriticalSection(&stru_18023E7A8);
  return a2;
}
