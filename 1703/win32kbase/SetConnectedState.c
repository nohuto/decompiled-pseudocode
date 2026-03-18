/*
 * XREFs of SetConnectedState @ 0x1C0092720
 * Callers:
 *     xxxRemoteConnect @ 0x1C009F300 (xxxRemoteConnect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall SetConnectedState(int a1, int a2)
{
  NTSTATUS result; // eax

  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    return PowerConnectionEvent(a1);
  }
  return result;
}
