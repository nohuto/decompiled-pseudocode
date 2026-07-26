/*
 * XREFs of ndisFindPortByPortNumber @ 0x1C003D8CC
 * Callers:
 *     NdisMFreePort @ 0x1C003D570 (NdisMFreePort.c)
 *     ndisPnPPortActivation @ 0x1C003D8FC (ndisPnPPortActivation.c)
 *     ndisPnPPortDeactivation @ 0x1C003DE80 (ndisPnPPortDeactivation.c)
 *     ndisRollbackPortDeactivation @ 0x1C003E3F0 (ndisRollbackPortDeactivation.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003E490 (ndisUpdateMiniportPortStates.c)
 *     ndisOidPrePortState @ 0x1C0047330 (ndisOidPrePortState.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindPortByPortNumber(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 2728);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 2728); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 7);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
