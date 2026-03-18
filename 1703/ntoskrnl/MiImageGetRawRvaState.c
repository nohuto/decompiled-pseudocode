/*
 * XREFs of MiImageGetRawRvaState @ 0x140423DCC
 * Callers:
 *     MiImageRvaRawEnumFirst @ 0x140423C24 (MiImageRvaRawEnumFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageGetRawRvaState(_DWORD *a1, int a2)
{
  unsigned int v2; // r10d
  _DWORD *v3; // rax
  unsigned int v4; // r8d
  int v6; // r11d
  __int64 v7; // r9
  unsigned int v8; // ecx
  _DWORD *v9; // r9

  v2 = a1[25];
  v3 = a1 + 26;
  v4 = 0;
  v6 = 0;
  if ( v2 )
  {
    v7 = v2;
    do
    {
      if ( *v3 == a2 )
        v6 |= v3[1];
      v3 += 10;
      --v7;
    }
    while ( v7 );
  }
  v8 = 0;
  if ( v2 )
  {
    v9 = a1 + 22;
    do
    {
      if ( (v6 & *v9) != 0 )
        v4 |= 1 << v8;
      ++v8;
      ++v9;
    }
    while ( v8 < v2 );
  }
  return v4;
}
