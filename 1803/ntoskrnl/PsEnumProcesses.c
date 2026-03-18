/*
 * XREFs of PsEnumProcesses @ 0x1405385E4
 * Callers:
 *     PopEtEnergyTrackerQuery @ 0x14051D9F0 (PopEtEnergyTrackerQuery.c)
 *     EtwpDisableTraceProviders @ 0x14058EF9C (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x140629158 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14063F9AC (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1406451D8 (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14064E46C (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x14077CC34 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1407AFA90 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1407B8468 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x140538C80 (PsGetNextProcess.c)
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
