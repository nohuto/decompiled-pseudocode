/*
 * XREFs of sub_18003F70C @ 0x18003F70C
 * Callers:
 *     sub_18003BCF0 @ 0x18003BCF0 (sub_18003BCF0.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180022BB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall sub_18003F70C(_DWORD *a1, const WCHAR *a2, unsigned __int16 a3)
{
  unsigned int v4; // r11d
  const WCHAR *v7; // r9
  __int64 v8; // rbx
  WCHAR v9; // cx
  __int64 v10; // rbx
  int v11; // r8d
  int v12; // ecx
  int v13; // edx
  __int64 v14; // r9

  v4 = 0;
  v7 = a2;
  if ( a3 )
  {
    v8 = a3;
    do
    {
      v9 = *v7 + 32;
      if ( (unsigned __int16)(*v7 - 65) > 0x19u )
        v9 = *v7;
      ++v7;
      v4 = v9 + a1[6] * v4;
      --v8;
    }
    while ( v8 );
  }
  v10 = 0LL;
  v11 = 0;
  v12 = a1[3] - 1;
  if ( v12 < 0 )
    return v10;
  while ( 1 )
  {
    v13 = (v12 + v11) >> 1;
    v14 = (unsigned int)a1[5] + 8LL * v13;
    if ( v4 < *(_DWORD *)((char *)a1 + v14) )
    {
      v12 = v13 - 1;
      goto LABEL_10;
    }
    if ( v4 <= *(_DWORD *)((char *)a1 + v14) )
      break;
    v11 = v13 + 1;
LABEL_10:
    if ( v11 > v12 )
      return v10;
  }
  v10 = (__int64)&a1[6 * *(_DWORD *)((char *)a1 + v14 + 4)] + (unsigned int)a1[4];
  if ( !v10
    || !RtlCompareUnicodeStrings(
          a2,
          a3,
          (PCWCH)((char *)a1 + *(unsigned int *)(v10 + 4)),
          (unsigned __int64)*(unsigned int *)(v10 + 12) >> 1,
          1u) )
  {
    return v10;
  }
  return 0LL;
}
