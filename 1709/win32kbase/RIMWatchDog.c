/*
 * XREFs of RIMWatchDog @ 0x1C00180F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RIMArmWatchDog @ 0x1C00A47F0 (RIMArmWatchDog.c)
 *     DbgPrintRIMAlways @ 0x1C00F0070 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00FF6EC (WPP_RECORDER_SF_qqqD.c)
 */

void RIMWatchDog()
{
  __int64 v0; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  int v2; // edi
  int v3; // edx
  int v4; // r8d

  RIMLockExclusive((__int64)&gObListLock);
  RIMLockExclusive((__int64)&gWatchDogQPCLock);
  Flink = gObRimList.Flink;
  v2 = 0;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_15;
  do
  {
    if ( LODWORD(Flink[52].Flink) )
    {
      if ( !Flink[51].Blink || BYTE1(Flink[3].Blink) || LOBYTE(Flink[3].Blink) || LOBYTE(Flink[43].Blink) )
      {
        LODWORD(Flink[52].Flink) = 0;
      }
      else
      {
        v2 = 1;
        if ( (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - (unsigned __int64)Flink[51].Blink) > Flink[51].Flink )
        {
          LODWORD(Flink[52].Flink) = 0;
          WPP_RECORDER_SF_qqqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v3,
            v4,
            16,
            (__int64)&WPP_061ba18ef66b318792488a11d9e561fa_Traceguids,
            (char)Flink[3].Flink,
            (char)Flink[1].Flink,
            (char)Flink[1].Blink,
            HIDWORD(Flink[3].Blink));
          DbgPrintRIMAlways("WATCHDOG: hRim:%p[P:%p,T:%p]dwInputType:%08x delayed read\n");
        }
      }
    }
    Flink = Flink->Flink;
  }
  while ( Flink != &gObRimList );
  if ( v2 )
  {
    RIMArmWatchDog(v0);
  }
  else
  {
LABEL_15:
    if ( gWatchDogTimer && gbWatchDogTimerArmed )
    {
      gbWatchDogTimerArmed = 0;
      KeCancelTimer(gWatchDogTimer);
    }
  }
  qword_1C0193AC8 = 0LL;
  ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0193AE8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
