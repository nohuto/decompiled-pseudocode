/*
 * XREFs of PfInitializeSuperfetch @ 0x1408C032C
 * Callers:
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     ExInitializePushLock @ 0x1400BA070 (ExInitializePushLock.c)
 *     ZwNotifyChangeKey @ 0x1401A9700 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1406444B8 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x140645550 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x140645798 (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x1408C0424 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x1408C05BC (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x1408C087C (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_1403CD758);
  PfpScenCtxInitialize(qword_1403CD6E0);
  PfpScenCtxStart((__int64)qword_1403CD6E0);
  ExInitializePushLock(&RunRef);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&RunRef);
  ExRundownCompleted((PEX_RUNDOWN_REF)&RunRef);
  qword_1403CD808 = 0LL;
  qword_1403CD810 = 0LL;
  dword_1403CD828 |= 1u;
  qword_1403CD820 = (__int64)&qword_1403CD818;
  qword_1403CD818 = (__int64)&qword_1403CD818;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_1403CD500, 4u, 1u);
  return 0LL;
}
