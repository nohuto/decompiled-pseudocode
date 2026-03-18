/*
 * XREFs of xxxDwmStopRedirection @ 0x1C00E3780
 * Callers:
 *     NtUserDwmKernelShutdown @ 0x1C01E4590 (NtUserDwmKernelShutdown.c)
 * Callees:
 *     zzzDecomposeDesktop @ 0x1C0044214 (zzzDecomposeDesktop.c)
 *     DwmNotifyChildrenAddRemove @ 0x1C0045400 (DwmNotifyChildrenAddRemove.c)
 *     xxxRedrawWindow @ 0x1C0069A60 (xxxRedrawWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     _GetProcessWindowStation @ 0x1C00D90A0 (_GetProcessWindowStation.c)
 *     bSetDevDragRect @ 0x1C00E35F0 (bSetDevDragRect.c)
 *     DwmAsyncDesktopFree @ 0x1C00E3988 (DwmAsyncDesktopFree.c)
 *     GreDwmShutdown @ 0x1C00E3A28 (GreDwmShutdown.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00E3E74 (DeleteOrSetRedirectionBitmap.c)
 *     StopFade @ 0x1C013E090 (StopFade.c)
 *     GreDxDwmShutdown @ 0x1C0252A20 (GreDxDwmShutdown.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxDwmStopRedirection()
{
  __int64 ProcessWindowStation; // rbp
  unsigned int v1; // edi
  __int64 i; // rsi
  void *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 j; // rbx
  __int64 v7; // r10
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF
  char v13; // [rsp+78h] [rbp+10h] BYREF

  ProcessWindowStation = GetProcessWindowStation(0LL);
  v1 = 0;
  if ( (unsigned int)IsDwmApiPortRegistered() && (*(_DWORD *)(ProcessWindowStation + 32) & 0x204) == 0x200 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
    if ( gfade[2] )
      StopFade();
    bSetDevDragRect(*(HDEV *)(gpDispInfo + 32LL), 0LL, 0LL, 0);
    if ( grpdeskRitInput )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); i; i = *(_QWORD *)(i + 32) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(i + 8) + 52LL) & 1) != 0 )
        {
          zzzDecomposeDesktop((struct tagDESKTOP *)i);
          DwmNotifyChildrenAddRemove((struct tagDESKTOP *)i, 0);
          v3 = (void *)ReferenceDwmApiPort(**(_QWORD **)(i + 8));
          DwmAsyncDesktopFree(v3);
        }
      }
      v4 = *(_QWORD *)(ProcessWindowStation + 88);
      if ( v4 )
        DeleteOrSetRedirectionBitmap(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL), v4, 1LL);
    }
    GreDwmShutdown(*(_QWORD *)(gpDispInfo + 32LL));
    *(_DWORD *)(ProcessWindowStation + 32) &= ~0x200u;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
    zzzEndDeferWinEventNotify();
    if ( (unsigned int)UserIsConsoleConnection() )
    {
      if ( gdwInAtomicOperation )
      {
        v5 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v5, gdwInAtomicOperation);
      GreDxDwmShutdown();
      EnterCrit(0LL, 1LL);
    }
    if ( grpdeskRitInput )
    {
      for ( j = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 40LL) + 16LL); j; j = *(_QWORD *)(j + 32) )
      {
        if ( (*(_DWORD *)(j + 48) & 8) == 0 )
        {
          v7 = *(_QWORD *)(*(_QWORD *)(j + 8) + 16LL);
          if ( v7 )
          {
            v12[0] = *(_QWORD *)(gptiCurrent + 392LL);
            *(_QWORD *)(gptiCurrent + 392LL) = v12;
            v12[1] = v7;
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
            v8 = 0;
            if ( g_pDwmState )
              v8 = gfDwmDeviceBitmapsEnabled;
            xxxRedrawWindow((struct tagWND *)v7, 0LL, 0LL, v8 != 0 ? 645 : 66181);
            ThreadUnlock1(v10, v9);
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
