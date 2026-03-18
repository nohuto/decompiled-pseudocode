/*
 * XREFs of DpiPdoAddPdo @ 0x1C0107994
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C002E5AC (DpiSignalVideoOutputCreateCompletion.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0104ED8 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0105044 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0105414 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0107E68 (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C010E7DC (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoRemovePdo @ 0x1C01E8F0C (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C01EE220 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        BOOLEAN a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  PVOID v8; // r15
  int v10; // r11d
  unsigned int *v11; // rdx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v12; // r12d
  char v14; // bl
  unsigned int *DeviceExtension; // rdi
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  int DeviceDescriptor; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  __int64 v24; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v26; // eax
  __int64 v27; // rcx
  PDEVICE_OBJECT v28; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v30; // rcx
  NTSTATUS v31; // eax
  PIO_WORKITEM WorkItem; // rax
  unsigned int **v33; // rax
  unsigned __int8 v34; // al
  int PhysicalMonitor; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  char v41; // r12
  __int64 v43; // r9
  const void *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // eax
  SIZE_T v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rax
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rcx
  __int64 v58; // rax
  _QWORD *v59; // rax
  PVOID *v60; // rcx
  struct _IO_WORKITEM *v61; // rcx
  void *v62; // rcx
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v64; // [rsp+50h] [rbp-20h]
  char v65; // [rsp+51h] [rbp-1Fh]
  char v66; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int64 v68; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h]

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  DeviceObject = 0LL;
  v68 = 0LL;
  v10 = a1;
  P = 0LL;
  v11 = *(unsigned int **)(v7 + 3480);
  v12 = (int)a3;
  LOBYTE(a3) = a5;
  v14 = 0;
  v65 = 0;
  DeviceExtension = 0LL;
  v64 = 0;
  v16 = *(unsigned int **)v11;
  v17 = v11;
  v66 = 0;
  if ( *(unsigned int **)v11 != v11 )
  {
    v43 = *(unsigned int *)(a2 + 24);
    while ( 1 )
    {
      DeviceExtension = v17;
      if ( v17[126] == (_DWORD)v43 )
        break;
      v17 = v16;
      v16 = *(unsigned int **)v16;
      if ( v16 == v11 )
        goto LABEL_2;
    }
    v14 = 1;
    DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)v17 + 3);
    if ( !a5 )
    {
      LODWORD(v23) = 0x40000000;
      v50 = WdLogNewEntry5_WdEvent(v16, v11, a3, v43);
      *(_QWORD *)(v50 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v50);
      v41 = 0;
      goto LABEL_23;
    }
  }
LABEL_2:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(v10, a2, v12, a4, a5, a6);
  LODWORD(v23) = DeviceDescriptor;
  if ( DeviceDescriptor < 0 )
  {
    v51 = WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    *(_QWORD *)(v51 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v51);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_21;
  }
  else if ( DeviceDescriptor == 259 )
  {
    v8 = P;
    v41 = 0;
    goto LABEL_25;
  }
  v8 = P;
  if ( v14 != 1 )
  {
    v24 = a1;
    goto LABEL_6;
  }
  if ( P == *((PVOID *)DeviceExtension + 116) )
    goto LABEL_39;
  if ( !IsInternalVideoOutput(*(_DWORD *)(a2 + 4)) )
    goto LABEL_35;
  if ( !P )
  {
    if ( !v44 )
    {
LABEL_35:
      if ( !P )
        goto LABEL_48;
      goto LABEL_36;
    }
LABEL_39:
    LODWORD(v23) = 0x40000000;
    goto LABEL_40;
  }
LABEL_36:
  if ( v44 )
  {
    v48 = DeviceExtension[231];
    if ( HIDWORD(v68) == v48 )
    {
      v49 = RtlCompareMemory(P, v44, v48);
      v45 = HIDWORD(v68);
      if ( v49 == HIDWORD(v68) )
        goto LABEL_39;
    }
  }
LABEL_48:
  *((_BYTE *)DeviceExtension + 511) = 1;
  v52 = WdLogNewEntry5_WdEvent(v45, v44, v46, v47);
  *(_QWORD *)(v52 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v52);
  v24 = a1;
  LOBYTE(v53) = 1;
  DpiPdoRemovePdo(a1, a2, v53, a7);
LABEL_6:
  DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
  if ( *(_DWORD *)a2 != 1 )
    DeviceClassGuid = &GUID_SD_PDO;
  v26 = WdmlibIoCreateDeviceSecure(
          *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
          0x408u,
          0LL,
          0x1Cu,
          0x180u,
          Exclusive,
          &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
          DeviceClassGuid,
          &DeviceObject);
  v23 = v26;
  if ( v26 < 0 )
    goto LABEL_49;
  v65 = 1;
  DeviceExtension = (unsigned int *)DeviceObject->DeviceExtension;
  DeviceExtension[4] = 1953656900;
  DeviceExtension[5] = 5;
  v28 = DeviceObject;
  *((_QWORD *)DeviceExtension + 4) = v24;
  *((_QWORD *)DeviceExtension + 3) = v28;
  *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
  *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
  *((_BYTE *)DeviceExtension + 56) = 1;
  DeviceExtension[70] = 1;
  LODWORD(v28) = *(_DWORD *)(a2 + 68);
  DeviceExtension[71] = (unsigned int)v28;
  KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v28 != 1);
  KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, DeviceExtension[71] == 1);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
  *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[26] = 1;
    v31 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v23 = v31;
    if ( v31 < 0 )
      goto LABEL_49;
    v64 = 1;
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
      DeviceExtension[124] = *(_DWORD *)a2;
      DeviceExtension[125] = *(_DWORD *)(a2 + 20);
      DeviceExtension[126] = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( v12 != D3DKMDT_VOT_UNINITIALIZED )
        DeviceExtension[244] = v12;
      DeviceExtension[245] = 0;
      KeWaitForSingleObject((PVOID)(v7 + 3272), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v7 + 3272), 0);
      v33 = *(unsigned int ***)(v7 + 3488);
      if ( *v33 != (unsigned int *)(v7 + 3480) )
        __fastfail(3u);
      *(_QWORD *)DeviceExtension = v7 + 3480;
      *((_QWORD *)DeviceExtension + 1) = v33;
      *v33 = DeviceExtension;
      *(_QWORD *)(v7 + 3488) = DeviceExtension;
      ++*(_DWORD *)(v7 + 3496);
      if ( DeviceExtension[124] != 1 )
        goto LABEL_19;
      if ( v12 != D3DKMDT_VOT_UNINITIALIZED )
      {
        v56 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3728), DeviceExtension[126], v12);
        v23 = v56;
        if ( v56 >= 0 )
          goto LABEL_18;
        v58 = WdLogNewEntry5_WdError(v57);
        *(_QWORD *)(v58 + 24) = v23;
        WdLogEvent5_WdError(v58);
      }
      if ( (int)v23 < 0 )
        goto LABEL_22;
LABEL_18:
      v34 = IsInternalVideoOutput(*(_DWORD *)(a2 + 4));
      PhysicalMonitor = MonitorCreatePhysicalMonitor(
                          *(DXGADAPTER **)(v7 + 3728),
                          DeviceExtension[126],
                          DeviceObject,
                          v34,
                          1,
                          a7);
      v23 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
LABEL_19:
        LODWORD(v23) = DpiPdoGetDeviceIdFromDescriptor((__int64)DeviceObject, (__int64)&v68);
        if ( (int)v23 >= 0 )
        {
LABEL_20:
          DpiPdoGetDeviceContainerIdFromDescriptor((__int64)DeviceObject);
          _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
          DeviceObject->Flags |= 4u;
          DeviceObject->Flags |= 0x2000u;
          DeviceObject->Flags &= ~0x4000u;
          DeviceObject->Flags &= ~0x80u;
          v40 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
          *(_QWORD *)(v40 + 24) = DeviceObject;
          WdLogEvent5_WdEvent(v40);
LABEL_21:
          v8 = P;
          goto LABEL_22;
        }
        if ( DeviceExtension[124] == 1 )
        {
          LODWORD(v23) = 0;
          goto LABEL_20;
        }
LABEL_22:
        v41 = v64;
        v66 = v64;
        if ( (_DWORD)v23 == 259 )
          goto LABEL_25;
        goto LABEL_23;
      }
LABEL_49:
      v54 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v54 + 24) = v23;
      WdLogEvent5_WdError(v54);
      goto LABEL_22;
    }
  }
  LODWORD(v23) = -1073741801;
  v55 = WdLogNewEntry5_WdLowResource(v30);
  *(_QWORD *)(v55 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v55);
LABEL_40:
  v41 = v64;
LABEL_23:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3272), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3272), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_25:
  if ( (int)v23 < 0 && v65 == 1 )
  {
    if ( v66 == 1 )
    {
      v59 = *(_QWORD **)DeviceExtension;
      if ( *(unsigned int **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
        || (v60 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v60 != DeviceExtension) )
      {
        __fastfail(3u);
      }
      *v60 = v59;
      v59[1] = v60;
      --*(_DWORD *)(v7 + 3496);
    }
    KeWaitForSingleObject((PVOID)(v7 + 3272), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v7 + 3272), 0);
    *((_QWORD *)DeviceExtension + 117) = 0LL;
    if ( *((_QWORD *)DeviceExtension + 121) )
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
    if ( v41 == 1 )
      ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v61 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
    if ( v61 )
      IoFreeWorkItem(v61);
    v62 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v62 )
    {
      ExFreePoolWithTag(v62, 0);
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
  return (unsigned int)v23;
}
