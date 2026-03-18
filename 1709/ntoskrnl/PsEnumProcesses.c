/*
 * XREFs of PsEnumProcesses @ 0x1404FD1C8
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x140445B34 (PopEtEnergyTrackerQuery.c)
 *     EtwpDisableTraceProviders @ 0x1404EF090 (EtwpDisableTraceProviders.c)
 *     PopInitializeHeteroProcessors @ 0x1405B6434 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1406F3FC8 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x140708870 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x140718C64 (PsShutdownSystem.c)
 *     EtwpProcessThreadImageRundown @ 0x14074E288 (EtwpProcessThreadImageRundown.c)
 *     EtwpPsProvCaptureState @ 0x14074E7F0 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1404FD830 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
