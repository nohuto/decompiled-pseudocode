/*
 * XREFs of ExecuteMarshaledPnpRequest @ 0x1C009A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C009A2B8 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledPnpRequest(int a1)
{
  __int64 v1; // rax

  if ( a1 == 2048 )
  {
    v1 = 1LL;
  }
  else
  {
    if ( a1 != 4096 )
      return;
    v1 = 0LL;
  }
  CBaseInput::DeliverMarshaledPnPNotification((CBaseInput *)qword_1C0186018[6 * v1]);
}
