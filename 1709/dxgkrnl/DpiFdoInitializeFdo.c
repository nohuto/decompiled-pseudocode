/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C0115904
 * Callers:
 *     DpiAddDevice @ 0x1C01148E0 (DpiAddDevice.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00FAE24 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C0101BAC (DpiRequestIoPowerState.c)
 *     DpiQueryMiniportInterface @ 0x1C0116190 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C01162F0 (DpiQueryBusInterface.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01163C4 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C0116624 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C0116770 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // si
  char v4; // r14
  char v5; // r12
  int v6; // eax
  struct _DEVICE_OBJECT *v7; // rcx
  int DevicePropertyString; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS v12; // eax
  PVOID v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _WORD *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  int MiniportInterface; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  NTSTATUS v27; // eax
  int v28; // eax
  SIZE_T v29; // rdi
  PVOID PoolWithTag; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  struct _DEVICE_OBJECT *v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rax
  size_t v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  int Size; // [rsp+20h] [rbp-58h]
  ULONG Type; // [rsp+40h] [rbp-38h] BYREF
  void *ThreadHandle; // [rsp+48h] [rbp-30h] BYREF
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+58h] [rbp-20h] BYREF
  char v51; // [rsp+C0h] [rbp+48h] BYREF
  char v52; // [rsp+C8h] [rbp+50h] BYREF
  ULONG RequiredSize; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v54; // [rsp+D8h] [rbp+60h]

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  v3 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = &DpiFdoHandleQueryDeviceRelations;
  v54 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (__int64)&unk_1C003CEE8,
    0,
    Size);
  g_bCreateParavirtualizedGpu = v54 & 1;
  g_VgpuReplaceWarp = (v54 >> 3) & 1;
  g_ForceSecureVirtualMachine = (v54 >> 2) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_VgpuUseHostDriverStore = (v54 >> 5) & 1;
  if ( v6 )
  {
    v29 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v29, 0x74727044u);
    *(_QWORD *)(v1 + 2592) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_62;
    memset(PoolWithTag, 0, (unsigned int)v29);
    v4 = 1;
    **(_QWORD **)(v1 + 2592) = StartContext;
    *(_DWORD *)(v1 + 2600) = 1;
  }
  else
  {
    v4 = 1;
  }
  v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3348) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v7,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)&RequiredSize);
  v10 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
  {
LABEL_63:
    v32 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v32 + 24) = v10;
    WdLogEvent5_WdError(v32);
    goto LABEL_27;
  }
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4616,
    (__int64)&RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4624),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4632),
    &RequiredSize,
    &Type);
  v11 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v51 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v11, &DEVPKEY_Device_InstallInProgress, &v51) >= 0 && v51 )
  {
    v33 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v52 = 0;
    IoSetDevicePropertyData(v33, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, &v52);
  }
  if ( !*(_BYTE *)(v1 + 1139)
    || !*(_BYTE *)(v1 + 480)
    || (MiniportInterface = DpiQueryMiniportInterface(
                              (_DWORD)StartContext,
                              (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                              56,
                              1),
        v10 = MiniportInterface,
        MiniportInterface >= 0)
    && *(_QWORD *)(v1 + 976)
    && *(_QWORD *)(v1 + 984)
    && *(_QWORD *)(v1 + 992) )
  {
    v12 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
    v10 = v12;
    if ( v12 >= 0 )
    {
      v13 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
      *(_QWORD *)(v1 + 2616) = v13;
      if ( v13 )
      {
        *(_WORD *)(v1 + 2610) = SymbolicLinkName.MaximumLength;
        *(_WORD *)(v1 + 2608) = SymbolicLinkName.Length;
        RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2608), &SymbolicLinkName);
        RtlFreeUnicodeString(&SymbolicLinkName);
        *(_BYTE *)(v1 + 481) = 0;
        *(_BYTE *)(v1 + 483) = 0;
        *(_QWORD *)(v1 + 488) = 0LL;
        if ( !*(_BYTE *)(v1 + 480) )
        {
          KeInitializeEvent((PRKEVENT)(v1 + 3760), SynchronizationEvent, 0);
          *(_QWORD *)(v1 + 3800) = v1 + 3792;
          *(_QWORD *)(v1 + 3792) = v1 + 3792;
          KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3904));
          KeInitializeEvent((PRKEVENT)(v1 + 3920), NotificationEvent, 1u);
          KeInitializeEvent((PRKEVENT)(v1 + 3944), NotificationEvent, 1u);
          *(_BYTE *)(v1 + 483) = 1;
          *(_QWORD *)(v1 + 3968) = 0LL;
          *(_DWORD *)(v1 + 3912) = 0;
          memset((void *)(v1 + 3816), 0, 0x58uLL);
          *(_DWORD *)(v1 + 3832) = 1953656900;
          *(_DWORD *)(v1 + 3836) = 11;
          *(_DWORD *)(v1 + 3856) = 64;
          KeInitializeTimer((PKTIMER)(v1 + 3976));
          KeInitializeDpc((PRKDPC)(v1 + 4040), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
          v27 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
          v10 = v27;
          if ( v27 < 0 )
            goto LABEL_63;
          v10 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
          *(_QWORD *)(v1 + 3752) = Object;
          ZwClose(ThreadHandle);
          if ( (int)v10 < 0 )
            goto LABEL_63;
        }
        KeInitializeEvent((PRKEVENT)(v1 + 3528), SynchronizationEvent, 0);
        *(_QWORD *)(v1 + 3336) = v1 + 3328;
        *(_QWORD *)(v1 + 3328) = v1 + 3328;
        ExInitializeResourceLite((PERESOURCE)(v1 + 3168));
        v3 = 1;
        *(_QWORD *)(v1 + 3368) = v1 + 3360;
        *(_QWORD *)(v1 + 3360) = v1 + 3360;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3352));
        *(_QWORD *)(v1 + 5064) = v1 + 5056;
        *(_QWORD *)(v1 + 5056) = v1 + 5056;
        KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5072));
        IoCsqInitialize(
          (PIO_CSQ)(v1 + 4992),
          (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
          (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
          (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
          (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
          (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
          (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
        *(_QWORD *)(v1 + 5152) = 0LL;
        *(_QWORD *)(v1 + 5160) = 0LL;
        KeInitializeEvent((PRKEVENT)(v1 + 5168), NotificationEvent, 0);
        *(_DWORD *)(v1 + 5136) = 1;
        *(_DWORD *)(v1 + 5104) = 0;
        KeInitializeMutex((PRKMUTEX)(v1 + 3272), 0);
        KeInitializeMutex((PRKMUTEX)(v1 + 3416), 0);
        *(_QWORD *)(v1 + 3488) = v1 + 3480;
        *(_QWORD *)(v1 + 3480) = v1 + 3480;
        *(_QWORD *)(v1 + 3512) = v1 + 3504;
        *(_QWORD *)(v1 + 3504) = v1 + 3504;
        *(_QWORD *)(v1 + 3408) = v1 + 3400;
        *(_QWORD *)(v1 + 3400) = v1 + 3400;
        ExInitializeResourceLite((PERESOURCE)(v1 + 3624));
        LODWORD(v10) = DpiFdoInitializeAdapterUniqueString(StartContext);
        if ( (int)v10 < 0 )
        {
LABEL_98:
          ExDeleteResourceLite((PERESOURCE)(v1 + 3624));
          ExDeleteResourceLite((PERESOURCE)(v1 + 3168));
          v4 = 0;
          goto LABEL_99;
        }
        v5 = 1;
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2736);
        DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2784);
        DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
        v15 = *(_QWORD *)(v1 + 40);
        *(_DWORD *)(v1 + 2880) = 0;
        if ( *(_BYTE *)(v15 + 133) && !*(_BYTE *)(v1 + 1143) )
          goto LABEL_19;
        v16 = (_WORD *)(v1 + 2888);
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
        {
          if ( *v16 == 128 )
          {
            v28 = 4;
            if ( *(_WORD *)(v1 + 2890) == 4
              && *(_QWORD *)(v1 + 2920)
              && *(_QWORD *)(v1 + 2928)
              && *(_QWORD *)(v1 + 2936)
              && *(_QWORD *)(v1 + 2944)
              && *(_QWORD *)(v1 + 2952)
              && *(_QWORD *)(v1 + 2960)
              && *(_QWORD *)(v1 + 2968)
              && *(_QWORD *)(v1 + 2976)
              && *(_QWORD *)(v1 + 2984)
              && *(_QWORD *)(v1 + 2992)
              && *(_QWORD *)(v1 + 3000)
              && *(_QWORD *)(v1 + 3008) )
            {
              goto LABEL_52;
            }
          }
          LODWORD(v10) = -1073741811;
          v35 = WdLogNewEntry5_WdError(v17);
          *(_QWORD *)(v35 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v35);
          v36 = 128LL;
        }
        else
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
          {
            if ( (int)DpiQueryMiniportInterface(
                        (_DWORD)StartContext,
                        (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP,
                        120,
                        2) < 0 )
            {
              if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
                *(_DWORD *)(v1 + 2880) = 1;
LABEL_19:
              *(_DWORD *)(v1 + 3088) = -1;
              if ( !byte_1C0060856 || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u )
                goto LABEL_24;
              if ( *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1143) )
              {
LABEL_26:
                memset((void *)(StartContext[8] + 4184LL), 0, 0x188uLL);
                goto LABEL_27;
              }
              v16 = (_WORD *)(v1 + 3016);
              if ( (int)DpiQueryMiniportInterface(
                          (_DWORD)StartContext,
                          (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                          64,
                          1) < 0 )
              {
                memset((void *)(v1 + 3016), 0, 0x40uLL);
                goto LABEL_24;
              }
              if ( *v16 >= 0x40u
                && *(_WORD *)(v1 + 3018) == 1
                && *(_QWORD *)(v1 + 3048)
                && *(_QWORD *)(v1 + 3056)
                && *(_QWORD *)(v1 + 3064)
                && *(_QWORD *)(v1 + 3072) )
              {
LABEL_24:
                if ( *(_BYTE *)(v1 + 1143) )
                {
                  *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
                  *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
                }
                goto LABEL_26;
              }
              LODWORD(v10) = -1073741811;
              v37 = WdLogNewEntry5_WdError(v20);
              *(_QWORD *)(v37 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v37);
              v36 = 64LL;
              goto LABEL_81;
            }
            if ( *v16 != 120
              || (v28 = 2, *(_WORD *)(v1 + 2890) != 2)
              || !*(_QWORD *)(v1 + 2920)
              || !*(_QWORD *)(v1 + 2928)
              || !*(_QWORD *)(v1 + 2936)
              || !*(_QWORD *)(v1 + 2944)
              || !*(_QWORD *)(v1 + 2952)
              || !*(_QWORD *)(v1 + 2960)
              || !*(_QWORD *)(v1 + 2968)
              || !*(_QWORD *)(v1 + 2976)
              || !*(_QWORD *)(v1 + 2984)
              || !*(_QWORD *)(v1 + 3000) )
            {
              LODWORD(v10) = -1073741811;
              v39 = WdLogNewEntry5_WdError(v19);
              *(_QWORD *)(v39 + 24) = -1073741811LL;
              WdLogEvent5_WdError(v39);
              v36 = 120LL;
              goto LABEL_81;
            }
LABEL_52:
            *(_DWORD *)(v1 + 2880) = v28;
            goto LABEL_19;
          }
          if ( *v16 == 112 )
          {
            v28 = 3;
            if ( *(_WORD *)(v1 + 2890) == 3
              && *(_QWORD *)(v1 + 2920)
              && *(_QWORD *)(v1 + 2928)
              && *(_QWORD *)(v1 + 2936)
              && *(_QWORD *)(v1 + 2944)
              && *(_QWORD *)(v1 + 2952)
              && *(_QWORD *)(v1 + 2960)
              && *(_QWORD *)(v1 + 2968)
              && *(_QWORD *)(v1 + 2976)
              && *(_QWORD *)(v1 + 2984)
              && *(_QWORD *)(v1 + 2992) )
            {
              goto LABEL_52;
            }
          }
          LODWORD(v10) = -1073741811;
          v38 = WdLogNewEntry5_WdError(v18);
          *(_QWORD *)(v38 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v38);
          v36 = 112LL;
        }
LABEL_81:
        memset(v16, 0, v36);
        goto LABEL_98;
      }
LABEL_62:
      LODWORD(v10) = -1073741801;
      v31 = WdLogNewEntry5_WdLowResource(v14);
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v31);
      goto LABEL_99;
    }
    goto LABEL_63;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v24, v26);
  v34[3] = 275LL;
  v34[4] = 21LL;
  v34[5] = v10;
  WdLogEvent5_WdCriticalError(v34);
LABEL_27:
  v5 = v3;
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_98;
LABEL_99:
  if ( *(_QWORD *)(v1 + 3752) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v21, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4576));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4592));
  }
  v40 = *(void **)(v1 + 3160);
  *(_DWORD *)(v1 + 3144) = 0;
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(v1 + 3160) = 0LL;
  }
  v41 = *(void **)(v1 + 3152);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(v1 + 3152) = 0LL;
  }
  v42 = *(void **)(v1 + 4608);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(v1 + 4608) = 0LL;
  }
  v43 = *(void **)(v1 + 4616);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *(_QWORD *)(v1 + 4616) = 0LL;
  }
  v44 = *(void **)(v1 + 2592);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(v1 + 2592) = 0LL;
  }
  v45 = *(void **)(v1 + 2616);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(v1 + 2616) = 0LL;
  }
  return (unsigned int)v10;
}
