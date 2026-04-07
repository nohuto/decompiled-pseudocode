/*
 * XREFs of _GetScaleIndexDiff @ 0x180036E54
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180036CA8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetScaleIndexDiff(int a1, int a2)
{
  unsigned int v2; // r9d
  _DWORD *v3; // r11
  unsigned int v4; // r8d
  unsigned int i; // r10d
  unsigned int v7; // eax
  unsigned int v8; // ecx
  bool v9; // zf

  v2 = 0;
  v3 = dword_1800B4660;
  v4 = 0;
  for ( i = 0; i < 4; ++i )
  {
    v7 = i;
    v8 = i;
    if ( *v3 != a1 )
      v7 = v2;
    v9 = *v3 == a2;
    v2 = v7;
    ++v3;
    if ( !v9 )
      v8 = v4;
    v4 = v8;
  }
  return v8 - v7;
}
