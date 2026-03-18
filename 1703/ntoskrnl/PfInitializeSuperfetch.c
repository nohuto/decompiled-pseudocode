/*
 * XREFs of PfInitializeSuperfetch @ 0x14081DA88
 * Callers:
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializePushLock @ 0x140023310 (ExInitializePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     ZwNotifyChangeKey @ 0x140180100 (ZwNotifyChangeKey.c)
 *     PfTInitialize @ 0x1405C8078 (PfTInitialize.c)
 *     PfpScenCtxStart @ 0x1405C8DF0 (PfpScenCtxStart.c)
 *     PfpScenCtxInitialize @ 0x1405C9038 (PfpScenCtxInitialize.c)
 *     PfpParametersInitialize @ 0x14081DB80 (PfpParametersInitialize.c)
 *     PfSnInitializePrefetcher @ 0x14081DD1C (PfSnInitializePrefetcher.c)
 *     PfpRpInitialize @ 0x14081DFDC (PfpRpInitialize.c)
 */

__int64 PfInitializeSuperfetch()
{
  __int64 v0; // rdx

  PfpParametersInitialize(&PfGlobals);
  PfpRpInitialize(&unk_14036DED8);
  PfpScenCtxInitialize(qword_14036DE60);
  PfpScenCtxStart((__int64)qword_14036DE60);
  ExInitializePushLock(&stru_14036DF80);
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&stru_14036DF80);
  ExRundownCompleted((PEX_RUNDOWN_REF)&stru_14036DF80);
  qword_14036DF88 = 0LL;
  qword_14036DF90 = 0LL;
  dword_14036DFA8 |= 1u;
  qword_14036DFA0 = (__int64)&qword_14036DF98;
  qword_14036DF98 = (__int64)&qword_14036DF98;
  PfSnInitializePrefetcher();
  PfTInitialize((__int64)&PfTGlobals, v0, 0);
  if ( KeyHandle )
    ZwNotifyChangeKey(KeyHandle, 0LL, ApcRoutine, (PVOID)1, &IoStatusBlock, 0x1000000Fu, 0, &unk_14036DC80, 4u, 1u);
  return 0LL;
}
