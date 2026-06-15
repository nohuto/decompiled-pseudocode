/*
 * XREFs of ?EndpointExistsOnMultiplexer@PhoneTopology3@@UEAAJPEAUIConnector@@PEAH@Z @ 0x1800EB590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PhoneTopology3::EndpointExistsOnMultiplexer(PhoneTopology3 *this, struct IConnector *a2, int *a3)
{
  if ( a3 )
    *a3 = 0;
  return a3 == 0LL ? 0x80004003 : 0;
}
