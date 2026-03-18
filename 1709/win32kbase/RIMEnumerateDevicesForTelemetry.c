/*
 * XREFs of RIMEnumerateDevicesForTelemetry @ 0x1C00A3D60
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00A3A20 (RIMOnPowerNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C00A3F30 (RIMLogDeviceHealthTelemetry.c)
 */

__int64 RIMEnumerateDevicesForTelemetry()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v3; // rax
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *v5; // r8
  __int64 *v6; // rsi
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 j; // rbx

  v0 = 0LL;
  LODWORD(v1) = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x96u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
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
      v3 = Win32AllocPool(8LL * (unsigned int)v1, 0x6D707352u);
      v1 = 0LL;
      v0 = v3;
      if ( v3 )
      {
        for ( i = gObRimList.Flink; i != &gObRimList; i = i->Flink )
        {
          v5 = i - 1;
          if ( HIDWORD(i[3].Blink) && !BYTE1(v5[4].Blink) && !LOBYTE(v5[4].Blink) )
          {
            *(_QWORD *)(v3 + 8 * v1) = v5;
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
    v6 = (__int64 *)v0;
    v7 = (unsigned int)v1;
    do
    {
      v8 = *v6;
      v9 = *v6 + 96;
      RIMLockExclusive(v9);
      if ( !*(_BYTE *)(v8 + 73) && !*(_BYTE *)(v8 + 75) )
      {
        v10 = v8 + 696;
        RIMLockExclusive(v8 + 696);
        for ( j = *(_QWORD *)(v8 + 552); j; j = *(_QWORD *)(j + 40) )
          RIMLogDeviceHealthTelemetry(j, L"RIMOnPowerNotification");
        *(_QWORD *)(v10 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v9 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v9, 0LL);
      KeLeaveCriticalRegion();
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  if ( v0 )
    Win32FreePool(v0);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x97u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  return 0LL;
}
