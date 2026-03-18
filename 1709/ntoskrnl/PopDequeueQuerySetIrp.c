/*
 * XREFs of PopDequeueQuerySetIrp @ 0x140123128
 * Callers:
 *     PopRequestCompletion @ 0x140122EF0 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x140437950 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 *     PopEnableIrpWatchdog @ 0x1400B3804 (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x1400B3A64 (PopDiagTraceIrpStart.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     PopDiagTraceIrpFinish @ 0x140123260 (PopDiagTraceIrpFinish.c)
 *     PopIrpWatchdogBugcheck @ 0x14023A02C (PopIrpWatchdogBugcheck.c)
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
  __int64 *i; // rdx
  __int64 *v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 **v15; // rcx
  __int64 ***v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // r8
  _QWORD *v20; // rdx
  __int64 ***v21; // rcx
  _QWORD *v22; // rax
  __int64 *v23; // rax
  IRP *v24; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
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
      v11 = i - 21;
      v12 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      if ( !*(_QWORD *)(v13 + 248) && *(__int64 **)(v13 + 256) == v11 )
      {
        v14 = *i;
        if ( *(__int64 **)(*i + 8) != i || (v15 = (__int64 **)i[1], *v15 != i) )
          __fastfail(3u);
        *v15 = (__int64 *)v14;
        *(_QWORD *)(v14 + 8) = v15;
        v16 = (__int64 ***)(v11 + 15);
        *(_QWORD *)(v13 + 248) = v11;
        *(_QWORD *)(v13 + 256) = v11[15];
        v17 = v27;
        PopInrushIrp = (__int64)(i - 21);
        if ( *v27 != (__int64 *)&v26 )
          __fastfail(3u);
        v11[16] = (__int64)v27;
        *v16 = &v26;
        *v17 = v16;
        v27 = (__int64 **)(v11 + 15);
        if ( *v6 )
          goto LABEL_9;
        break;
      }
    }
  }
  v7 = (_QWORD *)v6[1];
  if ( v7 )
  {
    v18 = v7 + 21;
    if ( (_QWORD *)*v18 != v18 )
    {
      if ( PopInrushIrp )
      {
        v7 = 0LL;
      }
      else
      {
        v19 = (_QWORD *)*v18;
        PopInrushIrp = v6[1];
        if ( (_QWORD *)v19[1] != v18 || (v20 = (_QWORD *)v7[22], (_QWORD *)*v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = v20;
      }
    }
    if ( v7 )
    {
      *v6 = v7;
      v21 = (__int64 ***)(v7 + 15);
      v6[1] = v7[15];
      v22 = v27;
      if ( *v27 != (__int64 *)&v26 )
        __fastfail(3u);
      v21[1] = v27;
      *v21 = &v26;
      *v22 = v21;
      v27 = (__int64 **)v21;
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
    if ( (__int64 **)v26[1] != &v26 || (v23 = (__int64 *)*v26, *(__int64 **)(*v26 + 8) != v26) )
      __fastfail(3u);
    v26 = (__int64 *)*v26;
    v23[1] = (__int64)&v26;
    v24 = (IRP *)(v8 - 15);
    DeviceObject = v24->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v26, (__int64)v24);
    PopEnableIrpWatchdog((__int64)v24);
    IofCallDriver(DeviceObject, v24);
  }
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return PopDeepSleepClearDisengageReason(2);
  }
  return result;
}
