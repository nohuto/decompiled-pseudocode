/*
 * XREFs of ndisNsiSetAllSessionInformation @ 0x1C00E48E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisNsiSetAllSessionInformation(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int *v3; // rdx

  v1 = 0;
  if ( *(_DWORD *)(a1 + 52) )
    return 3221225474LL;
  if ( *(_DWORD *)(a1 + 48) )
    return 3221225485LL;
  v3 = *(unsigned int **)(a1 + 32);
  if ( v3 )
    v1 = *v3;
  return NdisSetSessionCompartmentId(**(_DWORD **)(a1 + 16), v1);
}
