/*
 * XREFs of PfSnLogPageFault @ 0x140010A60
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x14001E6D4 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 * Callees:
 *     PfSnReferenceProcessTrace @ 0x140012760 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x140012A2C (PfSnLogPageFaultCommon.c)
 *     PfSnCheckLoggingForThread @ 0x14001313C (PfSnCheckLoggingForThread.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
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
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}
