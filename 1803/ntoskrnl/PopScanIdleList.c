/*
 * XREFs of PopScanIdleList @ 0x140073E84
 * Callers:
 *     PopPolicySystemIdle @ 0x14051C940 (PopPolicySystemIdle.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopGetPowerSettingValue @ 0x140074EA4 (PopGetPowerSettingValue.c)
 *     PopDiagTraceEventNoPayload @ 0x1400CDCD0 (PopDiagTraceEventNoPayload.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     PopRequestPowerIrp @ 0x1401671C0 (PopRequestPowerIrp.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopCoalescingCheck @ 0x140278368 (PopCoalescingCheck.c)
 *     PopDiagTraceDiskIdleCheck @ 0x14027BEE8 (PopDiagTraceDiskIdleCheck.c)
 *     PopDiagTraceIoCoalescingDiskIdle @ 0x14027D28C (PopDiagTraceIoCoalescingDiskIdle.c)
 *     PopSetPowerSettingValue @ 0x140518FC4 (PopSetPowerSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x14051D68C (PopSetPowerSettingValueAcDc.c)
 */

__int64 PopScanIdleList()
{
  int v0; // ebx
  char v1; // r13
  unsigned int v2; // r12d
  KIRQL v3; // di
  __int64 *v4; // r15
  int v5; // ecx
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // eax
  __int64 *v10; // rbx
  __int32 v11; // r14d
  unsigned __int32 v12; // esi
  unsigned int v13; // edi
  int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // edx
  int v21; // eax
  _QWORD *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v23; // rdx
  char v24; // al
  char v25; // al
  int v26; // ecx
  int Src; // [rsp+48h] [rbp-C0h] BYREF
  char v28; // [rsp+4Ch] [rbp-BCh] BYREF
  char v29; // [rsp+4Dh] [rbp-BBh] BYREF
  KIRQL v30; // [rsp+4Eh] [rbp-BAh]
  int v31; // [rsp+50h] [rbp-B8h] BYREF
  int v32; // [rsp+54h] [rbp-B4h]
  int v33; // [rsp+58h] [rbp-B0h]
  unsigned int v34; // [rsp+5Ch] [rbp-ACh]
  unsigned int v35; // [rsp+60h] [rbp-A8h]
  unsigned int v36; // [rsp+64h] [rbp-A4h]
  unsigned __int32 v37; // [rsp+68h] [rbp-A0h] BYREF
  __int32 v38; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v39; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  int *v43; // [rsp+A8h] [rbp-60h]
  __int64 v44; // [rsp+B0h] [rbp-58h]
  __int64 v45; // [rsp+B8h] [rbp-50h]
  int v46; // [rsp+C0h] [rbp-48h]
  int v47; // [rsp+C4h] [rbp-44h]
  __int64 *v48; // [rsp+C8h] [rbp-40h]
  __int64 v49; // [rsp+D0h] [rbp-38h]
  char *v50; // [rsp+D8h] [rbp-30h]
  __int64 v51; // [rsp+E0h] [rbp-28h]
  unsigned __int32 *v52; // [rsp+E8h] [rbp-20h]
  __int64 v53; // [rsp+F0h] [rbp-18h]
  __int32 *v54; // [rsp+F8h] [rbp-10h]
  __int64 v55; // [rsp+100h] [rbp-8h]
  char *v56; // [rsp+108h] [rbp+0h]
  __int64 v57; // [rsp+110h] [rbp+8h]
  char *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  char *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]

  v33 = dword_1403AAA48;
  v0 = 0;
  v36 = dword_1403AAA44;
  v1 = 0;
  v2 = 0;
  Src = 0;
  v32 = 0;
  v34 = *((_DWORD *)PopPolicy + 53);
  v35 = PopCurrentCoalescingSpindownTimeout;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  v30 = v3;
  if ( byte_1403CDB6C )
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
        if ( v33 == 1 )
          v13 = *((_DWORD *)v10 + 4);
        else
          v13 = *((_DWORD *)v10 + 5);
        v14 = *((_DWORD *)v10 + 12);
        v15 = v12;
        if ( v14 == 1 )
        {
          if ( v13 == -1 )
            v13 = v34;
          v16 = PopCoalescingCheck(v35, v13, v12);
          v13 = v16;
          if ( v16 )
            ++v32;
          v2 = v36;
          if ( v36 > v16 )
            v2 = v16;
          v17 = *((_DWORD *)v10 + 23);
          v15 = PopIdleScanInterval + *((_DWORD *)v10 + 22);
          if ( v12 )
          {
            if ( v17 <= PopIdleScanInterval )
              v20 = 0;
            else
              v20 = v17 - PopIdleScanInterval;
          }
          else
          {
            v18 = v17 + PopIdleScanInterval;
            v19 = v2;
            v20 = v2;
            if ( v18 <= v2 )
            {
              v19 = PopIdleScanInterval + *((_DWORD *)v10 + 22);
              v20 = v18;
            }
            v15 = v19;
          }
          *((_DWORD *)v10 + 23) = v20;
          v14 = *((_DWORD *)v10 + 12);
          *((_DWORD *)v10 + 22) = v15;
        }
        if ( v13 && v15 >= v13 && *((_DWORD *)v10 + 14) == 1 && (v12 || (PopSimulate & 0x2000000) != 0) )
        {
          if ( v14 == 1 )
            PopDiagTraceIoCoalescingDiskIdle(v10[3]);
          if ( (int)PopRequestPowerIrp(v10[3], 0LL, 0, 0LL) >= 0 )
          {
            *((_DWORD *)v10 + 3) = 0;
            v21 = *((_DWORD *)v10 + 13);
            ++dword_1403CDB68;
            *((_DWORD *)v10 + 14) = v21;
          }
        }
        else if ( v14 == 1 && !v12 )
        {
          v1 = 1;
        }
        v38 = v11;
        v37 = v12;
        v39 = 0LL;
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v10[3], 0x67446F50u);
            v39 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
            {
              v23 = *(_QWORD *)(DeviceAttachmentBaseRefWithTag[39] + 40LL);
              if ( v23 )
              {
                LOWORD(v31) = *(_WORD *)(v23 + 40) >> 1;
                v24 = *((_BYTE *)v10 + 52) - 1;
                UserData.Ptr = (ULONGLONG)(v10 + 3);
                v28 = v24;
                v25 = *((_BYTE *)v10 + 56) - 1;
                *(_QWORD *)&UserData.Size = 8LL;
                v29 = v25;
                v41 = &v39;
                v43 = &v31;
                v42 = 8LL;
                v44 = 2LL;
                v26 = *(unsigned __int16 *)(v23 + 40);
                v45 = *(_QWORD *)(v23 + 48);
                v48 = v10 + 2;
                v50 = (char *)v10 + 20;
                v52 = &v37;
                v54 = &v38;
                v56 = (char *)v10 + 12;
                v58 = &v28;
                v60 = &v29;
                v46 = v26;
                v59 = 1LL;
                v61 = 1LL;
                v47 = 0;
                v49 = 4LL;
                v51 = 4LL;
                v53 = 4LL;
                v55 = 4LL;
                v57 = 4LL;
                EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
                DeviceAttachmentBaseRefWithTag = v39;
              }
              if ( DeviceAttachmentBaseRefWithTag )
                ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x67446F50u);
            }
          }
        }
        if ( *((_DWORD *)v10 + 12) == 1 )
          PopDiagTraceDiskIdleCheck(v4 - 4, v13, v2);
        v4 = (__int64 *)*v4;
      }
      while ( v4 != &PopIdleDetectList );
      v0 = v32;
      v3 = v30;
    }
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_DEVICE_IDLE_END);
    KxReleaseSpinLock(&PopDopeGlobalLock);
    __writecr8(v3);
    v5 = PopIdleBackgroundIgnoreCount;
    if ( PopIdleBackgroundIgnoreCount )
      v5 = --PopIdleBackgroundIgnoreCount;
    if ( PopBackgroundTaskIgnoreCount )
      --PopBackgroundTaskIgnoreCount;
    v6 = dword_1403A9F88 % (unsigned int)PopIdleScanInterval;
    v7 = dword_1403A9F88 / (unsigned int)PopIdleScanInterval;
    if ( !dword_1403A9F8C
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
      if ( !v5 && !dword_1403AAA2C )
      {
        PopGetPowerSettingValue(&GUID_IDLE_BACKGROUND_TASK, v6, 3LL, &Src);
        ++Src;
        PopSetPowerSettingValueAcDc(&GUID_IDLE_BACKGROUND_TASK);
        v6 = (PopIdleScanInterval + 59) % (unsigned int)PopIdleScanInterval;
        PopIdleBackgroundIgnoreCount = (PopIdleScanInterval + 59) / (unsigned int)PopIdleScanInterval;
      }
      if ( PopBackgroundTaskAllowed && PopSIdle >= 50 && !PopBackgroundTaskIgnoreCount && !dword_1403AAA2C )
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
