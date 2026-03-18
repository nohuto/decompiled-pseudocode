/*
 * XREFs of CreateDIBPalette @ 0x1C01F4868
 * Callers:
 *     ?xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F4684 (-xxxGetDummyPalette@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     GreCreateHalftonePalette @ 0x1C0292144 (GreCreateHalftonePalette.c)
 */

_WORD *__fastcall CreateDIBPalette(unsigned __int16 *a1, int a2)
{
  unsigned __int16 v2; // si
  int v4; // ebp
  _WORD *result; // rax
  _BYTE *v6; // rdx
  _WORD *v7; // rbx
  __int64 v8; // r8
  _BYTE *v9; // rcx
  __int64 HalftonePalette; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8

  v2 = a2;
  if ( !a2 )
  {
    HalftonePalette = GreCreateHalftonePalette(*(HDC *)(gpDispInfo + 56LL));
LABEL_11:
    GreSetPaletteOwner(HalftonePalette, 0LL);
    return (_WORD *)HalftonePalette;
  }
  v4 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 12 && *((_DWORD *)a1 + 8) )
    v2 = a1[16];
  result = (_WORD *)Win32AllocPoolWithQuota(4LL * v2 + 8, 1885565781LL);
  v7 = result;
  if ( result )
  {
    result[1] = v2;
    v8 = 0LL;
    v9 = (char *)a1 + *a1;
    *result = 768;
    if ( v2 )
    {
      v6 = (char *)result + 5;
      do
      {
        v8 = (unsigned int)(v8 + 1);
        *(v6 - 1) = v9[2];
        *v6 = v9[1];
        v6 += 4;
        *(v6 - 3) = *v9;
        *(v6 - 2) = 4;
        v9 += (v4 != 12) + 3;
      }
      while ( (int)v8 < (unsigned __int16)result[1] );
    }
    HalftonePalette = GreCreatePalette(result, v6, v8);
    Win32FreePool(v7, v11, v12);
    goto LABEL_11;
  }
  return result;
}
