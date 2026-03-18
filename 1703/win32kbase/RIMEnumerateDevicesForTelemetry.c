/*
 * XREFs of RIMEnumerateDevicesForTelemetry @ 0x1C009AE08
 * Callers:
 *     RIMOnPowerNotification @ 0x1C009AAC0 (RIMOnPowerNotification.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C00086BC (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C009B01C (RIMLogDeviceHealthTelemetry.c)
 */

__int64 RIMEnumerateDevicesForTelemetry()
{
  __int64 v0; // r14
  __int64 v1; // rbx
  int QDCActivePathsData; // r12d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v4; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v6; // r8
  __int64 j; // rbx
  __int64 *v8; // rdi
  __int64 v9; // r15
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rbp
  _QWORD v14[4]; // [rsp+30h] [rbp-38h] BYREF

  v0 = 0LL;
  LODWORD(v1) = 0;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    145,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  QDCActivePathsData = rimGetQDCActivePathsData(v14);
  if ( QDCActivePathsData >= 0 )
  {
    RIMLockExclusive((__int64)&gObListLock);
    Flink = gObRimList.Flink;
    if ( gObRimList.Flink != &gObRimList )
    {
      do
      {
        if ( HIDWORD(Flink[3].Blink) && !BYTE1(Flink[3].Blink) && !LOBYTE(Flink[3].Blink) )
          LODWORD(v1) = v1 + 1;
        Flink = Flink->Flink;
      }
      while ( Flink != &gObRimList );
      if ( (_DWORD)v1 )
      {
        v4 = Win32AllocPool(8LL * (unsigned int)v1, 0x6D707352u);
        v1 = 0LL;
        v0 = v4;
        if ( v4 )
        {
          for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
          {
            v6 = i - 1;
            if ( HIDWORD(i[3].Blink) && !BYTE1(v6[4].Blink) && !LOBYTE(v6[4].Blink) )
            {
              *(_QWORD *)(v4 + 8 * v1) = v6;
              v1 = (unsigned int)(v1 + 1);
            }
          }
        }
      }
    }
    qword_1C018EC88 = 0LL;
    ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
    KeLeaveCriticalRegion();
    if ( (_DWORD)v1 )
    {
      v8 = (__int64 *)v0;
      v9 = (unsigned int)v1;
      do
      {
        v11 = *v8;
        v12 = *v8 + 96;
        RIMLockExclusive(v12);
        if ( !*(_BYTE *)(v11 + 73) && !*(_BYTE *)(v11 + 75) )
        {
          v13 = v11 + 696;
          RIMLockExclusive(v11 + 696);
          for ( j = *(_QWORD *)(v11 + 552); j; j = *(_QWORD *)(j + 40) )
            RIMLogDeviceHealthTelemetry(j, L"RIMOnPowerNotification");
          *(_QWORD *)(v13 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
          KeLeaveCriticalRegion();
        }
        *(_QWORD *)(v12 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v12, 0LL);
        KeLeaveCriticalRegion();
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    if ( v0 )
      Win32FreePool(v0);
    rimFreeQDCActivePathsData(v14);
  }
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    3,
    19,
    146,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  return (unsigned int)QDCActivePathsData;
}
