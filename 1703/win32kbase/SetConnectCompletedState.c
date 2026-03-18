/*
 * XREFs of SetConnectCompletedState @ 0x1C006FB00
 * Callers:
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C006FA14 (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C00700A0 (ReferenceDwmApiPort.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  __int64 v1; // rax

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent(a1);
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported() >= 0 )
    {
      v1 = ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected(v1);
    }
  }
}
