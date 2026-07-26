/*
 * XREFs of ndisFindReceiveFilterByFilterId @ 0x1C003B4D8
 * Callers:
 *     ndisClearReceiveFilter @ 0x1C003AF64 (ndisClearReceiveFilter.c)
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C003B8F0 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C003BAB0 (ndisOidPostRcvFilterSetFilter.c)
 *     ndisOidPreRcvFilterClearFilter @ 0x1C003BBA0 (ndisOidPreRcvFilterClearFilter.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003C360 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterParameters @ 0x1C003C530 (ndisOidPreRcvFilterParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindReceiveFilterByFilterId(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 3512);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 3512); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 12);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
