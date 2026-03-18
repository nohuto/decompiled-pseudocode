/*
 * XREFs of ExecuteMarshaledPnpRequest @ 0x1C00A54D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A55F8 (-DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ.c)
 */

void __fastcall ExecuteMarshaledPnpRequest(int a1)
{
  CBaseInput *v1; // rcx

  if ( a1 == 1024 )
  {
    v1 = qword_1C0188018;
  }
  else
  {
    if ( a1 != 2048 )
      return;
    v1 = qword_1C0188048;
  }
  CBaseInput::DeliverMarshaledPnPNotification(v1);
}
