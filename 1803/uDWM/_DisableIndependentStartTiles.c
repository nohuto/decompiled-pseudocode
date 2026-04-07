/*
 * XREFs of _DisableIndependentStartTiles @ 0x180036EA0
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180036CA8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     _EnableTestHooks @ 0x180048ADC (_EnableTestHooks.c)
 */

bool __fastcall DisableIndependentStartTiles(char a1)
{
  int v1; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(pvData) = a1;
  v1 = dword_1800C9E68;
  if ( !dword_1800C9E68 )
  {
    pvData = 0;
    if ( (unsigned __int8)EnableTestHooks() )
    {
      pcbData = 4;
      RegGetValueW(
        HKEY_LOCAL_MACHINE,
        L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Scaling",
        L"DisableIndependentStartTiles",
        0x10u,
        0LL,
        &pvData,
        &pcbData);
    }
    v1 = (pvData != 1) + 1;
    dword_1800C9E68 = v1;
  }
  return v1 == 1;
}
