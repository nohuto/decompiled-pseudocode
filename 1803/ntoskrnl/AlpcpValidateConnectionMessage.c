/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x1404DD524
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1404DBA50 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404DBC58 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     AlpcpValidateMessage @ 0x1404CF278 (AlpcpValidateMessage.c)
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, unsigned __int16 *a2, char a3)
{
  __int64 v5; // rdx

  if ( !a3 )
    return AlpcpValidateMessage(a2, 0);
  v5 = *(_QWORD *)(a1 + 272);
  if ( *a2 > (unsigned __int64)(v5 - 40) )
    *a2 = v5 - 40;
  return 0LL;
}
