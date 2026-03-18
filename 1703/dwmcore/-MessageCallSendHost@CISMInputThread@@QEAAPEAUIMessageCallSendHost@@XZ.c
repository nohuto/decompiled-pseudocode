/*
 * XREFs of ?MessageCallSendHost@CISMInputThread@@QEAAPEAUIMessageCallSendHost@@XZ @ 0x18019212C
 * Callers:
 *     ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x180189B30 (-GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

struct IMessageCallSendHost *__fastcall CISMInputThread::MessageCallSendHost(CISMInputThread *this)
{
  if ( !*((_QWORD *)this + 4) )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( !*((_QWORD *)this + 5) && (int)CoreUICallCreateEndpointHost(*((_QWORD *)this + 4), (char *)this + 40, 0LL) < 0 )
    RaiseFailFastException(0LL, 0LL, 0);
  return (struct IMessageCallSendHost *)*((_QWORD *)this + 5);
}
