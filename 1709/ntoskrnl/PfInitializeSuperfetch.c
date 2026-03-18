/*
 * XREFs of PfInitializeSuperfetch @ 0x14084EEE8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140025A30 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x14017FAC0 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1405DC060 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1405DCD90 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1405DCFD8 (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x14084EFE0 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x14084F17C (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x14084F43C (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_14038D338);
  PfpScenCtxInitialize(qword_14038D2C0);
  PfpScenCtxStart((__int64)qword_14038D2C0);
  ExInitializePushLock(&stru_14038D3E0);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14038D3E0);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14038D3E0);
  qword_14038D3E8 = 0LL;
  qword_14038D3F0 = 0LL;
  dword_14038D408 |= 1u;
  qword_14038D400 = (__int64)&qword_14038D3F8;
  qword_14038D3F8 = (__int64)&qword_14038D3F8;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_14038D0E0, 4u, 1u);
  return 0LL;
}
