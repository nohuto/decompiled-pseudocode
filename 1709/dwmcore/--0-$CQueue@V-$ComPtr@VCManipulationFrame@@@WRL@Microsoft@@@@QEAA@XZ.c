/*
 * XREFs of ??0?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800C25D8
 * Callers:
 *     _dynamic_initializer_for__CManipulationManager::s_InputQueue__ @ 0x180001410 (_dynamic_initializer_for__CManipulationManager--s_InputQueue__.c)
 * Callees:
 *     <none>
 */

void **CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>()
{
  dword_180272510 = 0;
  qword_180272508 = (__int64)&CManipulationManager::s_InputQueue;
  CManipulationManager::s_InputQueue = &CManipulationManager::s_InputQueue;
  byte_180272514 = 0;
  InitializeCriticalSection(&stru_180272518);
  return &CManipulationManager::s_InputQueue;
}
