/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C006737C (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreeToPagedLookasideList @ 0x1C0037D40 (Win32FreeToPagedLookasideList.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMAssignmentUnlock @ 0x1C0049000 (HMAssignmentUnlock.c)
 *     Win32FreePagedLookasideList @ 0x1C0068030 (Win32FreePagedLookasideList.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00681AC (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     DestroyKL @ 0x1C00786CC (DestroyKL.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 *     ?Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z @ 0x1C009252C (-Assign@DispBrokerClientReference@DispBroker@@QEAAXPEAVDispBrokerClientHandle@2@@Z.c)
 */

void Win32kNtUserCleanupInternal(void)
{
  __int64 *v0; // rbx
  _QWORD *v1; // rbx
  void ***v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  DispBroker::DispBrokerClientReference *v6; // rbx
  __int64 v7; // rbx
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  void **v12; // rax
  _QWORD *v13; // rbx
  __int64 *v14; // [rsp+50h] [rbp+20h] BYREF
  void *v15; // [rsp+58h] [rbp+28h] BYREF

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
    GetgpastrSetupExe(&v14);
    if ( *v14 )
    {
      Win32FreePool(*v14);
      *v14 = 0LL;
    }
  }
  if ( (int)IsGetglpSetupProgramsSupported() >= 0 )
  {
    GetglpSetupPrograms(&v14);
    if ( *v14 )
    {
      Win32FreePool(*v14);
      *v14 = 0LL;
    }
  }
  if ( (int)IsGetpbwlCacheSupported() >= 0 )
  {
    GetpbwlCache(&v14);
    if ( *v14 )
    {
      Win32FreePool(*v14);
      *v14 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v7 = gtmrListHead - 72;
    if ( (int)IsFreeTimerSupported() >= 0 )
      FreeTimer(v7);
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
  v0 = (__int64 *)&unk_1C0186160;
  do
  {
    if ( *((_DWORD *)v0 + 3) == -1 && *v0 )
    {
      Win32FreePool(*v0);
      *v0 = 0LL;
    }
    v0 += 70;
  }
  while ( (__int64)v0 <= (__int64)qword_1C01865C0 );
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v14, &v15) )
    {
      if ( (_DWORD)v14 == 2 || (_DWORD)v14 == 4 )
      {
        v8 = v15;
        if ( *((_QWORD *)v15 + 1) )
        {
          Win32FreePool(*((_QWORD *)v15 + 1));
          v8[1] = 0LL;
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
  if ( gpresMouseEventQueue )
  {
    ExDeleteResourceLite(gpresMouseEventQueue);
    ExFreePoolWithTag(gpresMouseEventQueue, 0);
    gpresMouseEventQueue = 0LL;
  }
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
      v9 = (__int64)v1;
      v1 = (_QWORD *)*v1;
      v10 = *(_QWORD *)(v9 + 56);
      if ( v10 )
      {
        Win32FreePool(v10);
        *(_QWORD *)(v9 + 56) = 0LL;
      }
      v11 = *(_QWORD *)(v9 + 40);
      if ( v11 )
      {
        Win32FreePool(v11);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v9 + 16));
      Win32FreePool(v9);
    }
    while ( v1 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    v2 = (void ***)gsmsList;
    if ( gsmsList )
    {
      while ( v2 != (void ***)&gsmsList )
      {
        v12 = *v2;
        if ( v2[1] != &gsmsList || v12[1] != v2 )
          __fastfail(3u);
        gsmsList = *v2;
        v12[1] = &gsmsList;
        FreeSMS(v2, 0LL);
        v2 = (void ***)gsmsList;
      }
    }
    qword_1C018DB18 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( (int)IsGetSMSLookasideSupported() >= 0 )
  {
    GetSMSLookaside(&v14);
    if ( *v14 )
    {
      Win32FreePagedLookasideList();
      *v14 = 0LL;
    }
  }
  if ( qword_1C018ED80 )
  {
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C018ED80);
    qword_1C018ED80 = 0LL;
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
  v3 = gspklBaseLayout;
  if ( gspklBaseLayout )
  {
    if ( gspklGlobalActive )
    {
      HMAssignmentUnlock(&gspklGlobalActive);
      v3 = gspklBaseLayout;
    }
    v4 = *(_QWORD **)(v3 + 16);
    if ( (_QWORD *)v4[2] != v4 )
    {
      do
      {
        v13 = (_QWORD *)v4[2];
        DestroyKL(v4);
        v4 = v13;
      }
      while ( (_QWORD *)v13[2] != v13 );
      v3 = gspklBaseLayout;
    }
    if ( (*((_BYTE *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)v3 + 25) & 1) == 0 )
      HMMarkObjectDestroy(v3);
    gdwHydraHint |= 0x8000u;
    if ( HMAssignmentUnlock(&gspklBaseLayout) )
      DestroyKL(v4);
  }
  while ( 1 )
  {
    v5 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v5);
  }
  if ( qword_1C018DB60 )
    Win32FreePool(qword_1C018DB60);
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
  v6 = (DispBroker::DispBrokerClientReference *)DispBroker::DispBrokerClient::s_pSessionBroker;
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
  {
    DispBroker::DispBrokerClientReference::Assign(
      (DispBroker::DispBrokerClientReference *)DispBroker::DispBrokerClient::s_pSessionBroker,
      0LL);
    DispBroker::DispBrokerClientReference::Assign(v6, 0LL);
    ExFreePoolWithTag(v6, 0x44535042u);
  }
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
