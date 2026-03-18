/*
 * XREFs of ExpInitSystemPhase0 @ 0x14089EA18
 * Callers:
 *     ExInitSystem @ 0x14089E868 (ExInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     ExInitializeResourceLite @ 0x1400F3430 (ExInitializeResourceLite.c)
 *     RtlHpGlobalsInitialize @ 0x1401707CC (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x14062015C (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  int v0; // ecx
  unsigned __int64 v1; // rbx
  char result; // al

  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  qword_14039EDA8 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_14039ED58 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_14039ED28 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_1403A1BB8 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpTimeout = -40000000LL;
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite(&ExpFirmwareTableResource);
  v0 = *(_DWORD *)(KeLoaderBlock_0 + 264);
  ExpConDrvLoadLock = 0LL;
  qword_140862420 = 0LL;
  qword_1408624E0 = 0LL;
  ExpFirmwarePageProtectionSupported = (v0 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    MEMORY[0xFFFFF780000002D0] = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v1 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  result = 1;
  RtlpHpLegacyEnvHandle = 2uLL;
  return result;
}
