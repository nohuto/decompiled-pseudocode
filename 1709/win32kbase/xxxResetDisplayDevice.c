/*
 * XREFs of xxxResetDisplayDevice @ 0x1C00626E0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     VideoPortCalloutThread @ 0x1C00DD4C8 (VideoPortCalloutThread.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9B70 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 *     DestroyMonitorDCs @ 0x1C0062620 (DestroyMonitorDCs.c)
 *     ReferenceDwmApiPort @ 0x1C0062B40 (ReferenceDwmApiPort.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C0062C60 (-ResetSystemColors@@YAXXZ.c)
 *     SnapshotMonitorRects @ 0x1C0063880 (SnapshotMonitorRects.c)
 *     McTemplateK0 @ 0x1C00E1C40 (McTemplateK0.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int16 v6; // r14
  int updated; // ebp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF
  int CurrentProcessSessionId; // [rsp+88h] [rbp+10h] BYREF
  char v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 4986);
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 )
      PushW32ThreadLock(v3, v12, Win32FreePool);
  }
  DestroyMonitorDCs(a1, a2, a3);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  updated = UpdateUserScreen();
  if ( updated < 0 )
  {
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  }
  else
  {
    if ( (int)IsRecreateTouchInjectionDevicesSupported() >= 0 )
      RecreateTouchInjectionDevices();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
    if ( (int)IszzzResetSharedDesktopsSupported() >= 0 )
      zzzResetSharedDesktops(a1, v6 != *((_WORD *)gpsi + 4986), a3);
    ResetSystemColors();
    if ( (int)IsCreateBitmapStripSupported() >= 0 )
      CreateBitmapStrip();
    if ( (int)IsDwmAsyncNotifyDisplayModeChangeSupported() >= 0 )
    {
      v8 = ReferenceDwmApiPort();
      DwmAsyncNotifyDisplayModeChange(v8);
    }
    if ( (int)IsCalcWindowsFullScreenSupported() >= 0 )
      CalcWindowsFullScreen(a1);
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 264);
      if ( v9 )
      {
        Win32FreePool(v9);
        *(_QWORD *)(a1 + 264) = 0LL;
      }
    }
    if ( a3 && (int)IsIAMKeyAcquiredSupported() >= 0 && (unsigned int)IAMKeyAcquired(a1) )
    {
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        McTemplateK0(v11, &ChangeDisplayModeDeferral, 0LL);
      *(_DWORD *)(**(_QWORD **)(a1 + 8) + 52LL) |= 2u;
      *(_QWORD *)(a1 + 264) = v3;
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 1LL);
      if ( (int)IsxxxBroadcastDisplaySettingsChangeSupported() >= 0 )
        xxxBroadcastDisplaySettingsChange(a1, 0LL, 2LL);
      if ( v3 )
        PopW32ThreadLock(v12);
    }
    else
    {
      if ( (int)IsPostIAMShellHookMessageExSupported() >= 0 )
        PostIAMShellHookMessageEx(a1, 35LL, 0LL);
      if ( (int)IsxxxDesktopsRecalcAndBroadcastDisplayChangeSupported() >= 0 )
        xxxDesktopsRecalcAndBroadcastDisplayChange(a1, v3, v6, 0LL);
      if ( v3 )
        PopAndFreeAlwaysW32ThreadLock(v12);
    }
    if ( (int)IsHandleDisplayChangeForInactiveDesktopsSupported() >= 0 )
      HandleDisplayChangeForInactiveDesktops(a1, 1LL);
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 104) && (int)IsQueueNotifyMessageSupported() >= 0 )
      QueueNotifyMessage(*(_QWORD *)(gpqForeground + 104), 31LL, 0LL);
    if ( !a3 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  return (unsigned int)updated;
}
