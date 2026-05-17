/*
 * XREFs of _wcsnicmp @ 0x1800977C0
 * Callers:
 *     sub_18003B380 @ 0x18003B380 (sub_18003B380.c)
 *     sub_1800616E4 @ 0x1800616E4 (sub_1800616E4.c)
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     sub_18006AAE8 @ 0x18006AAE8 (sub_18006AAE8.c)
 *     sub_18010D6E8 @ 0x18010D6E8 (sub_18010D6E8.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsnicmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  int v3; // r9d
  const wchar_t *v4; // r10
  signed __int64 v5; // r11
  unsigned __int16 v6; // cx
  wchar_t v7; // dx

  v3 = 0;
  v4 = String2;
  if ( MaxCount )
  {
    v5 = (char *)String1 - (char *)String2;
    do
    {
      v6 = *(const wchar_t *)((char *)v4 + v5);
      if ( (unsigned __int16)(v6 - 65) <= 0x19u )
        v6 += 32;
      v7 = *v4;
      if ( (unsigned __int16)(*v4 - 65) <= 0x19u )
        v7 += 32;
      ++v4;
      --MaxCount;
    }
    while ( MaxCount && v6 && v6 == v7 );
    return v6 - v7;
  }
  return v3;
}
