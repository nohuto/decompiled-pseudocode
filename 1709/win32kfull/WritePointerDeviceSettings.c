/*
 * XREFs of WritePointerDeviceSettings @ 0x1C01F3548
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2FB0 (-SetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 *     ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C01F3118 (-SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C01F3274 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01F32D0 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall WritePointerDeviceSettings(int a1, __int64 a2, const unsigned __int16 *a3)
{
  int v3; // edi
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  struct tagDEVICECONFIG_SETTING *v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // eax
  _BOOL8 result; // rax
  unsigned int v13; // ebx
  HANDLE v14; // rsi
  const unsigned __int16 **v15; // rdi
  NTSTATUS v16; // ebp
  unsigned int v17; // ebx
  HANDLE v18; // rsi
  const unsigned __int16 **v19; // rdi
  NTSTATUS v20; // ebp
  unsigned int v21; // esi
  HANDLE v22; // rbp
  const unsigned __int16 **v23; // r14
  NTSTATUS v24; // r15d
  int v25; // ebx
  HANDLE v26; // rsi
  const unsigned __int16 **v27; // rdi
  NTSTATUS v28; // ebp
  HANDLE Handle; // [rsp+78h] [rbp+20h] BYREF

  v3 = (int)a3;
  v5 = a1 - 147;
  if ( !v5 )
  {
    dword_1C0320E7C[0] = *(_DWORD *)a2 == 0;
    dword_1C0320E8C = *(_DWORD *)(a2 + 4);
    dword_1C0320E9C = *(_DWORD *)(a2 + 8);
    dword_1C0320EAC = *(_DWORD *)(a2 + 12);
    dword_1C0320EBC = *(_DWORD *)(a2 + 20);
    dword_1C0320ECC = *(_DWORD *)(a2 + 24);
    dword_1C0320EDC = *(_DWORD *)(a2 + 28);
    dword_1C0320EEC = *(_DWORD *)(a2 + 32);
    dword_1C0320EFC = *(_DWORD *)(a2 + 36);
    dword_1C0320F0C = *(_DWORD *)(a2 + 40);
    dword_1C0320F1C = *(_DWORD *)(a2 + 44);
    dword_1C0320F2C = *(_DWORD *)(a2 + 48);
    dword_1C0320F3C = *(_DWORD *)(a2 + 52);
    RawInputManagerObject::bTouchInputAllowed = *(_DWORD *)(a2 + 28);
    if ( !(_DWORD)a3 )
      goto LABEL_53;
    v21 = 0;
    if ( (int)OpenDeviceCfgKey(0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0x20006u, &Handle, 0) >= 0 )
    {
      v22 = Handle;
      v23 = (const unsigned __int16 **)&gaTouchGestureSettings;
      do
      {
        v24 = WritePointerDeviceCfgSetting(v22, *v23, 4u, (unsigned __int8 *)&dword_1C0320E7C[4 * v21], 4u);
        if ( v24 < 0 )
          break;
        ++v21;
        v23 += 2;
      }
      while ( v21 < 0xD );
      ZwClose(v22);
      if ( v24 >= 0 )
      {
LABEL_53:
        if ( !gTouchMonitor )
          gTouchMonitor = 1;
        dword_1C0320E6C[0] = *(_DWORD *)(a2 + 16);
        if ( !v3 )
          goto LABEL_48;
        v25 = 0;
        if ( (int)OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20006u, &Handle, 0) >= 0 )
        {
          v26 = Handle;
          v27 = (const unsigned __int16 **)&gMultiTouchGetSettings;
          do
          {
            v28 = WritePointerDeviceCfgSetting(v26, *v27, 4u, (unsigned __int8 *)&dword_1C0320E6C[4 * v25], 4u);
            if ( v28 < 0 )
              break;
            ++v25;
            v27 += 2;
          }
          while ( !v25 );
          ZwClose(v26);
          if ( v28 >= 0 )
          {
LABEL_48:
            result = 1LL;
            if ( !gMultiTouchMonitor )
              gMultiTouchMonitor = 1;
            goto LABEL_50;
          }
        }
      }
    }
    return 0LL;
  }
  v6 = v5 - 2;
  if ( !v6 )
  {
    dword_1C0320DEC[0] = *(_DWORD *)a2;
    dword_1C0320DFC = *(_DWORD *)(a2 + 4);
    dword_1C0320E0C = *(_DWORD *)(a2 + 8);
    dword_1C0320E1C = *(_DWORD *)(a2 + 12);
    dword_1C0320E2C = *(_DWORD *)(a2 + 16);
    dword_1C0320E3C = *(_DWORD *)(a2 + 20);
    dword_1C0320E4C = *(_DWORD *)(a2 + 24);
    dword_1C0320E5C = *(_DWORD *)(a2 + 28);
    if ( !(_DWORD)a3 )
      goto LABEL_32;
    v17 = 0;
    if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) >= 0 )
    {
      v18 = Handle;
      v19 = (const unsigned __int16 **)&gaPenParameters;
      do
      {
        v20 = WritePointerDeviceCfgSetting(v18, *v19, 4u, (unsigned __int8 *)&dword_1C0320DEC[4 * v17], 4u);
        if ( v20 < 0 )
          break;
        ++v17;
        v19 += 2;
      }
      while ( v17 < 8 );
      ZwClose(v18);
      if ( v20 >= 0 )
      {
LABEL_32:
        result = 1LL;
        if ( !gPenMonitor )
          gPenMonitor = 1;
        goto LABEL_50;
      }
    }
    return 0LL;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    dword_1C0320D7C[0] = *(_DWORD *)a2;
    dword_1C0320D8C = *(_DWORD *)(a2 + 4);
    dword_1C0320D9C = *(_DWORD *)(a2 + 8);
    dword_1C0320DAC = *(_DWORD *)(a2 + 12);
    dword_1C0320DBC = *(_DWORD *)(a2 + 16);
    dword_1C0320DCC = *(_DWORD *)(a2 + 20);
    dword_1C0320DDC = *(_DWORD *)(a2 + 24);
    if ( !(_DWORD)a3 )
      goto LABEL_24;
    v13 = 0;
    if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20006u, &Handle, 0) >= 0 )
    {
      v14 = Handle;
      v15 = (const unsigned __int16 **)&gaModeSettings;
      do
      {
        v16 = WritePointerDeviceCfgSetting(v14, *v15, 4u, (unsigned __int8 *)&dword_1C0320D7C[4 * v13], 4u);
        if ( v16 < 0 )
          break;
        ++v13;
        v15 += 2;
      }
      while ( v13 < 7 );
      ZwClose(v14);
      if ( v16 >= 0 )
      {
LABEL_24:
        result = 1LL;
        if ( !gModeMonitor )
          gModeMonitor = 1;
        goto LABEL_50;
      }
    }
    return 0LL;
  }
  v8 = v7 - 2;
  if ( !v8 )
  {
    result = SetFlickMap((struct tagFLICK_MAP *)a2, (int)a3);
    goto LABEL_15;
  }
  v9 = (struct tagDEVICECONFIG_SETTING *)(unsigned int)(v8 - 2);
  if ( !(_DWORD)v9 )
  {
    result = SetCustomFlick((struct tagCUSTOM_FLICK *)a2);
    goto LABEL_15;
  }
  if ( (_DWORD)v9 != 2 )
    return 0LL;
  v10 = *(_DWORD *)(a2 + 4);
  if ( v10 <= 0x3C )
  {
    dword_1C0320C8C[0] = *(_DWORD *)(a2 + 4);
    glTOUCH_DRIVER_HW_STACK_LATENCY = v10;
  }
  v11 = *(_DWORD *)(a2 + 8);
  if ( v11 <= 0x3C )
  {
    dword_1C0320C9C = *(_DWORD *)(a2 + 8);
    glTOUCH_DRIVER_HW_STACK_SAMPLETIME = v11;
  }
  dword_1C0320CAC = *(_DWORD *)(a2 + 12);
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = dword_1C0320CAC;
  result = 1LL;
  if ( !(_DWORD)a3 )
    goto LABEL_50;
  result = WritePredictionSettings(v9, (const wchar_t *)a2, a3);
LABEL_15:
  if ( result )
  {
LABEL_50:
    qword_1C0333FA0 = 0LL;
    qword_1C0333FA8 = 0LL;
  }
  return result;
}
