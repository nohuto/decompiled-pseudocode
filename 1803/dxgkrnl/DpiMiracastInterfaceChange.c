/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C003D0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkFreeUnicodeString @ 0x1C01F03D8 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C01FD93C (DpiGetDeviceInstanceId.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01FDA64 (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C01FDC14 (DpiGetDevicePropertyString.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01FFD78 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r13
  char v7; // r12
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int16 v12; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  char v17; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // r15d
  const void **v22; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  SIZE_T v26; // rdx
  _WORD *v27; // rax
  _WORD *v28; // r9
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  NTSTATUS v35; // eax
  __int64 v36; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v38; // eax
  __int64 *v39; // rax
  NTSTATUS v40; // eax
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  __int64 v50; // rax
  char v51; // [rsp+48h] [rbp-C0h]
  char v52; // [rsp+49h] [rbp-BFh]
  char v53; // [rsp+4Ah] [rbp-BEh]
  int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-78h]
  _OWORD v59[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v59, 0, 0x88uLL);
  if ( NotificationStructure )
  {
    v4 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v4 )
    {
      v3 = *((_QWORD *)NotificationStructure + 5);
      if ( v3 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        v51 = 0;
        v53 = 0;
        v52 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, *(unsigned __int16 *)(v3 + 2) + 792LL, 0x74727044u);
        v10 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          v11 = WdLogNewEntry5_WdLowResource(v9);
          *(_QWORD *)(v11 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v11);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v10 + 16) = 1953656900;
        *(_DWORD *)(v10 + 420) = -1;
        *(_DWORD *)(v10 + 456) = -1;
        *(_DWORD *)(v10 + 20) = 14;
        *(_QWORD *)(v10 + 24) = 1LL;
        *(_QWORD *)(v10 + 408) = 0LL;
        *(_DWORD *)(v10 + 416) = 0;
        *(_QWORD *)(v10 + 88) = 0LL;
        *(_DWORD *)(v10 + 32) = 1;
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_DWORD *)(v10 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v10);
        *(_WORD *)(v10 + 144) = 0;
        v12 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v10 + 152) = v10 + 792;
        *(_WORD *)(v10 + 146) = v12;
        RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v10 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v10 + 176),
                                (PDEVICE_OBJECT *)(v10 + 184));
        v15 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
LABEL_12:
          v16 = WdLogNewEntry5_WdError(v14);
          *(_QWORD *)(v16 + 24) = v15;
          WdLogEvent5_WdError(v16);
          goto LABEL_45;
        }
        v17 = 1;
        v51 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *(_QWORD *)(v10 + 464) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v20 = WdLogNewEntry5_WdError(v19);
          *(_QWORD *)(v20 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v20);
LABEL_49:
          v41 = *(void **)(v10 + 336);
          if ( v41 )
          {
            ExFreePoolWithTag(v41, 0);
            *(_QWORD *)(v10 + 336) = 0LL;
          }
          v42 = *(void **)(v10 + 344);
          if ( v42 )
          {
            ExFreePoolWithTag(v42, 0);
            *(_QWORD *)(v10 + 344) = 0LL;
          }
          v43 = *(void **)(v10 + 352);
          if ( v43 )
          {
            ExFreePoolWithTag(v43, 0);
            *(_QWORD *)(v10 + 352) = 0LL;
          }
          v44 = *(void **)(v10 + 360);
          if ( v44 )
          {
            ExFreePoolWithTag(v44, 0);
            *(_QWORD *)(v10 + 360) = 0LL;
          }
          v45 = *(void **)(v10 + 368);
          if ( v45 )
          {
            ExFreePoolWithTag(v45, 0);
            *(_QWORD *)(v10 + 368) = 0LL;
          }
          if ( v17 )
            ObfDereferenceObject(*(PVOID *)(v10 + 176));
          v46 = *(void **)(v10 + 464);
          if ( v46 )
            ObfDereferenceObject(v46);
          if ( *(_QWORD *)(v10 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 128));
          if ( v52 )
          {
            KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
            v47 = *(_QWORD *)v10;
            if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || (v48 = *(_QWORD **)(v10 + 8), *v48 != v10) )
              __fastfail(3u);
            *v48 = v47;
            *(_QWORD *)(v47 + 8) = v48;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          ExFreePoolWithTag((PVOID)v10, 0);
          goto LABEL_70;
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v10 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v10 + 336,
                    (__int64)&v54) >= 0
          || (v21 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     PagedPool,
                     (__int64)&v54) >= 0) )
        {
          v21 = v54;
        }
        v22 = (const void **)(v10 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v10 + 344,
                                     (__int64)&v54);
        v24 = v54;
        if ( DevicePropertyDataString < 0 )
          v24 = 0;
        v54 = v24;
        v25 = v24 + v21;
        if ( v25 )
        {
          v26 = v25 + 4LL;
          if ( v26 < 0xFFFF )
          {
            v27 = ExAllocatePoolWithTag((POOL_TYPE)512, v26, 0x74727044u);
            *(_QWORD *)(v10 + 352) = v27;
            v28 = v27;
            if ( v27 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              if ( v25 == v24 )
              {
                Length = DestinationString.Length;
              }
              else
              {
                memmove(v27, *(const void **)(v10 + 336), v25 - v24);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)(v25 - v24) >> 1)) = 0;
                RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v10 + 352));
                v22 = (const void **)(v10 + 344);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                v28 = *(_WORD **)(v10 + 352);
                Length = DestinationString.Length + 2;
                DestinationString.Length += 2;
              }
              DestinationString.MaximumLength = v25 + 4;
              if ( v24 )
              {
                memmove(&v28[(unsigned __int64)Length >> 1], *v22, v24);
                v28 = *(_WORD **)(v10 + 352);
                Length = DestinationString.Length;
              }
              v28[(unsigned __int64)(v24 + Length) >> 1] = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v10 + 360,
          (__int64)&v54);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v10 + 368,
          (__int64)&v54);
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        v15 = DeviceInstanceId;
        if ( DeviceInstanceId >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v10 + 160), (PCWSTR)EventHandle[1]);
          v7 = 1;
          v33 = DpiMiracastSendSyncUserModeRequest(v10, 2295808LL);
          v15 = v33;
          if ( v33 < 0 )
            goto LABEL_12;
          if ( v58 < 0x88 )
          {
            v34 = WdLogNewEntry5_WdError(v14);
            *(_QWORD *)(v34 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v34);
LABEL_47:
            DxgkFreeUnicodeString(v10 + 160);
LABEL_48:
            v17 = v51;
            goto LABEL_49;
          }
          *(_OWORD *)(v10 + 204) = v59[0];
          *(_OWORD *)(v10 + 220) = v59[1];
          *(_OWORD *)(v10 + 236) = v59[2];
          *(_OWORD *)(v10 + 252) = v59[3];
          *(_OWORD *)(v10 + 268) = v59[4];
          *(_OWORD *)(v10 + 284) = v59[5];
          *(_OWORD *)(v10 + 300) = v59[6];
          *(_OWORD *)(v10 + 316) = v59[7];
          *(_WORD *)(v10 + 332) = v59[8];
          *(_WORD *)(v10 + 332) = 0;
          v35 = PsLookupProcessByProcessId((HANDLE)DWORD1(v59[8]), (PEPROCESS *)(v10 + 104));
          v15 = v35;
          if ( v35 < 0 )
            goto LABEL_12;
          ObfDereferenceObject(*(PVOID *)(v10 + 104));
          AcquireMiniportListMutex();
          v36 = qword_1C007AB38;
          v53 = 1;
          while ( (__int64 *)v36 != &qword_1C007AB38 )
          {
            if ( !RtlCompareUnicodeString(
                    *((PCUNICODE_STRING *)NotificationStructure + 5),
                    (PCUNICODE_STRING)(v36 + 144),
                    0) )
              goto LABEL_47;
            v36 = *(_QWORD *)v36;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v10 + 96));
          v15 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
            goto LABEL_12;
          v38 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)(v10 + 128));
          v15 = v38;
          if ( v38 < 0 )
            goto LABEL_12;
          KeAcquireInStackQueuedSpinLock(&qword_1C007AB30, &LockHandle);
          v39 = (__int64 *)qword_1C007AB40;
          if ( *(__int64 **)qword_1C007AB40 != &qword_1C007AB38 )
            __fastfail(3u);
          *(_QWORD *)v10 = &qword_1C007AB38;
          *(_QWORD *)(v10 + 8) = v39;
          *v39 = v10;
          qword_1C007AB40 = v10;
          v52 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v40 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *(PVOID *)(v10 + 176),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  (PVOID)v10,
                  (PVOID *)(v10 + 400));
          v15 = v40;
          if ( v40 < 0 )
            goto LABEL_12;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(v10 + 128), 1u);
        }
        else
        {
          v32 = WdLogNewEntry5_WdError(v31);
          *(_QWORD *)(v32 + 24) = v15;
          WdLogEvent5_WdError(v32);
          v7 = 0;
        }
LABEL_45:
        if ( (int)v15 >= 0 )
        {
LABEL_70:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v53 )
          {
            _InterlockedExchange64(&qword_1C007A788, 0LL);
            KeReleaseMutex((PRKMUTEX)Mutex, 0);
          }
          return 0LL;
        }
        if ( !v7 )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
  }
  v50 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v50 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v50);
  return 3221225711LL;
}
