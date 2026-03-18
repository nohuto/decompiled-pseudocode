/*
 * XREFs of PopSystemIrpCompletion @ 0x140437950
 * Callers:
 *     PoFxReportDevicePoweredOn @ 0x140122E10 (PoFxReportDevicePoweredOn.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KeReleaseSemaphore @ 0x1400DBA40 (KeReleaseSemaphore.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400F1C30 (KeReleaseInStackQueuedSpinLock.c)
 *     PopFreeIrp @ 0x140123030 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140123128 (PopDequeueQuerySetIrp.c)
 *     IoFindDeviceThatFailedIrp @ 0x14012E918 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14023E0AC (PopFxIncrementDeviceSleepCount.c)
 *     PopDiagTraceIrpPended @ 0x140246694 (PopDiagTraceIrpPended.c)
 *     PopPrepChildWake @ 0x1404374B0 (PopPrepChildWake.c)
 *     PopReadyChildWake @ 0x140437510 (PopReadyChildWake.c)
 *     PopReadyParentSleep @ 0x140437590 (PopReadyParentSleep.c)
 *     PopDiagTraceDriverVeto @ 0x1404390D0 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 *v3; // rdi
  int v5; // ebx
  NTSTATUS Status; // eax
  KIRQL v7; // al
  __int64 v8; // r8
  KIRQL v9; // bp
  int v11; // r13d
  __int64 v12; // rcx
  LONG v13; // ebp
  PVOID v14; // rbx
  _QWORD *v15; // rsi
  char *v16; // r14
  __int64 v17; // r12
  __int64 *v18; // rcx
  __int64 **v19; // rax
  __int64 v20; // rax
  __int64 **v21; // rcx
  __int64 *i; // rsi
  __int64 v23; // rax
  __int64 **v24; // rcx
  __int64 v25; // rcx
  __int64 j; // r11
  __int64 *v27; // r11
  __int64 *v28; // r10
  __int64 *k; // r9
  __int64 *v30; // r9
  char v31; // [rsp+30h] [rbp-88h]
  __int64 DeviceThatFailedIrp; // [rsp+38h] [rbp-80h] BYREF
  NTSTATUS v33; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-58h] BYREF

  v3 = *(__int64 **)(a3 + 216);
  v5 = *(_DWORD *)(*((_QWORD *)&a2->Tail.CompletionKey + 9 * a2->StackCount + 10) + 192LL);
  if ( (xmmword_140401150 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    DeviceThatFailedIrp = (__int64)a2;
    v33 = Status;
    v35[1] = 16LL;
    v35[0] = &DeviceThatFailedIrp;
    EtwTraceKernelEvent((__int64)v35, 1u, 0x80008000, 0x1227u, 0x401802u);
  }
  if ( PopPoFxSystemIrpWaitForReportDevicePoweredReg && v5 == 1 )
  {
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v3 - 14);
    v8 = *(v3 - 8);
    v9 = v7;
    if ( v8 )
    {
      if ( *(_QWORD *)(v8 + 136) )
      {
        _m_prefetchw((const void *)(v8 + 32));
        if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 0) & 0x800) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v8 + 32), 0x400u);
          PopDiagTraceIrpPended((__int64)a2);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 - 14);
          __writecr8(v9);
          return 3221225494LL;
        }
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v3 - 14);
    __writecr8(v9);
  }
  v11 = a2->IoStatus.Status;
  if ( v11 >= 0 )
    DeviceThatFailedIrp = 0LL;
  else
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v12 = 0LL;
  v13 = 0;
  v14 = qword_140365770;
  v15 = (_QWORD *)*(v3 - 17);
  if ( *(v3 - 16) != IopRootDeviceNode )
    v12 = *(v3 - 16);
  v35[0] = v12;
  v31 = 0;
  v16 = (char *)qword_140365770 + 48;
  if ( (unsigned __int8)(*(_BYTE *)qword_140365770 - 2) <= 1u && *((int *)qword_140365770 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v3 - 14));
    ObfDereferenceObject((PVOID)*(v3 - 14));
  }
  v17 = 9LL * *((unsigned __int8 *)v3 + 56);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140365770 + 1, &LockHandle);
  v18 = (__int64 *)*v3;
  if ( *(__int64 **)(*v3 + 8) != v3 || (v19 = (__int64 **)v3[1], *v19 != v3) )
    __fastfail(3u);
  *v19 = v18;
  v18[1] = (__int64)v19;
  if ( *((_BYTE *)v14 + 456) )
  {
    v20 = (__int64)v14 + 8 * v17 + 72;
    v21 = *(__int64 ***)(v20 + 8);
    if ( *v21 != (__int64 *)v20 )
      __fastfail(3u);
    *v3 = v20;
    v3[1] = (__int64)v21;
    *v21 = v3;
    *(_QWORD *)(v20 + 8) = v3;
    ++*(_DWORD *)&v16[8 * v17 + 20];
    while ( v15 )
    {
      if ( PopReadyChildWake(v15 + 18, (__int64)v14 + 48, *((_BYTE *)v3 + 56)) )
        ++v13;
      v15 = (_QWORD *)*v15;
    }
    for ( i = (__int64 *)v3[2]; i != v3 + 2; i = (__int64 *)*i )
    {
      if ( PopReadyChildWake((__int64 *)*(i - 1), (__int64)v14 + 48, *((_BYTE *)v3 + 56)) )
        ++v13;
    }
  }
  else
  {
    v23 = (__int64)v14 + 8 * v17 + 104;
    v24 = *(__int64 ***)(v23 + 8);
    if ( *v24 != (__int64 *)v23 )
      __fastfail(3u);
    v3[1] = (__int64)v24;
    *v3 = v23;
    *v24 = v3;
    v25 = v35[0];
    *(_QWORD *)(v23 + 8) = v3;
    --*(_DWORD *)&v16[8 * v17 + 20];
    if ( v25 && PopReadyParentSleep((__int64 *)(v25 + 144), (__int64)v14 + 48, *((_BYTE *)v3 + 56)) )
      v13 = 1;
    for ( j = v3[4]; (__int64 *)j != v3 + 4; j = *v27 )
    {
      if ( PopReadyParentSleep(*(__int64 **)(j + 40), (__int64)v14 + 48, *((_BYTE *)v3 + 56)) )
        ++v13;
    }
    if ( v11 < 0 && DeviceThatFailedIrp && *(_BYTE *)v14 == 3 )
      PopDiagTraceDriverVeto(DeviceThatFailedIrp, v3);
    while ( v15 )
    {
      PopPrepChildWake(v15 + 18, (__int64)v14 + 48);
      v15 = (_QWORD *)*v15;
    }
    v28 = v3 + 2;
    for ( k = (__int64 *)v3[2]; k != v28; k = (__int64 *)*v30 )
      PopPrepChildWake((__int64 *)*(k - 1), (__int64)v14 + 48);
    if ( v11 < 0 && !*((_BYTE *)v14 + 458) && (v11 != -1073741637 || !*((_BYTE *)v14 + 459)) && *((int *)v14 + 110) >= 0 )
    {
      *((_DWORD *)v14 + 110) = v11;
      *((_QWORD *)v14 + 56) = v3[8];
      v31 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v31 )
  {
    KeSetEvent(*((PRKEVENT *)v14 + 3), 0, 0);
  }
  else if ( v13 > 0 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v14 + 4), 0, v13, 0);
  }
  KeReleaseSemaphore(*((PRKSEMAPHORE *)v14 + 5), 0, 1, 0);
  return 3221225494LL;
}
