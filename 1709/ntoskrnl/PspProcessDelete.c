/*
 * XREFs of PspProcessDelete @ 0x1400B8F70
 * Callers:
 *     <none>
 * Callees:
 *     ExpTimerResume @ 0x14000C394 (ExpTimerResume.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400701A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInsertQueueDpc @ 0x140094390 (KeInsertQueueDpc.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400B95F8 (IoSetDiskIoAttributionOnProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     PspUnlockProcessListExclusive @ 0x1400E4CB4 (PspUnlockProcessListExclusive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14017F2E0 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x140203094 (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x1404D4D40 (ExMapHandleToPointer.c)
 *     MmDeleteProcessAddressSpace @ 0x1404FB9A4 (MmDeleteProcessAddressSpace.c)
 *     ExDestroyHandle @ 0x1404FBEAC (ExDestroyHandle.c)
 *     ObDereferenceDeviceMap @ 0x1404FC1D4 (ObDereferenceDeviceMap.c)
 *     sub_1404FC25C @ 0x1404FC25C (sub_1404FC25C.c)
 *     PspDeleteProcessSecurity @ 0x1404FC950 (PspDeleteProcessSecurity.c)
 *     PspReleaseProcessQuota @ 0x1404FC970 (PspReleaseProcessQuota.c)
 *     VmProcessExit @ 0x1404FC998 (VmProcessExit.c)
 *     PoEnergyContextCleanup @ 0x1404FC9BC (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x1404FCB34 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x1404FCC90 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x1404FCE20 (EtwExitProcess.c)
 *     SmProcessDeleteNotification @ 0x1404FCE70 (SmProcessDeleteNotification.c)
 *     PspExitProcess @ 0x1404FCEF4 (PspExitProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x14050E398 (PspRemoveProcessFromJobChain.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 **v7; // rdi
  KIRQL v8; // r12
  __int64 v9; // r13
  KSPIN_LOCK *v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rbp
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rcx
  __int128 *v18; // r9
  __int64 v19; // r8
  int v20; // r10d
  char v21; // di
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rdx
  _QWORD *v27; // r11
  const char *v28; // rax
  unsigned int v29; // r10d
  unsigned __int64 v30; // rcx
  __int64 v31; // r9
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int128 *v34; // r10
  __int64 v35; // rax
  int v36; // r9d
  __int64 v37; // rax
  void *v38; // rcx
  _BYTE v39[48]; // [rsp+30h] [rbp-68h] BYREF

  *(_DWORD *)(BugCheckParameter1 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter1 + 744);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v4 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v5 = (_QWORD *)v1[1], (_QWORD *)*v5 != v1) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive(CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter1 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter1 + 1128) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter1);
  if ( (*(_DWORD *)(BugCheckParameter1 + 440) & 0x10) != 0 )
  {
    v7 = (__int64 **)(BugCheckParameter1 + 2024);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 2016));
    v9 = MEMORY[0xFFFFF78000000008];
    while ( *v7 != (__int64 *)v7 )
    {
      v10 = (KSPIN_LOCK *)*v7;
      if ( (__int64 **)(*v7)[1] != v7 || (v11 = (__int64 *)*v10, *(KSPIN_LOCK **)(*v10 + 8) != v10) )
        __fastfail(3u);
      v12 = (__int64 *)(v10 - 36);
      *v7 = v11;
      v11[1] = (__int64)v7;
      KxAcquireSpinLock(v10 - 28);
      v12[35] = 0LL;
      if ( (v12[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v12, v9);
      KxReleaseSpinLock((PKSPIN_LOCK)v12 + 8);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter1 + 2016));
    __writecr8(v8);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 2040) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter1 + 2040));
  v13 = *(void **)(BugCheckParameter1 + 1056);
  if ( v13 )
  {
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v14 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v14 )
  {
    ObfDereferenceObjectWithTag((PVOID)(v14 & 0xFFFFFFFFFFFFFFF8uLL), 0x746C6644u);
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  sub_1404FC25C(BugCheckParameter1);
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v39);
    if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140362930 + 1))(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess(v39, 0LL);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 944) )
  {
    PspRemoveProcessFromJobChain(BugCheckParameter1);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 944), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 904) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1728) = MmBadPointer;
  }
  v15 = *(_QWORD *)(BugCheckParameter1 + 2096);
  if ( v15 )
    PsDereferencePartition(v15);
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 736) )
  {
    --CurrentThread->SpecialApcDisable;
    v16 = ExMapHandleToPointer(
            *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5),
            *(_QWORD *)(BugCheckParameter1 + 736));
    if ( !v16 )
      KeBugCheck(0x17u);
    ExDestroyHandle(*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 5), *(_QWORD *)(BugCheckParameter1 + 736), v16);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  PspDeleteProcessSecurity(BugCheckParameter1);
  v17 = *(void **)(BugCheckParameter1 + 976);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)BugCheckParameter1, 24616LL);
  }
  SmProcessDeleteNotification(BugCheckParameter1);
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  VmProcessExit(BugCheckParameter1);
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_140387D60 )
  {
    v18 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v19 = qword_140387D50;
    v20 = 64;
    v21 = qword_140387D58;
    v22 = qword_140387D50;
    v23 = 8LL;
    do
    {
      v22 = __ROR8__(v22 - *(_QWORD *)v18, qword_140387D58);
      v18 = (__int128 *)((char *)v18 + 8);
      v20 -= 8;
      --v23;
    }
    while ( v23 );
    for ( ; v20; --v20 )
    {
      v24 = *(unsigned __int8 *)v18;
      v18 = (__int128 *)((char *)v18 + 1);
      v22 = __ROR8__(v22 - v24, qword_140387D58);
    }
    v25 = qword_140387D68 == v22;
    v26 = qword_140387D20;
    if ( !v25 && !qword_140387D20 )
    {
      v21 = qword_140387D58;
      v19 = qword_140387D50;
      v26 = (unsigned int)__ROR4__(2120, 35);
      qword_140387D20 = (unsigned int)v26;
      qword_140387D28 = 0LL;
      qword_140387D30 = 0LL;
      qword_140387D38 = 267LL;
      qword_140387D40 = (__int64)&KeServiceDescriptorTable;
    }
    v27 = (_QWORD *)KeServiceDescriptorTable;
    v28 = (const char *)KeServiceDescriptorTable;
    v29 = 4 * xmmword_140419890;
    v30 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140419890);
    if ( (unsigned __int64)KeServiceDescriptorTable < v30 )
    {
      do
      {
        _mm_prefetch(v28, 0);
        v28 += 64;
      }
      while ( (unsigned __int64)v28 < v30 );
    }
    v31 = v19;
    if ( v29 >= 8 )
    {
      v32 = (unsigned __int64)v29 >> 3;
      do
      {
        v31 = __ROR8__(v31 - *v27++, v21);
        v29 -= 8;
        --v32;
      }
      while ( v32 );
    }
    for ( ; v29; --v29 )
    {
      v33 = *(unsigned __int8 *)v27;
      v27 = (_QWORD *)((char *)v27 + 1);
      v31 = __ROR8__(v31 - v33, v21);
    }
    if ( qword_140387D70 != v31 && !v26 )
    {
      v21 = qword_140387D58;
      v19 = qword_140387D50;
      v26 = (unsigned int)__ROR4__(1111490560, 150);
      qword_140387D20 = (unsigned int)v26;
      qword_140387D28 = 0LL;
      qword_140387D30 = 0LL;
      qword_140387D38 = 267LL;
      qword_140387D40 = KeServiceDescriptorTable;
    }
    v34 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v35 = 4LL;
    v36 = 32;
    do
    {
      v19 = __ROR8__(v19 - *(_QWORD *)v34, v21);
      v34 = (__int128 *)((char *)v34 + 8);
      v36 -= 8;
      --v35;
    }
    while ( v35 );
    for ( ; v36; --v36 )
    {
      v37 = *(unsigned __int8 *)v34;
      v34 = (__int128 *)((char *)v34 + 1);
      v19 = __ROR8__(v19 - v37, v21);
    }
    if ( qword_140387D78 != v19 && !v26 )
    {
      qword_140387D28 = 0LL;
      v26 = (unsigned int)__ROR4__(603979780, 186);
      qword_140387D20 = (unsigned int)v26;
      qword_140387D30 = 0LL;
      qword_140387D38 = 267LL;
      qword_140387D40 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_140401710 != (_DWORD)xmmword_140419890 )
    {
      if ( v26 )
        goto LABEL_69;
      v26 = (unsigned int)__ROR4__(4240, 68);
      qword_140387D20 = (unsigned int)v26;
      qword_140387D28 = 0LL;
      qword_140387D30 = 0LL;
      qword_140387D38 = 267LL;
      qword_140387D40 = KeServiceDescriptorTableShadow;
    }
    if ( !v26 )
    {
LABEL_72:
      qword_140387D60 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_73;
    }
LABEL_69:
    if ( stru_140387CE0.DeferredRoutine != KiSchedulerDpc )
    {
      stru_140387CE0.TargetInfoAsUlong = 275;
      stru_140387CE0.DeferredRoutine = KiSchedulerDpc;
      stru_140387CE0.DeferredContext = &stru_140387CE0;
      stru_140387CE0.DpcData = 0LL;
      stru_140387CE0.ProcessorHistory = 0LL;
    }
    qword_140387D48 = 1824040LL;
    KeInsertQueueDpc(&stru_140387CE0, 0LL, 0LL);
    goto LABEL_72;
  }
LABEL_73:
  PspReleaseProcessQuota(BugCheckParameter1);
  v38 = *(void **)(BugCheckParameter1 + 1064);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
