/*
 * XREFs of PopScanIdleList @ 0x140070F24
 * Callers:
 *     PopPolicySystemIdle @ 0x1404C55E0 (PopPolicySystemIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     PopDiagTraceEventNoPayload @ 0x140038914 (PopDiagTraceEventNoPayload.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14004FAB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x140072BB0 (PopGetPowerSettingValue.c)
 *     PopRequestPowerIrp @ 0x140145E60 (PopRequestPowerIrp.c)
 *     PopCoalescingCheck @ 0x14022D878 (PopCoalescingCheck.c)
 *     PopDiagTraceDeviceIdleCheck @ 0x140230CA4 (PopDiagTraceDeviceIdleCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x140230E78 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x140231D68 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValue @ 0x1404C1D4C (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C72B8 (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopScanIdleList()
{
  int v0; // edi
  char v1; // r12
  int v2; // ebx
  unsigned int v3; // r15d
  KIRQL v4; // r13
  __int64 *v5; // r14
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // rdx
  unsigned int v9; // r10d
  unsigned int v10; // eax
  int v12; // r13d
  __int64 *v13; // rbx
  unsigned __int32 v14; // ebp
  unsigned __int32 v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+44h] [rbp-54h]
  int v24; // [rsp+48h] [rbp-50h]
  KIRQL v25; // [rsp+A0h] [rbp+8h]
  int Src; // [rsp+A8h] [rbp+10h] BYREF
  int v27; // [rsp+B0h] [rbp+18h]
  unsigned int v28; // [rsp+B8h] [rbp+20h]

  v0 = dword_14034BB48;
  v24 = dword_14034BB48;
  Src = 0;
  v1 = 0;
  v2 = 0;
  v23 = dword_14034BB44;
  v3 = 0;
  v28 = *((_DWORD *)PopPolicy + 53);
  v22 = PopCurrentCoalescingSpindownTimeout;
  v4 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v25 = v4;
  if ( byte_14036E2A4 )
  {
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v4);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v5 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      v12 = 0;
      do
      {
        v13 = v5 - 4;
        v14 = _InterlockedExchange((volatile __int32 *)v5 - 7, 0);
        *((_DWORD *)v5 - 5) += v14;
        if ( v14 || *((_DWORD *)v13 + 2) )
          *(_DWORD *)v13 = 0;
        v15 = _InterlockedExchangeAdd((volatile signed __int32 *)v13, PopIdleScanInterval);
        if ( !v15 )
          *((_DWORD *)v13 + 14) = 1;
        if ( v0 == 1 )
          v16 = *((_DWORD *)v13 + 4);
        else
          v16 = *((_DWORD *)v13 + 5);
        if ( *((_DWORD *)v13 + 12) == 1 )
        {
          if ( v16 == -1 )
            v16 = v28;
          v18 = PopCoalescingCheck(v22, v16, v15);
          v16 = v18;
          if ( v18 )
            ++v12;
          v3 = v23;
          v19 = *((_DWORD *)v13 + 23);
          if ( v23 > v18 )
            v3 = v18;
          v17 = PopIdleScanInterval + *((_DWORD *)v13 + 22);
          if ( v15 )
          {
            if ( v19 <= PopIdleScanInterval )
              v20 = 0;
            else
              v20 = v19 - PopIdleScanInterval;
          }
          else
          {
            v20 = PopIdleScanInterval + v19;
            if ( v20 > v3 )
            {
              v17 = v3;
              v20 = v3;
            }
          }
          *((_DWORD *)v13 + 22) = v17;
          *((_DWORD *)v13 + 23) = v20;
        }
        else
        {
          v17 = v15;
        }
        if ( v16 && v17 >= v16 && *((_DWORD *)v13 + 14) == 1 && (v15 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v13 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v13[3]);
          if ( (int)PopRequestPowerIrp(v13[3], 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v13 + 3) = 0;
            v21 = *((_DWORD *)v13 + 13);
            ++dword_14036E2A0;
            *((_DWORD *)v13 + 14) = v21;
          }
        }
        else if ( *((_DWORD *)v13 + 12) == 1 && !v15 )
        {
          v1 = 1;
        }
        PopDiagTraceDeviceIdleCheck(v5 - 4, v15, v14);
        if ( *((_DWORD *)v13 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v5 - 4, v16, v3);
        v5 = (__int64 *)*v5;
        v0 = v24;
      }
      while ( v5 != &PopIdleDetectList );
      v27 = v12;
      v2 = v12;
      v4 = v25;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v4);
    v6 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v6 = --PopIdleBackgroundIgnoreCount;
    v7 = PopBackgroundTaskIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      v7 = --PopBackgroundTaskIgnoreCount;
    v8 = dword_14034B0A8 % (unsigned int)PopIdleScanInterval;
    v9 = dword_14034B0A8 / (unsigned int)PopIdleScanInterval;
    if ( !dword_14034B0AC
      || (v8 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v10 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v9 == v10) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v9 < v10 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v2 || v1 )
    {
      if ( !v6 && !dword_14034BB2C )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v8, 3LL, &Src);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v8 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        v7 = PopBackgroundTaskIgnoreCount;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( !v7 && PopBackgroundTaskAllowed && PopSIdle >= 50 && !dword_14034BB2C )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v8, 0LL, &Src);
        ++Src;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
