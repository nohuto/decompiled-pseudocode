/*
 * XREFs of RIMOnDisplayStateChange @ 0x1C000C8F8
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     RIMSetDeviceOutputConfig @ 0x1C000CB48 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 */

__int64 RIMOnDisplayStateChange()
{
  __int64 *v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v4; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 j; // rbx
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    69,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v2 = RIMGetQDCActivePathsData(v16);
  RIMLockExclusive(&gObListLock);
  Flink = gObRimList.Flink;
  if ( gObRimList.Flink != &gObRimList )
  {
    do
    {
      if ( (HIDWORD(Flink[3].Blink) & 0x1C) != 0 && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
        LODWORD(v1) = v1 + 1;
      Flink = Flink->Flink;
    }
    while ( Flink != &gObRimList );
    if ( (_DWORD)v1 )
    {
      v4 = Win32AllocPool(8LL * (unsigned int)v1, 1836086098LL);
      v1 = 0LL;
      v0 = (__int64 *)v4;
      if ( v4 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v6 = i - 1;
          if ( (HIDWORD(i[3].Blink) & 0x1C) != 0 && !BYTE1(v6[4].Blink) && !LOBYTE(v6[4].Blink) )
          {
            *(_QWORD *)(v4 + 8 * v1) = v6;
            v1 = (unsigned int)(v1 + 1);
          }
        }
      }
    }
  }
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v1 )
  {
    v9 = v0;
    v10 = (unsigned int)v1;
    do
    {
      v11 = *v9;
      v12 = *v9 + 96;
      RIMLockExclusive(v12);
      if ( *(_BYTE *)(v11 + 73) )
      {
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          3,
          18,
          70,
          (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
      }
      else
      {
        v13 = v11 + 696;
        RIMLockExclusive(v11 + 696);
        for ( j = *(_QWORD *)(v11 + 552); j; j = *(_QWORD *)(j + 40) )
        {
          if ( *(_BYTE *)(j + 48) == 2 )
          {
            if ( *(_DWORD *)(j + 776) )
              rimFindMonitorForDigitizerWithQDCData(j, v2, 0LL);
            if ( (*(_DWORD *)(j + 200) & 0x80u) != 0 || *(_DWORD *)(j + 776) )
              RIMSetDeviceOutputConfig((struct RIMDEV *)j, *(struct tagHID_POINTER_DEVICE_INFO **)(j + 472));
          }
        }
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v12 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v12, 0LL);
      KeLeaveCriticalRegion();
      ++v9;
      --v10;
    }
    while ( v10 );
  }
  if ( v0 )
    Win32FreePool(v0, v7, v8);
  RIMFreeQDCActivePathsData(v2);
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           3,
           19,
           71,
           (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
}
