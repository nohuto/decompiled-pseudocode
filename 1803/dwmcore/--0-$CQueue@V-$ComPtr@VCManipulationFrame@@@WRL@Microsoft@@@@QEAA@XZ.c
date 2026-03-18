/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800CA0AC
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x1800028E0 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_1802D66B0 = 0;
  qword_1802D66A8 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = &CManipulationManager::s_InputQueue;
  byte_1802D66B4 = 0;
  InitializeCriticalSection(&stru_1802D66B8);
  return &CManipulationManager::s_InputQueue;
}
