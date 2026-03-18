/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C00C0570
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     InitializePointerPrediction @ 0x1C011C3F0 (InitializePointerPrediction.c)
 * Callees:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00BE8E4 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C00C09E0 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00C0B9C (GetLocalMachineRegistryDWORDValues.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C00C11E8 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0116470 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0118C8C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0119BB0 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01E6D68 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, __int64 a2, unsigned __int16 *a3, unsigned int a4)
{
  int v4; // esi
  __int64 v6; // rcx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  struct tagDEVICECONFIG_SETTING near **v11; // rdi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct tagDEVICECONFIG_SETTING near **v19; // rdi
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  bool v34; // zf
  struct tagDEVICECONFIG_SETTING *v35; // rdi
  int v36; // eax
  struct tagDEVICECONFIG_SETTING *v37; // rdi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  struct tagDEVICECONFIG_SETTING *v47; // rdi
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  _DWORD *v51; // rsi
  struct tagDEVICECONFIG_SETTING *v52; // rbp
  __int64 v53; // r14
  HANDLE v54; // r15
  HANDLE v55; // rsi
  __int128 v56; // [rsp+30h] [rbp-28h]
  HANDLE Handle; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  v6 = (unsigned int)(a1 - 146);
  if ( !(_DWORD)v6 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    v19 = off_1C0324060;
    GetLocalMachineRegistryDWORDValues(v6, L"\\Software\\Microsoft\\Wisp\\Touch", off_1C0324060);
    *(_DWORD *)a2 = (unsigned int)(*((_DWORD *)v19 + 3) - 1) > 0xFFFFFFFD;
    v21 = *((_DWORD *)v19 + 7);
    if ( v21 == -1 )
      v21 = *((_DWORD *)v19 + 6);
    *(_DWORD *)(a2 + 4) = v21;
    v22 = *((_DWORD *)v19 + 11);
    if ( v22 == -1 )
      v22 = *((_DWORD *)v19 + 10);
    *(_DWORD *)(a2 + 8) = v22;
    v23 = *((_DWORD *)v19 + 15);
    if ( v23 == -1 )
      v23 = *((_DWORD *)v19 + 14);
    *(_DWORD *)(a2 + 12) = v23;
    v24 = *((_DWORD *)v19 + 19);
    if ( v24 == -1 )
      v24 = *((_DWORD *)v19 + 18);
    *(_DWORD *)(a2 + 20) = v24;
    v25 = *((_DWORD *)v19 + 23);
    if ( v25 == -1 )
      v25 = *((_DWORD *)v19 + 22);
    *(_DWORD *)(a2 + 24) = v25;
    GetLocalMachineRegistryDWORDValues(v20, L"\\Software\\Microsoft\\Wisp\\Touch", v19 + 12);
    v27 = *((_DWORD *)v19 + 27);
    if ( v27 == -1 )
      v27 = *((_DWORD *)v19 + 26);
    *(_DWORD *)(a2 + 28) = v27;
    v28 = *((_DWORD *)v19 + 31);
    if ( v28 == -1 )
      v28 = *((_DWORD *)v19 + 30);
    *(_DWORD *)(a2 + 32) = v28;
    v29 = *((_DWORD *)v19 + 35);
    if ( v29 == -1 )
      v29 = *((_DWORD *)v19 + 34);
    *(_DWORD *)(a2 + 36) = v29;
    v30 = *((_DWORD *)v19 + 39);
    if ( v30 == -1 )
      v30 = *((_DWORD *)v19 + 38);
    *(_DWORD *)(a2 + 40) = v30;
    v31 = *((_DWORD *)v19 + 43);
    if ( v31 == -1 )
      v31 = *((_DWORD *)v19 + 42);
    *(_DWORD *)(a2 + 44) = v31;
    v32 = *((_DWORD *)v19 + 47);
    if ( v32 == -1 )
      v32 = *((_DWORD *)v19 + 46);
    *(_DWORD *)(a2 + 48) = v32;
    v33 = *((_DWORD *)v19 + 51);
    if ( v33 == -1 )
      v33 = *((_DWORD *)v19 + 50);
    v34 = gMultiTouchMonitor == 0;
    v35 = off_1C0324050;
    *(_DWORD *)(a2 + 52) = v33;
    if ( v34 && OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20019u, &Handle, 0) >= 0 )
    {
      v55 = Handle;
      if ( (int)ReadPointerDeviceCfgDWORDSetting(Handle, v35) < 0 )
        *((_DWORD *)v35 + 3) = -1;
      ZwClose(v55);
    }
    GetLocalMachineRegistryDWORDValues(v26, L"\\Software\\Microsoft\\Wisp\\MultiTouch", v35);
    v36 = *((_DWORD *)v35 + 3);
    if ( v36 == -1 )
      v36 = *((_DWORD *)v35 + 2);
    *(_DWORD *)(a2 + 16) = v36;
    return 1LL;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    if ( !gPenMonitor )
      LoadPointerDevicePenSettings();
    v11 = off_1C0324040;
    v56 = *((_OWORD *)off_1C0324040 + 6);
    if ( !(unsigned int)IsFlicksDisabledByGroupPolicy() )
      v4 = HIDWORD(v56);
    v12 = *((_DWORD *)v11 + 3);
    if ( v12 == -1 )
      v12 = *((_DWORD *)v11 + 2);
    *(_DWORD *)a2 = v12;
    v13 = *((_DWORD *)v11 + 7);
    if ( v13 == -1 )
      v13 = *((_DWORD *)v11 + 6);
    *(_DWORD *)(a2 + 4) = v13;
    v14 = *((_DWORD *)v11 + 11);
    if ( v14 == -1 )
      v14 = *((_DWORD *)v11 + 10);
    *(_DWORD *)(a2 + 8) = v14;
    v15 = *((_DWORD *)v11 + 15);
    if ( v15 == -1 )
      v15 = *((_DWORD *)v11 + 14);
    *(_DWORD *)(a2 + 12) = v15;
    v16 = *((_DWORD *)v11 + 19);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v11 + 18);
    *(_DWORD *)(a2 + 16) = v16;
    v17 = *((_DWORD *)v11 + 23);
    if ( v17 == -1 )
      v17 = *((_DWORD *)v11 + 22);
    *(_DWORD *)(a2 + 20) = v17;
    if ( v4 == -1 )
      v4 = DWORD2(v56);
    *(_DWORD *)(a2 + 24) = v4;
    v18 = *((_DWORD *)v11 + 31);
    if ( v18 == -1 )
      v18 = *((_DWORD *)v11 + 30);
    *(_DWORD *)(a2 + 28) = v18;
    return 1LL;
  }
  v8 = v7 - 2;
  if ( v8 )
  {
    v9 = v8 - 2;
    if ( !v9 )
      return GetFlickMap((struct tagFLICK_MAP *)a2);
    v45 = v9 - 2;
    if ( !v45 )
      return GetCustomFlick((struct tagCUSTOM_FLICK *)a2);
    if ( v45 == 2 )
    {
      v46 = gPredictionMonitor;
      if ( !gPredictionMonitor )
      {
        if ( (int)CreatePredictionSettings(off_1C0324020, a2, a3, a4) >= 0 )
        {
          gPredictionMonitor = 1;
          goto LABEL_79;
        }
        v46 = gPredictionMonitor;
      }
      if ( v46 == 1 )
      {
LABEL_79:
        v47 = off_1C0324020;
        GetPredictionSettings(off_1C0324020, (const wchar_t *)a2, a3);
        v48 = *((_DWORD *)v47 + 3);
        if ( v48 == -1 )
        {
          v48 = *((_DWORD *)v47 + 2);
        }
        else if ( v48 > 0x3C )
        {
          v48 = 60;
        }
        *(_DWORD *)(a2 + 4) = v48;
        glTOUCH_DRIVER_HW_STACK_LATENCY = v48;
        v49 = *((_DWORD *)v47 + 7);
        if ( v49 == -1 )
        {
          v49 = *((_DWORD *)v47 + 6);
        }
        else if ( v49 > 0x3C )
        {
          v49 = 60;
        }
        *(_DWORD *)(a2 + 8) = v49;
        glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v49;
        v50 = *((_DWORD *)v47 + 11);
        if ( v50 == -1 )
          v50 = *((_DWORD *)v47 + 10);
        *(_DWORD *)(a2 + 12) = v50;
        gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v50;
        return 1LL;
      }
    }
    return 0LL;
  }
  v37 = off_1C0324C78;
  if ( !gModeMonitor
    && OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20019u, &Handle, 0) >= 0 )
  {
    v51 = (_DWORD *)((char *)v37 + 12);
    v52 = v37;
    v53 = 7LL;
    v54 = Handle;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(v54, v52) < 0 )
        *v51 = -1;
      v52 = (struct tagDEVICECONFIG_SETTING *)((char *)v52 + 16);
      v51 += 4;
      --v53;
    }
    while ( v53 );
    ZwClose(v54);
  }
  v38 = *((_DWORD *)v37 + 3);
  if ( v38 == -1 )
    v38 = *((_DWORD *)v37 + 2);
  *(_DWORD *)a2 = v38;
  v39 = *((_DWORD *)v37 + 7);
  if ( v39 == -1 )
    v39 = *((_DWORD *)v37 + 6);
  *(_DWORD *)(a2 + 4) = v39;
  v40 = *((_DWORD *)v37 + 11);
  if ( v40 == -1 )
    v40 = *((_DWORD *)v37 + 10);
  *(_DWORD *)(a2 + 8) = v40;
  v41 = *((_DWORD *)v37 + 15);
  if ( v41 == -1 )
    v41 = *((_DWORD *)v37 + 14);
  *(_DWORD *)(a2 + 12) = v41;
  v42 = *((_DWORD *)v37 + 19);
  if ( v42 == -1 )
    v42 = *((_DWORD *)v37 + 18);
  *(_DWORD *)(a2 + 16) = v42;
  v43 = *((_DWORD *)v37 + 23);
  if ( v43 == -1 )
    v43 = *((_DWORD *)v37 + 22);
  *(_DWORD *)(a2 + 20) = v43;
  v44 = *((_DWORD *)v37 + 27);
  if ( v44 == -1 )
    v44 = *((_DWORD *)v37 + 26);
  *(_DWORD *)(a2 + 24) = v44;
  return 1LL;
}
