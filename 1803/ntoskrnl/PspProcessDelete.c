/*
 * XREFs of PspProcessDelete @ 0x14006F630
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     KeInsertQueueDpc @ 0x140039000 (KeInsertQueueDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140069270 (KiQueryUnbiasedInterruptTime.c)
 *     PspUnlockProcessListExclusive @ 0x14006A068 (PspUnlockProcessListExclusive.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x14006F93C (IoSetDiskIoAttributionOnProcess.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400F8FB0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwDeleteWnfStateName @ 0x1401A8F00 (ZwDeleteWnfStateName.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeUnsecureProcess @ 0x14024070C (KeUnsecureProcess.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExMapHandleToPointer @ 0x1404B7800 (ExMapHandleToPointer.c)
 *     ObDereferenceDeviceMap @ 0x14050EA74 (ObDereferenceDeviceMap.c)
 *     sub_14050EAFC @ 0x14050EAFC (sub_14050EAFC.c)
 *     PspExitProcess @ 0x14050FEC8 (PspExitProcess.c)
 *     PspReleaseProcessQuota @ 0x140511148 (PspReleaseProcessQuota.c)
 *     VmProcessExit @ 0x140511170 (VmProcessExit.c)
 *     PoEnergyContextCleanup @ 0x140511194 (PoEnergyContextCleanup.c)
 *     ExWnfExitProcess @ 0x14051130C (ExWnfExitProcess.c)
 *     LpcExitProcess @ 0x140511A70 (LpcExitProcess.c)
 *     EtwExitProcess @ 0x140511C08 (EtwExitProcess.c)
 *     SmProcessDeleteNotification @ 0x140511C74 (SmProcessDeleteNotification.c)
 *     PspDeleteProcessSecurity @ 0x140511CF8 (PspDeleteProcessSecurity.c)
 *     ExDestroyHandle @ 0x140512040 (ExDestroyHandle.c)
 *     MmDeleteProcessAddressSpace @ 0x1405128C0 (MmDeleteProcessAddressSpace.c)
 *     PspRemoveProcessFromJobChain @ 0x140534D34 (PspRemoveProcessFromJobChain.c)
 */

void __fastcall PspProcessDelete(ULONG_PTR BugCheckParameter1)
{
  _QWORD *v1; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  _QWORD *v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
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
  _BYTE v38[48]; // [rsp+30h] [rbp-58h] BYREF

  *(_DWORD *)(BugCheckParameter1 + 772) &= ~0x4000000u;
  v1 = (_QWORD *)(BugCheckParameter1 + 744);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter1 + 744) )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
    v7 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v8 = (_QWORD *)v1[1], (_QWORD *)*v8 != v1) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    PspUnlockProcessListExclusive((__int64)CurrentThread, v4, v5, v6);
  }
  v9 = *(void **)(BugCheckParameter1 + 1128);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *(_QWORD *)(BugCheckParameter1 + 1128) = 0LL;
  }
  ObDereferenceDeviceMap(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 2040) )
    ZwDeleteWnfStateName((PCWNF_STATE_NAME)(BugCheckParameter1 + 2040));
  v10 = *(void **)(BugCheckParameter1 + 1056);
  if ( v10 )
  {
    ObfDereferenceObjectWithTag(v10, 0x746C6644u);
    *(_QWORD *)(BugCheckParameter1 + 1056) = 0LL;
  }
  v11 = *(_QWORD *)(BugCheckParameter1 + 848);
  if ( v11 )
  {
    ObfDereferenceObjectWithTag((PVOID)(v11 & 0xFFFFFFFFFFFFFFF8uLL), 0x746C6644u);
    *(_QWORD *)(BugCheckParameter1 + 848) = 0LL;
  }
  sub_14050EAFC(BugCheckParameter1);
  if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 0x40000) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v38);
    if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x400) != 0 )
      (*((void (__fastcall **)(ULONG_PTR))&xmmword_1403A60F0 + 1))(BugCheckParameter1);
    PspExitProcess(0LL, BugCheckParameter1);
    KiUnstackDetachProcess((__int64)v38, 0LL);
    MmDeleteProcessAddressSpace(BugCheckParameter1);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 944) )
  {
    PspRemoveProcessFromJobChain((PEPROCESS)BugCheckParameter1);
    ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(BugCheckParameter1 + 944), 0x73507350u);
    *(_QWORD *)(BugCheckParameter1 + 944) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 904) = 0LL;
    *(_QWORD *)(BugCheckParameter1 + 1728) = MmBadPointer;
  }
  v14 = *(_QWORD *)(BugCheckParameter1 + 2096);
  if ( v14 )
    PsDereferencePartition(v14, v12, v13);
  if ( *(_QWORD *)(BugCheckParameter1 + 720) )
    KeUnsecureProcess(BugCheckParameter1);
  if ( *(_QWORD *)(BugCheckParameter1 + 736) )
  {
    --CurrentThread->SpecialApcDisable;
    v15 = ExMapHandleToPointer(
            *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6),
            *(_QWORD *)(BugCheckParameter1 + 736));
    if ( !v15 )
      KeBugCheck(0x17u);
    ExDestroyHandle(*(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 6), *(_QWORD *)(BugCheckParameter1 + 736), v15);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  PspDeleteProcessSecurity(BugCheckParameter1);
  v16 = *(void **)(BugCheckParameter1 + 976);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    PsReturnProcessNonPagedPoolQuota(BugCheckParameter1, 24616LL);
  }
  SmProcessDeleteNotification(BugCheckParameter1);
  EtwExitProcess(BugCheckParameter1);
  LpcExitProcess(BugCheckParameter1);
  ExWnfExitProcess(BugCheckParameter1, 1LL);
  IoSetDiskIoAttributionOnProcess(0LL, BugCheckParameter1);
  PoEnergyContextCleanup(BugCheckParameter1);
  VmProcessExit(BugCheckParameter1);
  if ( KiQueryUnbiasedInterruptTime() >= (unsigned __int64)qword_1403CAF50 )
  {
    v18 = &KeServiceDescriptorTable;
    _mm_prefetch((const char *)&KeServiceDescriptorTable, 0);
    v19 = qword_1403CAF40;
    v20 = 64;
    v21 = qword_1403CAF48;
    v22 = qword_1403CAF40;
    v23 = 8LL;
    do
    {
      v22 = __ROR8__(v22 - *(_QWORD *)v18, qword_1403CAF48);
      v18 = (__int128 *)((char *)v18 + 8);
      v20 -= 8;
      --v23;
    }
    while ( v23 );
    for ( ; v20; --v20 )
    {
      v24 = *(unsigned __int8 *)v18;
      v18 = (__int128 *)((char *)v18 + 1);
      v22 = __ROR8__(v22 - v24, qword_1403CAF48);
    }
    v25 = qword_1403CAF58 == v22;
    v26 = qword_1403CAF10;
    if ( !v25 && !qword_1403CAF10 )
    {
      v21 = qword_1403CAF48;
      v19 = qword_1403CAF40;
      v26 = (unsigned int)__ROR4__(2120, 35);
      qword_1403CAF10 = (unsigned int)v26;
      qword_1403CAF18 = 0LL;
      qword_1403CAF20 = 0LL;
      qword_1403CAF28 = 267LL;
      qword_1403CAF30 = (__int64)&KeServiceDescriptorTable;
    }
    v27 = (_QWORD *)KeServiceDescriptorTable;
    v28 = (const char *)KeServiceDescriptorTable;
    v29 = 4 * xmmword_140464890;
    v30 = KeServiceDescriptorTable + (unsigned int)(4 * xmmword_140464890);
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
    if ( qword_1403CAF60 != v31 && !v26 )
    {
      v21 = qword_1403CAF48;
      v19 = qword_1403CAF40;
      v26 = (unsigned int)__ROR4__(1111490560, 150);
      qword_1403CAF10 = (unsigned int)v26;
      qword_1403CAF18 = 0LL;
      qword_1403CAF20 = 0LL;
      qword_1403CAF28 = 267LL;
      qword_1403CAF30 = KeServiceDescriptorTable;
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
    if ( qword_1403CAF68 != v19 && !v26 )
    {
      qword_1403CAF18 = 0LL;
      v26 = (unsigned int)__ROR4__(603979780, 186);
      qword_1403CAF10 = (unsigned int)v26;
      qword_1403CAF20 = 0LL;
      qword_1403CAF28 = 267LL;
      qword_1403CAF30 = (__int64)&KeServiceDescriptorTableShadow;
    }
    if ( (_QWORD)KeServiceDescriptorTableShadow != (_QWORD)KeServiceDescriptorTable
      || (_DWORD)xmmword_14044C8D0 != (_DWORD)xmmword_140464890 )
    {
      if ( v26 )
        goto LABEL_62;
      v26 = (unsigned int)__ROR4__(4240, 68);
      qword_1403CAF10 = (unsigned int)v26;
      qword_1403CAF18 = 0LL;
      qword_1403CAF20 = 0LL;
      qword_1403CAF28 = 267LL;
      qword_1403CAF30 = KeServiceDescriptorTableShadow;
    }
    if ( !v26 )
    {
LABEL_65:
      qword_1403CAF50 = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      goto LABEL_29;
    }
LABEL_62:
    if ( (void (__fastcall __noreturn *)())stru_1403CAED0.DeferredRoutine != KiSchedulerDpc )
    {
      stru_1403CAED0.TargetInfoAsUlong = 275;
      stru_1403CAED0.DeferredRoutine = (PKDEFERRED_ROUTINE)KiSchedulerDpc;
      stru_1403CAED0.DeferredContext = &stru_1403CAED0;
      stru_1403CAED0.DpcData = 0LL;
      stru_1403CAED0.ProcessorHistory = 0LL;
    }
    qword_1403CAF38 = 1824040LL;
    KeInsertQueueDpc(&stru_1403CAED0, 0LL, 0LL);
    goto LABEL_65;
  }
LABEL_29:
  PspReleaseProcessQuota(BugCheckParameter1);
  v17 = *(void **)(BugCheckParameter1 + 1064);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(BugCheckParameter1 + 1064) = 0LL;
  }
}
