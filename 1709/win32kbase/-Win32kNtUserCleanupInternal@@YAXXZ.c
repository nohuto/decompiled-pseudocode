/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0075460
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C0075320 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0054EB0 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePagedLookasideList @ 0x1C0075AA0 (Win32FreePagedLookasideList.c)
 *     CleanupKeyboardLayouts @ 0x1C0075AC8 (CleanupKeyboardLayouts.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C0075C68 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009BB88 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  __int64 *v0; // rbx
  _QWORD *v1; // rbx
  void *v2; // rcx
  __int64 v3; // rcx
  DispBroker::DispBrokerClientReference *v4; // rbx
  __int64 v5; // rbx
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // [rsp+50h] [rbp+20h] BYREF
  void *v12; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( (int)IsCleanupPointerInputSupported() >= 0 )
    CleanupPointerInput();
  if ( (int)IsFreeImeHotKeysSupported() >= 0 )
    FreeImeHotKeys();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool((__int64)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( (int)IsGetgpastrSetupExeSupported() >= 0 )
  {
    GetgpastrSetupExe(&v11);
    if ( *v11 )
    {
      Win32FreePool(*v11);
      *v11 = 0LL;
    }
  }
  if ( (int)IsGetglpSetupProgramsSupported() >= 0 )
  {
    GetglpSetupPrograms(&v11);
    if ( *v11 )
    {
      Win32FreePool(*v11);
      *v11 = 0LL;
    }
  }
  if ( (int)IsGetpbwlCacheSupported() >= 0 )
  {
    GetpbwlCache(&v11);
    if ( *v11 )
    {
      Win32FreePool(*v11);
      *v11 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v5 = gtmrListHead - 72;
    if ( (int)IsFreeTimerSupported() >= 0 )
      FreeTimer(v5);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool((__int64)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool((__int64)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool(gpClipFormatExceptionList);
  if ( (int)IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported() >= 0 )
    CleanupDesktopsMonitorsAndWindowsSnapShot(&gWndsMonitorSnapshotHead);
  if ( (int)IsCleanupModuleAllocationsSupported() >= 0 )
    CleanupModuleAllocations();
  if ( gpEventPnPWainting )
  {
    Win32FreePool(gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  v0 = (__int64 *)&unk_1C0188160;
  do
  {
    if ( *((_DWORD *)v0 + 3) == -1 && *v0 )
    {
      Win32FreePool(*v0);
      *v0 = 0LL;
    }
    v0 += 70;
  }
  while ( (__int64)v0 <= (__int64)qword_1C01885C0 );
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v11, &v12) )
    {
      if ( (_DWORD)v11 == 2 || (_DWORD)v11 == 4 )
      {
        v6 = v12;
        if ( *((_QWORD *)v12 + 1) )
        {
          Win32FreePool(*((_QWORD *)v12 + 1));
          v6[1] = 0LL;
        }
      }
    }
  }
  if ( gpresDeviceInfoList )
  {
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    if ( (int)IsCleanupHidRequestListSupported() >= 0 )
      CleanupHidRequestList();
    while ( gpDeviceInfoList )
    {
      *((_WORD *)gpDeviceInfoList + 32) &= ~2u;
      *((_WORD *)gpDeviceInfoList + 33) &= ~0x100u;
      if ( (int)IsFreeDeviceInfoSupported() >= 0 )
        FreeDeviceInfo(gpDeviceInfoList);
    }
    gfRecordPnpNotification = 0;
    if ( gpPnpNotificationRecord )
    {
      Win32FreePool((__int64)gpPnpNotificationRecord);
      gpPnpNotificationRecord = 0LL;
    }
    ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    ExDeleteResourceLite(gpresDeviceInfoList);
    ExFreePoolWithTag(gpresDeviceInfoList, 0);
    gpresDeviceInfoList = 0LL;
  }
  if ( gpresDitDeviceInfoList )
  {
    ExDeleteResourceLite(gpresDitDeviceInfoList);
    ExFreePoolWithTag(gpresDitDeviceInfoList, 0);
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
  }
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  }
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  }
  if ( gpHidInterfaceGuid )
  {
    Win32FreePool(gpHidInterfaceGuid);
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( *(_QWORD *)&gVideoFileObject )
    ObfDereferenceObject(*(PVOID *)&gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
  }
  if ( gpEventDiconnectDesktop )
  {
    Win32FreePool(gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    Win32FreePool(gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool((__int64)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool(gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool((__int64)gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool((__int64)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool((__int64)gpsemDITHitTestWaiters);
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool(gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( gpsemRITBlockedOnDITWaiters )
  {
    Win32FreePool((__int64)gpsemRITBlockedOnDITWaiters);
    gpsemRITBlockedOnDITWaiters = 0LL;
  }
  if ( (int)IsCleanupFeedbackDataSupported() >= 0 )
    CleanupFeedbackData();
  if ( gpevtPTPOperation )
  {
    Win32FreePool(gpevtPTPOperation);
    gpevtPTPOperation = 0LL;
  }
  if ( UserAtomTableHandle )
  {
    RtlDestroyAtomTable(UserAtomTableHandle);
    UserAtomTableHandle = 0LL;
  }
  if ( UserLibmgmtAtomTableHandle )
  {
    RtlDestroyAtomTable(UserLibmgmtAtomTableHandle);
    UserLibmgmtAtomTableHandle = 0LL;
  }
  v1 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v7 = (__int64)v1;
      v1 = (_QWORD *)*v1;
      v8 = *(_QWORD *)(v7 + 56);
      if ( v8 )
      {
        Win32FreePool(v8);
        *(_QWORD *)(v7 + 56) = 0LL;
      }
      v9 = *(_QWORD *)(v7 + 40);
      if ( v9 )
      {
        Win32FreePool(v9);
        *(_QWORD *)(v7 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v7 + 16));
      Win32FreePool(v7);
    }
    while ( v1 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v2 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v10 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v10 + 8) = &gsmsList;
        FreeSMS(v2, 0LL);
      }
    }
    qword_1C0192978 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( (int)IsGetSMSLookasideSupported() >= 0 )
  {
    GetSMSLookaside(&v11);
    if ( *v11 )
    {
      Win32FreePagedLookasideList();
      *v11 = 0LL;
    }
  }
  if ( qword_1C018F538 )
  {
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList(qword_1C018F538 + 24);
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C018F538);
    qword_1C018F538 = 0LL;
  }
  if ( QLookaside )
  {
    Win32FreePagedLookasideList();
    QLookaside = 0LL;
  }
  if ( QEntryLookaside )
  {
    Win32FreePagedLookasideList();
    QEntryLookaside = 0LL;
  }
  CleanupKeyboardLayouts();
  while ( 1 )
  {
    v3 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v3);
  }
  if ( qword_1C01929B8 )
    Win32FreePool(qword_1C01929B8);
  if ( gpsdInitWinSta )
  {
    Win32FreePool(gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    Win32FreePool((__int64)gpPowerRequestMutex);
    gpPowerRequestMutex = 0LL;
  }
  if ( gpresRender )
  {
    ExDeleteResourceLite(gpresRender);
    ExFreePoolWithTag(gpresRender, 0);
    gpresRender = 0LL;
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( (int)IsUninitRotationManagerSupported() >= 0 )
    UninitRotationManager();
  if ( DispBroker::DispBrokerClient::s_pSessionLock )
  {
    ExDeleteResourceLite(DispBroker::DispBrokerClient::s_pSessionLock);
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionLock, 0);
  }
  v4 = (DispBroker::DispBrokerClientReference *)DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
  {
    DispBroker::DispBrokerClientReference::Assign(
      (DispBroker::DispBrokerClientReference *)DispBroker::DispBrokerClient::s_pSessionBroker,
      0LL);
    DispBroker::DispBrokerClientReference::Assign(v4, 0LL);
    ExFreePoolWithTag(v4, 0x44535042u);
  }
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
