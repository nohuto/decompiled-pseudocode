/*
 * XREFs of StringCbLengthW @ 0x1400E3518
 * Callers:
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 *     SPCallServerHandleQueryPolicy @ 0x140536700 (SPCallServerHandleQueryPolicy.c)
 *     SPCallServerHandleIsAppLicensed @ 0x14058B7CC (SPCallServerHandleIsAppLicensed.c)
 *     sub_140767D38 @ 0x140767D38 (sub_140767D38.c)
 *     sub_140769454 @ 0x140769454 (sub_140769454.c)
 *     sub_14076A110 @ 0x14076A110 (sub_14076A110.c)
 *     sub_14076BA6C @ 0x14076BA6C (sub_14076BA6C.c)
 *     sub_14076C270 @ 0x14076C270 (sub_14076C270.c)
 *     sub_14076CEE8 @ 0x14076CEE8 (sub_14076CEE8.c)
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
