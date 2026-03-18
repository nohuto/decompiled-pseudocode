/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0055910 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C0057D10 (DrvQueryMDEVPowerState.c)
 *     PowerDimUndimResend @ 0x1C0062AF0 (PowerDimUndimResend.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C00631E0 (-TrackFullscreenMode@@YAXH@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063698 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     xxxResetDisplayDevice @ 0x1C006FC00 (xxxResetDisplayDevice.c)
 *     SafeEnableMDEV @ 0x1C009BE80 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C009BED0 (SafeDisableMDEV.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     DrvSetPruneFlag @ 0x1C00FA440 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00FA574 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  struct _UNICODE_STRING *v10; // r12
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // r11
  int v18; // r15d
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // eax
  struct _MDEV *v24; // [rsp+88h] [rbp-9h] BYREF
  _BYTE v25[24]; // [rsp+90h] [rbp-1h] BYREF
  char v27; // [rsp+F0h] [rbp+5Fh] BYREF

  v10 = (struct _UNICODE_STRING *)a1;
  v27 = 0;
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    TemplateEventDescriptor(a1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_9;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*((_QWORD *)gpDispInfo + 1)) )
  {
    if ( (a4 & 0x20) == 0
      || (v14 = DrvSetVideoParameters(
                  (_DWORD)v10,
                  *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL),
                  a6,
                  (_DWORD)a5,
                  1,
                  1),
          v14 < 0) )
    {
      v14 = -5;
    }
    goto LABEL_10;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v21 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), a6, (_DWORD)a5, 1, 1);
    goto LABEL_71;
  }
  LOBYTE(a1) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)a1 & ((a4 & 1) == 0)) != 0
    || (v13 = 1610612736LL, (a4 & 0x10000000) != 0) && (a4 & 0x60000000) != 0
    || (a1 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (a4 & 0x60000000) != 0
    || (a4 & 0x60000000) == 0x60000000
    || (a4 & 0x100) != 0 && a4 != 256
    || (a4 & 0x200) != 0 && a4 != 512 )
  {
LABEL_9:
    v14 = -4;
    goto LABEL_10;
  }
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(2147483652LL, 1610612736LL, v11, v12) != gpepCSRSS
     || !(unsigned int)IsRemoteConnection()) )
  {
    goto LABEL_64;
  }
  if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
    a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 51);
  if ( (PVOID)PsGetCurrentProcess(a1, v13, v11, v12) != gpepCSRSS )
  {
    if ( a3 == grpdeskRitInput )
      goto LABEL_22;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v21 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), a6, (_DWORD)a5, 1, 0);
LABEL_71:
    v14 = v21;
    if ( v21 >= 0 )
      goto LABEL_10;
    goto LABEL_64;
  }
  if ( !a3 )
    a3 = grpdeskRitInput;
LABEL_22:
  if ( (a4 & 0x100) != 0 )
  {
    v16 = 0LL;
LABEL_75:
    v23 = DrvSetPruneFlag(v10, v16, (unsigned int)a6);
    goto LABEL_90;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v16) = 1;
    goto LABEL_75;
  }
  a7 = a4 & 0x10000002;
  if ( (a4 & 0x10000002) != 0 )
    goto LABEL_28;
  if ( !CreateCachedMonitor() )
  {
LABEL_64:
    v14 = -1;
    goto LABEL_10;
  }
  SetPointer(0LL);
  if ( (int)IsFreeAllSpbsSupported() >= 0 )
    FreeAllSpbs();
LABEL_28:
  if ( qword_1C018DCD0 && (int)IsStopFadeSupported() >= 0 )
    StopFade();
  if ( (int)IsbSetDevDragRectSupported() >= 0 )
    bSetDevDragRect(*((_QWORD *)gpDispInfo + 4), 0LL, 0LL, 0LL);
  if ( a3 )
    v17 = ***((_QWORD ***)a3 + 1);
  else
    v17 = 0LL;
  v14 = DrvChangeDisplaySettings(
          v10,
          *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL),
          a2,
          v17,
          a6,
          a4 & 1,
          (a4 & 0x10000002) == 0,
          *((_QWORD *)gpDispInfo + 1),
          &v24,
          -((a4 & 0x40) == 0),
          (unsigned __int8)a4 & 0x80,
          a4 & 0x20000000,
          a4 & 4,
          &v27,
          a8);
  PushW32ThreadLock(a3, v25, CompositionObject::Release);
  v18 = a7;
  if ( a3 )
    ObfReferenceObject(a3);
  if ( !v18 )
  {
    if ( v14 == 2 )
    {
      TrackFullscreenMode(a4 & 4);
      if ( (a4 & 0x40000000) != 0 )
      {
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        xxxUserResetDisplayDevice();
      }
      v14 = 0;
      goto LABEL_39;
    }
    if ( v14 )
    {
      if ( v14 >= 0 )
        goto LABEL_39;
      xxxUserResetDisplayDevice();
      if ( !v27 )
        goto LABEL_39;
      v22 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0,
                  0,
                  0,
                  0x98Fu,
                  2,
                  v22,
                  0,
                  0LL,
                  *((struct _MDEV **)gpDispInfo + 1),
                  &v24,
                  0LL,
                  0LL,
                  (__int64)&v27,
                  0LL,
                  (__int64)a8) < 0 )
        goto LABEL_39;
      gppiFullscreen = 0LL;
      if ( v27 )
        goto LABEL_39;
      v20 = 0LL;
      *((_QWORD *)gpDispInfo + 1) = v24;
    }
    else
    {
      TrackFullscreenMode(a4 & 4);
      *((_QWORD *)gpDispInfo + 1) = v24;
      PowerDimUndimResend();
      v20 = a4 & 4;
    }
    xxxResetDisplayDevice(a3, v20, 0LL);
LABEL_39:
    if ( a3 )
    {
      v19 = (_QWORD *)*((_QWORD *)a3 + 1);
      if ( (*(_DWORD *)(*v19 + 52LL) & 1) == 0 )
        xxxInternalInvalidate(v19[2], 1LL, 66693LL);
    }
    SetPointer(1LL);
    if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
      zzzUpdateCursorImage();
  }
  PopAndFreeW32ThreadLock(v25);
  if ( v14 >= 0 && (a4 & 0x20) != 0 )
  {
    v23 = DrvSetVideoParameters((_DWORD)v10, *(_QWORD *)(*((_QWORD *)gpDispInfo + 11) + 120LL), a6, (_DWORD)a5, 0, 0);
LABEL_90:
    v14 = v23;
  }
LABEL_10:
  if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    TemplateEventDescriptor(a1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v14;
}
