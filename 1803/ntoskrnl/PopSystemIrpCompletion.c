/*
 * XREFs of PopSystemIrpCompletion @ 0x1404756C0
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140165D00 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeReleaseSemaphore @ 0x14013E800 (KeReleaseSemaphore.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401539D4 (PopFxIncrementDeviceSleepCount.c)
 *     IoFindDeviceThatFailedIrp @ 0x140163684 (IoFindDeviceThatFailedIrp.c)
 *     PopFreeIrp @ 0x140165F90 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140166088 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopDiagTraceIrpPended @ 0x14027D32C (PopDiagTraceIrpPended.c)
 *     PopPrepChildWake @ 0x1404759E8 (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x140475A4C (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x140475AC4 (PopReadyChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x140486E14 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 *v3; // rdi
  int v5; // ebx
  int v6; // r13d
  __int64 v7; // rcx
  LONG v8; // ebp
  char *v9; // rbx
  _QWORD *v10; // rsi
  char *v11; // r14
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 *v14; // rcx
  __int64 **v15; // rax
  __int64 v16; // rax
  __int64 **v17; // rcx
  __int64 v18; // rcx
  __int64 *j; // r11
  __int64 *v20; // r10
  __int64 *k; // r9
  __int64 v23; // rax
  __int64 **v24; // rcx
  __int64 *i; // rsi
  __int64 **v26; // r11
  __int64 *v27; // r9
  KIRQL v28; // al
  __int64 v29; // r8
  KIRQL v30; // bp
  char v31; // [rsp+30h] [rbp-88h]
  __int64 DeviceThatFailedIrp; // [rsp+38h] [rbp-80h] BYREF
  NTSTATUS Status; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a3 + 216);
  v5 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_14044C2D0 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    DeviceThatFailedIrp = (__int64)a2;
    v35[0] = &DeviceThatFailedIrp;
    v35[1] = 16LL;
    EtwTraceKernelEvent((int)v35, 1, 0x80008000, 4647, 4200450);
  }
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg && v5 == 1 )
  {
    v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 - 14);
    v29 = *(v3 - 8);
    v30 = v28;
    if ( v29 )
    {
      if ( *(_QWORD *)(v29 + 136) )
      {
        _m_prefetchw((const void *)(v29 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v29 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v29 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 - 14);
          __writecr8(v30);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 - 14);
    __writecr8(v30);
  }
  v6 = a2->IoStatus.Status;
  if ( v6 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  else
    DeviceThatFailedIrp = 0LL;
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v7 = 0LL;
  v8 = 0;
  v9 = (char *)qword_1403A9FF0;
  v10 = (_QWORD *)*(v3 - 17);
  if ( *(v3 - 16) != IopRootDeviceNode )
    v7 = *(v3 - 16);
  v35[0] = v7;
  v31 = 0;
  v11 = (char *)qword_1403A9FF0 + 48;
  if ( (unsigned __int8)(*(_BYTE *)qword_1403A9FF0 - 2) <= 1u && *((int *)qword_1403A9FF0 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v3 - 14));
    ObfDereferenceObjectWithTag((PVOID)*(v3 - 14), 0x72496F50u);
  }
  v12 = 9LL * *((unsigned __int8 *)v3 + 56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_1403A9FF0 + 1, &LockHandle);
  v14 = (__int64 *)*v3;
  if ( *(__int64 **)(*v3 + 8) != v3 || (v15 = (__int64 **)v3[1], *v15 != v3) )
    __fastfail(3u);
  *v15 = v14;
  v14[1] = (__int64)v15;
  if ( v9[464] )
  {
    v23 = (__int64)&v9[8 * v12 + 72];
    v24 = *(__int64 ***)(v23 + 8);
    if ( *v24 != (__int64 *)v23 )
      __fastfail(3u);
    *v3 = v23;
    v3[1] = (__int64)v24;
    *v24 = v3;
    *(_QWORD *)(v23 + 8) = v3;
    ++*(_DWORD *)&v11[8 * v12 + 20];
    while ( v10 )
    {
      LOBYTE(v13) = *((_BYTE *)v3 + 56);
      if ( (unsigned __int8)PopReadyChildWake(v10 + 18, v9 + 48, v13) )
        ++v8;
      v10 = (_QWORD *)*v10;
    }
    for ( i = (__int64 *)v3[2]; i != v3 + 2; i = (__int64 *)*i )
    {
      LOBYTE(v13) = *((_BYTE *)v3 + 56);
      if ( (unsigned __int8)PopReadyChildWake(*(i - 1), v9 + 48, v13) )
        ++v8;
    }
  }
  else
  {
    v16 = (__int64)&v9[8 * v12 + 104];
    v17 = *(__int64 ***)(v16 + 8);
    if ( *v17 != (__int64 *)v16 )
      __fastfail(3u);
    v3[1] = (__int64)v17;
    *v3 = v16;
    *v17 = v3;
    v18 = v35[0];
    *(_QWORD *)(v16 + 8) = v3;
    --*(_DWORD *)&v11[8 * v12 + 20];
    if ( v18 )
    {
      LOBYTE(v13) = *((_BYTE *)v3 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(v18 + 144, v9 + 48, v13) )
        v8 = 1;
    }
    for ( j = (__int64 *)v3[4]; j != v3 + 4; j = *v26 )
    {
      LOBYTE(v13) = *((_BYTE *)v3 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(j[5], v9 + 48, v13) )
        ++v8;
    }
    if ( v6 < 0 && DeviceThatFailedIrp && *v9 == 3 )
      PopDiagTraceDriverVeto(DeviceThatFailedIrp, v3);
    while ( v10 )
    {
      PopPrepChildWake(v10 + 18, v9 + 48);
      v10 = (_QWORD *)*v10;
    }
    v20 = v3 + 2;
    for ( k = (__int64 *)v3[2]; k != v20; k = (__int64 *)*v27 )
      PopPrepChildWake(*(k - 1), v9 + 48);
    if ( v6 < 0 && !v9[466] && (v6 != -1073741637 || !v9[467]) && *((int *)v9 + 112) >= 0 )
    {
      *((_DWORD *)v9 + 112) = v6;
      *((_QWORD *)v9 + 57) = v3[8];
      v31 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v31 )
  {
    KeSetEvent(*((PRKEVENT *)v9 + 3), 0, 0);
  }
  else if ( v8 > 0 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v9 + 4), 0, v8, 0);
  }
  KeReleaseSemaphore(*((PRKSEMAPHORE *)v9 + 5), 0, 1, 0);
  return 3221225494LL;
}
