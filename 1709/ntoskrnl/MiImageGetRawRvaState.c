/*
 * XREFs of MiImageGetRawRvaState @ 0x140564E1C
 * Callers:
 *     MiImageRvaRawEnumFirst @ 0x140564C64 (MiImageRvaRawEnumFirst.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiImageGetRawRvaState(_DWORD *a1, int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r8
  __int64 result; // rax
  int v6; // r11d
  __int64 v7; // r10
  unsigned int v8; // ecx
  _DWORD *v9; // r8

  v2 = a1[25];
  v3 = a1 + 26;
  result = 0LL;
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
        result = (1 << v8) | (unsigned int)result;
      ++v8;
      ++v9;
    }
    while ( v8 < v2 );
  }
  return result;
}
