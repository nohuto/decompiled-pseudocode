/*
 * XREFs of or_first_4_wide_rotated_need_last @ 0x1C02B03B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall or_first_4_wide_rotated_need_last(int a1, char a2, int a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v6; // r11
  __int64 v7; // rbx
  unsigned __int32 v8; // r8d
  __int64 result; // rax

  v6 = &a4[a1];
  v7 = a3;
  do
  {
    v8 = _byteswap_ulong(*a4++) >> a2;
    a5[3] = v8;
    *a5 |= HIBYTE(v8);
    a5[1] = BYTE2(v8);
    result = v8 >> 8;
    a5[2] = BYTE1(v8);
    a5 += v7;
  }
  while ( a4 != v6 );
  return result;
}
