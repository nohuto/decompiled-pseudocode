/*
 * XREFs of ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1801D02D8
 * Callers:
 *     ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800DA948 (--1-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801CF1C4 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801CFC38 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801CE44C (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 (__fastcall ****__fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD),
        char a3,
        int *a4))(_QWORD)
{
  __int64 *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  int v10; // eax

  *a2 = 0LL;
  EnterCriticalSection(&stru_1802D66B8);
  if ( a3 )
  {
    v7 = (__int64 *)CManipulationManager::s_InputQueue;
    v8 = *(_QWORD *)CManipulationManager::s_InputQueue;
    if ( *((void ***)CManipulationManager::s_InputQueue + 1) != &CManipulationManager::s_InputQueue
      || *(void **)(v8 + 8) != CManipulationManager::s_InputQueue )
    {
      __fastfail(3u);
    }
    CManipulationManager::s_InputQueue = *(void **)CManipulationManager::s_InputQueue;
    *(_QWORD *)(v8 + 8) = &CManipulationManager::s_InputQueue;
  }
  else
  {
    v7 = (__int64 *)qword_1802D66A8;
    v9 = *(_QWORD **)(qword_1802D66A8 + 8);
    if ( *(void ***)qword_1802D66A8 != &CManipulationManager::s_InputQueue || *v9 != qword_1802D66A8 )
      __fastfail(3u);
    qword_1802D66A8 = *(_QWORD *)(qword_1802D66A8 + 8);
    *v9 = &CManipulationManager::s_InputQueue;
  }
  if ( v7 == (__int64 *)&CManipulationManager::s_InputQueue )
  {
    v10 = dword_1802D66B0;
  }
  else
  {
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=(a2, v7 + 2);
    if ( v7 )
    {
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v7 + 2);
      operator delete(v7);
    }
    v10 = --dword_1802D66B0;
  }
  if ( a4 )
    *a4 = v10;
  LeaveCriticalSection(&stru_1802D66B8);
  return a2;
}
