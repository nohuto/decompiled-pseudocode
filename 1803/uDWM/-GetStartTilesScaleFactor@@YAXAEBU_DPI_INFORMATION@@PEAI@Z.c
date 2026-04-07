/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180036CA8
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x180036BBC (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180036D4C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     _AreStartTilesTooBigAtScaleFactor @ 0x180036DCC (_AreStartTilesTooBigAtScaleFactor.c)
 *     _GetScaleIndexDiff @ 0x180036E54 (_GetScaleIndexDiff.c)
 *     _DisableIndependentStartTiles @ 0x180036EA0 (_DisableIndependentStartTiles.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, enum DEVICE_SCALE_FACTOR *a2)
{
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // edi
  enum DEVICE_SCALE_FACTOR v5; // esi
  int ScaleIndexDiff; // ebx
  _DWORD *v7; // rcx
  unsigned int i; // eax
  unsigned int v9; // eax

  LegacyModernScaleFactor = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 2));
  v5 = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 3));
  if ( !(unsigned __int8)DisableIndependentStartTiles() )
  {
    ScaleIndexDiff = GetScaleIndexDiff((unsigned int)v5, (unsigned int)LegacyModernScaleFactor);
    if ( (unsigned __int8)AreStartTilesTooBigAtScaleFactor(a1) && ScaleIndexDiff >= 0 )
      --ScaleIndexDiff;
    LegacyModernScaleFactor = v5;
    v7 = dword_1800B4660;
    for ( i = 0; i < 4; ++i )
    {
      if ( *v7 == v5 )
        break;
      ++v7;
    }
    v9 = ScaleIndexDiff + i;
    if ( v9 < 4 )
      LegacyModernScaleFactor = dword_1800B4660[v9];
  }
  *a2 = LegacyModernScaleFactor;
}
