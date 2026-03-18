/*
 * XREFs of DpiInitializeGlobalState @ 0x1C0205448
 * Callers:
 *     DriverEntry @ 0x1C0205078 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // r14
  int v2; // eax
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  NTSTATUS v6; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v8; // rcx
  LARGE_INTEGER *p_NumberOfBytes; // rcx
  int v10; // edx
  PHYSICAL_ADDRESS *p_BaseAddress; // r9
  __int64 v12; // r9
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  void *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  void *v26; // rax
  struct _KMUTANT *v27; // rax
  NTSTATUS v28; // eax
  __int64 v29; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  void *KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+50h] [rbp-B8h] BYREF
  int v38; // [rsp+54h] [rbp-B4h] BYREF
  int v39; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  int Data; // [rsp+70h] [rbp-98h] BYREF
  int v42; // [rsp+74h] [rbp-94h] BYREF
  int v43; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v46; // [rsp+C8h] [rbp-40h] BYREF
  int v47; // [rsp+D0h] [rbp-38h]
  const wchar_t *v48; // [rsp+D8h] [rbp-30h]
  int *v49; // [rsp+E0h] [rbp-28h]
  int v50; // [rsp+E8h] [rbp-20h]
  int *v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+108h] [rbp+0h]
  const wchar_t *v55; // [rsp+110h] [rbp+8h]
  int *v56; // [rsp+118h] [rbp+10h]
  int v57; // [rsp+120h] [rbp+18h]
  int *v58; // [rsp+128h] [rbp+20h]
  int v59; // [rsp+130h] [rbp+28h]
  __int64 v60; // [rsp+138h] [rbp+30h]
  int v61; // [rsp+140h] [rbp+38h]
  const wchar_t *v62; // [rsp+148h] [rbp+40h]
  int *v63; // [rsp+150h] [rbp+48h]
  int v64; // [rsp+158h] [rbp+50h]
  int *v65; // [rsp+160h] [rbp+58h]
  int v66; // [rsp+168h] [rbp+60h]
  __int64 v67; // [rsp+170h] [rbp+68h]
  int v68; // [rsp+178h] [rbp+70h]
  _BYTE v69[40]; // [rsp+180h] [rbp+78h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0;
  v1 = 0;
  byte_1C0060857 = g_IsMobileCore;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C0060850 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C0060851 = 1;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableDMD") >= 0 )
    byte_1C0060852 = 1;
  v37 = 0;
  v47 = 288;
  v54 = 288;
  v50 = 67108868;
  v48 = L"MiracastDefaultRtspPort";
  v57 = 67108868;
  v49 = &dword_1C0060C04;
  v51 = &dword_1C0060C04;
  v55 = L"PlatformSupportMiracast";
  v56 = &v37;
  v58 = &v37;
  v62 = L"SuspendAdapterTimerPeriod";
  v63 = &v38;
  v61 = 288;
  v64 = 67108868;
  v65 = &v38;
  dword_1C0060C04 = 7236;
  v38 = 500000;
  v46 = 0LL;
  v52 = 4;
  v53 = 0LL;
  v59 = 4;
  v60 = 0LL;
  v66 = 4;
  v67 = 0LL;
  v68 = 0;
  memset(v69, 0, sizeof(v69));
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v46, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C0060C04 )
    dword_1C0060C04 = 7236;
  if ( v2 < 0 || (byte_1C0060856 = 1, !v37) )
    byte_1C0060856 = 0;
  DueTime.QuadPart = -v38;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_36;
  Data = 32769;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v5 = v6;
  if ( v6 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_36;
  }
  v42 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v5 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v42, 4u);
  ZwClose(KeyHandle);
  if ( (int)v5 < 0 )
  {
LABEL_36:
    v31 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v31 + 24) = v5;
    WdLogEvent5_WdError(v31);
    goto LABEL_31;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v10 = 0;
    if ( PhysicalMemoryRanges->NumberOfBytes.QuadPart )
    {
      p_BaseAddress = &PhysicalMemoryRanges->BaseAddress;
      do
      {
        DpGlobals += p_NumberOfBytes->QuadPart;
        v12 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v12 > *(&DpGlobals + 1) )
          *(&DpGlobals + 1) = v12;
        p_BaseAddress = &PhysicalMemoryRanges[++v10].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
      }
      while ( p_BaseAddress[1].QuadPart );
    }
    ExFreePoolWithTag(PhysicalMemoryRanges, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C0060880 = (__int64)&qword_1C0060878;
      qword_1C0060878 = (__int64)&qword_1C0060878;
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
        v33 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
        *(_QWORD *)(v33 + 24) = 0LL;
        WdLogEvent5_WdEvent(v33);
        v20 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
        *(_QWORD *)(v19 + 24) = 0LL;
        WdLogEvent5_WdEvent(v19);
        ZwClose(KeyHandle);
        v20 = KeyHandle;
      }
      byte_1C0060890 = v20 != 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v34 = WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
        *(_QWORD *)(v34 + 24) = 0LL;
        WdLogEvent5_WdEvent(v34);
        v26 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v25 = WdLogNewEntry5_WdEvent(v22, v21, v23, v24);
        *(_QWORD *)(v25 + 24) = 0LL;
        WdLogEvent5_WdEvent(v25);
        ZwClose(KeyHandle);
        v26 = KeyHandle;
      }
      byte_1C0060892 = 0;
      byte_1C0060891 = v26 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C00608B0 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x78uLL, 0x74727044u, 0);
      v0 = 1;
      v27 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      Object = v27;
      if ( v27 )
      {
        KeInitializeMutex(v27, 0);
        dword_1C0060A60 = 0;
        qword_1C0060A70 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C00609D8, SynchronizationTimer);
        KeInitializeDpc(&stru_1C0060A18, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( IoWorkItem )
        {
          ExInitializeNPagedLookasideList(&stru_1C0060940, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C0060B80 = 0;
          KeInitializeMutex(&stru_1C0060B88, 0);
          v39 = 2;
          qword_1C0060BC8 = (__int64)&qword_1C0060BC0;
          qword_1C0060BC0 = (__int64)&qword_1C0060BC0;
          v43 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 &v39,
                 &v43) < 0
            || (byte_1C0060855 = 1, v39 == 2) )
          {
            byte_1C0060855 = 0;
          }
          dword_1C0060B34 = -1;
          byte_1C0060854 = 0;
          KeInitializeSpinLock(&qword_1C0060BD8);
          qword_1C0060BE8 = (__int64)&qword_1C0060BE0;
          qword_1C0060BE0 = (__int64)&qword_1C0060BE0;
          dword_1C0060C00 = 0;
          qword_1C0060BF8 = (__int64)&qword_1C0060BF0;
          qword_1C0060BF0 = (__int64)&qword_1C0060BF0;
          v28 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C0060BD0);
          v5 = v28;
          if ( v28 < 0 )
          {
            v35 = WdLogNewEntry5_WdError(v29);
            *(_QWORD *)(v35 + 24) = v5;
            WdLogEvent5_WdError(v35);
            qword_1C0060BD0 = 0LL;
          }
          else
          {
            byte_1C006085B = 0;
            qword_1C0060CC8 = 1LL;
            dword_1C0060B7C = 0;
          }
LABEL_31:
          v1 = v0;
          if ( (int)v5 >= 0 )
            goto LABEL_32;
          goto LABEL_40;
        }
      }
    }
    LODWORD(v5) = -1073741801;
    v32 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v32 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v5) = -1073741670;
    v32 = WdLogNewEntry5_WdLowResource(v8);
    *(_QWORD *)(v32 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v32);
LABEL_40:
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C0060940);
  if ( Object )
  {
    ExFreePoolWithTag(Object, 0);
    Object = 0LL;
  }
  if ( v0 == 1 )
    ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
LABEL_32:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v5;
}
