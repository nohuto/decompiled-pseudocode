/*
 * XREFs of BgpGxFillRectangle @ 0x1401413A0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14014076C (BgpTxtDisplayCharacter.c)
 *     RaspAntiAlias @ 0x140141150 (RaspAntiAlias.c)
 *     BgpClearScreen @ 0x1402661F0 (BgpClearScreen.c)
 *     BgpTxtAdjustStaticRegion @ 0x140266548 (BgpTxtAdjustStaticRegion.c)
 *     BgpTxtCreateRegion @ 0x140756A9C (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x14075AB90 (BgpTxtDisplayString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BgpGxFillRectangle(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 v5; // r9

  result = *(_QWORD *)(a1 + 24);
  v4 = *(_DWORD *)a1 * *(_DWORD *)(a1 + 4);
  if ( v4 )
  {
    v5 = v4;
    do
    {
      *(_WORD *)(result + 1) = a2 >> 8;
      *(_BYTE *)result = a2;
      if ( *(_DWORD *)(a1 + 8) == 32 )
        *(_BYTE *)(result + 3) = HIBYTE(a2);
      result += (unsigned __int64)*(unsigned int *)(a1 + 8) >> 3;
      --v5;
    }
    while ( v5 );
  }
  *(_DWORD *)(a1 + 16) &= ~0x10u;
  return result;
}
