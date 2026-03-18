/*
 * XREFs of SetConnectCompletedState @ 0x1C00987C0
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A9030 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C0062B40 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C00987FC (PowerConnectionEvent.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  PVOID v1; // rax

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported() >= 0 )
    {
      v1 = ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected(v1);
    }
  }
}
