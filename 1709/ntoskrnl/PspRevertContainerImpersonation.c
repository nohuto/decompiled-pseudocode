/*
 * XREFs of PspRevertContainerImpersonation @ 0x1400A0A50
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x1400A0720 (PsImpersonateContainerOfThread.c)
 *     IopProcessWorkItem @ 0x140116BE0 (IopProcessWorkItem.c)
 *     NtRevertContainerImpersonation @ 0x14024E3D8 (NtRevertContainerImpersonation.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x14008D510 (KiUpdateTotalCyclesCurrentThread.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PspRevertContainerImpersonation(__int64 a1)
{
  _DWORD *v1; // rdi
  unsigned __int8 CurrentIrql; // si
  REGHANDLE v5; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  int v7; // [rsp+40h] [rbp-58h] BYREF
  int v8; // [rsp+44h] [rbp-54h] BYREF
  int v9; // [rsp+48h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF
  int *v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v1 = *(_DWORD **)(a1 + 1920);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(a1 + 120) & 0x200) != 0 )
  {
    KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1, 0LL);
    _enable();
    v7 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v7);
      while ( CurrentPrcb->PrcbLock );
    }
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
    __writecr8(0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  *(_QWORD *)(a1 + 1920) = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  __writecr8(CurrentIrql);
  v5 = EtwpPsProvRegHandle;
  if ( EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate) )
  {
    v8 = v1[400];
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v8;
    v9 = 0;
    v11 = &v9;
    v12 = 4LL;
    EtwWriteEx(v5, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
