/*
 * XREFs of PfSnLogPageFault @ 0x14004B630
 * Callers:
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiMakeSystemCachePteValid @ 0x140048C70 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1404BD2AC (MiLogRelocationRva.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x14008DE70 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x14008DFB4 (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14008E8B0 (PfSnCheckLoggingForThread.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection(v8 + 45);
    }
  }
}
