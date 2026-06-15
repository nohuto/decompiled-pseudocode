/*
 * XREFs of ?GetEndpointClassGuid@EndpointDeviceId@@UEAAJPEAU_GUID@@@Z @ 0x1800ED030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDeviceId::GetEndpointClassGuid(struct _GUID *this, struct _GUID *a2)
{
  if ( a2 )
    *a2 = this[3];
  return a2 == 0LL ? 0x80004003 : 0;
}
