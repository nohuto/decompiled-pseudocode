/*
 * XREFs of ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x18007484C
 * Callers:
 *     ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800746D0 (-PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     <none>
 */

struct IMessageCallSendHost *CInputManager::GetInputThreadMessageCallSendHost(void)
{
  CISMInputThread *v1; // rcx

  if ( (dword_18027278C & 4) != 0 )
  {
    if ( CMit::s_pMessageSession
      && !CMit::s_pMessageCallSendHost
      && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
    {
      RaiseFailFastException(0LL, 0LL, 0);
    }
    return CMit::s_pMessageCallSendHost;
  }
  else if ( CInputManager::s_pInputManager
         && (v1 = (CISMInputThread *)*((_QWORD *)CInputManager::s_pInputManager + 28)) != 0LL )
  {
    return CISMInputThread::MessageCallSendHost(v1);
  }
  else
  {
    return 0LL;
  }
}
