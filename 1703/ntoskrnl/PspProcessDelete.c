/*
 * XREFs of PspProcessDelete @ 0x140061C30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x140031708 (ExpTimerResume.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x1400622A8 (IoSetDiskIoAttributionOnProcess.c)
 *     PspUnlockProcessListExclusive @ 0x140064018 (PspUnlockProcessListExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400DD8A0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueueDpc @ 0x1400F14F0 (KeInsertQueueDpc.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x14017F940 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x1401FD25C (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObDereferenceDeviceMap @ 0x140498984 (ObDereferenceDeviceMap.c)
 *     sub_140498A0C @ 0x140498A0C (sub_140498A0C.c)
 *     PspExitProcess @ 0x140498A28 (PspExitProcess.c)
 *     PspReleaseProcessQuota @ 0x140498B2C (PspReleaseProcessQuota.c)
 *     VmProcessExit @ 0x140498B54 (VmProcessExit.c)
 *     PoEnergyContextCleanup @ 0x140498B70 (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x140498BC4 (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140498C20 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140498D0C (EtwExitProcess.c)
 *     SmProcessDeleteNotification @ 0x140498D5C (SmProcessDeleteNotification.c)
 *     PspDeleteProcessSecurity @ 0x140498DE0 (PspDeleteProcessSecurity.c)
 *     MmDeleteProcessAddressSpace @ 0x1404998CC (MmDeleteProcessAddressSpace.c)
 *     ExDestroyHandle @ 0x1404F81FC (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x1404FA960 (ExMapHandleToPointer.c)
 *     PspRemoveProcessFromJobChain @ 0x14054727C (PspRemoveProcessFromJobChain.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  void *v6; // rcx
  __int64 **v7; // rdi
  KIRQL v8; // r12
  __int64 v9; // r13
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rbp
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  __int64 v17; // rcx
  __int128 *v18; // r9
  __int64 v19; // r8
  int v20; // r10d
  unsigned int v21; // edi
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
  __int64 v37; // rcx
  __int64 v38; // rax
  void *v39; // rcx
  _BYTE v40[48]; // [rsp+30h] [rbp-68h] BYREF

  *(_DWORD *)(BugCheckParameter2 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter2 + 744);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v4 = *v1;
    v5 = (_QWORD *)v1[1];
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v5 != v1 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    PspUnlockProcessListExclusive(CurrentThread);
  }
  v6 = *(void **)(BugCheckParameter2 + 1128);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(BugCheckParameter2 + 1128) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 440) & 0x10) != 0 )
  {
    v7 = (__int64 **)(BugCheckParameter2 + 2000);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter2 + 1992));
    v9 = MEMORY[0xFFFFF78000000008];
    while ( *v7 != (__int64 *)v7 )
    {
      v10 = *v7;
      v11 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      v12 = v10 - 36;
      *v7 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v7;
      KxAcquireSpinLock((PKSPIN_LOCK)v10 - 28);
      v12[35] = 0LL;
      if ( (v12[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v12, v9);
      KxReleaseSpinLock((PKSPIN_LOCK)v12 + 8);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(BugCheckParameter2 + 1992));
    __writecr8(v8);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 2016) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter2 + 2016));
  v13 = *(void **)(BugCheckParameter2 + 1056);
  if ( v13 )
  {
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
    *(_QWORD *)(BugCheckParameter2 + 1056) = 0LL;
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 848);
  if ( v14 )
  {
    ObfDereferenceObjectWithTag((PVOID)(v14 & 0xFFFFFFFFFFFFFFF8uLL), 0x746C6644u);
    *(_QWORD *)(BugCheckParameter2 + 848) = 0LL;
  }
  sub_140498A0C(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 2064) & 1) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_140348E30 + 1))(BugCheckParameter2);
    PspExitProcess(0LL, BugCheckParameter2);
    KiUnstackDetachProcess(v40, 0LL);
    MmDeleteProcessAddressSpace(BugCheckParameter2);
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 944) )
  {
    PspRemoveProcessFromJobChain(BugCheckParameter2);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter2 + 944), 0x73507350u);
    *(_QWORD *)(BugCheckParameter2 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 904) = 0LL;
    *(_QWORD *)(BugCheckParameter2 + 1728) = MmBadPointer;
  }
  if ( *(_QWORD *)(BugCheckParameter2 + 720) )
    KeUnsecureProcess(BugCheckParameter2);
  if ( *(_QWORD *)(BugCheckParameter2 + 736) )
  {
    --CurrentThread->SpecialApcDisable;
    v15 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 736));
    if ( !v15 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 736), v15);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  PspDeleteProcessSecurity(BugCheckParameter2);
  v16 = *(void **)(BugCheckParameter2 + 976);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter2, 24616LL);
  }
  SmProcessDeleteNotification(BugCheckParameter2);
  EtwExitProcess(BugCheckParameter2);
  LpcExitProcess(BugCheckParameter2);
  ExWnfExitProcess(BugCheckParameter2, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter2);
  PoEnergyContextCleanup(BugCheckParameter2);
  VmProcessExit(BugCheckParameter2);
  LOBYTE(v17) = 1;
  if ( KiQueryUnbiasedInterruptTime(v17) >= (unsigned __int64)qword_14036BAE0 )
  {
    v18 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v19 = qword_14036BAD0;
    v20 = 64;
    v21 = qword_14036BAD8;
    v22 = qword_14036BAD0;
    v23 = 8LL;
    do
    {
      v22 = __ROR8__(v22 - *(_QWORD *)v18, qword_14036BAD8);
      v18 = (__int128 *)((char *)v18 + 8);
      v20 -= 8;
      --v23;
    }
    while ( v23 );
    for ( ; v20; --v20 )
    {
      v24 = *(unsigned __int8 *)v18;
      v18 = (__int128 *)((char *)v18 + 1);
      v22 = __ROR8__(v22 - v24, qword_14036BAD8);
    }
    v25 = qword_14036BAE8 == v22;
    v26 = qword_14036BAA0;
    if ( !v25 && !qword_14036BAA0 )
    {
      v21 = qword_14036BAD8;
      v19 = qword_14036BAD0;
      v26 = (unsigned int)__ROR4__(2120, 35);
      qword_14036BAA0 = (unsigned int)v26;
      qword_14036BAA8 = 0LL;
      qword_14036BAB0 = 0LL;
      qword_14036BAB8 = 267LL;
      qword_14036BAC0 = (__int64)&KeServiceDescriptorTable;
    }
    v27 = (_QWORD *)KeServiceDescriptorTable;
    v28 = (const char *)KeServiceDescriptorTable;
    v29 = 4 * xmmword_1403F8890;
    v30 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_1403F8890);
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
    if ( qword_14036BAF0 != v31 && !v26 )
    {
      v21 = qword_14036BAD8;
      v19 = qword_14036BAD0;
      v26 = (unsigned int)__ROR4__(1111490560, 150);
      qword_14036BAA0 = (unsigned int)v26;
      qword_14036BAA8 = 0LL;
      qword_14036BAB0 = 0LL;
      qword_14036BAB8 = 267LL;
      qword_14036BAC0 = KeServiceDescriptorTable;
    }
    v34 = &KeServiceDescriptorTableShadow;
    _mm_prefetch((const char *)&KeServiceDescriptorTableShadow, 0);
    v35 = 4LL;
    v36 = 32;
    do
    {
      v37 = v21;
      v19 = __ROR8__(v19 - *(_QWORD *)v34, v21);
      v34 = (__int128 *)((char *)v34 + 8);
      v36 -= 8;
      --v35;
    }
    while ( v35 );
    for ( ; v36; --v36 )
    {
      v38 = *(unsigned __int8 *)v34;
      v37 = v21;
      v34 = (__int128 *)((char *)v34 + 1);
      v19 = __ROR8__(v19 - v38, v21);
    }
    if ( qword_14036BAF8 != v19 && !v26 )
    {
      qword_14036BAA8 = 0LL;
      v26 = (unsigned int)__ROR4__(603979780, 186);
      qword_14036BAA0 = (unsigned int)v26;
      qword_14036BAB0 = 0LL;
      qword_14036BAB8 = 267LL;
      qword_14036BAC0 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_1403E4550 != (_DWORD)xmmword_1403F8890 )
    {
      if ( v26 )
        goto LABEL_67;
      v26 = (unsigned int)__ROR4__(4240, 68);
      qword_14036BAA0 = (unsigned int)v26;
      qword_14036BAA8 = 0LL;
      qword_14036BAB0 = 0LL;
      qword_14036BAB8 = 267LL;
      qword_14036BAC0 = KeServiceDescriptorTableShadow;
    }
    if ( !v26 )
    {
LABEL_70:
      LOBYTE(v37) = 1;
      qword_14036BAE0 = KiQueryUnbiasedInterruptTime(v37)
                      + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL
                      + 288000000000LL;
      goto LABEL_71;
    }
LABEL_67:
    if ( stru_14036BA60.DeferredRoutine != KiSchedulerDpc )
    {
      stru_14036BA60.TargetInfoAsUlong = 275;
      stru_14036BA60.DeferredRoutine = KiSchedulerDpc;
      stru_14036BA60.DeferredContext = &stru_14036BA60;
      stru_14036BA60.DpcData = 0LL;
      stru_14036BA60.ProcessorHistory = 0LL;
    }
    qword_14036BAC8 = 1824040LL;
    KeInsertQueueDpc(&stru_14036BA60, 0LL, 0LL);
    goto LABEL_70;
  }
LABEL_71:
  PspReleaseProcessQuota(BugCheckParameter2);
  v39 = *(void **)(BugCheckParameter2 + 1064);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(BugCheckParameter2 + 1064) = 0LL;
  }
}
