/*
 * XREFs of sub_180046D4C @ 0x180046D4C
 * Callers:
 *     sub_180037618 @ 0x180037618 (sub_180037618.c)
 *     sub_180046C08 @ 0x180046C08 (sub_180046C08.c)
 *     sub_1800FA748 @ 0x1800FA748 (sub_1800FA748.c)
 *     sub_1800FD028 @ 0x1800FD028 (sub_1800FD028.c)
 * Callees:
 *     sub_180046DAC @ 0x180046DAC (sub_180046DAC.c)
 */

__int64 __fastcall sub_180046D4C(_QWORD *a1, wchar_t *a2)
{
  __int64 result; // rax
  wchar_t *v5; // rcx
  wchar_t *v6; // rcx
  wchar_t *v7; // rcx
  int v8; // ecx

  result = 0LL;
  if ( !a1 )
    return 3221225524LL;
  v5 = (wchar_t *)a1[17];
  if ( !v5 )
    goto LABEL_5;
  if ( !(unsigned __int8)sub_180046DAC(v5, a2) )
    return 3221225524LL;
  result = 0LL;
LABEL_5:
  v6 = (wchar_t *)a1[16];
  if ( v6 )
  {
    v8 = -((unsigned __int8)sub_180046DAC(v6, a2) == 0);
    return v8 & 0xC0000034;
  }
  v7 = (wchar_t *)a1[19];
  if ( v7 )
  {
    v8 = -((unsigned __int8)sub_180046DAC(v7, a2) != 0);
    return v8 & 0xC0000034;
  }
  return result;
}
