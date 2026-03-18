/*
 * XREFs of PopSystemIrpCompletion @ 0x14040A9E0
 * Callers:
 *     <none>
 * Callees:
 *     IoFindDeviceThatFailedIrp @ 0x1400398F0 (IoFindDeviceThatFailedIrp.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     KeReleaseSemaphore @ 0x1400E2BA0 (KeReleaseSemaphore.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14012B570 (KeReleaseInStackQueuedSpinLock.c)
 *     PopFxIncrementDeviceSleepCount @ 0x14013AAA4 (PopFxIncrementDeviceSleepCount.c)
 *     PopFreeIrp @ 0x140144BEC (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140144CE4 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopPrepChildWake @ 0x14040ACDC (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x14040AD38 (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x14040ADB0 (PopReadyChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x14041A0F8 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  int v5; // r13d
  __int64 *v6; // rbx
  __int64 v7; // rdx
  LONG v8; // ebp
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rsi
  PVOID v11; // rdi
  char *v12; // r14
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 v17; // rax
  __int64 **v18; // rcx
  __int64 v19; // rcx
  __int64 *j; // r11
  __int64 *v21; // r10
  __int64 *k; // r9
  __int64 v24; // rax
  __int64 **v25; // rcx
  __int64 *i; // rsi
  __int64 **v27; // r11
  __int64 *v28; // r9
  char v29; // [rsp+30h] [rbp-88h]
  __int64 DeviceThatFailedIrp; // [rsp+38h] [rbp-80h] BYREF
  NTSTATUS Status; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-58h] BYREF

  if ( (xmmword_1403E4010 & 0x8000) != 0 )
  {
    Status = a2->IoStatus.Status;
    DeviceThatFailedIrp = (__int64)a2;
    v33[0] = &DeviceThatFailedIrp;
    v33[1] = 16LL;
    EtwTraceKernelEvent((int)v33, 1, 0x80008000, 4647, 4200450);
  }
  v5 = a2->IoStatus.Status;
  v6 = *(__int64 **)(a3 + 216);
  if ( v5 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp((__int64)a2);
  else
    DeviceThatFailedIrp = 0LL;
  PopDequeueQuerySetIrp((__int64)a2);
  PopFreeIrp(a2);
  v7 = 0LL;
  v8 = 0;
  v9 = (KSPIN_LOCK *)qword_14034B110;
  if ( *(v6 - 16) != IopRootDeviceNode )
    v7 = *(v6 - 16);
  v29 = 0;
  v10 = (_QWORD *)*(v6 - 17);
  v11 = qword_14034B110;
  v33[0] = v7;
  v12 = (char *)qword_14034B110 + 48;
  if ( (unsigned __int8)(*(_BYTE *)qword_14034B110 - 2) <= 1u && *((int *)qword_14034B110 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v6 - 14));
    ObfDereferenceObject((PVOID)*(v6 - 14));
    v9 = (KSPIN_LOCK *)qword_14034B110;
  }
  v13 = 9LL * *((unsigned __int8 *)v6 + 56);
  KeAcquireInStackQueuedSpinLock(v9 + 1, &LockHandle);
  v15 = (__int64 *)*v6;
  v16 = (__int64 **)v6[1];
  if ( *(__int64 **)(*v6 + 8) != v6 || *v16 != v6 )
    __fastfail(3u);
  *v16 = v15;
  v15[1] = (__int64)v16;
  if ( *((_BYTE *)v11 + 456) )
  {
    v24 = (__int64)&v12[8 * v13 + 24];
    v25 = *(__int64 ***)(v24 + 8);
    if ( *v25 != (__int64 *)v24 )
      __fastfail(3u);
    *v6 = v24;
    v6[1] = (__int64)v25;
    *v25 = v6;
    *(_QWORD *)(v24 + 8) = v6;
    ++*(_DWORD *)&v12[8 * v13 + 20];
    while ( v10 )
    {
      LOBYTE(v14) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(v10 + 18, v12, v14) )
        ++v8;
      v10 = (_QWORD *)*v10;
    }
    for ( i = (__int64 *)v6[2]; i != v6 + 2; i = (__int64 *)*i )
    {
      LOBYTE(v14) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(*(i - 1), v12, v14) )
        ++v8;
    }
  }
  else
  {
    v17 = (__int64)&v12[8 * v13 + 56];
    v18 = *(__int64 ***)(v17 + 8);
    if ( *v18 != (__int64 *)v17 )
      __fastfail(3u);
    v6[1] = (__int64)v18;
    *v6 = v17;
    *v18 = v6;
    v19 = v33[0];
    *(_QWORD *)(v17 + 8) = v6;
    --*(_DWORD *)&v12[8 * v13 + 20];
    if ( v19 )
    {
      LOBYTE(v14) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(v19 + 144, v12, v14) )
        v8 = 1;
    }
    for ( j = (__int64 *)v6[4]; j != v6 + 4; j = *v27 )
    {
      LOBYTE(v14) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(j[5], v12, v14) )
        ++v8;
    }
    if ( v5 < 0 && DeviceThatFailedIrp && *(_BYTE *)v11 == 3 )
      PopDiagTraceDriverVeto(DeviceThatFailedIrp, v6);
    while ( v10 )
    {
      PopPrepChildWake(v10 + 18, v12);
      v10 = (_QWORD *)*v10;
    }
    v21 = v6 + 2;
    for ( k = (__int64 *)v6[2]; k != v21; k = (__int64 *)*v28 )
      PopPrepChildWake(*(k - 1), v12);
    if ( v5 < 0 && !*((_BYTE *)v11 + 458) && (v5 != -1073741637 || !*((_BYTE *)v11 + 459)) && *((int *)v11 + 110) >= 0 )
    {
      *((_DWORD *)v11 + 110) = v5;
      *((_QWORD *)v11 + 56) = v6[8];
      v29 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v29 )
  {
    KeSetEvent(*((PRKEVENT *)v11 + 3), 0, 0);
  }
  else if ( v8 > 0 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v11 + 4), 0, v8, 0);
  }
  KeReleaseSemaphore(*((PRKSEMAPHORE *)v11 + 5), 0, 1, 0);
  return 3221225494LL;
}
