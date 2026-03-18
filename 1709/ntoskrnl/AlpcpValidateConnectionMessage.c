/*
 * XREFs of AlpcpValidateConnectionMessage @ 0x140466CEC
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140465410 (AlpcpAcceptConnectPort.c)
 *     AlpcpFormatConnectionRequest @ 0x140466208 (AlpcpFormatConnectionRequest.c)
 * Callees:
 *     AlpcpValidateMessage @ 0x140466D34 (AlpcpValidateMessage.c)
 */

__int64 __fastcall AlpcpValidateConnectionMessage(__int64 a1, _WORD *a2, char a3)
{
  if ( !a3 )
    return AlpcpValidateMessage(a2, 0LL);
  if ( (unsigned __int16)*a2 > (unsigned __int64)(*(_QWORD *)(a1 + 272) - 40LL) )
    *a2 = *(_WORD *)(a1 + 272) - 40;
  return 0LL;
}
