/*
 * XREFs of DpiInitializeGlobalState @ 0x1C023F534
 * Callers:
 *     DriverEntry @ 0x1C023F078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // r14
  int v2; // eax
  int v3; // eax
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  NTSTATUS v8; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v10; // rcx
  PPHYSICAL_MEMORY_RANGE v11; // r8
  __int64 v12; // rax
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v14; // r9d
  LONGLONG QuadPart; // rcx
  PHYSICAL_ADDRESS *p_BaseAddress; // rdx
  __int64 v17; // rdx
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  struct _KMUTANT *v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v35; // [rsp+48h] [rbp-C0h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  int Data; // [rsp+70h] [rbp-98h] BYREF
  int v40; // [rsp+74h] [rbp-94h] BYREF
  int v41; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-40h] BYREF
  int v45; // [rsp+D0h] [rbp-38h]
  const wchar_t *v46; // [rsp+D8h] [rbp-30h]
  int *v47; // [rsp+E0h] [rbp-28h]
  int v48; // [rsp+E8h] [rbp-20h]
  int *v49; // [rsp+F0h] [rbp-18h]
  int v50; // [rsp+F8h] [rbp-10h]
  __int64 v51; // [rsp+100h] [rbp-8h]
  int v52; // [rsp+108h] [rbp+0h]
  _QWORD v53[5]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v54; // [rsp+138h] [rbp+30h]
  int v55; // [rsp+140h] [rbp+38h]
  _QWORD v56[6]; // [rsp+148h] [rbp+40h] BYREF
  int v57; // [rsp+178h] [rbp+70h]
  _BYTE v58[40]; // [rsp+180h] [rbp+78h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0;
  v1 = 0;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C007A750 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C007A751 = 1;
  dword_1C007AB5C = 7236;
  v48 = 67108868;
  LODWORD(v53[2]) = 67108868;
  v46 = L"MiracastDefaultRtspPort";
  LODWORD(v56[2]) = 67108868;
  v47 = &dword_1C007AB5C;
  v49 = &dword_1C007AB5C;
  v35 = 500000LL;
  v53[0] = L"PlatformSupportMiracast";
  v53[1] = (char *)&v35 + 4;
  v53[3] = (char *)&v35 + 4;
  v56[0] = L"SuspendAdapterTimerPeriod";
  v56[1] = &v35;
  v56[3] = &v35;
  v44 = 0LL;
  v45 = 288;
  v50 = 4;
  v51 = 0LL;
  v52 = 288;
  LODWORD(v53[4]) = 4;
  v54 = 0LL;
  v55 = 288;
  LODWORD(v56[4]) = 4;
  v56[5] = 0LL;
  v57 = 0;
  memset(v58, 0, sizeof(v58));
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v44, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C007AB5C )
    dword_1C007AB5C = 7236;
  if ( v2 < 0 || (byte_1C007A756 = 1, !HIDWORD(v35)) )
    byte_1C007A756 = 0;
  v3 = -(int)v35;
  LODWORD(v35) = 0;
  DueTime.QuadPart = v3;
  v46 = L"SupportMultipleIntegratedDisplays";
  v47 = (int *)&v35;
  v49 = (int *)&v35;
  v44 = 0LL;
  v45 = 288;
  v48 = 67108868;
  v50 = 4;
  v51 = 0LL;
  v52 = 0;
  memset(v53, 0, sizeof(v53));
  byte_1C007A758 = (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v44, 0LL, 0LL) >= 0 && (_DWORD)v35 != 0;
  v44 = 0LL;
  v35 = -1LL;
  v48 = 67108868;
  v46 = L"EnableBasicDisplayFallback";
  v47 = (int *)&v35;
  v49 = (int *)&v35;
  LODWORD(v53[2]) = 67108868;
  v53[0] = L"DisableBasicDisplayFallback";
  v45 = 288;
  v53[1] = (char *)&v35 + 4;
  v53[3] = (char *)&v35 + 4;
  v50 = 4;
  v51 = 0LL;
  v52 = 288;
  LODWORD(v53[4]) = 4;
  v54 = 0LL;
  v55 = 0;
  memset(v56, 0, 0x28uLL);
  if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", &v44, 0LL, 0LL) >= 0
    && (_DWORD)v35 != 1
    && HIDWORD(v35) == 1 )
  {
    byte_1C007A752 = 1;
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_19;
  Data = 36870;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v8 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v6 = v8;
  if ( v8 < 0 )
  {
    ZwClose(KeyHandle);
LABEL_19:
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
    goto LABEL_47;
  }
  v40 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v40, 4u);
  ZwClose(KeyHandle);
  if ( (int)v6 < 0 )
    goto LABEL_19;
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v11 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v14 = 0;
    QuadPart = p_NumberOfBytes->QuadPart;
    if ( p_NumberOfBytes->QuadPart )
    {
      p_BaseAddress = &v11->BaseAddress;
      do
      {
        DpGlobals += QuadPart;
        v17 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v17 > *(&DpGlobals + 1) )
          *(&DpGlobals + 1) = v17;
        p_BaseAddress = &v11[++v14].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
        QuadPart = p_BaseAddress[1].QuadPart;
      }
      while ( QuadPart );
    }
    ExFreePoolWithTag(v11, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C007A780 = (__int64)&qword_1C007A778;
      qword_1C007A778 = (__int64)&qword_1C007A778;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\TSDDD\\DEVICE0");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v24 = WdLogNewEntry5_WdEvent(v21, v20);
        *(_QWORD *)(v24 + 24) = 0LL;
        WdLogEvent5_WdEvent(v24);
        v23 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v22 = WdLogNewEntry5_WdEvent(v21, v20);
        *(_QWORD *)(v22 + 24) = 0LL;
        WdLogEvent5_WdEvent(v22);
        ZwClose(KeyHandle);
        v23 = KeyHandle;
      }
      byte_1C007A790 = v23 != 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v29 = WdLogNewEntry5_WdEvent(v26, v25);
        *(_QWORD *)(v29 + 24) = 0LL;
        WdLogEvent5_WdEvent(v29);
        v28 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v27 = WdLogNewEntry5_WdEvent(v26, v25);
        *(_QWORD *)(v27 + 24) = 0LL;
        WdLogEvent5_WdEvent(v27);
        ZwClose(KeyHandle);
        v28 = KeyHandle;
      }
      byte_1C007A792 = 0;
      byte_1C007A791 = v28 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C007A7B0 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x78uLL, 0x74727044u, 0);
      v0 = 1;
      v30 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      P = v30;
      if ( v30 )
      {
        KeInitializeMutex(v30, 0);
        dword_1C007A9B8 = 0;
        qword_1C007A9C8 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C007A930, SynchronizationTimer);
        KeInitializeDpc(&stru_1C007A970, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        qword_1C007A9B0 = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( qword_1C007A9B0 )
        {
          ExInitializeNPagedLookasideList(&stru_1C007A840, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C007AAD8 = 0;
          KeInitializeMutex(&stru_1C007AAE0, 0);
          v37 = 2;
          qword_1C007AB20 = (__int64)&qword_1C007AB18;
          qword_1C007AB18 = (__int64)&qword_1C007AB18;
          v41 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 &v37,
                 &v41) < 0
            || (byte_1C007A755 = 1, v37 == 2) )
          {
            byte_1C007A755 = 0;
          }
          dword_1C007AA8C = -1;
          byte_1C007A754 = 0;
          KeInitializeSpinLock(&qword_1C007AB30);
          qword_1C007AB40 = (__int64)&qword_1C007AB38;
          qword_1C007AB38 = (__int64)&qword_1C007AB38;
          dword_1C007AB58 = 0;
          qword_1C007AB50 = (__int64)&qword_1C007AB48;
          qword_1C007AB48 = (__int64)&qword_1C007AB48;
          v31 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &NotificationEntry);
          v6 = v31;
          if ( v31 >= 0 )
          {
            IoWorkItem = 0LL;
            qword_1C007A928 = (__int64)&qword_1C007A920;
            qword_1C007A920 = (__int64)&qword_1C007A920;
            qword_1C007A918 = 0LL;
            dword_1C007A8E0 = 1;
            qword_1C007A8E8 = 0LL;
            dword_1C007A8F0 = 0;
            KeInitializeEvent(&stru_1C007A8F8, SynchronizationEvent, 0);
            byte_1C007ACA0 = 0;
            KeInitializeMutex(&Object, 0);
            byte_1C007A75B = 0;
            qword_1C007ACE8 = (__int64)&qword_1C007ACE0;
            qword_1C007ACE0 = &qword_1C007ACE0;
            qword_1C007AC20 = 1LL;
            dword_1C007AAD4 = 0;
          }
          else
          {
            v33 = WdLogNewEntry5_WdError(v32);
            *(_QWORD *)(v33 + 24) = v6;
            WdLogEvent5_WdError(v33);
            NotificationEntry = 0LL;
          }
LABEL_47:
          v1 = v0;
          if ( (int)v6 >= 0 )
            goto LABEL_58;
          goto LABEL_48;
        }
      }
    }
    LODWORD(v6) = -1073741801;
    v12 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v12 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v6) = -1073741670;
    v12 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v12 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v12);
LABEL_48:
  if ( qword_1C007A9B0 )
    IoFreeWorkItem(qword_1C007A9B0);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C007A840);
  if ( P )
  {
    ExFreePoolWithTag(P, 0);
    P = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_58:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v6;
}
