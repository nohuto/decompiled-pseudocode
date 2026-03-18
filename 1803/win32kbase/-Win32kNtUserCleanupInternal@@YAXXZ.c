/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00A96EC
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00A9524 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0044A20 (Win32FreeToPagedLookasideList.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C00A0378 (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00A7AB4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     Win32FreePagedLookasideList @ 0x1C00BD280 (Win32FreePagedLookasideList.c)
 *     CleanupKeyboardLayouts @ 0x1C012A510 (CleanupKeyboardLayouts.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  __int64 v0; // rbx
  _QWORD *v1; // rbx
  __int64 v2; // rcx
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  void **v11; // rbx
  __int64 *v12; // [rsp+50h] [rbp+20h] BYREF
  void *v13; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( (int)IsFreeImeHotKeysSupported() >= 0 )
    FreeImeHotKeys();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool((__int64)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( (int)IsGetgpastrSetupExeSupported() >= 0 )
  {
    GetgpastrSetupExe(&v12);
    if ( *v12 )
    {
      Win32FreePool(*v12);
      *v12 = 0LL;
    }
  }
  if ( (int)IsGetglpSetupProgramsSupported() >= 0 )
  {
    GetglpSetupPrograms(&v12);
    if ( *v12 )
    {
      Win32FreePool(*v12);
      *v12 = 0LL;
    }
  }
  if ( (int)IsGetpbwlCacheSupported() >= 0 )
  {
    GetpbwlCache(&v12);
    if ( *v12 )
    {
      Win32FreePool(*v12);
      *v12 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v0 = gtmrListHead - 72;
    if ( (int)IsFreeTimerSupported() >= 0 )
      FreeTimer(v0);
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
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v12, &v13) )
    {
      if ( (_DWORD)v12 == 2 || (_DWORD)v12 == 4 )
      {
        v1 = v13;
        v2 = *((_QWORD *)v13 + 1);
        if ( v2 )
        {
          Win32FreePool(v2);
          v1[1] = 0LL;
        }
      }
    }
  }
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    Win32FreePool((__int64)gpPnpNotificationRecord);
    gpPnpNotificationRecord = 0LL;
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
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
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
  if ( gpevtQueueReadyForCallout )
  {
    Win32FreePool((__int64)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
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
  v3 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v4 = (__int64)v3;
      v3 = (_QWORD *)*v3;
      v5 = *(_QWORD *)(v4 + 56);
      if ( v5 )
      {
        Win32FreePool(v5);
        *(_QWORD *)(v4 + 56) = 0LL;
      }
      v6 = *(_QWORD *)(v4 + 40);
      if ( v6 )
      {
        Win32FreePool(v6);
        *(_QWORD *)(v4 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v4 + 16));
      Win32FreePool(v4);
    }
    while ( v3 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v7 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v8 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v8 + 8) = &gsmsList;
        FreeSMS(v7, 0LL);
      }
    }
    qword_1C01A47B8 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( (int)IsGetSMSLookasideSupported() >= 0 )
  {
    GetSMSLookaside(&v12);
    v9 = *v12;
    if ( *v12 )
    {
      Win32FreePagedLookasideList();
      *v12 = 0LL;
    }
  }
  if ( qword_1C01A2198 )
  {
    if ( (int)IsFreeMessageListSupported(v9) >= 0 )
      FreeMessageList(qword_1C01A2198 + 24);
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C01A2198);
    qword_1C01A2198 = 0LL;
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
    v10 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v10);
  }
  if ( qword_1C01A4910 )
    Win32FreePool(qword_1C01A4910);
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
  v11 = (void **)DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
  {
    DispBroker::DispBrokerClientReference::Assign((void **)DispBroker::DispBrokerClient::s_pSessionBroker, 0LL);
    DispBroker::DispBrokerClientReference::Assign(v11, 0LL);
    ExFreePoolWithTag(v11, 0x44535042u);
  }
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
