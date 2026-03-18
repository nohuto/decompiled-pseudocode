/*
 * XREFs of IoRegisterPlugPlayNotification @ 0x140585FB0
 * Callers:
 *     PopRegisterCoolingExtensionProtection @ 0x1406F7354 (PopRegisterCoolingExtensionProtection.c)
 *     PopConnectToPolicyDevice @ 0x140706CAC (PopConnectToPolicyDevice.c)
 *     SmKmStoreFileCreate @ 0x14073AEF4 (SmKmStoreFileCreate.c)
 *     PoInitDriverServices @ 0x140855E44 (PoInitDriverServices.c)
 *     SbpWaitForVmbus @ 0x14086E978 (SbpWaitForVmbus.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ObReferenceObjectByPointer @ 0x1400DE9F0 (ObReferenceObjectByPointer.c)
 *     PsGetServerSiloServiceSessionId @ 0x1400DF800 (PsGetServerSiloServiceSessionId.c)
 *     PnpGetRelatedTargetDevice @ 0x1400FBC60 (PnpGetRelatedTargetDevice.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PnpDeferNotification @ 0x1405862C0 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140586388 (PnpInitializeNotifyEntry.c)
 *     PnpNotifyDriverCallback @ 0x140586518 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140586638 (IopGetSessionIdFromSymbolicName.c)
 */

NTSTATUS __stdcall IoRegisterPlugPlayNotification(
        IO_NOTIFICATION_EVENT_CATEGORY EventCategory,
        ULONG EventCategoryFlags,
        PVOID EventCategoryData,
        PDRIVER_OBJECT DriverObject,
        PDRIVER_NOTIFICATION_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Context,
        PVOID *NotificationEntry)
{
  NTSTATUS result; // eax
  __int32 v11; // ebx
  __int32 v12; // ebx
  NTSTATUS RelatedTargetDevice; // ebx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v15; // rsi
  PVOID *v16; // rcx
  struct _FAST_MUTEX *v17; // rcx
  _DWORD *v18; // r14
  char *v19; // rax
  char **v20; // rcx
  __int128 v21; // xmm1
  PVOID v22; // r14
  const WCHAR *i; // rsi
  int SessionIdFromSymbolicName; // eax
  void *v25; // rcx
  ULONG v26; // edx
  _QWORD *v27; // rax
  PVOID P; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  int v30; // [rsp+48h] [rbp-38h] BYREF
  GUID v31; // [rsp+4Ch] [rbp-34h]
  __int128 v32; // [rsp+5Ch] [rbp-24h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-10h]

  LODWORD(P) = EventCategoryFlags;
  *NotificationEntry = 0LL;
  result = ObReferenceObjectByPointer(DriverObject, 0, IoDriverObjectType, 0);
  if ( result >= 0 )
  {
    v11 = EventCategory - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 != 1 )
        {
          RelatedTargetDevice = -1073741585;
          goto LABEL_29;
        }
        RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)EventCategoryData, &P);
        if ( RelatedTargetDevice < 0 )
        {
LABEL_29:
          ObfDereferenceObject(DriverObject);
          return RelatedTargetDevice;
        }
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x43706E50u);
        if ( PoolWithTag )
        {
          RelatedTargetDevice = PnpInitializeNotifyEntry(
                                  (_DWORD)PoolWithTag,
                                  3,
                                  (_DWORD)CallbackRoutine,
                                  (_DWORD)Context,
                                  (__int64)DriverObject,
                                  (__int64)&PnpTargetDeviceNotifyLock);
          if ( RelatedTargetDevice < 0 )
          {
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v25 = (void *)*((_QWORD *)P + 4);
          }
          else
          {
            v15 = P;
            PoolWithTag[10] = EventCategoryData;
            PoolWithTag[11] = v15[4];
            RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
            if ( RelatedTargetDevice >= 0 )
            {
              ExAcquireFastMutex(&PnpTargetDeviceNotifyLock);
              v16 = (PVOID *)v15[60];
              if ( *v16 != v15 + 59 )
                __fastfail(3u);
              PoolWithTag[1] = v16;
              *PoolWithTag = v15 + 59;
              *v16 = PoolWithTag;
              v17 = &PnpTargetDeviceNotifyLock;
              v15[60] = PoolWithTag;
LABEL_11:
              KeReleaseGuardedMutex(v17);
LABEL_12:
              *NotificationEntry = PoolWithTag;
              goto LABEL_13;
            }
            ExFreePoolWithTag(PoolWithTag, 0x43706E50u);
            v25 = (void *)v15[4];
          }
          ObfDereferenceObject(v25);
LABEL_13:
          if ( RelatedTargetDevice >= 0 )
            return RelatedTargetDevice;
          goto LABEL_29;
        }
        ObfDereferenceObject(*((PVOID *)P + 4));
LABEL_34:
        RelatedTargetDevice = -1073741670;
        goto LABEL_29;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x60uLL, 0x44706E50u);
      if ( !PoolWithTag )
        goto LABEL_34;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              2,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpDeviceClassNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_29;
      v18 = PoolWithTag + 10;
      *((_OWORD *)PoolWithTag + 5) = *(_OWORD *)EventCategoryData;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
        v19 = (char *)&PnpDeviceClassNotifyList
            + 16
            * ((*v18 + *((_DWORD *)PoolWithTag + 21) + *((_DWORD *)PoolWithTag + 22) + *((_DWORD *)PoolWithTag + 23))
             % 0xDu);
        v20 = (char **)*((_QWORD *)v19 + 1);
        if ( *v20 != v19 )
          __fastfail(3u);
        PoolWithTag[1] = v20;
        *PoolWithTag = v19;
        *v20 = (char *)PoolWithTag;
        *((_QWORD *)v19 + 1) = PoolWithTag;
        KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
        if ( ((unsigned __int8)P & 1) != 0 )
        {
          v21 = *(_OWORD *)v18;
          v30 = 3145729;
          v31 = GUID_DEVICE_INTERFACE_ARRIVAL;
          v32 = v21;
          RelatedTargetDevice = IopGetDeviceInterfaces((int *)PoolWithTag + 20, 0LL, 0, 0, &P, 0LL);
          if ( RelatedTargetDevice < 0 )
            goto LABEL_29;
          v22 = P;
          for ( i = (const WCHAR *)P; *i; i += ((unsigned __int64)DestinationString.Length >> 1) + 1 )
          {
            RtlInitUnicodeString(&DestinationString, i);
            p_DestinationString = &DestinationString;
            if ( *((_DWORD *)PoolWithTag + 5) != (unsigned int)PsGetServerSiloServiceSessionId(-1LL) )
            {
              SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(p_DestinationString);
              if ( SessionIdFromSymbolicName != -1 && *((_DWORD *)PoolWithTag + 5) != SessionIdFromSymbolicName )
                continue;
            }
            PnpNotifyDriverCallback(PoolWithTag, &v30, &P);
          }
          ExFreePoolWithTag(v22, 0);
        }
        goto LABEL_12;
      }
      v26 = 1148218960;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x39706E50u);
      if ( !PoolWithTag )
        goto LABEL_34;
      RelatedTargetDevice = PnpInitializeNotifyEntry(
                              (_DWORD)PoolWithTag,
                              1,
                              (_DWORD)CallbackRoutine,
                              (_DWORD)Context,
                              (__int64)DriverObject,
                              (__int64)&PnpHwProfileNotifyLock);
      if ( RelatedTargetDevice < 0 )
        goto LABEL_29;
      RelatedTargetDevice = PnpDeferNotification(PoolWithTag);
      if ( RelatedTargetDevice >= 0 )
      {
        ExAcquireFastMutex(&PnpHwProfileNotifyLock);
        v27 = (_QWORD *)qword_1407F4030;
        if ( *(PVOID **)qword_1407F4030 != &PnpProfileNotifyList )
          __fastfail(3u);
        *PoolWithTag = &PnpProfileNotifyList;
        v17 = &PnpHwProfileNotifyLock;
        PoolWithTag[1] = v27;
        *v27 = PoolWithTag;
        qword_1407F4030 = (__int64)PoolWithTag;
        goto LABEL_11;
      }
      v26 = 963669584;
    }
    ExFreePoolWithTag(PoolWithTag, v26);
    goto LABEL_13;
  }
  return result;
}
