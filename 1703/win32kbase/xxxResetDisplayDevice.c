/*
 * XREFs of xxxResetDisplayDevice @ 0x1C006FC00
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C00F9990 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     GreDeleteObject @ 0x1C0041C00 (GreDeleteObject.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ReferenceDwmApiPort @ 0x1C00700A0 (ReferenceDwmApiPort.c)
 *     ?ResetSystemColors@@YAXXZ @ 0x1C00701C0 (-ResetSystemColors@@YAXXZ.c)
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 *     DestroyMonitorDCs @ 0x1C0074180 (DestroyMonitorDCs.c)
 *     SnapshotMonitorRects @ 0x1C0074200 (SnapshotMonitorRects.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 */

__int64 __fastcall xxxResetDisplayDevice(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rdi
  unsigned __int16 v6; // bp
  int updated; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF
  int CurrentProcessSessionId; // [rsp+88h] [rbp+10h] BYREF
  char v14; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0LL;
  v6 = *((_WORD *)gpsi + 4338);
  if ( !a2 )
  {
    if ( a1 && (v3 = *(_QWORD *)(a1 + 264)) != 0 )
      *(_QWORD *)(a1 + 264) = 0LL;
    else
      v3 = SnapshotMonitorRects();
    if ( v3 )
      PushW32ThreadLock(v3, v12, Win32FreePool);
  }
  DestroyMonitorDCs();
  LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
  v14 = 0;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v14);
  updated = UpdateUserScreen(0);
  if ( updated < 0 )
  {
    if ( !v14 )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
    }
  }
  else
  {
    if ( (int)IsRecreateTouchInjectionDevicesSupported() >= 0 )
      RecreateTouchInjectionDevices();
    if ( !v14 )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v14);
    }
    if ( (int)IszzzResetSharedDesktopsSupported() >= 0 )
      zzzResetSharedDesktops(a1, v6 != *((_WORD *)gpsi + 4338), a3);
    ResetSystemColors();
    if ( ghbmCaption )
    {
      GreDeleteObject(ghbmCaption);
      if ( (int)IsCreateCaptionStripSupported() < 0 )
        ghbmCaption = 0LL;
      else
        ghbmCaption = (HBRUSH)CreateCaptionStrip();
    }
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
      if ( (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        TemplateEventDescriptor(v11, &ChangeDisplayModeDeferral, 0LL);
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
    if ( gpqForeground && *(_QWORD *)(gpqForeground + 72) && (int)IsQueueNotifyMessageSupported() >= 0 )
      QueueNotifyMessage(*(_QWORD *)(gpqForeground + 72), 31LL, 0LL);
    if ( !a3 )
      CacheRotationInfo();
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    ZwUpdateWnfStateData(&WNF_DX_DISPLAY_CONFIG_CHANGE_NOTIFICATION, 0LL, 0LL, 0LL, &CurrentProcessSessionId, 0, 0);
  }
  return (unsigned int)updated;
}
