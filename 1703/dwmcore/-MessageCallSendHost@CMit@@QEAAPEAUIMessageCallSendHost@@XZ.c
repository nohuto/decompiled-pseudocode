/*
 * XREFs of ?MessageCallSendHost@CMit@@QEAAPEAUIMessageCallSendHost@@XZ @ 0x180191D0C
 * Callers:
 *     ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x180189B30 (-GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     <none>
 */

struct IMessageCallSendHost *__fastcall CMit::MessageCallSendHost(CMit *this)
{
  if ( CMit::s_pMessageSession
    && !CMit::s_pMessageCallSendHost
    && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
  {
    RaiseFailFastException(0LL, 0LL, 0);
  }
  return CMit::s_pMessageCallSendHost;
}
