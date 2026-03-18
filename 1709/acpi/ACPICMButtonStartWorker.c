/*
 * XREFs of ACPICMButtonStartWorker @ 0x1C0025930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x1C0003CBC (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0005700 (WPP_RECORDER_SF_qsLqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     RtlStringCchPrintfA @ 0x1C000E0C0 (RtlStringCchPrintfA.c)
 *     ACPIInternalRegisterPowerCallBack @ 0x1C00114B0 (ACPIInternalRegisterPowerCallBack.c)
 *     ACPISetDeviceWorker @ 0x1C0024760 (ACPISetDeviceWorker.c)
 *     ACPIRegisterForDeviceNotifications @ 0x1C0025620 (ACPIRegisterForDeviceNotifications.c)
 *     ACPIInternalSetDeviceInterface @ 0x1C00258BC (ACPIInternalSetDeviceInterface.c)
 *     ACPICMLidPowerStateCallBack @ 0x1C0046DB0 (ACPICMLidPowerStateCallBack.c)
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
  const char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v18; // rcx
  const char *v19; // rdx
  const char *v20; // rax
  int v21; // eax
  char v22; // r8
  NTSTATUS v23; // eax
  char v24; // r8
  NTSTATUS v25; // eax
  __int64 v26; // rcx
  const char *v27; // r8
  const char *v28; // rdx
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  const char *v31; // r8
  const char *v32; // rdx
  __int64 v33; // rax
  const char *v34; // rdx
  const char *v35; // rcx
  __int64 v36; // rax
  const char *v37; // rdx
  const char *v38; // rcx
  __int64 v39; // rax
  const char *v40; // rdx
  const char *v41; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v43; // [rsp+C0h] [rbp+48h] BYREF
  ULONG DataSize; // [rsp+C8h] [rbp+50h] BYREF
  void *DeviceRegKey; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Data; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v3 = 0;
  v43 = 0;
  DeviceExtension = (_DWORD *)ACPIInternalGetDeviceExtension((ULONG_PTR)v1);
  v5 = *(IRP **)(a1 + 40);
  v6 = (const char *)&unk_1C0067B08;
  v7 = (__int64)DeviceExtension;
  Status = v5->IoStatus.Status;
  MinorFunction = v5->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( Status >= 0 )
  {
    if ( (DeviceExtension[50] & 4) != 0 )
    {
      ACPIInternalRegisterPowerCallBack(DeviceExtension, ACPICMLidPowerStateCallBack);
      ACPICMLidPowerStateCallBack((PVOID)v7, 0LL, 0LL);
      ACPISetDeviceWorker(v7, 1);
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
        v43 = _InterlockedExchangeAdd(&AcpipExperienceButtonInstanceID, 1u);
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 9uLL, 0x53706341u);
        *(_QWORD *)(v7 + 568) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[8] = 0;
          RtlStringCchPrintfA(*(NTSTRSAFE_PSTR *)(v7 + 568), 9uLL, "%d", v43);
        }
        else
        {
          v18 = *(_QWORD *)(v7 + 8);
          v19 = (const char *)&unk_1C0067B08;
          v20 = (const char *)&unk_1C0067B08;
          if ( (v18 & 0x200000000000LL) != 0 )
          {
            v19 = *(const char **)(v7 + 560);
            if ( (v18 & 0x400000000000LL) != 0 )
              v20 = 0LL;
          }
          WPP_RECORDER_SF_qss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0xEu,
            (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
            v7,
            v19,
            v20);
        }
      }
      v21 = ACPIGet((__int64 *)v7, 1145653319, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&Data, (__int64)&DataSize);
      v22 = v21;
      if ( v21 < 0 )
      {
        v36 = *(_QWORD *)(v7 + 8);
        v37 = (const char *)&unk_1C0067B08;
        v38 = (const char *)&unk_1C0067B08;
        if ( (v36 & 0x200000000000LL) != 0 )
        {
          v37 = *(const char **)(v7 + 560);
          if ( (v36 & 0x400000000000LL) != 0 )
            v38 = *(const char **)(v7 + 568);
        }
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          5u,
          0x12u,
          (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
          v22,
          v7,
          v37,
          v38);
      }
      else
      {
        v23 = IoOpenDeviceRegistryKey(v1, 1u, 0x20000u, &DeviceRegKey);
        v24 = v23;
        if ( v23 < 0 )
        {
          v33 = *(_QWORD *)(v7 + 8);
          v34 = (const char *)&unk_1C0067B08;
          v35 = (const char *)&unk_1C0067B08;
          if ( (v33 & 0x200000000000LL) != 0 )
          {
            v34 = *(const char **)(v7 + 560);
            if ( (v33 & 0x400000000000LL) != 0 )
              v35 = *(const char **)(v7 + 568);
          }
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            5u,
            0x11u,
            (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
            v24,
            v7,
            v34,
            v35);
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"UserHIDBlock");
          v25 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 3u, Data, DataSize);
          if ( v25 < 0 )
          {
            v26 = *(_QWORD *)(v7 + 8);
            v27 = (const char *)&unk_1C0067B08;
            v28 = (const char *)&unk_1C0067B08;
            if ( (v26 & 0x200000000000LL) != 0 )
            {
              v27 = *(const char **)(v7 + 560);
              if ( (v26 & 0x400000000000LL) != 0 )
                v28 = *(const char **)(v7 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0xFu,
              (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
              v25,
              v7,
              v27,
              v28);
          }
          RtlInitUnicodeString(&DestinationString, L"ButtonInstanceID");
          v43 = _strtoui64(*(const char **)(v7 + 568), 0LL, 10);
          v29 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &v43, 4u);
          if ( v29 < 0 )
          {
            v30 = *(_QWORD *)(v7 + 8);
            v31 = (const char *)&unk_1C0067B08;
            v32 = (const char *)&unk_1C0067B08;
            if ( (v30 & 0x200000000000LL) != 0 )
            {
              v31 = *(const char **)(v7 + 560);
              if ( (v30 & 0x400000000000LL) != 0 )
                v32 = *(const char **)(v7 + 568);
            }
            WPP_RECORDER_SF_Lqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              5u,
              0x10u,
              (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
              v29,
              v7,
              v31,
              v32);
          }
          ZwClose(DeviceRegKey);
        }
      }
    }
    else
    {
      v12 = &GUID_DEVICE_SYS_BUTTON;
      ACPIRegisterForDeviceNotifications((ULONG_PTR)v1, (__int64)ACPICMButtonNotifyByDeviceObject, (__int64)v1);
    }
    Status = ACPIInternalSetDeviceInterface(v1, v12);
    if ( Status < 0 )
    {
      v39 = *(_QWORD *)(v7 + 8);
      v40 = (const char *)&unk_1C0067B08;
      v41 = (const char *)&unk_1C0067B08;
      if ( (v39 & 0x200000000000LL) != 0 )
      {
        v40 = *(const char **)(v7 + 560);
        if ( (v39 & 0x400000000000LL) != 0 )
          v41 = *(const char **)(v7 + 568);
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0x13u,
        (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
        Status,
        v7,
        v40,
        v41);
    }
  }
  v5->IoStatus.Status = Status;
  v5->IoStatus.Information = 0LL;
  IofCompleteRequest(v5, 0);
  v13 = (const char *)&unk_1C0067B08;
  if ( v7 )
  {
    v14 = *(_QWORD *)(v7 + 8);
    v3 = v7;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(v7 + 560);
      if ( (v14 & 0x400000000000LL) != 0 )
        v13 = *(const char **)(v7 + 568);
    }
  }
  v15 = MinorFunction;
  if ( MinorFunction >= 0x1Au )
    v15 = 26LL;
  return WPP_RECORDER_SF_qsLqss(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           4u,
           5u,
           0x14u,
           (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
           (char)v5,
           ACPIDispatchPnpTableNames[v15],
           Status,
           v3,
           v6,
           v13);
}
