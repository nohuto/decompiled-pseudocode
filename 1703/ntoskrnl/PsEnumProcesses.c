/*
 * XREFs of PsEnumProcesses @ 0x1404B0354
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x1404B01BC (EtwpProcessThreadImageRundown.c)
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 *     PopInitializeHeteroProcessors @ 0x1405C0604 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1405D83BC (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1406D1460 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerQuery @ 0x1406D1744 (PopEtEnergyTrackerQuery.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x140711128 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1404995D0 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(unsigned __int64, __int64), __int64 a2)
{
  _QWORD *v4; // rcx
  unsigned __int64 NextProcess; // rax
  _QWORD *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (_QWORD *)NextProcess;
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
