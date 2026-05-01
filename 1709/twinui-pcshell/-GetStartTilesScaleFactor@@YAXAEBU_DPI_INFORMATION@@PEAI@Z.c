/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x1801C3AC8
 * Callers:
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z @ 0x1800990F8 (-PositionView@CActionCenterExperienceManager@@AEAAJW4ActionCenterViewState@1@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801C361C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     _DisableIndependentStartTiles @ 0x1801C3A48 (_DisableIndependentStartTiles.c)
 *     MulDiv_0 @ 0x1801E33A4 (MulDiv_0.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, unsigned int *a2)
{
  unsigned int LegacyModernScaleFactor; // ebp
  unsigned int v5; // edi
  char v6; // cl
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rdx
  unsigned int i; // ecx
  int v12; // ebx
  int v13; // ebp
  float v14; // xmm1_4
  float v15; // xmm0_4
  unsigned int v16; // eax
  _DWORD *v17; // rcx
  unsigned int v18; // ecx

  LegacyModernScaleFactor = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 2));
  v5 = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 3));
  if ( DisableIndependentStartTiles(v6) )
  {
    *a2 = LegacyModernScaleFactor;
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = dword_18023BF80;
    for ( i = 0; i < 4; ++i )
    {
      if ( *v9 == v5 )
        v7 = i;
      if ( *v9++ == LegacyModernScaleFactor )
        v8 = i;
    }
    v12 = v8 - v7;
    v13 = (*((_DWORD *)a1 + 10) + *((_DWORD *)a1 + 11)) / 2;
    if ( !v13
      || ((v14 = (float)MulDiv_0(150, *((_DWORD *)a1 + 1), 100) / (float)v13,
           (float)((float)*((int *)a1 + 16) / 10.0) < 28.0)
        ? (v15 = FLOAT_1_1538)
        : (v15 = FLOAT_1_259843),
          v14 > v15) )
    {
      if ( v12 >= 0 )
        --v12;
    }
    v16 = 0;
    v17 = dword_18023BF80;
    do
    {
      if ( *v17 == v5 )
        break;
      ++v16;
      ++v17;
    }
    while ( v16 < 4 );
    v18 = v16 + v12;
    if ( (int)(v16 + v12) >= 0 && v18 < 4 )
      v5 = dword_18023BF80[v18];
    *a2 = v5;
  }
}
