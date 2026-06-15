/*
 * XREFs of ?GetAdapterClassGuid@EndpointDeviceId@@UEAAJPEAU_GUID@@@Z @ 0x1800ECFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDeviceId::GetAdapterClassGuid(struct _GUID *this, struct _GUID *a2)
{
  if ( a2 )
    *a2 = this[2];
  return a2 == 0LL ? 0x80004003 : 0;
}
