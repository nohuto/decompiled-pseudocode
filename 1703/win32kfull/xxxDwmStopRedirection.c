/*
 * XREFs of xxxDwmStopRedirection @ 0x1C00A15E0
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01D7D70 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     _GetProcessWindowStation @ 0x1C0010D60 (_GetProcessWindowStation.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0015E14 (DwmNotifyChildrenAddRemove.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C001C1A4 (DeleteOrSetRedirectionBitmap.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     xxxRedrawWindow @ 0x1C0065644 (xxxRedrawWindow.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     DwmAsyncDesktopFree @ 0x1C00A1814 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C00A18B4 (zzzDecomposeDesktop.c)
 *     GreDwmShutdown @ 0x1C00A2448 (GreDwmShutdown.c)
 *     bSetDevDragRect @ 0x1C00A2540 (bSetDevDragRect.c)
 *     StopFade @ 0x1C01C2190 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0250FA0 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rax
  HSURF v8; // rdx
  int v9; // r11d
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rbx
  __int64 v14; // r10
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD v19[4]; // [rsp+30h] [rbp-38h] BYREF
  char v20; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v20);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL));
    v2 = grpdeskRitInput;
    if ( grpdeskRitInput )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL);
      if ( v3 )
      {
        do
        {
          if ( (*(_DWORD *)(**(_QWORD **)(v3 + 8) + 52LL) & 1) != 0 )
          {
            zzzDecomposeDesktop((struct tagDESKTOP *)v3);
            DwmNotifyChildrenAddRemove((struct tagDESKTOP *)v3, 0);
            v7 = (void *)ReferenceDwmApiPort(**(_QWORD **)(v3 + 8), v4, v5, v6);
            DwmAsyncDesktopFree(v7);
          }
          v3 = *(_QWORD *)(v3 + 32);
        }
        while ( v3 );
        v2 = grpdeskRitInput;
      }
      v8 = *(HSURF *)(ProcessWindowStation + 88);
      if ( v8 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) + 16LL), v8, 1);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 32LL));
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    v9 = -1;
    if ( !v20 )
    {
      --gdwInAtomicOperation;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v20);
    }
    gdwDeferWinEvent += v9;
    if ( !(v9 + gdwDeferWinEvent) && gpPendingNotifies )
      xxxFlushDeferredWindowEvents();
    if ( (unsigned int)UserIsConsoleConnection() )
    {
      if ( gdwInAtomicOperation )
      {
        v10 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation, v11, v12);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(i + 48) & 8) == 0 )
        {
          v14 = *(_QWORD *)(*(_QWORD *)(i + 8) + 16LL);
          if ( v14 )
          {
            v15 = 0;
            v19[0] = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = v19;
            ++*(_DWORD *)(v14 + 8);
            v19[1] = v14;
            if ( g_pDwmState )
              v15 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow((struct tagWND *)v14, 0LL, 0LL, v15 != 0 ? 645 : 66181);
            ThreadUnlock1(v17, v16);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
