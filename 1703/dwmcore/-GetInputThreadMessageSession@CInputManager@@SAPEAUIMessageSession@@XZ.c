/*
 * XREFs of ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800B1ED4
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180004660 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800B1D14 (-InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800B1E4C (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct IMessageSession *CInputManager::GetInputThreadMessageSession(void)
{
  __int64 v1; // rax

  if ( (dword_18023E9D0 & 4) != 0 )
    return CMit::s_pMessageSession;
  if ( CInputManager::s_pInputManager )
  {
    v1 = *((_QWORD *)CInputManager::s_pInputManager + 28);
    if ( v1 )
      return *(struct IMessageSession **)(v1 + 32);
  }
  return 0LL;
}
