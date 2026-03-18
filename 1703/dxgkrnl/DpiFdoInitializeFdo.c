/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C010F458
 * Callers:
 *     DpiAddDevice @ 0x1C010E450 (DpiAddDevice.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C0010498 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiRequestIoPowerState @ 0x1C0102874 (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C010FC78 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C010FD8C (DpiQueryBusInterface.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C010FE8C (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01100EC (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C0110238 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // si
  char v4; // r12
  char v5; // r13
  int v6; // eax
  struct _DEVICE_OBJECT *v7; // rcx
  int DevicePropertyString; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  NTSTATUS v12; // eax
  PVOID v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _WORD *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  int MiniportInterface; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  NTSTATUS v26; // eax
  int v27; // eax
  SIZE_T v28; // rdi
  PVOID PoolWithTag; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  size_t v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  int Size; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-20h] BYREF
  ULONG RequiredSize; // [rsp+B0h] [rbp+48h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+50h]
  ULONG Type; // [rsp+C0h] [rbp+58h] BYREF
  void *ThreadHandle; // [rsp+C8h] [rbp+60h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  v3 = 0;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = &DpiFdoHandleQueryDeviceRelations;
  v47 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (__int64)&unk_1C00497CC,
    0,
    Size);
  g_bCreateParavirtualizedGpu = v47 & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_VgpuReplaceWarp = (v47 >> 3) & 1;
  if ( v6 )
  {
    v28 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x74727044u);
    *(_QWORD *)(v1 + 2592) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_57;
    memset(PoolWithTag, 0, (unsigned int)v28);
    **(_QWORD **)(v1 + 2592) = StartContext;
    *(_DWORD *)(v1 + 2600) = 1;
  }
  v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3324) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v7,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v11 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_58;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4520,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4528),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4536),
    &RequiredSize,
    &Type);
  if ( !*(_BYTE *)(v1 + 1139)
    || !*(_BYTE *)(v1 + 480)
    || (MiniportInterface = DpiQueryMiniportInterface(
                              (_DWORD)StartContext,
                              (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                              56,
                              1),
        v11 = MiniportInterface,
        MiniportInterface >= 0)
    && *(_QWORD *)(v1 + 976)
    && *(_QWORD *)(v1 + 984)
    && *(_QWORD *)(v1 + 992) )
  {
    v12 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
    v11 = v12;
    if ( v12 < 0 )
      goto LABEL_58;
    v4 = 1;
    v13 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
    *(_QWORD *)(v1 + 2616) = v13;
    if ( v13 )
    {
      *(_WORD *)(v1 + 2610) = SymbolicLinkName.MaximumLength;
      *(_WORD *)(v1 + 2608) = SymbolicLinkName.Length;
      RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2608), &SymbolicLinkName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      v4 = 0;
      *(_BYTE *)(v1 + 481) = 0;
      *(_BYTE *)(v1 + 483) = 0;
      *(_QWORD *)(v1 + 488) = 0LL;
      if ( *(_BYTE *)(v1 + 480) )
        goto LABEL_7;
      KeInitializeEvent((PRKEVENT)(v1 + 3736), SynchronizationEvent, 0);
      *(_QWORD *)(v1 + 3776) = v1 + 3768;
      *(_QWORD *)(v1 + 3768) = v1 + 3768;
      KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3880));
      KeInitializeEvent((PRKEVENT)(v1 + 3896), NotificationEvent, 1u);
      KeInitializeEvent((PRKEVENT)(v1 + 3920), NotificationEvent, 1u);
      *(_BYTE *)(v1 + 483) = 1;
      *(_QWORD *)(v1 + 3944) = 0LL;
      *(_DWORD *)(v1 + 3888) = 0;
      memset((void *)(v1 + 3792), 0, 0x58uLL);
      *(_DWORD *)(v1 + 3808) = 1953656900;
      *(_DWORD *)(v1 + 3812) = 11;
      *(_DWORD *)(v1 + 3832) = 64;
      KeInitializeTimer((PKTIMER)(v1 + 3952));
      KeInitializeDpc((PRKDPC)(v1 + 4016), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
      v26 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
      v11 = v26;
      if ( v26 >= 0 )
      {
        v11 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
        *(_QWORD *)(v1 + 3728) = Object;
        ZwClose(ThreadHandle);
        if ( (int)v11 >= 0 )
        {
LABEL_7:
          KeInitializeEvent((PRKEVENT)(v1 + 3504), SynchronizationEvent, 0);
          *(_QWORD *)(v1 + 3312) = v1 + 3304;
          *(_QWORD *)(v1 + 3304) = v1 + 3304;
          ExInitializeResourceLite((PERESOURCE)(v1 + 3144));
          v3 = 1;
          *(_QWORD *)(v1 + 3344) = v1 + 3336;
          *(_QWORD *)(v1 + 3336) = v1 + 3336;
          KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3328));
          *(_QWORD *)(v1 + 4968) = v1 + 4960;
          *(_QWORD *)(v1 + 4960) = v1 + 4960;
          KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4976));
          IoCsqInitialize(
            (PIO_CSQ)(v1 + 4896),
            (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
            (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
            (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
            (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
            (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
            (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
          *(_QWORD *)(v1 + 5016) = 0LL;
          *(_QWORD *)(v1 + 5024) = 0LL;
          KeInitializeEvent((PRKEVENT)(v1 + 5032), NotificationEvent, 0);
          KeInitializeMutex((PRKMUTEX)(v1 + 3248), 0);
          KeInitializeMutex((PRKMUTEX)(v1 + 3392), 0);
          *(_QWORD *)(v1 + 3464) = v1 + 3456;
          *(_QWORD *)(v1 + 3456) = v1 + 3456;
          *(_QWORD *)(v1 + 3488) = v1 + 3480;
          *(_QWORD *)(v1 + 3480) = v1 + 3480;
          *(_QWORD *)(v1 + 3384) = v1 + 3376;
          *(_QWORD *)(v1 + 3376) = v1 + 3376;
          ExInitializeResourceLite((PERESOURCE)(v1 + 3600));
          LODWORD(v11) = DpiFdoInitializeAdapterUniqueString(StartContext);
          if ( (int)v11 < 0 )
          {
LABEL_77:
            ExDeleteResourceLite((PERESOURCE)(v1 + 3600));
            ExDeleteResourceLite((PERESOURCE)(v1 + 3144));
            goto LABEL_78;
          }
          v5 = 1;
          DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2720);
          DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2768);
          DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
          v15 = *(_QWORD *)(v1 + 40);
          *(_DWORD *)(v1 + 2864) = 0;
          if ( *(_BYTE *)(v15 + 133) && !*(_BYTE *)(v1 + 1143) )
            goto LABEL_13;
          v16 = (_WORD *)(v1 + 2872);
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) >= 0 )
          {
            if ( *v16 != 112
              || (v27 = 3, *(_WORD *)(v1 + 2874) != 3)
              || !*(_QWORD *)(v1 + 2904)
              || !*(_QWORD *)(v1 + 2912)
              || !*(_QWORD *)(v1 + 2920)
              || !*(_QWORD *)(v1 + 2928)
              || !*(_QWORD *)(v1 + 2936)
              || !*(_QWORD *)(v1 + 2944)
              || !*(_QWORD *)(v1 + 2952)
              || !*(_QWORD *)(v1 + 2960)
              || !*(_QWORD *)(v1 + 2968)
              || !*(_QWORD *)(v1 + 2976) )
            {
              LODWORD(v11) = -1073741811;
              v33 = WdLogNewEntry5_WdError(0LL, v17);
              *(_QWORD *)(v33 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v33);
              v34 = 112LL;
LABEL_62:
              memset(v16, 0, v34);
              goto LABEL_77;
            }
          }
          else
          {
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP,
                        120,
                        2) < 0 )
            {
              if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
                *(_DWORD *)(v1 + 2864) = 1;
LABEL_13:
              *(_DWORD *)(v1 + 3064) = -1;
              if ( !byte_1C006F9D6 || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u )
                goto LABEL_23;
              if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1143) )
              {
LABEL_25:
                memset((void *)(StartContext[8] + 4088LL), 0, 0x188uLL);
                goto LABEL_26;
              }
              v16 = (_WORD *)(v1 + 2992);
              if ( (int)DpiQueryMiniportInterface(
                          (_DWORD)StartContext,
                          (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                          64,
                          1) < 0 )
              {
                memset((void *)(v1 + 2992), 0, 0x40uLL);
                goto LABEL_23;
              }
              if ( *v16 >= 0x40u
                && *(_WORD *)(v1 + 2994) == 1
                && *(_QWORD *)(v1 + 3024)
                && *(_QWORD *)(v1 + 3032)
                && *(_QWORD *)(v1 + 3040)
                && *(_QWORD *)(v1 + 3048) )
              {
LABEL_23:
                if ( *(_BYTE *)(v1 + 1143) )
                {
                  *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
                  *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
                }
                goto LABEL_25;
              }
              LODWORD(v11) = -1073741811;
              v35 = WdLogNewEntry5_WdError(0LL, v19);
              *(_QWORD *)(v35 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v35);
              v34 = 64LL;
              goto LABEL_62;
            }
            if ( *v16 != 120
              || (v27 = 2, *(_WORD *)(v1 + 2874) != 2)
              || !*(_QWORD *)(v1 + 2904)
              || !*(_QWORD *)(v1 + 2912)
              || !*(_QWORD *)(v1 + 2920)
              || !*(_QWORD *)(v1 + 2928)
              || !*(_QWORD *)(v1 + 2936)
              || !*(_QWORD *)(v1 + 2944)
              || !*(_QWORD *)(v1 + 2952)
              || !*(_QWORD *)(v1 + 2960)
              || !*(_QWORD *)(v1 + 2968)
              || !*(_QWORD *)(v1 + 2984) )
            {
              LODWORD(v11) = -1073741811;
              v36 = WdLogNewEntry5_WdError(0LL, v18);
              *(_QWORD *)(v36 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v36);
              v34 = 120LL;
              goto LABEL_62;
            }
          }
          *(_DWORD *)(v1 + 2864) = v27;
          goto LABEL_13;
        }
      }
LABEL_58:
      v31 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v31 + 24) = v11;
      WdLogEvent5_WdError(v31);
      goto LABEL_26;
    }
LABEL_57:
    LODWORD(v11) = -1073741801;
    v30 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v30);
    goto LABEL_78;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v23, v25);
  v32[3] = 275LL;
  v32[4] = 21LL;
  v32[5] = v11;
  WdLogEvent5_WdCriticalError(v32);
LABEL_26:
  if ( (int)v11 >= 0 )
    return (unsigned int)v11;
  if ( v3 == 1 )
    goto LABEL_77;
LABEL_78:
  if ( *(_QWORD *)(v1 + 3728) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v20, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4480));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4496));
  }
  v37 = *(void **)(v1 + 3136);
  *(_DWORD *)(v1 + 3120) = 0;
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(v1 + 3136) = 0LL;
  }
  v38 = *(void **)(v1 + 3128);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(v1 + 3128) = 0LL;
  }
  v39 = *(void **)(v1 + 4512);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(v1 + 4512) = 0LL;
  }
  v40 = *(void **)(v1 + 4520);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(v1 + 4520) = 0LL;
  }
  v41 = *(void **)(v1 + 2592);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(v1 + 2592) = 0LL;
  }
  v42 = *(void **)(v1 + 2616);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(v1 + 2616) = 0LL;
  }
  return (unsigned int)v11;
}
