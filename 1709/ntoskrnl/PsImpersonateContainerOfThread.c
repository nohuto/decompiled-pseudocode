/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1400A0720
 * Callers:
 *     IopProcessWorkItem @ 0x140116BE0 (IopProcessWorkItem.c)
 *     NtSetInformationThread @ 0x1404CD4F0 (NtSetInformationThread.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406DC784 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x1400071FC (KeSetThreadChargeOnlySchedulingGroup.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x14009FA50 (ExpAcquireSpinLockExclusive.c)
 *     ObpIncrPointerCount @ 0x1400A0910 (ObpIncrPointerCount.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     PspRevertContainerImpersonation @ 0x1400A0A50 (PspRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeCheckAndApplyBamQos @ 0x140209EA0 (KeCheckAndApplyBamQos.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140285FCC (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

BOOLEAN __fastcall PsImpersonateContainerOfThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  REGHANDLE v7; // rdi
  BOOLEAN result; // al
  unsigned int v9; // r8d
  signed __int32 v10; // ett
  int v11; // [rsp+40h] [rbp-58h] BYREF
  int v12; // [rsp+44h] [rbp-54h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-48h] BYREF
  int *v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+90h] [rbp-8h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  if ( ObpTraceFlags )
    ObpPushStackInfo(a1 - 48);
  ObpIncrPointerCount(a1 - 48);
  CurrentThread = KeGetCurrentThread();
  PspRevertContainerImpersonation(CurrentThread);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(&PspThreadWorkOnBehalfLock, CurrentIrql);
  CurrentThread[1].WaitBlock[1].Object = (PVOID)a1;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 1) )
  {
    _disable();
    v9 = *(_DWORD *)(a1 + 120) & 3;
    if ( (*((_DWORD *)&CurrentThread->0 + 1) & 3u) > v9 )
    {
      do
        v10 = *(&CurrentThread->MiscFlags + 1);
      while ( v10 != _InterlockedCompareExchange(
                       (volatile signed __int32 *)&CurrentThread->116 + 1,
                       v9 | v10 & 0xFFFFFFFC,
                       v10) );
      if ( (unsigned __int8)(*(_BYTE *)(&CurrentThread->MiscFlags + 1) & 3) < (unsigned __int8)(CurrentPrcb->BamFlags & 3) )
        KeCheckAndApplyBamQos(CurrentPrcb, CurrentThread);
    }
    if ( (v16 & 0x200) != 0 )
      _enable();
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&PspThreadWorkOnBehalfLock, retaddr);
  else
    PspThreadWorkOnBehalfLock = 0;
  __writecr8(CurrentIrql);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 944LL);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 1016);
    if ( v6 )
      KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v6);
  }
  v7 = EtwpPsProvRegHandle;
  result = EtwEventEnabled(EtwpPsProvRegHandle, &ThreadWorkOnBehalfUpdate);
  if ( result )
  {
    v11 = 0;
    UserData.Ptr = (ULONGLONG)&v11;
    v12 = *(_DWORD *)(a1 + 1600);
    *(_QWORD *)&UserData.Size = 4LL;
    v14 = &v12;
    v15 = 4LL;
    return EtwWriteEx(v7, &ThreadWorkOnBehalfUpdate, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  return result;
}
