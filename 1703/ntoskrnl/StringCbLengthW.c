/*
 * XREFs of StringCbLengthW @ 0x14006B320
 * Callers:
 *     SPCall2ServerInternal @ 0x1404A9590 (SPCall2ServerInternal.c)
 *     sub_140727D68 @ 0x140727D68 (sub_140727D68.c)
 *     sub_1407282B8 @ 0x1407282B8 (sub_1407282B8.c)
 *     sub_140728F7C @ 0x140728F7C (sub_140728F7C.c)
 *     sub_140729EF8 @ 0x140729EF8 (sub_140729EF8.c)
 *     sub_14072A730 @ 0x14072A730 (sub_14072A730.c)
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
