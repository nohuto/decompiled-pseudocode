/*
 * XREFs of StringCbLengthW @ 0x14007A3C8
 * Callers:
 *     SPCallServerHandleQueryPolicy @ 0x1404AFD24 (SPCallServerHandleQueryPolicy.c)
 *     SPCall2ServerInternal @ 0x1404B09F0 (SPCall2ServerInternal.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14052773C (SPCallServerHandleIsAppLicensed.c)
 *     PfVerifyScenarioBuffer @ 0x140528280 (PfVerifyScenarioBuffer.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1405C0EE4 (SPCallServerHandleGetAppPolicyValue.c)
 *     sub_1407CFA00 @ 0x1407CFA00 (sub_1407CFA00.c)
 *     sub_1407D1140 @ 0x1407D1140 (sub_1407D1140.c)
 *     sub_1407D2AA8 @ 0x1407D2AA8 (sub_1407D2AA8.c)
 *     sub_1407D330C @ 0x1407D330C (sub_1407D330C.c)
 *     sub_1407D3F94 @ 0x1407D3F94 (sub_1407D3F94.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  size_t v3; // rdx
  size_t v5; // rax
  size_t i; // r8
  HRESULT v7; // ecx

  v3 = cbMax >> 1;
  v5 = 0LL;
  if ( psz && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*psz )
        break;
      ++psz;
    }
    v7 = i == 0 ? 0x80070057 : 0;
    if ( i )
      v5 = v3 - i;
    else
      v5 = 0LL;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v7 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v5;
  }
  return v7;
}
