/*
 * XREFs of ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00FD8FC
 * Callers:
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 * Callees:
 *     ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C0010244 (-CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z.c)
 *     CleanupIAMAccess @ 0x1C00153D0 (CleanupIAMAccess.c)
 *     FreeTimer @ 0x1C00B2040 (FreeTimer.c)
 *     ??1InkProcessor@@AEAA@XZ @ 0x1C00DA2F0 (--1InkProcessor@@AEAA@XZ.c)
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00FDE4C (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?TerminateDesktopThreads@@YAXXZ @ 0x1C00FDE70 (-TerminateDesktopThreads@@YAXXZ.c)
 *     FreeAllSpbs @ 0x1C00FE090 (FreeAllSpbs.c)
 *     InitializePointerDevicesPresenceState @ 0x1C00FE8D0 (InitializePointerDevicesPresenceState.c)
 *     ?SetWaitForWinstaRundown@@YAXXZ @ 0x1C00FEEA8 (-SetWaitForWinstaRundown@@YAXXZ.c)
 *     ?Deinitialize@InteractiveControlManager@@AEAAXXZ @ 0x1C010884C (-Deinitialize@InteractiveControlManager@@AEAAXXZ.c)
 *     GreDrvDisconnect @ 0x1C013B0D0 (GreDrvDisconnect.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     UnregisterDeviceClassNotifications @ 0x1C013DC04 (UnregisterDeviceClassNotifications.c)
 *     ?UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z @ 0x1C019A540 (-UnlinkAndFreeHoldingFrame@@YAXPEAUtagPOINTERHOLDINGFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01E9898 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     bDrvDisconnect @ 0x1C029BE1C (bDrvDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 InitiateWin32kCleanup(void)
{
  __int64 RemoteContext; // rsi
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rax
  _QWORD *i; // rbx
  __int64 *v6; // rbx
  struct tagINPUTPOINTERNODE *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  struct tagMOUSE_PROMOTION_QUEUE *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  InteractiveControlManager *v14; // rcx
  LPCGUID v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 result; // rax
  signed __int32 v24[8]; // [rsp+0h] [rbp-88h] BYREF
  HANDLE EventHandle; // [rsp+30h] [rbp-58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  _BYTE ObjectInformation[8]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-40h]

  RemoteContext = GreGetRemoteContext();
  SetWaitForWinstaRundown();
  CleanupIAMAccess(0LL);
  DrvNotifySessionStateChange(2LL);
  gbPowerCalloutsReady = 0;
  _InterlockedOr(v24, 0);
  EnterCrit(0LL, 1LL);
  CleanupPowerRequestList();
  if ( gdwInAtomicOperation )
  {
    v1 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v1, gdwInAtomicOperation, v2, v3);
  if ( !gProtocolType )
    UnregisterDeviceClassNotifications();
  EnterCrit(0LL, 1LL);
  InitializePointerDevicesPresenceState(0LL);
  gbCleanupInitiated = 1;
  gdwHydraHint |= 0x400u;
  v4 = (_QWORD *)gsmsList;
  gbInSMSCleanup = 1;
  for ( i = (_QWORD *)gsmsList; i != v4; i = (_QWORD *)*i )
  {
    if ( i[14] )
    {
      HMAssignmentUnlock(i + 14);
      v4 = (_QWORD *)gsmsList;
    }
  }
  gbInSMSCleanup = 0;
  while ( qword_1C03302F8 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C03302F8 )
    UnlinkAndFreeHoldingFrame(qword_1C03302F8);
  if ( qword_1C0330458 )
  {
    Win32FreePool(qword_1C0330458);
    qword_1C0330458 = 0LL;
    gPointerCoalesceInfo = 0;
  }
  if ( (gdwMitConfig & 4) != 0 )
  {
    CTouchProcessor::CancelActivePointers(gpTouchProcessor);
  }
  else
  {
    v6 = (__int64 *)qword_1C0330360;
    while ( v6 != &qword_1C0330360 )
    {
      v7 = (struct tagINPUTPOINTERNODE *)(v6 - 2);
      v6 = (__int64 *)*v6;
      CancelActivePointer(v7);
    }
  }
  v8 = &unk_1C03304F8;
  v9 = 1000LL;
  do
  {
    if ( *v8 )
      Win32FreePool(*v8);
    v8 += 2;
    --v9;
  }
  while ( v9 );
  EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C032C430);
  v10 = (struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C032C3C0;
  v11 = 5LL;
  do
  {
    EmptyMousePromotionQueue(v10);
    v10 = (struct tagMOUSE_PROMOTION_QUEUE *)((char *)v10 + 24);
    --v11;
  }
  while ( v11 );
  v14 = InteractiveControlManager::s_pInstance;
  if ( InteractiveControlManager::s_pInstance )
  {
    InteractiveControlManager::Deinitialize(InteractiveControlManager::s_pInstance);
    EtwUnregister(qword_1C03241B0);
    qword_1C03241B0 = 0LL;
    dword_1C0324190 = 0;
    EtwUnregister(qword_1C0324170);
    qword_1C0324170 = 0LL;
    dword_1C0324150 = 0;
    Win32FreePool(InteractiveControlManager::s_pInstance);
    InteractiveControlManager::s_pInstance = 0LL;
  }
  v15 = InkProcessor::s_pInstance;
  if ( InkProcessor::s_pInstance )
  {
    InkProcessor::~InkProcessor((InkProcessor **)InkProcessor::s_pInstance);
    Win32FreePool(v15);
    InkProcessor::s_pInstance = 0LL;
  }
  v16 = *(_QWORD *)(gptiCurrent + 536LL);
  Timeout.QuadPart = -6000000000LL;
  while ( v16 )
  {
    v17 = *(_QWORD **)(v16 + 16);
    if ( !v17 )
      break;
    if ( v17 == gspdeskDisconnect && !v17[4] && !*(_QWORD *)(*(_QWORD *)(v16 + 24) + 48LL) )
    {
      v14 = (InteractiveControlManager *)ghDisconnectDesk;
      if ( !ghDisconnectDesk || ZwQueryObject(ghDisconnectDesk, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL) )
      {
        v18 = 0;
      }
      else
      {
        if ( v28 <= 1 )
          break;
        gdwHydraHint |= 0x400000u;
        v18 = v28;
      }
      if ( v18 <= 1 )
        break;
    }
    if ( gdwInAtomicOperation )
    {
      v14 = (InteractiveControlManager *)gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v14, gdwInAtomicOperation, v12, v13);
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
  UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  if ( gSessionId && CreateShutdownEvent(L"EventRitExited", 128, &EventHandle) >= 0 )
  {
    ZwSetEvent(EventHandle, 0LL);
    ZwClose(EventHandle);
  }
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 440LL) &= ~0x800u;
  gdwHydraHint |= 0x1000u;
  return result;
}
