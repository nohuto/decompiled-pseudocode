/*
 * XREFs of DpiInitializeGlobalState @ 0x1C01EB3C4
 * Callers:
 *     DriverEntry @ 0x1C01EB008 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 DpiInitializeGlobalState()
{
  char v0; // si
  char v1; // r14
  int v2; // eax
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  NTSTATUS v7; // eax
  PPHYSICAL_MEMORY_RANGE PhysicalMemoryRanges; // rax
  __int64 v9; // rcx
  PPHYSICAL_MEMORY_RANGE v10; // r8
  LARGE_INTEGER *p_NumberOfBytes; // rax
  int v12; // r10d
  LONGLONG v13; // rdx
  PHYSICAL_ADDRESS *p_BaseAddress; // r9
  __int64 v15; // r11
  LONGLONG v16; // r9
  struct _KMUTANT *PoolWithTag; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  void *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  void *v24; // rax
  struct _KMUTANT *v25; // rax
  NTSTATUS v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void *KeyHandle; // [rsp+40h] [rbp-188h] BYREF
  int v36; // [rsp+48h] [rbp-180h] BYREF
  int v37; // [rsp+4Ch] [rbp-17Ch] BYREF
  int v38; // [rsp+50h] [rbp-178h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-170h] BYREF
  int Data; // [rsp+68h] [rbp-160h] BYREF
  int v41; // [rsp+6Ch] [rbp-15Ch] BYREF
  int v42; // [rsp+70h] [rbp-158h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-150h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-120h] BYREF
  __int64 v45; // [rsp+C0h] [rbp-108h] BYREF
  int v46; // [rsp+C8h] [rbp-100h]
  const wchar_t *v47; // [rsp+D0h] [rbp-F8h]
  int *v48; // [rsp+D8h] [rbp-F0h]
  int v49; // [rsp+E0h] [rbp-E8h]
  int *v50; // [rsp+E8h] [rbp-E0h]
  int v51; // [rsp+F0h] [rbp-D8h]
  __int64 v52; // [rsp+F8h] [rbp-D0h]
  int v53; // [rsp+100h] [rbp-C8h]
  const wchar_t *v54; // [rsp+108h] [rbp-C0h]
  int *v55; // [rsp+110h] [rbp-B8h]
  int v56; // [rsp+118h] [rbp-B0h]
  int *v57; // [rsp+120h] [rbp-A8h]
  int v58; // [rsp+128h] [rbp-A0h]
  __int64 v59; // [rsp+130h] [rbp-98h]
  int v60; // [rsp+138h] [rbp-90h]
  const wchar_t *v61; // [rsp+140h] [rbp-88h]
  int *v62; // [rsp+148h] [rbp-80h]
  int v63; // [rsp+150h] [rbp-78h]
  int *v64; // [rsp+158h] [rbp-70h]
  int v65; // [rsp+160h] [rbp-68h]
  __int64 v66; // [rsp+168h] [rbp-60h]
  int v67; // [rsp+170h] [rbp-58h]
  _BYTE v68[40]; // [rsp+178h] [rbp-50h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0;
  v1 = 0;
  byte_1C006F9D7 = g_IsMobileCore;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableUSWC") >= 0 )
    byte_1C006F9D0 = 1;
  g_bDMgrIsSetupRunning = DMgrIsSetupRunning();
  if ( g_bDMgrIsSetupRunning == 1 )
    byte_1C006F9D1 = 1;
  if ( RtlCheckRegistryKey(2u, (PWSTR)L"GraphicsDrivers\\DisableDMD") >= 0 )
    byte_1C006F9D2 = 1;
  v36 = 0;
  v46 = 288;
  v53 = 288;
  v49 = 67108868;
  v47 = L"MiracastDefaultRtspPort";
  v56 = 67108868;
  v48 = &dword_1C006FD84;
  v50 = &dword_1C006FD84;
  v54 = L"PlatformSupportMiracast";
  v55 = &v36;
  v57 = &v36;
  v61 = L"SuspendAdapterTimerPeriod";
  v62 = &v37;
  v60 = 288;
  v63 = 67108868;
  v64 = &v37;
  dword_1C006FD84 = 7236;
  v37 = 500000;
  v45 = 0LL;
  v51 = 4;
  v52 = 0LL;
  v58 = 4;
  v59 = 0LL;
  v65 = 4;
  v66 = 0LL;
  v67 = 0;
  memset(v68, 0, sizeof(v68));
  v2 = RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v45, 0LL, 0LL);
  if ( v2 < 0 || !dword_1C006FD84 )
    dword_1C006FD84 = 7236;
  if ( v2 < 0 || (byte_1C006F9D6 = 1, !v36) )
    byte_1C006F9D6 = 0;
  qword_1C006FE40 = -v37;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v6 = v3;
  if ( v3 < 0 )
    goto LABEL_36;
  Data = 28682;
  RtlInitUnicodeString(&DestinationString, L"DxgKrnlVersion");
  v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
  v6 = v7;
  if ( v7 < 0 )
  {
    ZwClose(KeyHandle);
    goto LABEL_36;
  }
  v41 = 20499;
  RtlInitUnicodeString(&DestinationString, L"MinDxgKrnlVersion");
  v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &v41, 4u);
  ZwClose(KeyHandle);
  if ( (int)v6 < 0 )
  {
LABEL_36:
    v30 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v30 + 24) = v6;
    WdLogEvent5_WdError(v30);
    goto LABEL_31;
  }
  DpGlobals = 0LL;
  PhysicalMemoryRanges = MmGetPhysicalMemoryRanges();
  v10 = PhysicalMemoryRanges;
  if ( PhysicalMemoryRanges )
  {
    p_NumberOfBytes = &PhysicalMemoryRanges->NumberOfBytes;
    v12 = 0;
    if ( p_NumberOfBytes->QuadPart )
    {
      v13 = *(&DpGlobals + 1);
      p_BaseAddress = &v10->BaseAddress;
      v15 = DpGlobals;
      do
      {
        v15 += p_NumberOfBytes->QuadPart;
        DpGlobals = v15;
        v16 = p_NumberOfBytes->QuadPart + p_BaseAddress->QuadPart;
        if ( v16 > v13 )
        {
          v13 = v16;
          *(&DpGlobals + 1) = v16;
        }
        p_BaseAddress = &v10[++v12].BaseAddress;
        p_NumberOfBytes = p_BaseAddress + 1;
      }
      while ( p_BaseAddress[1].QuadPart );
    }
    ExFreePoolWithTag(v10, 0);
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
    Mutex = PoolWithTag;
    if ( PoolWithTag )
    {
      KeInitializeMutex(PoolWithTag, 0);
      qword_1C006FA00 = (__int64)&qword_1C006F9F8;
      qword_1C006F9F8 = (__int64)&qword_1C006F9F8;
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
        v32 = WdLogNewEntry5_WdEvent(v19);
        *(_QWORD *)(v32 + 24) = 0LL;
        WdLogEvent5_WdEvent(v32);
        v21 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v20 = WdLogNewEntry5_WdEvent(v19);
        *(_QWORD *)(v20 + 24) = 0LL;
        WdLogEvent5_WdEvent(v20);
        ZwClose(KeyHandle);
        v21 = KeyHandle;
      }
      byte_1C006FA10 = v21 != 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\SERVICES\\BASICRENDER");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) < 0 )
      {
        v33 = WdLogNewEntry5_WdEvent(v22);
        *(_QWORD *)(v33 + 24) = 0LL;
        WdLogEvent5_WdEvent(v33);
        v24 = 0LL;
        KeyHandle = 0LL;
      }
      else
      {
        v23 = WdLogNewEntry5_WdEvent(v22);
        *(_QWORD *)(v23 + 24) = 0LL;
        WdLogEvent5_WdEvent(v23);
        ZwClose(KeyHandle);
        v24 = KeyHandle;
      }
      byte_1C006FA12 = 0;
      byte_1C006FA11 = v24 == 0LL;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      byte_1C006FA30 = 0;
      ExInitializeNPagedLookasideList(&Lookaside, 0LL, 0LL, 0x200u, 0x70uLL, 0x74727044u, 0);
      v0 = 1;
      v25 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      Object = v25;
      if ( v25 )
      {
        KeInitializeMutex(v25, 0);
        dword_1C006FBE0 = 0;
        qword_1C006FBF0 = (__int64)&Entry;
        Entry = &Entry;
        KeInitializeTimerEx(&stru_1C006FB58, SynchronizationTimer);
        KeInitializeDpc(&stru_1C006FB98, (PKDEFERRED_ROUTINE)DpiPdoPollingDpc, 0LL);
        IoWorkItem = IoAllocateWorkItem((PDEVICE_OBJECT)g_pDriverObject);
        if ( IoWorkItem )
        {
          ExInitializeNPagedLookasideList(&stru_1C006FAC0, 0LL, 0LL, 0x200u, 0x30uLL, 0x74727044u, 0);
          byte_1C006FD00 = 0;
          v1 = 1;
          KeInitializeMutex(&stru_1C006FD08, 0);
          v38 = 2;
          qword_1C006FD48 = (__int64)&qword_1C006FD40;
          qword_1C006FD40 = (__int64)&qword_1C006FD40;
          v42 = 4;
          if ( ((int (__fastcall *)(__int64, __int64, int *, int *))HalDispatchTable->HalQuerySystemInformation)(
                 9LL,
                 4LL,
                 &v38,
                 &v42) < 0
            || (byte_1C006F9D5 = 1, v38 == 2) )
          {
            byte_1C006F9D5 = 0;
          }
          dword_1C006FCB4 = -1;
          byte_1C006F9D4 = 0;
          KeInitializeSpinLock(&qword_1C006FD58);
          qword_1C006FD68 = (__int64)&qword_1C006FD60;
          qword_1C006FD60 = (__int64)&qword_1C006FD60;
          dword_1C006FD80 = 0;
          qword_1C006FD78 = (__int64)&qword_1C006FD70;
          qword_1C006FD70 = (__int64)&qword_1C006FD70;
          v26 = IoRegisterPlugPlayNotification(
                  EventCategoryDeviceInterfaceChange,
                  1u,
                  &GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL,
                  g_pDriverObject,
                  (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)DpiMiracastInterfaceChange,
                  0LL,
                  &qword_1C006FD50);
          v6 = v26;
          if ( v26 < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v28, v27);
            *(_QWORD *)(v34 + 24) = v6;
            WdLogEvent5_WdError(v34);
            qword_1C006FD50 = 0LL;
          }
          else
          {
            byte_1C006F9DB = 0;
            qword_1C006FE48 = 1LL;
            dword_1C006FCFC = 0;
          }
LABEL_31:
          if ( (int)v6 >= 0 )
            goto LABEL_32;
          goto LABEL_40;
        }
      }
    }
    LODWORD(v6) = -1073741801;
    v31 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
  }
  else
  {
    LODWORD(v6) = -1073741670;
    v31 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v31 + 24) = -1073741670LL;
  }
  WdLogEvent5_WdLowResource(v31);
LABEL_40:
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( v1 == 1 )
    ExDeleteNPagedLookasideList(&stru_1C006FAC0);
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
  return (unsigned int)v6;
}
