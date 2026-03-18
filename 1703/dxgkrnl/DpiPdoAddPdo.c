/*
 * XREFs of DpiPdoAddPdo @ 0x1C0118D50
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0119220 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C003DA1C (DpiSignalVideoOutputCreateCompletion.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C01054A0 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105AB0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0118B48 (DpiPdoGetDeviceDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C011A5A4 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoRemovePdo @ 0x1C01CEAF0 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01D28EC (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  void *v8; // r15
  _QWORD **v11; // rdx
  char v13; // bl
  PVOID DeviceExtension; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int DeviceDescriptor; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  PDEVICE_OBJECT v25; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v27; // rcx
  NTSTATUS v28; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v30; // rax
  unsigned __int8 v31; // al
  int PhysicalMonitor; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  const void *v36; // rdx
  __int64 v37; // rcx
  unsigned int v38; // eax
  SIZE_T v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rcx
  PVOID *v51; // rax
  struct _IO_WORKITEM *v52; // rcx
  void *v53; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  int DefaultSDDLString; // [rsp+30h] [rbp-40h]
  char v56; // [rsp+50h] [rbp-20h]
  char v57; // [rsp+51h] [rbp-1Fh]
  char v58; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int128 v60; // [rsp+60h] [rbp-10h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  DeviceObject = 0LL;
  v60 = 0uLL;
  v11 = *(_QWORD ***)(v7 + 3456);
  v13 = 0;
  v56 = 0;
  DeviceExtension = 0LL;
  v58 = 0;
  v15 = *v11;
  v16 = v11;
  v57 = 0;
  if ( *v11 != v11 )
  {
    while ( 1 )
    {
      DeviceExtension = v16;
      if ( *((_DWORD *)v16 + 126) == *(_DWORD *)(a2 + 24) )
        break;
      v16 = v15;
      v15 = (_QWORD *)*v15;
      if ( v15 == v11 )
        goto LABEL_2;
    }
    v13 = 1;
    DeviceObject = (PDEVICE_OBJECT)v16[3];
    if ( !a5 )
    {
      LODWORD(v19) = 0x40000000;
      v40 = WdLogNewEntry5_WdEvent(v15);
      *(_QWORD *)(v40 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v40);
      goto LABEL_23;
    }
  }
LABEL_2:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(a1, (int *)a2, a3, a4, a5, a6, DefaultSDDLString, &v60);
  LODWORD(v19) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v41 = WdLogNewEntry5_WdEvent(v18);
    *(_QWORD *)(v41 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v41);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_21;
  }
  else if ( DeviceDescriptor == 259 )
  {
    v8 = (void *)*((_QWORD *)&v60 + 1);
    goto LABEL_25;
  }
  v8 = (void *)*((_QWORD *)&v60 + 1);
  if ( v13 != 1 )
  {
    v20 = a1;
    goto LABEL_6;
  }
  if ( *((_QWORD *)&v60 + 1) == *((_QWORD *)DeviceExtension + 116) )
    goto LABEL_38;
  if ( !IsInternalVideoOutput(*(_DWORD *)(a2 + 4)) )
    goto LABEL_34;
  if ( !v8 )
  {
    if ( !v36 )
    {
LABEL_34:
      if ( !v8 )
        goto LABEL_46;
      goto LABEL_35;
    }
LABEL_38:
    LODWORD(v19) = 0x40000000;
    goto LABEL_23;
  }
LABEL_35:
  if ( v36 )
  {
    v38 = *((_DWORD *)DeviceExtension + 231);
    if ( DWORD1(v60) == v38 )
    {
      v39 = RtlCompareMemory(v8, v36, v38);
      v37 = DWORD1(v60);
      if ( v39 == DWORD1(v60) )
        goto LABEL_38;
    }
  }
LABEL_46:
  *((_BYTE *)DeviceExtension + 511) = 1;
  v42 = WdLogNewEntry5_WdEvent(v37);
  *(_QWORD *)(v42 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v42);
  v20 = a1;
  LOBYTE(v43) = 1;
  DpiPdoRemovePdo(a1, a2, v43, a7);
LABEL_6:
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v22 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
          0x408u,
          0LL,
          0x1Cu,
          0x180u,
          Exclusive,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v19 = v22;
  if ( v22 < 0 )
    goto LABEL_47;
  v56 = 1;
  DeviceExtension = DeviceObject->DeviceExtension;
  *((_DWORD *)DeviceExtension + 4) = 1953656900;
  *((_DWORD *)DeviceExtension + 5) = 5;
  v25 = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = v20;
  *((_QWORD *)DeviceExtension + 3) = v25;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
  *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
  *((_BYTE *)DeviceExtension + 56) = 1;
  *((_DWORD *)DeviceExtension + 70) = 1;
  LODWORD(v25) = *(_DWORD *)(a2 + 68);
  *((_DWORD *)DeviceExtension + 71) = (_DWORD)v25;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v25 != 1);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[26] = 1;
    v28 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v19 = v28;
    if ( v28 < 0 )
      goto LABEL_47;
    v58 = 1;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    *((_QWORD *)DeviceExtension + 119) = WorkItem;
    if ( WorkItem )
    {
      *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
      *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
      *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
      *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
      *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
      *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
      *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
      *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
      *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
      *((_QWORD *)DeviceExtension + 117) = a2;
      *((_DWORD *)DeviceExtension + 124) = *(_DWORD *)a2;
      *((_DWORD *)DeviceExtension + 125) = *(_DWORD *)(a2 + 20);
      *((_DWORD *)DeviceExtension + 126) = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *((_DWORD *)DeviceExtension + 244) = a3;
      *((_DWORD *)DeviceExtension + 245) = 0;
      KeWaitForSingleObject((PVOID)(v7 + 3248), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v7 + 3248), 0);
      v30 = *(_QWORD **)(v7 + 3464);
      if ( *v30 != v7 + 3456 )
        __fastfail(3u);
      *(_QWORD *)DeviceExtension = v7 + 3456;
      *((_QWORD *)DeviceExtension + 1) = v30;
      *v30 = DeviceExtension;
      *(_QWORD *)(v7 + 3464) = DeviceExtension;
      ++*(_DWORD *)(v7 + 3472);
      v57 = 1;
      if ( *((_DWORD *)DeviceExtension + 124) != 1 )
        goto LABEL_19;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
      {
        v46 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3704), *((_DWORD *)DeviceExtension + 126), a3);
        v19 = v46;
        if ( v46 >= 0 )
          goto LABEL_18;
        v49 = WdLogNewEntry5_WdError(v48, v47);
        *(_QWORD *)(v49 + 24) = v19;
        WdLogEvent5_WdError(v49);
      }
      if ( (int)v19 < 0 )
        goto LABEL_22;
LABEL_18:
      v31 = IsInternalVideoOutput(*(_DWORD *)(a2 + 4));
      PhysicalMonitor = MonitorCreatePhysicalMonitor(
                          *(DXGADAPTER **)(v7 + 3704),
                          *((_DWORD *)DeviceExtension + 126),
                          DeviceObject,
                          v31,
                          1u,
                          a7);
      v19 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
LABEL_19:
        LODWORD(v19) = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)&v60);
        if ( (int)v19 >= 0 )
        {
LABEL_20:
          DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 56));
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          v34 = WdLogNewEntry5_WdEvent(v33);
          *(_QWORD *)(v34 + 24) = DeviceObject;
          WdLogEvent5_WdEvent(v34);
LABEL_21:
          v8 = (void *)*((_QWORD *)&v60 + 1);
          goto LABEL_22;
        }
        if ( *((_DWORD *)DeviceExtension + 124) == 1 )
        {
          LODWORD(v19) = 0;
          goto LABEL_20;
        }
LABEL_22:
        if ( (_DWORD)v19 == 259 )
          goto LABEL_25;
        goto LABEL_23;
      }
LABEL_47:
      v44 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v44 + 24) = v19;
      WdLogEvent5_WdError(v44);
      goto LABEL_22;
    }
  }
  LODWORD(v19) = -1073741801;
  v45 = WdLogNewEntry5_WdLowResource(v27);
  *(_QWORD *)(v45 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v45);
LABEL_23:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3248), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3248), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_25:
  if ( (int)v19 < 0 && v56 == 1 )
  {
    if ( v57 == 1 )
    {
      v50 = *(_QWORD **)DeviceExtension;
      v51 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension || *v51 != DeviceExtension )
        __fastfail(3u);
      *v51 = v50;
      v50[1] = v51;
      --*(_DWORD *)(v7 + 3472);
    }
    KeWaitForSingleObject((PVOID)(v7 + 3248), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v7 + 3248), 0);
    *((_QWORD *)DeviceExtension + 117) = 0LL;
    if ( *((_QWORD *)DeviceExtension + 121) )
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
    if ( v58 == 1 )
      ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v52 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
    if ( v52 )
      IoFreeWorkItem(v52);
    v53 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v53 )
    {
      ExFreePoolWithTag(v53, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v19;
}
