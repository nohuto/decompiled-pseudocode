/*
 * XREFs of PopDequeueQuerySetIrp @ 0x140166088
 * Callers:
 *     PopRequestCompletion @ 0x140165E50 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x1404756C0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400732CC (PopDeepSleepClearDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     PopDiagTraceIrpFinish @ 0x140166264 (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x1401678D8 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1401679AC (PopDiagTraceIrpStart.c)
 *     PopIrpWatchdogBugcheck @ 0x14027153C (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 *v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  __int64 ***v12; // rcx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  IRP *v15; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *i; // rdx
  __int64 *v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 **v22; // rcx
  __int64 ***v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  __int64 *v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+48h] [rbp-18h] BYREF

  PopDiagTraceIrpFinish(a1);
  v2 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  if ( *(_BYTE *)(v2 + 196) && !KeCancelTimer((PKTIMER)(v2 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v29);
    PopIrpWatchdogBugcheck(v2);
  }
  v27 = &v26;
  v26 = (__int64 *)&v26;
  v3 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = (_QWORD *)(v5 + 248);
  if ( *(_DWORD *)(v3 + 188) != 1 )
    v6 += 2;
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  *v6 = 0LL;
  if ( a1 == PopInrushIrp )
  {
    PopInrushIrp = 0LL;
    for ( i = (__int64 *)PopInrushIrpList; i != &PopInrushIrpList; i = (__int64 *)*i )
    {
      v18 = i - 21;
      v19 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
      if ( v19 )
        v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
      else
        v20 = 0LL;
      if ( !*(_QWORD *)(v20 + 248) && *(__int64 **)(v20 + 256) == v18 )
      {
        v21 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v22 = (__int64 **)i[1], *v22 != i) )
          __fastfail(3u);
        *v22 = (__int64 *)v21;
        *(_QWORD *)(v21 + 8) = v22;
        v23 = (__int64 ***)(v18 + 15);
        *(_QWORD *)(v20 + 248) = v18;
        *(_QWORD *)(v20 + 256) = v18[15];
        v24 = v27;
        PopInrushIrp = (__int64)(i - 21);
        if ( *v27 != (__int64 *)&v26 )
          __fastfail(3u);
        v18[16] = (__int64)v27;
        *v23 = &v26;
        *v24 = v23;
        v27 = (__int64 **)(v18 + 15);
        if ( *v6 )
          goto LABEL_9;
        break;
      }
    }
  }
  v7 = (_QWORD *)v6[1];
  if ( v7 )
  {
    v10 = v7 + 21;
    v11 = (_QWORD *)v7[21];
    if ( v11 != v7 + 21 )
    {
      if ( PopInrushIrp )
      {
        v7 = 0LL;
      }
      else
      {
        PopInrushIrp = v6[1];
        if ( (_QWORD *)v11[1] != v10 || (v25 = (_QWORD *)v7[22], (_QWORD *)*v25 != v10) )
          __fastfail(3u);
        *v25 = v11;
        v11[1] = v25;
      }
    }
    if ( v7 )
    {
      *v6 = v7;
      v12 = (__int64 ***)(v7 + 15);
      v6[1] = v7[15];
      v13 = v27;
      if ( *v27 != (__int64 *)&v26 )
        __fastfail(3u);
      v12[1] = v27;
      *v12 = &v26;
      *v13 = v12;
      v27 = (__int64 **)v12;
    }
  }
LABEL_9:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( 1 )
  {
    v8 = v26;
    result = (__int64)&v26;
    if ( v26 == (__int64 *)&v26 )
      break;
    if ( (__int64 **)v26[1] != &v26 || (v14 = (__int64 *)*v26, *(__int64 **)(*v26 + 8) != v26) )
      __fastfail(3u);
    v26 = (__int64 *)*v26;
    v14[1] = (__int64)&v26;
    v15 = (IRP *)(v8 - 15);
    DeviceObject = v15->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart(DeviceObject, v15);
    PopEnableIrpWatchdog(v15);
    IofCallDriver(DeviceObject, v15);
  }
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return PopDeepSleepClearDisengageReason(2);
  }
  return result;
}
