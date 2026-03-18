/*
 * XREFs of RIMOnMonitorNotification @ 0x1C0009AF0
 * Callers:
 *     <none>
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C00086BC (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMInitFakeMonitor @ 0x1C0070278 (RIMInitFakeMonitor.c)
 *     RIMComputeVirtualHimetricSize @ 0x1C0107CA0 (RIMComputeVirtualHimetricSize.c)
 */

__int64 RIMOnMonitorNotification()
{
  __int64 v0; // r14
  unsigned int v1; // ebx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v4; // r8
  __int64 *v5; // r15
  __int64 v6; // r12
  __int64 v7; // rsi
  __int64 j; // rdi
  int v9; // edx
  __int64 v10; // rbx
  __int64 v12; // rax
  _QWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF

  v0 = 0LL;
  v1 = 0;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    69,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( (int)rimGetQDCActivePathsData(v13) >= 0 )
  {
    RIMLockExclusive(&gObListLock);
    Flink = gObRimList.Flink;
    if ( gObRimList.Flink != &gObRimList )
    {
      do
      {
        if ( (HIDWORD(Flink[3].Blink) & 0x1C) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
          ++v1;
        Flink = Flink->Flink;
      }
      while ( Flink != &gObRimList );
      if ( v1 )
      {
        v0 = Win32AllocPool(8LL * v1, 1836086098LL);
        v1 = 0;
        if ( v0 )
        {
          for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
          {
            v4 = i - 1;
            if ( (HIDWORD(i[3].Blink) & 0x1C) != 0 && !BYTE1(v4[4].Blink) && !LOBYTE(v4[4].Blink) )
            {
              v12 = v1++;
              *(_QWORD *)(v0 + 8 * v12) = v4;
            }
          }
        }
      }
    }
    qword_1C018EC88 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( v1 )
    {
      v5 = (__int64 *)v0;
      v6 = v1;
      while ( 1 )
      {
        v7 = *v5;
        RIMLockExclusive(*v5 + 96);
        if ( !*(_BYTE *)(v7 + 73) )
          break;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          18,
          70,
          (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
LABEL_25:
        *(_QWORD *)(v7 + 104) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
        KeLeaveCriticalRegion();
        ++v5;
        if ( !--v6 )
          goto LABEL_26;
      }
      RIMLockExclusive(v7 + 696);
      for ( j = *(_QWORD *)(v7 + 552); ; j = *(_QWORD *)(j + 40) )
      {
        if ( !j )
        {
          *(_QWORD *)(v7 + 704) = 0LL;
          ExReleasePushLockExclusiveEx(v7 + 696, 0LL);
          KeLeaveCriticalRegion();
          goto LABEL_25;
        }
        if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 )
          break;
LABEL_20:
        ;
      }
      v9 = *(_DWORD *)(j + 184);
      v10 = *(_QWORD *)(j + 472);
      if ( !__CFSHR__(v9, 13) )
      {
        if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 6) <= 1 )
        {
LABEL_36:
          if ( (v9 & 0x1000000) != 0 )
          {
            if ( (int)IsInitFakeMonitorSupported() >= 0 )
              InitFakeMonitor(v10);
            if ( *(_DWORD *)(v10 + 24) != 6 && (int)IsComputeVirtualHimetricSizeSupported() >= 0 )
              ComputeVirtualHimetricSize(v10, 0LL);
          }
          else
          {
            RIMInitFakeMonitor(*(_QWORD *)(j + 472));
            if ( *(_DWORD *)(v10 + 24) != 6 )
              RIMComputeVirtualHimetricSize(v10, 0LL);
          }
          goto LABEL_20;
        }
        if ( !__CFSHR__(*(_DWORD *)(j + 184), 13) )
          goto LABEL_18;
      }
      if ( (*(_DWORD *)(v10 + 260) & 0x8000) != 0 )
      {
LABEL_18:
        if ( (v9 & 0x1000000) != 0 )
        {
          if ( (int)IsFindMonitorForDigitizerWithQDCDataSupported() >= 0 )
            FindMonitorForDigitizerWithQDCData(v10, 1LL, v13);
        }
        else
        {
          rimFindMonitorForDigitizerWithQDCData(v7, v10, 1, (unsigned int)v13, 0LL);
        }
        goto LABEL_20;
      }
      goto LABEL_36;
    }
LABEL_26:
    if ( v0 )
      Win32FreePool(v0);
    rimFreeQDCActivePathsData(v13);
  }
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           71,
           (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
}
