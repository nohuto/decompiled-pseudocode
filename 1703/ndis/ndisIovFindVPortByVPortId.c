/*
 * XREFs of ndisIovFindVPortByVPortId @ 0x1C006ABA8
 * Callers:
 *     ndisOidPostRcvFilterMoveFilter @ 0x1C003DAD0 (ndisOidPostRcvFilterMoveFilter.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C003DEC0 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterMoveFilter @ 0x1C003E550 (ndisOidPreRcvFilterMoveFilter.c)
 *     ndisSetReceiveFilter @ 0x1C003EB5C (ndisSetReceiveFilter.c)
 *     ndisIovDeleteNicSwitchDefaultVPortAndPFBlock @ 0x1C006A75C (ndisIovDeleteNicSwitchDefaultVPortAndPFBlock.c)
 *     ndisOidPostIovVPortParameters @ 0x1C006B970 (ndisOidPostIovVPortParameters.c)
 *     ndisOidPreIovDeleteVPort @ 0x1C00E6D60 (ndisOidPreIovDeleteVPort.c)
 *     ndisOidPreIovVPortParameters @ 0x1C00E7D80 (ndisOidPreIovVPortParameters.c)
 *     ndisOidPrePDOpenProvider @ 0x1C00EF250 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisIovFindVPortByVPortId(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 4776);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 4776); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 31);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
