/*
 * XREFs of PopDequeueQuerySetIrp @ 0x140144CE4
 * Callers:
 *     PopRequestCompletion @ 0x140144A90 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14040A9E0 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     PopDiagTraceIrpFinish @ 0x140144E20 (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x140146530 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140146604 (PopDiagTraceIrpStart.c)
 *     PopIrpWatchdogBugcheck @ 0x14022735C (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  _QWORD *v6; // rdi
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 *v9; // rdi
  __int64 result; // rax
  __int64 *v11; // rdx
  __int64 *v12; // r10
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 **v16; // rax
  __int64 ***v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r8
  _QWORD *v21; // rdx
  __int64 ***v22; // rcx
  _QWORD *v23; // rax
  __int64 *v24; // rax
  IRP *v25; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v28; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-18h] BYREF

  PopDiagTraceIrpFinish(a1);
  v2 = *(_QWORD *)(a1 + 72LL * (*(char *)(a1 + 66) - 1) + 272);
  if ( *(_BYTE *)(v2 + 196) && !KeCancelTimer((PKTIMER)(v2 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v30);
    PopIrpWatchdogBugcheck(v2);
  }
  v28 = &v27;
  v27 = (__int64 *)&v27;
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
  v7 = PopInrushIrp;
  *v6 = 0LL;
  if ( a1 == v7 )
  {
    v11 = (__int64 *)PopInrushIrpList;
    v7 = 0LL;
    PopInrushIrp = 0LL;
    while ( v11 != &PopInrushIrpList )
    {
      v12 = v11 - 21;
      v13 = *(_QWORD *)(v11[9 * *((char *)v11 - 102) + 4] + 24);
      if ( v13 )
        v14 = *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL);
      else
        v14 = 0LL;
      if ( !*(_QWORD *)(v14 + 248) && *(__int64 **)(v14 + 256) == v12 )
      {
        v15 = *v11;
        v16 = (__int64 **)v11[1];
        if ( *(__int64 **)(*v11 + 8) != v11 || *v16 != v11 )
          __fastfail(3u);
        *v16 = (__int64 *)v15;
        *(_QWORD *)(v15 + 8) = v16;
        v7 = (__int64)(v11 - 21);
        *(_QWORD *)(v14 + 248) = v12;
        v17 = (__int64 ***)(v12 + 15);
        *(_QWORD *)(v14 + 256) = v12[15];
        v18 = v28;
        PopInrushIrp = (__int64)(v11 - 21);
        if ( *v28 != (__int64 *)&v27 )
          __fastfail(3u);
        v12[16] = (__int64)v28;
        *v17 = &v27;
        *v18 = v17;
        v28 = (__int64 **)(v12 + 15);
        if ( *v6 )
          goto LABEL_9;
        break;
      }
      v11 = (__int64 *)*v11;
    }
  }
  v8 = (_QWORD *)v6[1];
  if ( v8 )
  {
    v19 = v8 + 21;
    if ( (_QWORD *)*v19 != v19 )
    {
      if ( v7 )
      {
        v8 = 0LL;
      }
      else
      {
        v20 = (_QWORD *)*v19;
        v21 = (_QWORD *)v8[22];
        PopInrushIrp = v6[1];
        if ( (_QWORD *)v20[1] != v19 || (_QWORD *)*v21 != v19 )
          __fastfail(3u);
        *v21 = v20;
        v20[1] = v21;
      }
    }
    if ( v8 )
    {
      *v6 = v8;
      v22 = (__int64 ***)(v8 + 15);
      v6[1] = v8[15];
      v23 = v28;
      if ( *v28 != (__int64 *)&v27 )
        __fastfail(3u);
      v22[1] = v28;
      *v22 = &v27;
      *v23 = v22;
      v28 = (__int64 **)v22;
    }
  }
LABEL_9:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  while ( 1 )
  {
    v9 = v27;
    result = (__int64)&v27;
    if ( v27 == (__int64 *)&v27 )
      break;
    v24 = (__int64 *)*v27;
    if ( (__int64 **)v27[1] != &v27 || (__int64 *)v24[1] != v27 )
      __fastfail(3u);
    v27 = (__int64 *)*v27;
    v24[1] = (__int64)&v27;
    v25 = (IRP *)(v9 - 15);
    DeviceObject = v25->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart(&v27, v25);
    PopEnableIrpWatchdog(v25);
    IofCallDriver(DeviceObject, v25);
  }
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return PopDeepSleepClearDisengageReason(2);
  }
  return result;
}
