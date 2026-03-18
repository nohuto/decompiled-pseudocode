/*
 * XREFs of ?GetInputThreadMessageSession@CInputManager@@SAPEAUIMessageSession@@XZ @ 0x1800BA6A8
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x1800B8A40 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z @ 0x1800BA370 (-InitializeQueueInfo@CInputSinkStruct@@AEAAJAEAUInputQueueInfo@1@@Z.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA4B4 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

struct IMessageSession *CInputManager::GetInputThreadMessageSession(void)
{
  __int64 v1; // rax

  if ( (dword_18027278C & 4) != 0 )
    return CMit::s_pMessageSession;
  if ( CInputManager::s_pInputManager )
  {
    v1 = *((_QWORD *)CInputManager::s_pInputManager + 28);
    if ( v1 )
      return *(struct IMessageSession **)(v1 + 32);
  }
  return 0LL;
}
