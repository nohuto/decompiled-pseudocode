/*
 * XREFs of ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180035188
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x18003509C (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180035248 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     _AreStartTilesTooBigAtScaleFactor @ 0x1800352D4 (_AreStartTilesTooBigAtScaleFactor.c)
 *     _DisableIndependentStartTiles @ 0x18003535C (_DisableIndependentStartTiles.c)
 */

void __fastcall GetStartTilesScaleFactor(const struct _DPI_INFORMATION *a1, enum DEVICE_SCALE_FACTOR *a2)
{
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // r14d
  enum DEVICE_SCALE_FACTOR v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // rdx
  unsigned int i; // ecx
  int v11; // ebx
  unsigned int v12; // eax
  _DWORD *v13; // rcx
  unsigned int v14; // ecx

  LegacyModernScaleFactor = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 2));
  v5 = GetLegacyModernScaleFactor(*((_DWORD *)a1 + 3));
  if ( (unsigned __int8)DisableIndependentStartTiles() )
  {
    *a2 = LegacyModernScaleFactor;
  }
  else
  {
    v6 = 0;
    v7 = 0;
    v8 = dword_1800AB060;
    for ( i = 0; i < 4; ++i )
    {
      if ( *v8 == v5 )
        v6 = i;
      if ( *v8++ == LegacyModernScaleFactor )
        v7 = i;
    }
    v11 = v7 - v6;
    if ( (unsigned __int8)AreStartTilesTooBigAtScaleFactor(a1, v8) && v11 >= 0 )
      --v11;
    v12 = 0;
    v13 = dword_1800AB060;
    do
    {
      if ( *v13 == v5 )
        break;
      ++v12;
      ++v13;
    }
    while ( v12 < 4 );
    v14 = v12 + v11;
    if ( (int)(v12 + v11) >= 0 && v14 < 4 )
      v5 = dword_1800AB060[v14];
    *a2 = v5;
  }
}
