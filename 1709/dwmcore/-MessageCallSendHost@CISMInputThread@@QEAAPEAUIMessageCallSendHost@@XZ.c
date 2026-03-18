/*
 * XREFs of ?MessageCallSendHost@CISMInputThread@@QEAAPEAUIMessageCallSendHost@@XZ @ 0x1801A0BA8
 * Callers:
 *     ?GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ @ 0x18007484C (-GetInputThreadMessageCallSendHost@CInputManager@@SAPEAUIMessageCallSendHost@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

struct IMessageCallSendHost *__fastcall CISMInputThread::MessageCallSendHost(CISMInputThread *this)
{
  if ( !*((_QWORD *)this + 4) )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( !*((_QWORD *)this + 5) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
    if ( (int)CoreUICallCreateEndpointHost(*((_QWORD *)this + 4), (char *)this + 40, 0LL) < 0 )
      RaiseFailFastException(0LL, 0LL, 0);
  }
  return (struct IMessageCallSendHost *)*((_QWORD *)this + 5);
}
