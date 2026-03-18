/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A6E44
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0007750 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C005B7B4 (DrvGetCurrentDpiInfoFromHDev.c)
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00894E0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreReinitializeStockFonts @ 0x1C009BE90 (GreReinitializeStockFonts.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v4; // kr00_4
  unsigned int v5; // ebx
  struct _MDEV *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  UNICODE_STRING String2; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v13; // [rsp+C8h] [rbp-38h]
  int v14; // [rsp+D0h] [rbp-30h]
  __int64 v15; // [rsp+D8h] [rbp-28h]
  __int64 v16; // [rsp+E0h] [rbp-20h]
  int v17; // [rsp+E8h] [rbp-18h]
  __int64 v18; // [rsp+F0h] [rbp-10h]
  int v19; // [rsp+F8h] [rbp-8h]
  _DWORD v20[32]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v21; // [rsp+198h] [rbp+98h] BYREF
  int v22; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _MDEV *v23; // [rsp+1A8h] [rbp+A8h] BYREF

  QueryTable.Flags = 292;
  v22 = 0;
  QueryTable.Name = L"ImageState";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 3221225474LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 3221225474LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v22;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 3221225474LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 3221225474LL;
  memset(v20, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), (__int64)v20);
  v4 = 96 * v20[2] + 50;
  v5 = v4 / 0x64;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( (int)IsGetDpiSettingSupported() >= 0 )
      GetDpiSetting(1LL, &v22);
    if ( v22 != v5
      && (int)IsSetDpiSettingSupported() >= 0
      && (int)SetDpiSetting(1LL, v5) >= 0
      && (int)IsSetDpiScalingSettingSupported() >= 0
      && (int)SetDpiScalingSetting(1LL, v4 / 0x64 > 0x78) >= 0 )
    {
      gDrvDpiWin8Style = 0;
      LOBYTE(v21) = 0;
      gDrvDpiAdjusted = 0;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0LL,
                  0x88Fu,
                  0,
                  0LL,
                  0,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 8),
                  &v23,
                  0LL,
                  0LL,
                  (char *)&v21,
                  0LL,
                  (__int64)a1) >= 0
        && !(_BYTE)v21 )
      {
        GreReinitializeStockFonts(v5, 1);
        v6 = v23;
        *(_QWORD *)(gpDispInfo + 32) = *(_QWORD *)v23;
        *(_QWORD *)(gpDispInfo + 8) = v6;
        v21 = *(_QWORD *)(gpDispInfo + 32);
        vGetDeviceCaps((struct PDEVOBJ *)&v21, gpGdiDevCaps);
        *((_WORD *)gpsi + 4987) = v5;
        *(_WORD *)(PsGetCurrentProcessWin32Process(v8, v7, v9) + 284) = *((_WORD *)gpsi + 4987);
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
