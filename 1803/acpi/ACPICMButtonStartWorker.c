/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C00168B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x1C00014E0 (WPP_RECORDER_SF_qsLqss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C0002234 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_qss @ 0x1C0012DE0 (WPP_RECORDER_SF_qss.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0017010 (ACPICMLidPowerStateCallBack.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C002A384 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C002A4D4 (ACPIInternalSetDeviceInterface.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0035630 (ACPIRegisterForDeviceNotifications.c)
 *     ACPISetDeviceWorker @ 0x1C0042E9C (ACPISetDeviceWorker.c)
 */

__int64 __fastcall ACPICMButtonStartWorker(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // r15
  char v3; // si
  _DWORD *DeviceExtension; // rax
  IRP *v5; // r13
  const char *v6; // r14
  __int64 v7; // rdi
  int Status; // ebx
  unsigned __int8 MinorFunction; // r12
  KIRQL v10; // al
  POWER_STATE v11; // ebx
  GUID *v12; // rbx
  _BYTE *PoolWithTag; // rax
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // rax
  int v17; // eax
  char v18; // r8
  NTSTATUS v19; // eax
  char v20; // r8
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  void *v23; // r8
  void *v24; // rdx
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  void *v27; // r8
  void *v28; // rdx
  __int64 v29; // rax
  void *v30; // rdx
  void *v31; // rcx
  __int64 v32; // rax
  void *v33; // rdx
  void *v34; // rcx
  __int64 v35; // rax
  void *v36; // rdx
  void *v37; // rcx
  const char *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v42; // [rsp+38h] [rbp-40h]
  __int64 v43; // [rsp+38h] [rbp-40h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  __int64 v45; // [rsp+40h] [rbp-38h]
  __int64 v46; // [rsp+40h] [rbp-38h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v48; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = 0;
  v48 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C005B1F0;
  v7 = (__int64)DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack((PVOID)v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1LL);
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      v11.SystemState = *(_SYSTEM_POWER_STATE *)(v7 + 488);
      KeReleaseSpinLock(&AcpiPowerLock, v10);
      PoRequestPowerIrp(v1, 0, v11, ACPIInternalWaitWakeLoop, 0LL, 0LL);
    }
    if ( (*(_DWORD *)(v7 + 8) & 0x2000LL) != 0 )
    {
      v12 = &GUID_DEVICE_APPLICATIONLAUNCH_BUTTON;
      if ( !*(_QWORD *)(v7 + 568) )
      {
        v48 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *(_QWORD *)(v7 + 568) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*(NTSTRSAFE_PSTR *)(v7 + 568), 9uLL, "%d", v48);
        }
        else
        {
          v14 = *(_QWORD *)(v7 + 8);
          v15 = (const char *)&unk_1C005B1F0;
          v16 = (const char *)&unk_1C005B1F0;
          if ( (v14 & 0x200000000000LL) != 0 )
          {
            v15 = *(const char **)(v7 + 560);
            if ( (v14 & 0x400000000000LL) != 0 )
              v16 = 0LL;
          }
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0xEu,
            (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
            v7,
            v15,
            v16);
        }
      }
      v17 = ACPIGet(v7, 0x44494847u, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v18 = v17;
      if ( v17 < 0 )
      {
        v32 = *(_QWORD *)(v7 + 8);
        v33 = &unk_1C005B1F0;
        v34 = &unk_1C005B1F0;
        if ( (v32 & 0x200000000000LL) != 0 )
        {
          v33 = *(void **)(v7 + 560);
          if ( (v32 & 0x400000000000LL) != 0 )
            v34 = *(void **)(v7 + 568);
        }
        v43 = (__int64)v33;
        LOBYTE(v33) = 4;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v33,
          5,
          18,
          (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
          v18,
          v7,
          v43,
          (__int64)v34);
      }
      else
      {
        v19 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v20 = v19;
        if ( v19 < 0 )
        {
          v29 = *(_QWORD *)(v7 + 8);
          v30 = &unk_1C005B1F0;
          v31 = &unk_1C005B1F0;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v30 = *(void **)(v7 + 560);
            if ( (v29 & 0x400000000000LL) != 0 )
              v31 = *(void **)(v7 + 568);
          }
          v42 = (__int64)v30;
          LOBYTE(v30) = 2;
          WPP_RECORDER_SF_Dqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v30,
            5,
            17,
            (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
            v20,
            v7,
            v42,
            (__int64)v31);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v21 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v21 < 0 )
          {
            v22 = *(_QWORD *)(v7 + 8);
            v23 = &unk_1C005B1F0;
            v24 = &unk_1C005B1F0;
            if ( (v22 & 0x200000000000LL) != 0 )
            {
              v23 = *(void **)(v7 + 560);
              if ( (v22 & 0x400000000000LL) != 0 )
                v24 = *(void **)(v7 + 568);
            }
            v45 = (__int64)v24;
            LOBYTE(v24) = 2;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v24,
              5,
              15,
              (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
              v21,
              v7,
              (__int64)v23,
              v45);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v48 = _strtoui64(*(const char **)(v7 + 568), 0LL, 10);
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v48, 4u);
          if ( v25 < 0 )
          {
            v26 = *(_QWORD *)(v7 + 8);
            v27 = &unk_1C005B1F0;
            v28 = &unk_1C005B1F0;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = *(void **)(v7 + 560);
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = *(void **)(v7 + 568);
            }
            v46 = (__int64)v28;
            LOBYTE(v28) = 2;
            WPP_RECORDER_SF_Dqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v28,
              5,
              16,
              (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
              v25,
              v7,
              (__int64)v27,
              v46);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications(v1, ACPICMButtonNotifyByDeviceObject, v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v35 = *(_QWORD *)(v7 + 8);
      v36 = &unk_1C005B1F0;
      v37 = &unk_1C005B1F0;
      if ( (v35 & 0x200000000000LL) != 0 )
      {
        v36 = *(void **)(v7 + 560);
        if ( (v35 & 0x400000000000LL) != 0 )
          v37 = *(void **)(v7 + 568);
      }
      v44 = (__int64)v36;
      LOBYTE(v36) = 2;
      WPP_RECORDER_SF_Dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v36,
        5,
        19,
        (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
        Status,
        v7,
        v44,
        (__int64)v37);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v38 = (const char *)&unk_1C005B1F0;
  if ( v7 )
  {
    v39 = *(_QWORD *)(v7 + 8);
    v3 = v7;
    if ( (v39 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 560);
      if ( (v39 & 0x400000000000LL) != 0 )
        v38 = *(const char **)(v7 + 568);
    }
  }
  v40 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v40 = 26LL;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x14u,
           (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
           (char)v5,
           ACPIDispatchPnpTableNames[v40],
           Status,
           v3,
           v6,
           v38);
}
