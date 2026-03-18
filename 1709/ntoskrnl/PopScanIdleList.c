/*
 * XREFs of PopScanIdleList @ 0x1400B1278
 * Callers:
 *     PopPolicySystemIdle @ 0x1404E8080 (PopPolicySystemIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopGetPowerSettingValue @ 0x1400B16E8 (PopGetPowerSettingValue.c)
 *     PopRequestPowerIrp @ 0x1400B3BA0 (PopRequestPowerIrp.c)
 *     PopDiagTraceEventNoPayload @ 0x14012C528 (PopDiagTraceEventNoPayload.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopCoalescingCheck @ 0x140240DD4 (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x1402456F0 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x1402465F4 (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValue @ 0x1404DFA04 (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404E900C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopScanIdleList()
{
  int v0; // ebx
  char v1; // r13
  unsigned int v2; // r15d
  KIRQL v3; // di
  __int64 *v4; // r12
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // eax
  __int64 *v10; // rbx
  __int32 v11; // r14d
  unsigned __int32 v12; // esi
  unsigned int v13; // edi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  int v18; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v20; // rdx
  char v21; // al
  char v22; // al
  int v23; // ecx
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  char v25; // [rsp+4Ch] [rbp-BCh] BYREF
  char v26; // [rsp+4Dh] [rbp-BBh] BYREF
  KIRQL v27; // [rsp+4Eh] [rbp-BAh]
  int v28; // [rsp+50h] [rbp-B8h] BYREF
  int v29; // [rsp+54h] [rbp-B4h]
  int v30; // [rsp+58h] [rbp-B0h]
  unsigned int v31; // [rsp+5Ch] [rbp-ACh]
  unsigned int v32; // [rsp+60h] [rbp-A8h]
  unsigned int v33; // [rsp+64h] [rbp-A4h]
  unsigned __int32 v34; // [rsp+68h] [rbp-A0h] BYREF
  __int32 v35; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v36; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v38; // [rsp+98h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-68h]
  int *v40; // [rsp+A8h] [rbp-60h]
  __int64 v41; // [rsp+B0h] [rbp-58h]
  __int64 v42; // [rsp+B8h] [rbp-50h]
  int v43; // [rsp+C0h] [rbp-48h]
  int v44; // [rsp+C4h] [rbp-44h]
  __int64 *v45; // [rsp+C8h] [rbp-40h]
  __int64 v46; // [rsp+D0h] [rbp-38h]
  char *v47; // [rsp+D8h] [rbp-30h]
  __int64 v48; // [rsp+E0h] [rbp-28h]
  unsigned __int32 *v49; // [rsp+E8h] [rbp-20h]
  __int64 v50; // [rsp+F0h] [rbp-18h]
  __int32 *v51; // [rsp+F8h] [rbp-10h]
  __int64 v52; // [rsp+100h] [rbp-8h]
  char *v53; // [rsp+108h] [rbp+0h]
  __int64 v54; // [rsp+110h] [rbp+8h]
  char *v55; // [rsp+118h] [rbp+10h]
  __int64 v56; // [rsp+120h] [rbp+18h]
  char *v57; // [rsp+128h] [rbp+20h]
  __int64 v58; // [rsp+130h] [rbp+28h]

  v30 = dword_1403661C8;
  v0 = 0;
  v33 = dword_1403661C4;
  v1 = 0;
  v2 = 0;
  Src = 0;
  v29 = 0;
  v31 = *((_DWORD *)PopPolicy + 53);
  v32 = PopCurrentCoalescingSpindownTimeout;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v27 = v3;
  if ( byte_1403A30DC )
  {
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v3);
  }
  else
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_START);
    v4 = (__int64 *)PopIdleDetectList;
    if ( (__int64 *)PopIdleDetectList != &PopIdleDetectList )
    {
      do
      {
        v10 = v4 - 4;
        v11 = _InterlockedExchange((volatile __int32 *)v4 - 7, 0);
        *((_DWORD *)v4 - 5) += v11;
        if ( v11 || *((_DWORD *)v10 + 2) )
          *(_DWORD *)v10 = 0;
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)v10, PopIdleScanInterval);
        if ( !v12 )
          *((_DWORD *)v10 + 14) = 1;
        if ( v30 == 1 )
          v13 = *((_DWORD *)v10 + 4);
        else
          v13 = *((_DWORD *)v10 + 5);
        if ( *((_DWORD *)v10 + 12) == 1 )
        {
          if ( v13 == -1 )
            v13 = v31;
          v15 = PopCoalescingCheck(v32, v13, v12);
          v13 = v15;
          if ( v15 )
            ++v29;
          v2 = v33;
          v16 = *((_DWORD *)v10 + 23);
          if ( v33 > v15 )
            v2 = v15;
          v14 = PopIdleScanInterval + *((_DWORD *)v10 + 22);
          if ( v12 )
          {
            if ( v16 <= PopIdleScanInterval )
              v17 = 0;
            else
              v17 = v16 - PopIdleScanInterval;
          }
          else
          {
            v17 = PopIdleScanInterval + v16;
            if ( v17 > v2 )
            {
              v14 = v2;
              v17 = v2;
            }
          }
          *((_DWORD *)v10 + 22) = v14;
          *((_DWORD *)v10 + 23) = v17;
        }
        else
        {
          v14 = v12;
        }
        if ( v13 && v14 >= v13 && *((_DWORD *)v10 + 14) == 1 && (v12 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( *((_DWORD *)v10 + 12) == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v10[3]);
          if ( (int)PopRequestPowerIrp(v10[3], 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v10 + 3) = 0;
            v18 = *((_DWORD *)v10 + 13);
            ++dword_1403A30D8;
            *((_DWORD *)v10 + 14) = v18;
          }
        }
        else if ( *((_DWORD *)v10 + 12) == 1 && !v12 )
        {
          v1 = 1;
        }
        v35 = v11;
        v34 = v12;
        v36 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v10[3], 0x746C6644u);
            v36 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v20 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v20 )
              {
                LOWORD(v28) = *(_WORD *)(v20 + 40) >> 1;
                v21 = *((_BYTE *)v10 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v10 + 3);
                v25 = v21;
                v22 = *((_BYTE *)v10 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v26 = v22;
                v38 = &v36;
                v40 = &v28;
                v39 = 8LL;
                v41 = 2LL;
                v23 = *(unsigned __int16 *)(v20 + 40);
                v42 = *(_QWORD *)(v20 + 48);
                v45 = v10 + 2;
                v47 = (char *)v10 + 20;
                v49 = &v34;
                v51 = &v35;
                v53 = (char *)v10 + 12;
                v55 = &v25;
                v57 = &v26;
                v43 = v23;
                v56 = 1LL;
                v58 = 1LL;
                v44 = 0;
                v46 = 4LL;
                v48 = 4LL;
                v50 = 4LL;
                v52 = 4LL;
                v54 = 4LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v36;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
            }
          }
        }
        if ( *((_DWORD *)v10 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v4 - 4, v13, v2);
        v4 = (__int64 *)*v4;
      }
      while ( v4 != &PopIdleDetectList );
      v0 = v29;
      v3 = v27;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v3);
    v5 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v5 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    v6 = dword_140365708 % (unsigned int)PopIdleScanInterval;
    v7 = dword_140365708 / (unsigned int)PopIdleScanInterval;
    if ( !dword_14036570C
      || (v6 = (PopIdleScanInterval + 179) % (unsigned int)PopIdleScanInterval,
          v8 = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval,
          v7 == v8) )
    {
      PopBackgroundTaskAllowed = 1;
    }
    else if ( v7 < v8 )
    {
      PopBackgroundTaskAllowed = 0;
    }
    if ( !v0 || v1 )
    {
      if ( !v5 && !dword_1403661AC )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v6, 3LL, &Src);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v6 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( PopBackgroundTaskAllowed && PopSIdle >= 50 && !PopBackgroundTaskIgnoreCount && !dword_1403661AC )
      {
        PopGetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, v6, 0LL, &Src);
        ++Src;
        PopSetPowerSettingValue(&GUID_BACKGROUND_TASK_NOTIFICATION, &Src);
        PopBackgroundTaskAllowed = 0;
        PopBackgroundTaskIgnoreCount = (PopIdleScanInterval + 179) / (unsigned int)PopIdleScanInterval;
      }
    }
  }
  return 0LL;
}
