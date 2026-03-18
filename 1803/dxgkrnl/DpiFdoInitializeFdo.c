/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C01F6A34
 * Callers:
 *     DpiAddDevice @ 0x1C0203030 (DpiAddDevice.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00D6DE8 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C01F1AF8 (DpiRequestIoPowerState.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01F6720 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01FDA64 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C01FDC14 (DpiGetDevicePropertyString.c)
 *     DpiQueryBusInterface @ 0x1C01FE1B0 (DpiQueryBusInterface.c)
 *     DpiQueryMiniportInterface @ 0x1C01FE2B8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // si
  char v4; // r14
  char v5; // r12
  int v6; // eax
  SIZE_T v7; // rdi
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  struct _DEVICE_OBJECT *v13; // rcx
  int DevicePropertyString; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _DEVICE_OBJECT *v17; // rcx
  struct _DEVICE_OBJECT *v18; // rcx
  int MiniportInterface; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  PVOID v23; // rax
  NTSTATUS v24; // eax
  __int64 v25; // rax
  _WORD *v26; // r14
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  size_t v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  void *v37; // rcx
  void *v38; // rcx
  void *v39; // rcx
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  int Size; // [rsp+28h] [rbp-E0h]
  int Sizea; // [rsp+28h] [rbp-E0h]
  int Sizec; // [rsp+28h] [rbp-E0h]
  int Sizeb; // [rsp+28h] [rbp-E0h]
  char v48; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v49[3]; // [rsp+49h] [rbp-BFh] BYREF
  unsigned int v50; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG RequiredSize[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+58h] [rbp-B0h] BYREF
  ULONG Type[2]; // [rsp+68h] [rbp-A0h] BYREF
  void *ThreadHandle; // [rsp+70h] [rbp-98h] BYREF
  PVOID Object; // [rsp+78h] [rbp-90h] BYREF
  __int64 v56; // [rsp+88h] [rbp-80h] BYREF
  int v57; // [rsp+90h] [rbp-78h]
  const wchar_t *v58; // [rsp+98h] [rbp-70h]
  unsigned int *v59; // [rsp+A0h] [rbp-68h]
  int v60; // [rsp+A8h] [rbp-60h]
  unsigned int *v61; // [rsp+B0h] [rbp-58h]
  int v62; // [rsp+B8h] [rbp-50h]
  __int64 v63; // [rsp+C0h] [rbp-48h]
  int v64; // [rsp+C8h] [rbp-40h]
  const wchar_t *v65; // [rsp+D0h] [rbp-38h]
  unsigned int *v66; // [rsp+D8h] [rbp-30h]
  int v67; // [rsp+E0h] [rbp-28h]
  unsigned int *v68; // [rsp+E8h] [rbp-20h]
  int v69; // [rsp+F0h] [rbp-18h]
  __int64 v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+100h] [rbp-8h]
  _BYTE v72[40]; // [rsp+108h] [rbp+0h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  v3 = 0;
  *(_QWORD *)(v1 + 112) = DpiFdoDispatchInternalIoctl;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = DpiFdoHandleQueryDeviceRelations;
  v50 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005BF44,
    1,
    Size);
  v56 = 0LL;
  v57 = 288;
  v62 = 4;
  v60 = 67108868;
  v58 = L"GpuVirtualizationFlags";
  v59 = &v50;
  v61 = &v50;
  v65 = L"DisableVaBackedVm";
  v64 = 288;
  v67 = 67108868;
  v69 = 4;
  v66 = &g_VgpuDisableVaBackedVm;
  v68 = &g_VgpuDisableVaBackedVm;
  v63 = 0LL;
  v70 = 0LL;
  v71 = 0;
  memset(v72, 0, sizeof(v72));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v56, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v50 & 1;
  g_VgpuReplaceWarp = (v50 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v50 >> 2) & 1;
  if ( v6 )
  {
    v7 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
    *(_QWORD *)(v1 + 2592) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      LODWORD(v10) = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
      goto LABEL_93;
    }
    memset(PoolWithTag, 0, v7);
    v4 = 1;
    **(_QWORD **)(v1 + 2592) = StartContext;
    *(_DWORD *)(v1 + 2600) = 1;
  }
  else
  {
    v4 = 1;
  }
  v13 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3348) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v13,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (__int64)RequiredSize);
  v10 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_7;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v1 + 4688,
    (__int64)RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4696),
    RequiredSize,
    Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4704),
    RequiredSize,
    Type);
  v17 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v48 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v17, &DEVPKEY_Device_InstallInProgress, &v48) >= 0 && v48 )
  {
    v18 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v49[0] = 0;
    IoSetDevicePropertyData(v18, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, v49);
  }
  if ( *(_BYTE *)(v1 + 1139) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1,
                            Sizea,
                            v1 + 944);
      v10 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20);
        v21[3] = 275LL;
        v21[4] = 21LL;
        v21[5] = v10;
        WdLogEvent5_WdCriticalError(v21);
        goto LABEL_90;
      }
    }
  }
  v22 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v10 = v22;
  if ( v22 < 0 )
    goto LABEL_7;
  v23 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 2616) = v23;
  if ( !v23 )
    goto LABEL_3;
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
    v24 = PsCreateSystemThread(
            &ThreadHandle,
            0x1FFFFFu,
            0LL,
            0LL,
            0LL,
            (PKSTART_ROUTINE)DpiPowerArbiterThread,
            StartContext);
    v10 = v24;
    if ( v24 < 0
      || (v10 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL),
          *(_QWORD *)(v1 + 3752) = Object,
          ZwClose(ThreadHandle),
          (int)v10 < 0) )
    {
LABEL_7:
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v10;
      WdLogEvent5_WdError(v16);
      goto LABEL_90;
    }
  }
  KeInitializeEvent((PRKEVENT)(v1 + 3528), SynchronizationEvent, 0);
  *(_QWORD *)(v1 + 3336) = v1 + 3328;
  *(_QWORD *)(v1 + 3328) = v1 + 3328;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3168));
  v3 = 1;
  *(_QWORD *)(v1 + 3368) = v1 + 3360;
  *(_QWORD *)(v1 + 3360) = v1 + 3360;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3352));
  *(_QWORD *)(v1 + 5136) = v1 + 5128;
  *(_QWORD *)(v1 + 5128) = v1 + 5128;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5144));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5064),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5216) = 0LL;
  *(_QWORD *)(v1 + 5224) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5232), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5208) = 1;
  *(_DWORD *)(v1 + 5176) = 0;
  *(_QWORD *)(v1 + 5312) = v1 + 5304;
  *(_QWORD *)(v1 + 5304) = v1 + 5304;
  *(_QWORD *)(v1 + 5376) = 0LL;
  *(_DWORD *)(v1 + 5320) = 1;
  *(_QWORD *)(v1 + 5328) = 0LL;
  *(_DWORD *)(v1 + 5336) = 0;
  KeInitializeEvent((PRKEVENT)(v1 + 5344), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3272), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3416), 0);
  *(_QWORD *)(v1 + 3488) = v1 + 3480;
  *(_QWORD *)(v1 + 3480) = v1 + 3480;
  *(_QWORD *)(v1 + 3512) = v1 + 3504;
  *(_QWORD *)(v1 + 3504) = v1 + 3504;
  *(_QWORD *)(v1 + 3408) = v1 + 3400;
  *(_QWORD *)(v1 + 3400) = v1 + 3400;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3624));
  LODWORD(v10) = DpiFdoInitializeAdapterUniqueString((__int64)StartContext);
  if ( (int)v10 < 0 )
  {
LABEL_92:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3624));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3168));
    v4 = 0;
    goto LABEL_93;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2736);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2784);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1, Sizec, v1 + 2832);
  v25 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 2880) = 0;
  if ( !*(_BYTE *)(v25 + 133) || *(_BYTE *)(v1 + 1143) )
  {
    v26 = (_WORD *)(v1 + 2888);
    if ( (int)DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DEVINTERFACE_OPM_3,
                128,
                4,
                Sizeb,
                v1 + 2888) >= 0 )
    {
      if ( *v26 != 128
        || (v28 = 4, *(_WORD *)(v1 + 2890) != 4)
        || !*(_QWORD *)(v1 + 2920)
        || !*(_QWORD *)(v1 + 2928)
        || !*(_QWORD *)(v1 + 2936)
        || !*(_QWORD *)(v1 + 2944)
        || !*(_QWORD *)(v1 + 2952)
        || !*(_QWORD *)(v1 + 2960)
        || !*(_QWORD *)(v1 + 2968)
        || !*(_QWORD *)(v1 + 2976)
        || !*(_QWORD *)(v1 + 2984)
        || !*(_QWORD *)(v1 + 2992)
        || !*(_QWORD *)(v1 + 3000)
        || !*(_QWORD *)(v1 + 3008) )
      {
        LODWORD(v10) = -1073741811;
        v32 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v32 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v32);
        v31 = 128LL;
        goto LABEL_55;
      }
      goto LABEL_41;
    }
    if ( (int)DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DEVINTERFACE_OPM_2,
                112,
                3,
                Sizeb,
                v1 + 2888) >= 0 )
    {
      if ( *v26 != 112
        || (v28 = 3, *(_WORD *)(v1 + 2890) != 3)
        || !*(_QWORD *)(v1 + 2920)
        || !*(_QWORD *)(v1 + 2928)
        || !*(_QWORD *)(v1 + 2936)
        || !*(_QWORD *)(v1 + 2944)
        || !*(_QWORD *)(v1 + 2952)
        || !*(_QWORD *)(v1 + 2960)
        || !*(_QWORD *)(v1 + 2968)
        || !*(_QWORD *)(v1 + 2976)
        || !*(_QWORD *)(v1 + 2984)
        || !*(_QWORD *)(v1 + 2992) )
      {
        LODWORD(v10) = -1073741811;
        v34 = WdLogNewEntry5_WdError(v33);
        *(_QWORD *)(v34 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v34);
        v31 = 112LL;
        goto LABEL_55;
      }
      goto LABEL_41;
    }
    if ( (int)DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP,
                120,
                2,
                Sizeb,
                v1 + 2888) >= 0 )
    {
      if ( *v26 != 120
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
        v36 = WdLogNewEntry5_WdError(v35);
        *(_QWORD *)(v36 + 24) = -1073741811LL;
        WdLogEvent5_WdError(v36);
        v31 = 120LL;
        goto LABEL_55;
      }
LABEL_41:
      *(_DWORD *)(v1 + 2880) = v28;
      goto LABEL_42;
    }
    if ( (int)DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DEVINTERFACE_OPM,
                104,
                1,
                Sizeb,
                v1 + 2888) >= 0 )
      *(_DWORD *)(v1 + 2880) = 1;
  }
LABEL_42:
  *(_DWORD *)(v1 + 3088) = -1;
  if ( byte_1C007A756
    && *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) >= 0x4000u
    && (!*(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) || *(_BYTE *)(v1 + 1143)) )
  {
    v26 = (_WORD *)(v1 + 3016);
    if ( (int)DpiQueryMiniportInterface(
                (_DWORD)StartContext,
                (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY,
                64,
                1,
                Sizeb,
                v1 + 3016) < 0 )
    {
      memset((void *)(v1 + 3016), 0, 0x40uLL);
    }
    else if ( *v26 < 0x40u
           || *(_WORD *)(v1 + 3018) != 1
           || !*(_QWORD *)(v1 + 3048)
           || !*(_QWORD *)(v1 + 3056)
           || !*(_QWORD *)(v1 + 3064)
           || !*(_QWORD *)(v1 + 3072) )
    {
      LODWORD(v10) = -1073741811;
      v30 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v30 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v30);
      v31 = 64LL;
LABEL_55:
      memset(v26, 0, v31);
      goto LABEL_92;
    }
  }
  *(_QWORD *)(v1 + 5384) = 0LL;
  if ( *(_BYTE *)(v1 + 1143) )
  {
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4184LL), 0, 0x1D0uLL);
LABEL_90:
  v5 = v3;
  if ( (int)v10 >= 0 )
    return (unsigned int)v10;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_92;
LABEL_93:
  if ( *(_QWORD *)(v1 + 3752) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v12, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4648));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4664));
  }
  v37 = *(void **)(v1 + 3160);
  *(_DWORD *)(v1 + 3144) = 0;
  if ( v37 )
  {
    ExFreePoolWithTag(v37, 0);
    *(_QWORD *)(v1 + 3160) = 0LL;
  }
  v38 = *(void **)(v1 + 3152);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(v1 + 3152) = 0LL;
  }
  v39 = *(void **)(v1 + 4680);
  if ( v39 )
  {
    ExFreePoolWithTag(v39, 0);
    *(_QWORD *)(v1 + 4680) = 0LL;
  }
  v40 = *(void **)(v1 + 4688);
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(v1 + 4688) = 0LL;
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
  return (unsigned int)v10;
}
