/*
 * XREFs of RaidAdapterDeferredRoutine @ 0x1C0001AA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidSetUnitPauseTimer @ 0x1C00019E0 (RaidSetUnitPauseTimer.c)
 *     RaidFreeDeferredItem @ 0x1C0001BB8 (RaidFreeDeferredItem.c)
 *     RaidAdapterResumeUnit @ 0x1C0001BEC (RaidAdapterResumeUnit.c)
 *     RaidAdapterFindUnit @ 0x1C00061C8 (RaidAdapterFindUnit.c)
 *     RaidAdapterRestartQueues @ 0x1C0010608 (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C00106A4 (RaidResumeAdapterQueue.c)
 *     RaidAdapterRequestTimer @ 0x1C001B47C (RaidAdapterRequestTimer.c)
 *     RaidAdapterCancelPauseTimer @ 0x1C002C980 (RaidAdapterCancelPauseTimer.c)
 *     RaidAdapterDeviceBusy @ 0x1C002CF00 (RaidAdapterDeviceBusy.c)
 *     RaidAdapterDeviceReady @ 0x1C002CFC8 (RaidAdapterDeviceReady.c)
 *     RaidAdapterLogIoError @ 0x1C002D7F4 (RaidAdapterLogIoError.c)
 *     RaidAdapterSetPauseTimer @ 0x1C002F470 (RaidAdapterSetPauseTimer.c)
 *     WPP_SF_ddd @ 0x1C00309E8 (WPP_SF_ddd.c)
 *     RaidUnitProcessAsyncNotification @ 0x1C003EDA4 (RaidUnitProcessAsyncNotification.c)
 *     StorSetIoGatewayNotBusy @ 0x1C0040C08 (StorSetIoGatewayNotBusy.c)
 */

void __fastcall RaidAdapterDeferredRoutine(__int64 a1, LARGE_INTEGER *a2)
{
  LARGE_INTEGER *v2; // rsi
  __int64 v3; // rdi
  int LowPart; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int HighPart; // ebx
  unsigned int v11; // ebp
  __int64 Unit; // rax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  v3 = *(_QWORD *)(a1 + 64);
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 4200));
  LowPart = a2[4].LowPart;
  if ( LowPart > 7 )
  {
    v13 = LowPart - 8;
    if ( !v13 )
    {
      StorSetIoGatewayNotBusy(v3 + 768);
      goto LABEL_44;
    }
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          if ( v16 == 1 )
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidUnitProcessAsyncNotification)(
              v3,
              (unsigned int)a2[4].HighPart,
              (LARGE_INTEGER)a2[5].QuadPart);
        }
        else
        {
          KeSetCoalescableTimer((PKTIMER)(a2[5].QuadPart + 8), a2[6], 0, a2[7].LowPart, (PKDPC)(a2[5].QuadPart + 72));
        }
      }
      else
      {
        RaidAdapterDeviceReady(v3, (unsigned int)a2[4].HighPart);
      }
    }
    else
    {
      RaidAdapterDeviceBusy(v3, (unsigned int)a2[4].HighPart, a2[5].LowPart);
    }
  }
  else if ( LowPart == 7 )
  {
    if ( v3 != -768 && !*(_DWORD *)(v3 + 808) )
    {
      v17 = *(_DWORD *)(v3 + 960);
      if ( v17 )
      {
        v18 = a2[5].LowPart;
        if ( v18 <= v17 )
          *(_DWORD *)(v3 + 800) = v17 - v18;
        else
          *(_DWORD *)(v3 + 800) = 0;
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 768), &LockHandle);
        *(_DWORD *)(v3 + 808) = 1;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      }
    }
  }
  else
  {
    v5 = LowPart - 1;
    if ( !v5 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterRequestTimer)(
        v3,
        (LARGE_INTEGER)a2[5].QuadPart,
        a2[6].LowPart);
      goto LABEL_15;
    }
    v6 = v5 - 1;
    if ( !v6 )
    {
      RaidAdapterLogIoError(v3, (unsigned int)a2[4].HighPart, a2[6].LowPart, (unsigned int)a2[6].HighPart);
      goto LABEL_15;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 )
            RaidAdapterResumeUnit(v3, (unsigned int)a2[4].HighPart);
        }
        else
        {
          HighPart = a2[4].HighPart;
          v11 = a2[5].LowPart;
          Unit = RaidAdapterFindUnit(v3, HighPart);
          if ( Unit )
          {
            RaidSetUnitPauseTimer(Unit, 1000 * v11);
          }
          else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
          {
            WPP_SF_ddd(
              WPP_GLOBAL_Control->AttachedDevice,
              52LL,
              &WPP_d17971f34b7c3fdc440c591ea55cafdf_Traceguids,
              (unsigned __int8)HighPart,
              BYTE1(HighPart),
              BYTE2(HighPart));
          }
        }
      }
      else
      {
        RaidFreeDeferredItem(v3 + 1088);
        v2 = 0LL;
        if ( !*(_DWORD *)(v3 + 1460) )
          RaidAdapterCancelPauseTimer(v3, v3 + 1856);
      }
      goto LABEL_15;
    }
    RaidFreeDeferredItem(v3 + 1088);
    v2 = 0LL;
    if ( *(_DWORD *)(v3 + 1460) == 1 )
    {
      RaidAdapterSetPauseTimer(v3, v3 + 1856, v3 + 1728, *(unsigned int *)(v3 + 1456));
      goto LABEL_15;
    }
    if ( !(unsigned int)RaidResumeAdapterQueue(v3) )
LABEL_44:
      RaidAdapterRestartQueues(v3);
  }
LABEL_15:
  _InterlockedDecrement((volatile signed __int32 *)(v3 + 4200));
  if ( v2 )
    RaidFreeDeferredItem(v3 + 1088);
}
