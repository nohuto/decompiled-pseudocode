/*
 * XREFs of sub_1800306B8 @ 0x1800306B8
 * Callers:
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 * Callees:
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_1800306B8(const char *a1, int a2, _BYTE *a3, unsigned int a4, __int64 a5, __int64 a6)
{
  int v6; // r11d
  int v7; // r10d
  const char *v10; // rax
  signed __int64 v11; // r8
  char v12; // cl
  int v13; // eax
  char v14; // al

  v6 = 0;
  v7 = a4 - 1;
  if ( a2 >= a4 )
    a2 = v7 / 2;
  if ( v7 < 0 )
  {
LABEL_12:
    v14 = dword_180155A10;
    if ( (dword_180155A10 & 3) != 0 )
    {
      sub_1800D5274(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1379,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a1,
        a3);
      v14 = dword_180155A10;
    }
    if ( (v14 & 0x40) != 0 )
      __debugbreak();
    return 0xFFFFFFFFLL;
  }
  else
  {
    while ( 1 )
    {
      v10 = a1;
      v11 = &a3[*(unsigned int *)(a5 + 4LL * a2)] - a1;
      while ( 1 )
      {
        v12 = *v10;
        if ( *v10 != v10[v11] )
          break;
        ++v10;
        if ( !v12 )
        {
          v13 = 0;
          goto LABEL_8;
        }
      }
      v13 = *v10 < (unsigned int)v10[v11] ? -1 : 1;
LABEL_8:
      if ( !v13 )
        return *(unsigned __int16 *)(a6 + 2LL * a2);
      if ( v13 >= 0 )
        v6 = a2 + 1;
      else
        v7 = a2 - 1;
      a2 = (v7 + v6) / 2;
      if ( v7 < v6 )
        goto LABEL_12;
    }
  }
}
