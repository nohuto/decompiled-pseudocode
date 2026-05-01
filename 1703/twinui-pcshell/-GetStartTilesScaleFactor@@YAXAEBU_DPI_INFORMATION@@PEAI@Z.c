/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x1801778CC
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1801779F0 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180177418 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     _DisableIndependentStartTiles @ 0x18017784C (_DisableIndependentStartTiles.c)
 *     MulDiv_0 @ 0x1801952EA (MulDiv_0.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, unsigned int *a2)
{
  unsigned int LegacyModernScaleFactor; // ebp
  unsigned int v5; // edi
  char v6; // cl
  unsigned int v7; // eax
  unsigned int v8; // ebx
  const wchar_t *v9; // rdx
  unsigned int i; // ecx
  bool v11; // zf
  int v12; // ebx
  int v13; // ebp
  float v14; // xmm1_4
  float v15; // xmm0_4
  unsigned int v16; // eax
  const wchar_t *v17; // rcx
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
    v9 = L"P";
    for ( i = 0; i < 4; ++i )
    {
      if ( *(_DWORD *)v9 == v5 )
        v7 = i;
      v11 = *(_DWORD *)v9 == LegacyModernScaleFactor;
      v9 += 2;
      if ( v11 )
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
    v17 = L"P";
    do
    {
      if ( *(_DWORD *)v17 == v5 )
        break;
      ++v16;
      v17 += 2;
    }
    while ( v16 < 4 );
    v18 = v16 + v12;
    if ( (int)(v16 + v12) >= 0 && v18 < 4 )
      v5 = *(_DWORD *)&aP[2 * v18];
    *a2 = v5;
  }
}
