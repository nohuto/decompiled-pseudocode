/*
 * XREFs of RIMInitialize @ 0x1C006AF90
 * Callers:
 *     DriverEntry @ 0x1C01D5780 (DriverEntry.c)
 * Callees:
 *     rimInitAllHidParseDelayLoads @ 0x1C0087B58 (rimInitAllHidParseDelayLoads.c)
 *     RIMReadTTMRegistrySettings @ 0x1C0090E78 (RIMReadTTMRegistrySettings.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     rimLoadImage @ 0x1C0106FB8 (rimLoadImage.c)
 */

__int64 RIMInitialize()
{
  gbRIMInitialized = 1;
  KeQueryPerformanceCounter(&gliQpcFreq);
  gDeadzoneLock = 0LL;
  qword_1C018E7C8 = 0LL;
  gObListLock = 0LL;
  qword_1C018EC88 = 0LL;
  gWatchDogQPCLock = 0LL;
  qword_1C018EC68 = 0LL;
  gTLCInfoLock = 0LL;
  qword_1C018E7B8 = 0LL;
  gObRimList.Blink = &gObRimList;
  gObRimList.Flink = &gObRimList;
  qword_1C018E7A8 = (__int64)&gObRimDevList;
  gObRimDevList = (__int64)&gObRimDevList;
  gObRimInputObserverList.Blink = &gObRimInputObserverList;
  gObRimInputObserverList.Flink = &gObRimInputObserverList;
  RawInputManagerObject::bTouchInputAllowed = 1;
  qword_1C018E7E8 = (__int64)&qword_1C018E7E0;
  qword_1C018E7E0 = (__int64)&qword_1C018E7E0;
  qword_1C018E7F8 = (__int64)&qword_1C018E7F0;
  qword_1C018E7F0 = (__int64)&qword_1C018E7F0;
  qword_1C018E7D8 = (__int64)&RawInputManagerObject::gHidRequestTable;
  RawInputManagerObject::gHidRequestTable = &RawInputManagerObject::gHidRequestTable;
  ghModHidParse = (void *)rimLoadImage();
  if ( ghModHidParse )
    rimInitAllHidParseDelayLoads();
  gInputObserverLock = 0LL;
  qword_1C018EC78 = 0LL;
  RIMReadTTMRegistrySettings();
  return 0LL;
}
