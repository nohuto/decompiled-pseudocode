/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00D7298
 * Callers:
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 * Callees:
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00D5894 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     CleanupIAMAccess @ 0x1C00D5CB0 (CleanupIAMAccess.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00D6B00 (InitializePointerDevicesPresenceState.c)
 *     FreeAllSpbs @ 0x1C00D70D0 (FreeAllSpbs.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00D7100 (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00D7B34 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00D856C (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00E0B14 (--1InkProcessor@@AEAA@XZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C0112588 (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     GreDrvDisconnect @ 0x1C0141CDC (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C0143F90 (UnregisterDeviceClassNotifications.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C01A616C (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F5838 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     bDrvDisconnect @ 0x1C0298620 (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  __int64 RemoteContext; // rsi
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  struct tagMOUSE_PROMOTION_QUEUE *v8; // rbx
  __int64 v9; // rdi
  InteractiveControlManager *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  LPCGUID v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 *v21; // rbx
  struct tagINPUTPOINTERNODE *v22; // rcx
  unsigned int v23; // eax
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-40h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL, v1, v2);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v24, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  gbInSMSCleanup = 0;
  while ( qword_1C032B7B8 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C032B7B8 )
    UnlinkAndFreeHoldingFrame(qword_1C032B7B8);
  if ( qword_1C032B9F8 )
  {
    Win32FreePool(qword_1C032B9F8, v4, v5);
    qword_1C032B9F8 = 0LL;
    gPointerCoalesceInfo = 0;
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  }
  else
  {
    v21 = (__int64 *)qword_1C032B820;
    while ( v21 != &qword_1C032B820 )
    {
      v22 = (struct tagINPUTPOINTERNODE *)(v21 - 2);
      v21 = (__int64 *)*v21;
      CancelActivePointer(v22);
    }
  }
  v6 = &unk_1C032BA78;
  v7 = 1000LL;
  do
  {
    if ( *v6 )
      Win32FreePool(*v6, v4, v5);
    v6 += 2;
    --v7;
  }
  while ( v7 );
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C03276B0);
  v8 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0327640;
  v9 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v8);
    v8 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v8 + 24);
    --v9;
  }
  while ( v9 );
  v10 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    EtwUnregister(RegHandle);
    RegHandle = 0LL;
    dword_1C0320190 = 0;
    EtwUnregister(qword_1C0320170);
    qword_1C0320170 = 0LL;
    dword_1C0320150 = 0;
    Win32FreePool(InteractiveControlManager::s_pInstance, v11, v12);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v13 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor((InkProcessor *)InkProcessor::s_pInstance);
    Win32FreePool(v13, v14, v15);
    InkProcessor::s_pInstance = 0LL;
  }
  v16 = *(_QWORD *)(gptiCurrent + 592LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v16 )
  {
    v17 = *(_QWORD **)(v16 + 16);
    if ( !v17 )
      break;
    if ( v17 == gspdeskDisconnect && !v17[4] && !*(_QWORD *)(*(_QWORD *)(v16 + 24) + 48LL) )
    {
      v10 = (InteractiveControlManager *)ghDisconnectDesk;
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v23 = 0;
      }
      else
      {
        if ( v28 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v23 = v28;
      }
      if ( v23 <= 1 )
        break;
    }
    if ( gdwInAtomicOperation )
    {
      v10 = (InteractiveControlManager *)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
    KeWaitForSingleObject(gpevtDesktopDestroyed, WrUserRequest, 0, 0, &Timeout);
    EnterCrit(0LL, 1LL);
  }
  gbExitInProgress = 1;
  gpqCursor = 0LL;
  if ( (gdwMitConfig & 1) != 0 )
    ForceCapture(2LL);
  else
    HMAssignmentUnlock(gspwndMouseOwner);
  FreeScancodeMap();
  if ( gpDispInfo )
    FreeAllSpbs();
  if ( ghDisconnectWinSta )
  {
    ZwClose(ghDisconnectWinSta);
    ghDisconnectWinSta = 0LL;
  }
  if ( ghDisconnectDesk )
  {
    ObCloseHandle(ghDisconnectDesk, 0);
    ghDisconnectDesk = 0LL;
  }
  UnlockObjectAssignment(&grpdeskLogon);
  UnlockObjectAssignment(&gspdeskDisconnect);
  if ( gspwndAltTab )
    HMAssignmentUnlock(&gspwndAltTab);
  TerminateDesktopThreads();
  if ( gbConnected )
  {
    if ( gfRemotingConsole )
      bDrvDisconnect();
    else
      GreDrvDisconnect(RemoteContext);
  }
  UnlockObjectAssignment(grpdeskRitInput);
  UnlockObjectAssignment(grpdeskIODefault);
  UnlockObjectAssignment(&gspdeskShouldBeForeground);
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  HMAssignmentUnlock(&gspwndCursor);
  HMAssignmentUnlock(&gspwndCursorNC);
  gptiRit = 0LL;
  UserSessionSwitchLeaveCrit(v19, v18);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 0x80u, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 464LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  return result;
}
