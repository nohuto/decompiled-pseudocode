/*
 * XREFs of or_all_2_wide_rotated_need_last @ 0x1C00DEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall or_all_2_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int16 *a4, _BYTE *a5)
{
  __int64 v5; // rdi
  unsigned __int16 *v8; // r10
  char v9; // r11
  unsigned __int16 v10; // dx
  unsigned __int8 v11; // al
  __int16 result; // ax

  v5 = a3;
  v8 = &a4[a1];
  v9 = 8 - a2;
  do
  {
    v10 = *a4;
    v11 = *a4++;
    *a5 |= v11 >> a2;
    result = HIBYTE(v10);
    LOBYTE(result) = ((_BYTE)v10 << v9) | (HIBYTE(v10) >> a2);
    a5[1] |= result;
    a5 += v5;
  }
  while ( a4 != v8 );
  return result;
}
