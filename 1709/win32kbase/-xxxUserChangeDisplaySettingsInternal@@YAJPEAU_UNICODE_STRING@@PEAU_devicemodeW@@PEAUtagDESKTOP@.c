/*
 * XREFs of ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520
 * Callers:
 *     xxxUserChangeDisplaySettings @ 0x1C0064CF0 (xxxUserChangeDisplaySettings.c)
 * Callees:
 *     xxxResetDisplayDevice @ 0x1C00626E0 (xxxResetDisplayDevice.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063E68 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?TrackFullscreenMode@@YAXH@Z @ 0x1C0063E94 (-TrackFullscreenMode@@YAXH@Z.c)
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     DrvQueryMDEVPowerState @ 0x1C0067500 (DrvQueryMDEVPowerState.c)
 *     PowerDimUndimResend @ 0x1C00786C8 (PowerDimUndimResend.c)
 *     SafeEnableMDEV @ 0x1C00A5EC0 (SafeEnableMDEV.c)
 *     SafeDisableMDEV @ 0x1C00A5F10 (SafeDisableMDEV.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 *     DrvSetPruneFlag @ 0x1C00FA67C (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00FA7B0 (DrvSetVideoParameters.c)
 */

__int64 __fastcall xxxUserChangeDisplaySettingsInternal(
        __int64 a1,
        struct _devicemodeW *a2,
        struct tagDESKTOP *a3,
        int a4,
        void *a5,
        enum _MODE a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  struct _UNICODE_STRING *v9; // r12
  __int64 v10; // rdx
  int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // r11
  _QWORD *v15; // rcx
  int v16; // edx
  int v17; // eax
  __int64 v18; // rdx
  int v19; // eax
  struct _MDEV *v20; // [rsp+90h] [rbp-9h] BYREF
  _BYTE v21[32]; // [rsp+98h] [rbp-1h] BYREF
  char v23; // [rsp+100h] [rbp+67h] BYREF

  v9 = (struct _UNICODE_STRING *)a1;
  v23 = 0;
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(a1, &ChangeDisplayModeStart, 0LL);
  if ( (a4 & 0x7FFF800) != 0 )
    goto LABEL_9;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(gpDispInfo + 8)) )
  {
    if ( (a4 & 0x20) == 0
      || (v11 = DrvSetVideoParameters(
                  (_DWORD)v9,
                  *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL),
                  a6,
                  (_DWORD)a5,
                  1,
                  1),
          v11 < 0) )
    {
      v11 = -5;
    }
    goto LABEL_10;
  }
  if ( gbMDEVDisabled )
  {
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v17 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), a6, (_DWORD)a5, 1, 1);
    goto LABEL_71;
  }
  LOBYTE(a1) = (a4 & 0x10000008) != 0;
  if ( ((unsigned __int8)a1 & ((a4 & 1) == 0)) != 0
    || (v10 = 1610612736LL, (a4 & 0x10000000) != 0) && (a4 & 0x60000000) != 0
    || (a1 = 2147483652LL, (a4 & 0x80000004) == 0x80000004) && (a4 & 0x60000000) != 0
    || (a4 & 0x60000000) == 0x60000000
    || (a4 & 0x100) != 0 && a4 != 256
    || (a4 & 0x200) != 0 && a4 != 512 )
  {
LABEL_9:
    v11 = -4;
    goto LABEL_10;
  }
  if ( (gdwPUDFlags & 0x20000000) != 0
    && ((PVOID)PsGetCurrentProcess(2147483652LL, 1610612736LL) != gpepCSRSS || !(unsigned int)IsRemoteConnection()) )
  {
    goto LABEL_64;
  }
  if ( !a3 || (*((_DWORD *)a3 + 12) & 8) != 0 )
    a3 = (struct tagDESKTOP *)*((_QWORD *)gptiCurrent + 54);
  if ( (PVOID)PsGetCurrentProcess(a1, v10) != gpepCSRSS )
  {
    if ( a3 == grpdeskRitInput )
      goto LABEL_22;
    if ( (a4 & 0x20) == 0 )
      goto LABEL_64;
    v17 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), a6, (_DWORD)a5, 1, 0);
LABEL_71:
    v11 = v17;
    if ( v17 >= 0 )
      goto LABEL_10;
    goto LABEL_64;
  }
  if ( !a3 )
    a3 = grpdeskRitInput;
LABEL_22:
  if ( (a4 & 0x100) != 0 )
  {
    v13 = 0LL;
LABEL_75:
    v19 = DrvSetPruneFlag(v9, v13, (unsigned int)a6);
    goto LABEL_90;
  }
  if ( (a4 & 0x200) != 0 )
  {
    LOBYTE(v13) = 1;
    goto LABEL_75;
  }
  if ( (a4 & 0x10000002) != 0 )
    goto LABEL_28;
  if ( !CreateCachedMonitor() )
  {
LABEL_64:
    v11 = -1;
    goto LABEL_10;
  }
  SetPointer(0LL);
  if ( (int)IsFreeAllSpbsSupported() >= 0 )
    FreeAllSpbs();
LABEL_28:
  if ( qword_1C0192B88 && (int)IsStopFadeSupported() >= 0 )
    StopFade();
  if ( (int)IsbSetDevDragRectSupported() >= 0 )
    bSetDevDragRect(*(_QWORD *)(gpDispInfo + 32), 0LL, 0LL, 0LL);
  if ( a3 )
    v14 = ***((_QWORD ***)a3 + 1);
  else
    v14 = 0LL;
  v11 = DrvChangeDisplaySettings(
          v9,
          *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL),
          a2,
          v14,
          a6,
          a4 & 1,
          (a4 & 0x10000002) == 0,
          *(_QWORD *)(gpDispInfo + 8),
          &v20,
          -((a4 & 0x40) == 0),
          (unsigned __int8)a4 & 0x80,
          a4 & 0x20000000,
          a4 & 4,
          &v23,
          a7);
  PushW32ThreadLock(a3, v21, CompositionObject::Release);
  if ( a3 )
    ObfReferenceObject(a3);
  if ( (a4 & 0x10000002) == 0 )
  {
    if ( v11 == 2 )
    {
      TrackFullscreenMode(a4 & 4);
      if ( (a4 & 0x40000000) != 0 )
      {
        if ( (unsigned int)SafeDisableMDEV(1LL) )
          SafeEnableMDEV(1LL);
        xxxUserResetDisplayDevice();
      }
      v11 = 0;
      goto LABEL_39;
    }
    if ( v11 )
    {
      if ( v11 >= 0 )
        goto LABEL_39;
      xxxUserResetDisplayDevice();
      if ( !v23 )
        goto LABEL_39;
      v18 = a3 ? ***((_QWORD ***)a3 + 1) : 0LL;
      if ( (int)DrvSetDisplayConfig(
                  0,
                  0,
                  2447,
                  2,
                  v18,
                  0,
                  0LL,
                  *(struct _MDEV **)(gpDispInfo + 8),
                  &v20,
                  0LL,
                  0LL,
                  (__int64)&v23,
                  0LL,
                  (__int64)a7) < 0 )
        goto LABEL_39;
      gppiFullscreen = 0LL;
      if ( v23 )
        goto LABEL_39;
      v16 = 0;
      *(_QWORD *)(gpDispInfo + 8) = v20;
    }
    else
    {
      TrackFullscreenMode(a4 & 4);
      *(_QWORD *)(gpDispInfo + 8) = v20;
      PowerDimUndimResend();
      v16 = a4 & 4;
    }
    xxxResetDisplayDevice((__int64)a3, v16, 0);
LABEL_39:
    if ( a3 )
    {
      v15 = (_QWORD *)*((_QWORD *)a3 + 1);
      if ( (*(_DWORD *)(*v15 + 52LL) & 1) == 0 )
        xxxInternalInvalidate(v15[2], 1LL, 66693LL);
    }
    SetPointer(1LL);
    if ( (int)IszzzUpdateCursorImageSupported() >= 0 )
      zzzUpdateCursorImage();
  }
  PopAndFreeW32ThreadLock(v21);
  if ( v11 >= 0 && (a4 & 0x20) != 0 )
  {
    v19 = DrvSetVideoParameters((_DWORD)v9, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 88) + 232LL), a6, (_DWORD)a5, 0, 0);
LABEL_90:
    v11 = v19;
  }
LABEL_10:
  if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    McTemplateK0(a1, &ChangeDisplayModeEnd, 0LL);
  return (unsigned int)v11;
}
