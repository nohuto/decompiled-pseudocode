/*
 * XREFs of _DisableIndependentStartTiles @ 0x1801C3A48
 * Callers:
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x1801C3AC8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     _EnableTestHooks @ 0x1801C39F8 (_EnableTestHooks.c)
 */

bool __fastcall DisableIndependentStartTiles(char a1)
{
  int v1; // eax
  int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF

  LOBYTE(pvData) = a1;
  v1 = dword_1802BAC68;
  if ( !dword_1802BAC68 )
  {
    pvData = 0;
    if ( EnableTestHooks() )
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
    dword_1802BAC68 = v1;
  }
  return v1 == 1;
}
