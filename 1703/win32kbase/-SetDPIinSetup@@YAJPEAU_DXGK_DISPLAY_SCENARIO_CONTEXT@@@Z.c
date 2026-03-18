/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CEF4
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0074A90 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0026CD0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0082638 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreReinitializeStockFonts @ 0x1C00926E0 (GreReinitializeStockFonts.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v4; // kr00_4
  unsigned int v5; // ebx
  struct _MDEV *v6; // rdx
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v10; // [rsp+D8h] [rbp-28h]
  int v11; // [rsp+E0h] [rbp-20h]
  __int64 v12; // [rsp+E8h] [rbp-18h]
  __int64 v13; // [rsp+F0h] [rbp-10h]
  int v14; // [rsp+F8h] [rbp-8h]
  __int64 v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  _DWORD v17[32]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v18; // [rsp+1A8h] [rbp+A8h] BYREF
  int v19; // [rsp+1B0h] [rbp+B0h] BYREF
  struct _MDEV *v20; // [rsp+1B8h] [rbp+B8h] BYREF

  QueryTable.Flags = 292;
  v19 = 0;
  QueryTable.Name = L"ImageState";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = 0;
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
  QueryTable.EntryContext = &v19;
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
  memset(v17, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), (__int64)v17);
  v4 = 96 * v17[2] + 50;
  v5 = v4 / 0x64;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( (int)IsGetDpiSettingSupported() >= 0 )
      GetDpiSetting(1LL, &v19);
    if ( v19 != v5
      && (int)IsSetDpiSettingSupported() >= 0
      && (int)SetDpiSetting(1LL, v5) >= 0
      && (int)IsSetDpiScalingSettingSupported() >= 0
      && (int)SetDpiScalingSetting(1LL, v4 / 0x64 > 0x78) >= 0 )
    {
      gDrvDpiWin8Style = 0;
      LOBYTE(v18) = 0;
      gDrvDpiAdjusted = 0;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0LL,
                  0,
                  0LL,
                  2191,
                  0,
                  0LL,
                  0,
                  0LL,
                  *((struct _MDEV **)gpDispInfo + 1),
                  &v20,
                  0LL,
                  0LL,
                  (char *)&v18,
                  0LL,
                  (__int64)a1) >= 0
        && !(_BYTE)v18 )
      {
        GreReinitializeStockFonts(v5, 1);
        v6 = v20;
        *((_QWORD *)gpDispInfo + 4) = *(_QWORD *)v20;
        *((_QWORD *)gpDispInfo + 1) = v6;
        v18 = *((_QWORD *)gpDispInfo + 4);
        vGetDeviceCaps((struct PDEVOBJ *)&v18, gpGdiDevCaps);
        *((_WORD *)gpDispInfo + 72) = v5;
        *((_WORD *)gpsi + 4339) = v5;
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
