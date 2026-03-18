/*
 * XREFs of ?vLine4Octant07@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02B0D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine4Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, char a4)
{
  unsigned int v4; // r11d
  int v5; // r10d
  int v6; // r14d
  int v7; // ebp
  int v8; // esi
  unsigned __int8 *v9; // rbx
  char v10; // di

  v4 = *((_DWORD *)a1 + 1);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 4);
  v7 = *((_DWORD *)a1 + 5);
  v8 = *((_DWORD *)a1 + 3);
  v9 = a2;
  v10 = (16 * (a4 & 0xF)) | a4 & 0xF;
  a2[(unsigned __int64)v4 >> 1] = a2[(unsigned __int64)v4 >> 1] & PixelLineMask4[v4 & 1] | v10 & ~PixelLineMask4[v4 & 1];
  while ( --v8 )
  {
    ++v4;
    v5 += v7;
    if ( v5 >= 0 )
    {
      v5 -= v6;
      v9 += a3;
    }
    v9[(unsigned __int64)v4 >> 1] = v9[(unsigned __int64)v4 >> 1] & PixelLineMask4[v4 & 1] | v10 & ~PixelLineMask4[v4 & 1];
  }
}
