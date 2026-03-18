/*
 * XREFs of PfSnLogPageFault @ 0x14005F114
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140026388 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x14049620C (MiLogRelocationRva.c)
 * Callees:
 *     PfSnCheckLoggingForThread @ 0x14004AF54 (PfSnCheckLoggingForThread.c)
 *     PfSnReferenceProcessTrace @ 0x1400602F0 (PfSnReferenceProcessTrace.c)
 *     PfSnLogPageFaultCommon @ 0x1400B5710 (PfSnLogPageFaultCommon.c)
 *     ExReleaseRundownProtection @ 0x1400EDEB0 (ExReleaseRundownProtection.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, int a3)
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
      if ( (unsigned int)PfSnCheckLoggingForThread((__int64)CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection(v8 + 45);
    }
  }
}
