/*
 * XREFs of RIMInitialize @ 0x1C008CCE0
 * Callers:
 *     DriverEntry @ 0x1C01DE690 (DriverEntry.c)
 * Callees:
 *     RIMReadTTMRegistrySettings @ 0x1C008CE0C (RIMReadTTMRegistrySettings.c)
 *     rimInitAllHidParseDelayLoads @ 0x1C008CF7C (rimInitAllHidParseDelayLoads.c)
 *     rimLoadImage @ 0x1C008D19C (rimLoadImage.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 RIMInitialize()
{
  gbRIMInitialized = 1;
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C0193688 = 0LL;
  gObListLock = 0LL;
  qword_1C0193AE8 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C0193AC8 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C0193678 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C0193668 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C01936A8 = (__int64)&qword_1C01936A0;
  qword_1C01936A0 = (__int64)&qword_1C01936A0;
  qword_1C01936B8 = (__int64)&qword_1C01936B0;
  qword_1C01936B0 = (__int64)&qword_1C01936B0;
  qword_1C0193698 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C0193AD8 = 0LL;
  RIMReadTTMRegistrySettings();
  return 0LL;
}
