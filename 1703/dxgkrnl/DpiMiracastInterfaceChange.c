/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C003E440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DpiGetDevicePropertyDataString @ 0x1C01100EC (DpiGetDevicePropertyDataString.c)
 *     DpiGetDevicePropertyString @ 0x1C0110238 (DpiGetDevicePropertyString.c)
 *     DxgkFreeUnicodeString @ 0x1C01C2AB4 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C01C699C (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C01C8288 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r13
  char v8; // r12
  PVOID PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int16 v13; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  char v19; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r15d
  const void **v25; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v27; // r12d
  unsigned int v28; // r15d
  SIZE_T v29; // rdx
  PVOID v30; // rax
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  NTSTATUS v38; // eax
  __int64 v39; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v41; // eax
  __int64 *v42; // rax
  NTSTATUS v43; // eax
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v53; // rax
  char v54; // [rsp+48h] [rbp-C0h]
  char v55; // [rsp+49h] [rbp-BFh]
  char v56; // [rsp+4Ah] [rbp-BEh]
  int v57; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v61; // [rsp+90h] [rbp-78h]
  _OWORD v62[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v62, 0, 0x88uLL);
  if ( NotificationStructure )
  {
    v5 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v5 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v6 )
          v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v6 )
          return 0LL;
        v54 = 0;
        v56 = 0;
        v55 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v8 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, *(unsigned __int16 *)(v4 + 2) + 792LL, 0x74727044u);
        v11 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          v12 = WdLogNewEntry5_WdLowResource(v10);
          *(_QWORD *)(v12 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v12);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v11 + 16) = 1953656900;
        *(_DWORD *)(v11 + 420) = -1;
        *(_DWORD *)(v11 + 456) = -1;
        *(_DWORD *)(v11 + 20) = 14;
        *(_QWORD *)(v11 + 24) = 1LL;
        *(_QWORD *)(v11 + 408) = 0LL;
        *(_DWORD *)(v11 + 416) = 0;
        *(_QWORD *)(v11 + 88) = 0LL;
        *(_DWORD *)(v11 + 32) = 1;
        *(_QWORD *)(v11 + 40) = 0LL;
        *(_DWORD *)(v11 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v11 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v11 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v11);
        *(_WORD *)(v11 + 144) = 0;
        v13 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v11 + 152) = v11 + 792;
        *(_WORD *)(v11 + 146) = v13;
        RtlCopyUnicodeString((PUNICODE_STRING)(v11 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v11 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v11 + 176),
                                (PDEVICE_OBJECT *)(v11 + 184));
        v17 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
LABEL_12:
          v18 = WdLogNewEntry5_WdError(v16, v15);
          *(_QWORD *)(v18 + 24) = v17;
          WdLogEvent5_WdError(v18);
          goto LABEL_45;
        }
        v19 = 1;
        v54 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *(_QWORD *)(v11 + 464) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v23 = WdLogNewEntry5_WdError(v22, v21);
          *(_QWORD *)(v23 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v23);
LABEL_49:
          v44 = *(void **)(v11 + 336);
          if ( v44 )
          {
            ExFreePoolWithTag(v44, 0);
            *(_QWORD *)(v11 + 336) = 0LL;
          }
          v45 = *(void **)(v11 + 344);
          if ( v45 )
          {
            ExFreePoolWithTag(v45, 0);
            *(_QWORD *)(v11 + 344) = 0LL;
          }
          v46 = *(void **)(v11 + 352);
          if ( v46 )
          {
            ExFreePoolWithTag(v46, 0);
            *(_QWORD *)(v11 + 352) = 0LL;
          }
          v47 = *(void **)(v11 + 360);
          if ( v47 )
          {
            ExFreePoolWithTag(v47, 0);
            *(_QWORD *)(v11 + 360) = 0LL;
          }
          v48 = *(void **)(v11 + 368);
          if ( v48 )
          {
            ExFreePoolWithTag(v48, 0);
            *(_QWORD *)(v11 + 368) = 0LL;
          }
          if ( v19 )
            ObfDereferenceObject(*(PVOID *)(v11 + 176));
          v49 = *(void **)(v11 + 464);
          if ( v49 )
            ObfDereferenceObject(v49);
          if ( *(_QWORD *)(v11 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v11 + 128));
          if ( v55 )
          {
            KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
            v50 = *(_QWORD *)v11;
            v51 = *(_QWORD **)(v11 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 || *v51 != v11 )
              __fastfail(3u);
            *v51 = v50;
            *(_QWORD *)(v50 + 8) = v51;
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          ExFreePoolWithTag((PVOID)v11, 0);
          goto LABEL_70;
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v11 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v11 + 336,
                    (__int64)&v57) >= 0
          || (v24 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     PagedPool,
                     (__int64)&v57) >= 0) )
        {
          v24 = v57;
        }
        v25 = (const void **)(v11 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v11 + 344,
                                     (__int64)&v57);
        v27 = v57;
        if ( DevicePropertyDataString < 0 )
          v27 = 0;
        v57 = v27;
        v28 = v27 + v24;
        if ( v28 )
        {
          v29 = v28 + 4LL;
          if ( v29 < 0xFFFF )
          {
            v30 = ExAllocatePoolWithTag((POOL_TYPE)512, v29, 0x74727044u);
            *(_QWORD *)(v11 + 352) = v30;
            if ( v30 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              if ( v28 == v27 )
              {
                Length = DestinationString.Length;
              }
              else
              {
                memmove(v30, *(const void **)(v11 + 336), v28 - v27);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v28 - v27) >> 1)) = 0;
                RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v11 + 352));
                v25 = (const void **)(v11 + 344);
                *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                Length = DestinationString.Length + 2;
                DestinationString.Length += 2;
              }
              DestinationString.MaximumLength = v28 + 4;
              if ( v27 )
              {
                memmove((void *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)Length >> 1)), *v25, v27);
                Length = DestinationString.Length;
              }
              *(_WORD *)(*(_QWORD *)(v11 + 352) + 2 * ((unsigned __int64)(v27 + Length) >> 1)) = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v11 + 360,
          (__int64)&v57);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v11 + 368,
          (__int64)&v57);
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        v17 = DeviceInstanceId;
        if ( DeviceInstanceId >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v11 + 160), (PCWSTR)EventHandle[1]);
          v8 = 1;
          v36 = DpiMiracastSendSyncUserModeRequest(v11, 2295808LL);
          v17 = v36;
          if ( v36 < 0 )
            goto LABEL_12;
          if ( v61 < 0x88 )
          {
            v37 = WdLogNewEntry5_WdError(v16, v15);
            *(_QWORD *)(v37 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v37);
LABEL_47:
            DxgkFreeUnicodeString(v11 + 160);
LABEL_48:
            v19 = v54;
            goto LABEL_49;
          }
          *(_OWORD *)(v11 + 204) = v62[0];
          *(_OWORD *)(v11 + 220) = v62[1];
          *(_OWORD *)(v11 + 236) = v62[2];
          *(_OWORD *)(v11 + 252) = v62[3];
          *(_OWORD *)(v11 + 268) = v62[4];
          *(_OWORD *)(v11 + 284) = v62[5];
          *(_OWORD *)(v11 + 300) = v62[6];
          *(_OWORD *)(v11 + 316) = v62[7];
          *(_WORD *)(v11 + 332) = v62[8];
          *(_WORD *)(v11 + 332) = 0;
          v38 = PsLookupProcessByProcessId((HANDLE)DWORD1(v62[8]), (PEPROCESS *)(v11 + 104));
          v17 = v38;
          if ( v38 < 0 )
            goto LABEL_12;
          ObfDereferenceObject(*(PVOID *)(v11 + 104));
          AcquireMiniportListMutex();
          v39 = qword_1C006FD60;
          v56 = 1;
          while ( (__int64 *)v39 != &qword_1C006FD60 )
          {
            if ( !RtlCompareUnicodeString(
                    *((PCUNICODE_STRING *)NotificationStructure + 5),
                    (PCUNICODE_STRING)(v39 + 144),
                    0) )
              goto LABEL_47;
            v39 = *(_QWORD *)v39;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v11 + 96));
          v17 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
            goto LABEL_12;
          v41 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)(v11 + 128));
          v17 = v41;
          if ( v41 < 0 )
            goto LABEL_12;
          KeAcquireInStackQueuedSpinLock(&qword_1C006FD58, &LockHandle);
          v42 = (__int64 *)qword_1C006FD68;
          if ( *(__int64 **)qword_1C006FD68 != &qword_1C006FD60 )
            __fastfail(3u);
          *(_QWORD *)v11 = &qword_1C006FD60;
          *(_QWORD *)(v11 + 8) = v42;
          *v42 = v11;
          qword_1C006FD68 = v11;
          v55 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v43 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *(PVOID *)(v11 + 176),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  (PVOID)v11,
                  (PVOID *)(v11 + 400));
          v17 = v43;
          if ( v43 < 0 )
            goto LABEL_12;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(v11 + 128), 1u);
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v34, v33);
          *(_QWORD *)(v35 + 24) = v17;
          WdLogEvent5_WdError(v35);
          v8 = 0;
        }
LABEL_45:
        if ( (int)v17 >= 0 )
        {
LABEL_70:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v56 )
          {
            _InterlockedExchange64(&qword_1C006FA08, 0LL);
            KeReleaseMutex(Mutex, 0);
          }
          return 0LL;
        }
        if ( !v8 )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
  }
  v53 = WdLogNewEntry5_WdError(v4, v3);
  *(_QWORD *)(v53 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v53);
  return 3221225711LL;
}
