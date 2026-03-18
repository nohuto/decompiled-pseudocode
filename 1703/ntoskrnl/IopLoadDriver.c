/*
 * XREFs of IopLoadDriver @ 0x1404D8F84
 * Callers:
 *     IopLoadUnloadDriver @ 0x14044DA20 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405AD458 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1407F8D84 (IopInitializeSystemDrivers.c)
 * Callees:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140033544 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x140036914 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x14003AED8 (HeadlessKernelAddLogEntry.c)
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     PnpDiagnosticTraceObject @ 0x1400682D8 (PnpDiagnosticTraceObject.c)
 *     DbgPrint @ 0x140068550 (DbgPrint.c)
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 *     IopResurrectDriver @ 0x14014AE98 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x140422C60 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x140459E44 (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x14045B6F8 (IopBootLog.c)
 *     MiFreeDriverInitialization @ 0x1404B1608 (MiFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x1404B191C (MmLoadSystemImageEx.c)
 *     KseShimDriverIoCallbacks @ 0x1404B3890 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1404B3CA8 (PnpPrepareDriverLoading.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     IopBuildFullDriverPath @ 0x1404D9704 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404D98B8 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404D9A74 (IopGetRegistryValue.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     NtQueryObject @ 0x1404FAD40 (NtQueryObject.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     MmUnloadSystemImage @ 0x1405856E0 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x1405D38F8 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140688A80 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x140689948 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x140689D60 (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int16 *v6; // r14
  NTSTATUS v7; // eax
  ULONG v8; // ecx
  PVOID PoolWithTagPriority; // rax
  int DriverNameFromKeyNode; // edi
  SIZE_T v11; // rdx
  PVOID PoolWithTag; // rax
  _WORD *v13; // rsi
  int v14; // eax
  PIMAGE_NT_HEADERS v15; // rax
  int v16; // ecx
  _QWORD *v17; // rsi
  char *v18; // rdi
  PVOID v19; // rcx
  PIMAGE_NT_HEADERS v20; // rdx
  char *v21; // rax
  HANDLE v22; // rdi
  NTSTATUS v23; // eax
  char *v24; // rsi
  PVOID v25; // rax
  PVOID v26; // rax
  void *v27; // r14
  size_t v28; // rdi
  PVOID v29; // rax
  __int64 v30; // rax
  PVOID v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 (__fastcall **v34)(__int64, IRP *); // rax
  __int64 v36; // rdx
  int RegistryValue; // eax
  ULONG_PTR v38; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  int v43; // [rsp+70h] [rbp-90h] BYREF
  PVOID v44; // [rsp+78h] [rbp-88h]
  char v45[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v46; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  ULONG ReturnLength; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v54; // [rsp+D8h] [rbp-28h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  ULONG v56; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v57; // [rsp+F0h] [rbp-10h]
  int *v58; // [rsp+F8h] [rbp-8h]
  PVOID v59; // [rsp+100h] [rbp+0h]
  int v60; // [rsp+108h] [rbp+8h] BYREF
  __int64 v61; // [rsp+110h] [rbp+10h]
  UNICODE_STRING *v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+120h] [rbp+20h]
  __int128 v64; // [rsp+128h] [rbp+28h]
  _WORD KeyValueInformation[40]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v58 = a4;
  *a4 = 0;
  Length = 0;
  v43 = 0;
  v6 = 0LL;
  v44 = 0LL;
  *(_DWORD *)v45 = 0;
  v46.Buffer = 0LL;
  *(_DWORD *)&v46.Length = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v47 = 0;
  v7 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v7 != -1073741789 && v7 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_46;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_46;
  }
  v8 = Length + 8;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            NonPagedPoolNx,
                            v8,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x20206F49u);
  P = PoolWithTagPriority;
  v6 = (unsigned __int16 *)PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_46;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, PoolWithTagPriority, Length, &Length);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_46;
  Destination.Length = v6[6];
  Destination.MaximumLength = Destination.Length + 8;
  v11 = Destination.Length + 2LL;
  Destination.Buffer = v6 + 8;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTag = ExAllocatePoolWithTagPriority(
                    PagedPool,
                    v11,
                    0x20206F49u,
                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
  v44 = PoolWithTag;
  v13 = PoolWithTag;
  if ( !PoolWithTag )
  {
    DriverNameFromKeyNode = -1073741670;
LABEL_93:
    Destination.Buffer = 0LL;
    goto LABEL_46;
  }
  LOWORD(v43) = Destination.Length;
  HIWORD(v43) = Destination.Length + 2;
  memmove(PoolWithTag, Destination.Buffer, Destination.Length);
  v13[(unsigned __int64)Destination.Length >> 1] = 0;
  RtlAppendUnicodeToString(&Destination, L".SYS");
  HeadlessKernelAddLogEntry();
  PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v43);
  if ( InitSafeBootMode )
  {
    if ( a2 )
    {
      RtlInitUnicodeString(&DestinationString, L"Group");
      memset(KeyValueInformation, 0, 0x4CuLL);
      if ( NtQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, KeyValueInformation, 0x4Cu, &v56) < 0
        || (DestinationString.Length = KeyValueInformation[4] - 2,
            DestinationString.MaximumLength = KeyValueInformation[4] - 2,
            DestinationString.Buffer = &KeyValueInformation[6],
            !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
      {
        if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
        {
          IopBootLog(&Destination, 0);
          DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
          HeadlessKernelAddLogEntry();
          ObCloseHandle(KeyHandle, 0);
          return 3221226335LL;
        }
      }
    }
  }
  DriverNameFromKeyNode = IopBuildFullDriverPath(&v43, KeyHandle, &Destination);
  if ( DriverNameFromKeyNode < 0 )
    goto LABEL_93;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v46);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v60 = 48;
    v61 = 0LL;
    v62 = &v46;
    v63 = IopCaseInsensitive != 0 ? 592 : 528;
    v64 = 0LL;
    ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
    v14 = MmLoadSystemImageEx((__int64)&Destination, 0LL, 0LL, 0, &BugCheckParameter2, (unsigned __int64 *)&BaseAddress);
    DriverNameFromKeyNode = v14;
    if ( v14 < 0 )
    {
      if ( v14 == -1073741554 )
        goto LABEL_63;
      if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)v14, &Destination) == 1 )
      {
        DriverNameFromKeyNode = (a3 != 0) - 1073740949;
        IopLogBlockedDriverEvent(&Destination, v36, (unsigned int)DriverNameFromKeyNode);
      }
      if ( DriverNameFromKeyNode == -1073741554 )
      {
LABEL_63:
        DriverNameFromKeyNode = ObOpenObjectByName((int)&v60, (int)IoDriverObjectType, 0, 0, 0, 0LL, (__int64)&Handle);
        if ( DriverNameFromKeyNode < 0 )
        {
          ExReleaseResourceLite(&IopDriverLoadResource);
          IopBootLog(&Destination, 0);
          if ( DriverNameFromKeyNode == -1073741772 )
            DriverNameFromKeyNode = -1073740914;
          goto LABEL_46;
        }
        DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v54, 0LL);
        ZwClose(Handle);
        if ( DriverNameFromKeyNode >= 0 )
        {
          DriverNameFromKeyNode = IopResurrectDriver((__int64)v54);
          ObfDereferenceObject(v54);
        }
      }
    }
    else
    {
      v15 = RtlImageNtHeader(BaseAddress);
      *(_WORD *)v45 = v15->OptionalHeader.MinorImageVersion;
      *(_WORD *)&v45[2] = v15->OptionalHeader.MajorImageVersion;
      DriverNameFromKeyNode = PnpPrepareDriverLoading((int)&v43, KeyHandle, BaseAddress, a3, &v47);
      if ( DriverNameFromKeyNode >= 0 )
      {
        LOBYTE(v16) = KeGetCurrentThread()->PreviousMode;
        DriverNameFromKeyNode = ObCreateObjectEx(v16, (_DWORD)IoDriverObjectType, (unsigned int)&v60, 0);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v17 = v57;
          memset(v57, 0, 0x1A0uLL);
          v17[6] = v17 + 42;
          v17[42] = v17;
          ReturnLength = 28;
          memset64(v17 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
          v18 = (char *)BaseAddress;
          v19 = BaseAddress;
          *(_DWORD *)v17 = 22020100;
          v20 = RtlImageNtHeader(v19);
          *(_WORD *)v45 = v20->OptionalHeader.MinorImageVersion;
          *(_WORD *)&v45[2] = v20->OptionalHeader.MajorImageVersion;
          v21 = &v18[v20->OptionalHeader.AddressOfEntryPoint];
          if ( (v20->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
            *((_DWORD *)v17 + 4) |= 2u;
          v17[11] = v21;
          v17[5] = BugCheckParameter2;
          v17[3] = v18;
          *((_DWORD *)v17 + 8) = v20->OptionalHeader.SizeOfImage;
          DriverNameFromKeyNode = ObInsertObjectEx(v17, 0LL, 0, 0LL, (__int64)&Handle);
          ExReleaseResourceLite(&IopDriverLoadResource);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v22 = Handle;
            v23 = ObReferenceObjectByHandle(
                    Handle,
                    0,
                    IoDriverObjectType,
                    KeGetCurrentThread()->PreviousMode,
                    &Object,
                    0LL);
            if ( v23 )
              KeBugCheckEx(0x11Fu, (ULONG_PTR)v22, v23, (ULONG_PTR)Object, 0LL);
            ZwClose(v22);
            v24 = (char *)Object;
            *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
            if ( ViVerifierDriverAddedThunkListHead )
              v25 = ExAllocatePoolWithTagPriority(
                      NonPagedPoolNx,
                      v46.MaximumLength,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
            else
              v25 = ExAllocatePoolWithTag(NonPagedPoolNx, v46.MaximumLength, 0x20206F49u);
            *((_QWORD *)v24 + 8) = v25;
            if ( v25 )
            {
              *((_WORD *)v24 + 29) = v46.MaximumLength;
              *((_WORD *)v24 + 28) = v46.Length;
              memmove(*((void **)v24 + 8), v46.Buffer, v46.MaximumLength);
            }
            if ( ViVerifierDriverAddedThunkListHead )
              v26 = ExAllocatePoolWithTagPriority(
                      NonPagedPoolNx,
                      0x1000uLL,
                      0x20206F49u,
                      (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
            else
              v26 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x20206F49u);
            v27 = v26;
            if ( v26 )
            {
              DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v26, 0x1000u, &ReturnLength);
              if ( DriverNameFromKeyNode < 0 )
              {
                ObMakeTemporaryObject(v24);
                ObfDereferenceObject(v24);
                ExFreePoolWithTag(v27, 0);
                v6 = (unsigned __int16 *)P;
              }
              else
              {
                if ( v44 )
                {
                  v28 = HIWORD(v43);
                  v29 = ViVerifierDriverAddedThunkListHead
                      ? ExAllocatePoolWithTagPriority(
                          NonPagedPoolNx,
                          HIWORD(v43),
                          0x20206F49u,
                          (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1))
                      : ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v43), 0x20206F49u);
                  *(_QWORD *)(*((_QWORD *)v24 + 6) + 32LL) = v29;
                  v30 = *((_QWORD *)v24 + 6);
                  if ( *(_QWORD *)(v30 + 32) )
                  {
                    v31 = v44;
                    *(_WORD *)(v30 + 26) = HIWORD(v43);
                    *(_WORD *)(*((_QWORD *)v24 + 6) + 24LL) = v43;
                    memmove(*(void **)(*((_QWORD *)v24 + 6) + 32LL), v31, v28);
                  }
                }
                if ( (v47 & 1) != 0 )
                  *((_DWORD *)v24 + 4) |= 0x100u;
                PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v27);
                DriverNameFromKeyNode = (*((__int64 (__fastcall **)(char *, void *))v24 + 11))(v24, v27);
                if ( DriverNameFromKeyNode >= 0 )
                {
                  VfXdvDriverCaptureIoCallbacks(v24);
                  KseShimDriverIoCallbacks(v24, v32, (__int64)&Destination);
                }
                PnpDiagnosticTraceObjectWithStatus(
                  &KMPnPEvt_DriverInit_Stop,
                  (unsigned __int16 *)v27,
                  DriverNameFromKeyNode);
                v33 = 28LL;
                *v58 = DriverNameFromKeyNode;
                if ( DriverNameFromKeyNode < 0 )
                  DriverNameFromKeyNode = -1073740955;
                v34 = (__int64 (__fastcall **)(__int64, IRP *))(v24 + 112);
                do
                {
                  if ( !*v34 )
                    *v34 = IopInvalidDeviceRequest;
                  ++v34;
                  --v33;
                }
                while ( v33 );
                ExFreePoolWithTag(v27, 0);
                if ( DriverNameFromKeyNode < 0 )
                {
                  ObMakeTemporaryObject(v24);
                  ObfDereferenceObject(v24);
                }
                else
                {
                  IopBootLog(&Destination, 1);
                  MiFreeDriverInitialization(*((_QWORD *)v24 + 5));
                  IopReadyDeviceObjects((__int64)v24);
                }
                v6 = (unsigned __int16 *)P;
              }
            }
            else
            {
              ObMakeTemporaryObject(v24);
              ObfDereferenceObject(v24);
              v6 = (unsigned __int16 *)P;
              DriverNameFromKeyNode = -1073741670;
            }
            goto LABEL_46;
          }
          goto LABEL_67;
        }
      }
      MmUnloadSystemImage(BugCheckParameter2);
    }
    ExReleaseResourceLite(&IopDriverLoadResource);
LABEL_67:
    IopBootLog(&Destination, 0);
  }
LABEL_46:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741554 && DriverNameFromKeyNode != -1073741218 )
  {
    PnpDriverLoadingFailed(KeyHandle);
    if ( DriverNameFromKeyNode != -1073740955 )
    {
      RegistryValue = IopGetRegistryValue(KeyHandle);
      if ( RegistryValue >= 0 )
      {
        if ( *((_DWORD *)v59 + 3)
          && CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v59 + *((unsigned int *)v59 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v38 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v38 = 0LL;
          if ( ((unsigned __int64)&v46 & -(__int64)(v46.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v46 & -(__int64)(v46.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v38, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v59, 0);
      }
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v44 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v43,
      DriverNameFromKeyNode,
      (__int64)&v46,
      v45[0]);
    ExFreePoolWithTag(v44, 0);
  }
  if ( v46.Buffer )
    ExFreePoolWithTag(v46.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
