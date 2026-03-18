/*
 * XREFs of PspRevertContainerImpersonation @ 0x140044790
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140044504 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x140087120 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x140239448 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x140043CC0 (KiStartThreadCycleAccumulation.c)
 *     KiEndThreadCycleAccumulation @ 0x140043D60 (KiEndThreadCycleAccumulation.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140044B84 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(__int64 a1)
{
  void *v1; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int64 v5; // rdi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(void **)(a1 + 1912);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiEndThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0LL);
    KiStartThreadCycleAccumulation((__int64)CurrentPrcb, a1, 0);
    _enable();
    v6 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v6);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 8u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    __writecr8(0LL);
  }
  v5 = ExAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock);
  *(_QWORD *)(a1 + 1912) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&PspThreadWorkOnBehalfLock);
  __writecr8(v5);
  EtwTraceThreadWorkOnBehalfUpdate(v1, 0LL);
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
