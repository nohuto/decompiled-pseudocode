/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0003730
 * Callers:
 *     <none>
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1C0003678 (RaidSetUnitPauseTimer.c)
 *     RaidFreeDeferredItem @ 0x1C00037FC (RaidFreeDeferredItem.c)
 *     RaidAdapterResumeUnit @ 0x1C0003820 (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C0006BF0 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C000EF18 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C000EFB0 (RaidResumeAdapterQueue.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C00251DC (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C0025D00 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C0025DC8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C0026840 (RaidAdapterLogIoError.c)
 *     RaidAdapterRequestTimer @ 0x1C002770C (RaidAdapterRequestTimer.c)
 *     RaidAdapterSetPauseTimer @ 0x1C0028C1C (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C002C0BC (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003D38C (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C003FDD4 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2, __int64 a3, __int64 a4)
{
  LARGE_INTEGER *v4; // rsi
  __int64 v5; // rdi
  int LowPart; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // ebp
  unsigned int HighPart; // ebx
  __int64 Unit; // rax
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 4200));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v18 = LowPart - 8;
    if ( !v18 )
    {
      StorSetIoGatewayNotBusy(v5 + 768);
      goto LABEL_43;
    }
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 1;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          if ( v21 == 1 )
            RaidUnitProcessAsyncNotification(v5, (unsigned int)a2[4].HighPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v5, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v5, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else if ( LowPart == 7 )
  {
    if ( v5 != -768 && !*(_DWORD *)(v5 + 808) )
    {
      v15 = *(_DWORD *)(v5 + 960);
      if ( v15 )
      {
        v16 = a2[5].LowPart;
        v17 = 0;
        if ( v16 <= v15 )
          v17 = v15 - v16;
        *(_DWORD *)(v5 + 800) = v17;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 768), &LockHandle);
        *(_DWORD *)(v5 + 808) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else
  {
    v7 = LowPart - 1;
    if ( !v7 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v5,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_10;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      RaidAdapterLogIoError(v5, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_10;
    }
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            RaidAdapterResumeUnit(v5, (unsigned int)a2[4].HighPart);
        }
        else
        {
          v12 = a2[5].LowPart;
          HighPart = a2[4].HighPart;
          Unit = RaidAdapterFindUnit(v5, HighPart, a3, a4);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v12);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_ddd(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_0e2a19f4a3e138dc01b4b18bc88c5901_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v5 + 1088);
        v4 = 0LL;
        if ( !*(_DWORD *)(v5 + 1460) )
          RaidAdapterCancelPauseTimer(v5, v5 + 1856);
      }
      goto LABEL_10;
    }
    RaidFreeDeferredItem(v5 + 1088);
    v4 = 0LL;
    if ( *(_DWORD *)(v5 + 1460) == 1 )
    {
      RaidAdapterSetPauseTimer(v5, v5 + 1856, v5 + 1728, *(unsigned int *)(v5 + 1456));
      goto LABEL_10;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v5) )
LABEL_43:
      RaidAdapterRestartQueues(v5);
  }
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)(v5 + 4200));
  if ( v4 )
    RaidFreeDeferredItem(v5 + 1088);
}
