/*
 * XREFs of _wcsnicmp @ 0x18008CC10
 * Callers:
 *     sub_180022980 @ 0x180022980 (sub_180022980.c)
 *     sub_18004148C @ 0x18004148C (sub_18004148C.c)
 *     sub_180067ACC @ 0x180067ACC (sub_180067ACC.c)
 *     sub_180068ED0 @ 0x180068ED0 (sub_180068ED0.c)
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 *     sub_18007B934 @ 0x18007B934 (sub_18007B934.c)
 *     sub_180104A3C @ 0x180104A3C (sub_180104A3C.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // r9d
  size_t v4; // rbx
  const wchar_t *v5; // r11
  signed __int64 v6; // r10
  __int16 v7; // cx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // r8

  v3 = 0;
  v4 = MaxCount;
  v5 = String2;
  if ( MaxCount )
  {
    v6 = (char *)String1 - (char *)String2;
    do
    {
      v7 = *(const wchar_t *)((char *)v5 + v6);
      v8 = v7 + 32;
      if ( (unsigned __int16)(v7 - 65) > 0x19u )
        v8 = *(const wchar_t *)((char *)v5 + v6);
      v9 = *v5++;
      v10 = v9 + 32;
      if ( (unsigned __int16)(v9 - 65) > 0x19u )
        v10 = v9;
      --v4;
    }
    while ( v4 && v8 && v8 == v10 );
    return v8 - v10;
  }
  return v3;
}
