/*
 * XREFs of sub_18004A35C @ 0x18004A35C
 * Callers:
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_1800FA748 @ 0x1800FA748 (sub_1800FA748.c)
 * Callees:
 *     sub_180046DAC @ 0x180046DAC (sub_180046DAC.c)
 */

__int64 __fastcall sub_18004A35C(__int64 a1, wchar_t *a2)
{
  wchar_t *v4; // rcx
  wchar_t *v5; // rcx
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  v4 = *(wchar_t **)(a1 + 136);
  if ( v4 && sub_180046DAC(v4, a2) )
    return 3221225524LL;
  v5 = *(wchar_t **)(a1 + 152);
  result = 0LL;
  if ( v5 )
    return sub_180046DAC(v5, a2) != 0 ? 0xC0000034 : 0;
  return result;
}
