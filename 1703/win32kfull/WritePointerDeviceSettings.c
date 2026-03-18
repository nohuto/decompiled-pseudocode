/*
 * XREFs of WritePointerDeviceSettings @ 0x1C01E7538
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01E6FB8 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01E7120 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01E727C (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01E72D8 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, const unsigned __int16 *a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  struct tagDEVICECONFIG_SETTING *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // edx
  BOOL v14; // eax
  int v15; // eax
  unsigned int v16; // ebx
  HANDLE v17; // rsi
  const unsigned __int16 **v18; // rdi
  NTSTATUS v19; // ebp
  int v21; // eax
  unsigned int v22; // ebx
  HANDLE v23; // rsi
  const unsigned __int16 **v24; // rdi
  NTSTATUS v25; // ebp
  int v26; // eax
  unsigned int v27; // esi
  HANDLE v28; // rbp
  const unsigned __int16 **v29; // r14
  NTSTATUS v30; // r15d
  int v31; // ebx
  HANDLE v32; // rsi
  const unsigned __int16 **v33; // rdi
  NTSTATUS v34; // ebp
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)a3;
  v5 = a1 - 147;
  if ( !v5 )
  {
    dword_1C0324E7C[0] = *(_DWORD *)a2 == 0;
    dword_1C0324E8C = *(_DWORD *)(a2 + 4);
    dword_1C0324E9C = *(_DWORD *)(a2 + 8);
    dword_1C0324EAC = *(_DWORD *)(a2 + 12);
    dword_1C0324EBC = *(_DWORD *)(a2 + 20);
    dword_1C0324ECC = *(_DWORD *)(a2 + 24);
    dword_1C0324EDC = *(_DWORD *)(a2 + 28);
    dword_1C0324EEC = *(_DWORD *)(a2 + 32);
    dword_1C0324EFC = *(_DWORD *)(a2 + 36);
    dword_1C0324F0C = *(_DWORD *)(a2 + 40);
    dword_1C0324F1C = *(_DWORD *)(a2 + 44);
    dword_1C0324F2C = *(_DWORD *)(a2 + 48);
    v26 = *(_DWORD *)(a2 + 52);
    v13 = 1;
    dword_1C0324F3C = v26;
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
    if ( (_DWORD)a3 )
    {
      v27 = 0;
      if ( (int)OpenDeviceCfgKey(0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0x20006u, &Handle, 0) < 0 )
        return 0LL;
      v28 = Handle;
      v29 = (const unsigned __int16 **)&gaTouchGestureSettings;
      do
      {
        v30 = WritePointerDeviceCfgSetting(v28, *v29, 4u, (unsigned __int8 *)&dword_1C0324E7C[4 * v27], 4u);
        if ( v30 < 0 )
          break;
        ++v27;
        v29 += 2;
      }
      while ( v27 < 0xD );
      ZwClose(v28);
      if ( v30 < 0 )
        return 0LL;
      v13 = 1;
    }
    if ( !gTouchMonitor )
      gTouchMonitor = 1;
    dword_1C0324E6C[0] = *(_DWORD *)(a2 + 16);
    if ( v3 )
    {
      v31 = 0;
      if ( (int)OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20006u, &Handle, 0) < 0 )
        return 0LL;
      v32 = Handle;
      v33 = (const unsigned __int16 **)&gMultiTouchGetSettings;
      do
      {
        v34 = WritePointerDeviceCfgSetting(v32, *v33, 4u, (unsigned __int8 *)&dword_1C0324E6C[4 * v31], 4u);
        if ( v34 < 0 )
          break;
        ++v31;
        v33 += 2;
      }
      while ( !v31 );
      ZwClose(v32);
      if ( v34 < 0 )
        return 0LL;
      v13 = 1;
    }
    if ( !gMultiTouchMonitor )
      gMultiTouchMonitor = 1;
    goto LABEL_54;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    dword_1C0324DEC[0] = *(_DWORD *)a2;
    dword_1C0324DFC = *(_DWORD *)(a2 + 4);
    dword_1C0324E0C = *(_DWORD *)(a2 + 8);
    dword_1C0324E1C = *(_DWORD *)(a2 + 12);
    dword_1C0324E2C = *(_DWORD *)(a2 + 16);
    dword_1C0324E3C = *(_DWORD *)(a2 + 20);
    dword_1C0324E4C = *(_DWORD *)(a2 + 24);
    v21 = *(_DWORD *)(a2 + 28);
    v13 = 1;
    dword_1C0324E5C = v21;
    if ( (_DWORD)a3 )
    {
      v22 = 0;
      if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) < 0 )
        return 0LL;
      v23 = Handle;
      v24 = (const unsigned __int16 **)&gaPenParameters;
      do
      {
        v25 = WritePointerDeviceCfgSetting(v23, *v24, 4u, (unsigned __int8 *)&dword_1C0324DEC[4 * v22], 4u);
        if ( v25 < 0 )
          break;
        ++v22;
        v24 += 2;
      }
      while ( v22 < 8 );
      ZwClose(v23);
      if ( v25 < 0 )
        return 0LL;
      v13 = 1;
    }
    if ( !gPenMonitor )
      gPenMonitor = 1;
    goto LABEL_54;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    dword_1C0324D7C[0] = *(_DWORD *)a2;
    dword_1C0324D8C = *(_DWORD *)(a2 + 4);
    dword_1C0324D9C = *(_DWORD *)(a2 + 8);
    dword_1C0324DAC = *(_DWORD *)(a2 + 12);
    dword_1C0324DBC = *(_DWORD *)(a2 + 16);
    dword_1C0324DCC = *(_DWORD *)(a2 + 20);
    v15 = *(_DWORD *)(a2 + 24);
    v13 = 1;
    dword_1C0324DDC = v15;
    if ( (_DWORD)a3 )
    {
      v16 = 0;
      if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) < 0 )
        return 0LL;
      v17 = Handle;
      v18 = (const unsigned __int16 **)&gaModeSettings;
      do
      {
        v19 = WritePointerDeviceCfgSetting(v17, *v18, 4u, (unsigned __int8 *)&dword_1C0324D7C[4 * v16], 4u);
        if ( v19 < 0 )
          break;
        ++v16;
        v18 += 2;
      }
      while ( v16 < 7 );
      ZwClose(v17);
      if ( v19 < 0 )
        return 0LL;
      v13 = 1;
    }
    if ( !gModeMonitor )
      gModeMonitor = 1;
    goto LABEL_54;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    v14 = SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
LABEL_15:
    v13 = v14;
    if ( !v14 )
      return v13;
    goto LABEL_54;
  }
  v9 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v8 - 2);
  if ( !(_DWORD)v9 )
  {
    v14 = SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
    goto LABEL_15;
  }
  if ( (_DWORD)v9 != 2 )
    return 0LL;
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 <= 0x3C )
  {
    dword_1C0324C8C[0] = *(_DWORD *)(a2 + 4);
    glTOUCH_DRIVER_HW_STACK_LATENCY = v10;
  }
  v11 = *(_DWORD *)(a2 + 8);
  if ( v11 <= 0x3C )
  {
    dword_1C0324C9C = *(_DWORD *)(a2 + 8);
    glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v11;
  }
  v12 = *(_DWORD *)(a2 + 12);
  v13 = 1;
  dword_1C0324CAC = v12;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = v12;
  if ( (_DWORD)a3 )
  {
    v14 = WritePredictionSettings(v9, (const wchar_t *)1, a3);
    goto LABEL_15;
  }
LABEL_54:
  qword_1C0338870 = 0LL;
  qword_1C0338878 = 0LL;
  return v13;
}
