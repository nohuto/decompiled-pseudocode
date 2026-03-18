/*
 * XREFs of IopLoadDriver @ 0x140517490
 * Callers:
 *     IopLoadUnloadDriver @ 0x14046F260 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x140845AEC (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140024538 (IopVerifierExAllocatePool.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     RtlImageNtHeader @ 0x1400AE3B0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x1400DEC60 (RtlAppendUnicodeToString.c)
 *     PnpDiagnosticTraceObject @ 0x1400FBA44 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400FE678 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14012D114 (PnpDiagnosticTraceObjectWithStatus.c)
 *     HeadlessKernelAddLogEntry @ 0x140130308 (HeadlessKernelAddLogEntry.c)
 *     DbgPrint @ 0x140132890 (DbgPrint.c)
 *     IopResurrectDriver @ 0x14015B3D8 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObMakeTemporaryObject @ 0x14046F200 (ObMakeTemporaryObject.c)
 *     NtQueryObject @ 0x14048EB10 (NtQueryObject.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     IopBuildFullDriverPath @ 0x140518684 (IopBuildFullDriverPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051A5E4 (IopGetRegistryValue.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     MmLoadSystemImageEx @ 0x1405431E0 (MmLoadSystemImageEx.c)
 *     KseShimDriverIoCallbacks @ 0x14054418C (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1405445A8 (PnpPrepareDriverLoading.c)
 *     MiFreeDriverInitialization @ 0x14058F310 (MiFreeDriverInitialization.c)
 *     IopReadyDeviceObjects @ 0x1405998EC (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x14059BC30 (IopBootLog.c)
 *     MmUnloadSystemImage @ 0x14059DFC0 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x1405C8154 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x1406B4A60 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x1406B5648 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x1406B5A20 (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int16 *v8; // r15
  _WORD *v9; // r14
  NTSTATUS v10; // eax
  int DriverNameFromKeyNode; // edi
  PVOID Pool; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // r13
  char *v17; // rdi
  PVOID v18; // rcx
  PIMAGE_NT_HEADERS v19; // rdx
  char *v20; // rax
  HANDLE v21; // rdi
  NTSTATUS v22; // eax
  char *v23; // rsi
  PVOID v24; // rax
  PVOID v25; // r15
  unsigned int v26; // edi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 (__fastcall **v29)(__int64, IRP *); // rax
  __int64 v31; // rdx
  int RegistryValue; // eax
  ULONG_PTR v33; // r9
  UNICODE_STRING Destination; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  PVOID v37; // [rsp+70h] [rbp-90h]
  char v38[4]; // [rsp+78h] [rbp-88h]
  UNICODE_STRING v39; // [rsp+80h] [rbp-80h] BYREF
  int v40; // [rsp+90h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-68h] BYREF
  PVOID P; // [rsp+A0h] [rbp-60h]
  ULONG ReturnLength; // [rsp+A8h] [rbp-58h] BYREF
  PVOID BaseAddress; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v47; // [rsp+D0h] [rbp-30h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-28h] BYREF
  ULONG v49; // [rsp+E0h] [rbp-20h] BYREF
  PVOID v50; // [rsp+E8h] [rbp-18h] BYREF
  int *v51; // [rsp+F0h] [rbp-10h]
  PVOID v52; // [rsp+F8h] [rbp-8h]
  int v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 v54; // [rsp+108h] [rbp+8h]
  UNICODE_STRING *v55; // [rsp+110h] [rbp+10h]
  int v56; // [rsp+118h] [rbp+18h]
  __int128 v57; // [rsp+120h] [rbp+20h]
  _WORD KeyValueInformation[40]; // [rsp+130h] [rbp+30h] BYREF

  v4 = 0LL;
  v51 = a4;
  *a4 = 0;
  Length = 0;
  v36 = 0;
  v37 = 0LL;
  *(_DWORD *)v38 = 0;
  v39.Buffer = 0LL;
  *(_DWORD *)&v39.Length = 0;
  v8 = 0LL;
  Destination.Buffer = 0LL;
  v9 = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v40 = 0;
  v10 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v10 != -1073741789 && v10 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_38;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_38;
  }
  P = IopVerifierExAllocatePool(NonPagedPoolNx, Length + 8);
  v8 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_38;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, P, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    Destination.Length = v8[6];
    Destination.MaximumLength = Destination.Length + 8;
    Destination.Buffer = v8 + 8;
    Pool = IopVerifierExAllocatePool(PagedPool, Destination.Length + 2LL);
    v37 = Pool;
    v9 = Pool;
    if ( Pool )
    {
      LOWORD(v36) = Destination.Length;
      HIWORD(v36) = Destination.Length + 2;
      memmove(Pool, Destination.Buffer, Destination.Length);
      v9[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v36);
      if ( a2 )
      {
        if ( InitSafeBootMode )
        {
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v49) < 0
            || (DestinationString.Length = KeyValueInformation[4] - 2,
                DestinationString.MaximumLength = KeyValueInformation[4] - 2,
                DestinationString.Buffer = &KeyValueInformation[6],
                !(unsigned __int8)IopSafebootDriverLoad(&DestinationString)) )
          {
            if ( !(unsigned __int8)IopSafebootDriverLoad(&Destination) )
            {
              IopBootLog(&Destination);
              DbgPrint("SAFEBOOT: skipping device = %wZ(%wZ)\n", &Destination, &DestinationString);
              HeadlessKernelAddLogEntry();
              ObCloseHandle(KeyHandle, 0);
              return 3221226335LL;
            }
          }
        }
      }
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v36, KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v39);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v53 = 48;
          v54 = 0LL;
          v55 = &v39;
          v56 = IopCaseInsensitive != 0 ? 592 : 528;
          v57 = 0LL;
          ExAcquireResourceExclusiveLite(&IopDriverLoadResource, 1u);
          SystemImage = MmLoadSystemImageEx(
                          (unsigned int)&Destination,
                          0,
                          0,
                          0,
                          (__int64)&BugCheckParameter2,
                          (__int64)&BaseAddress);
          DriverNameFromKeyNode = SystemImage;
          if ( SystemImage < 0 )
          {
            if ( SystemImage == -1073741554 )
              goto LABEL_54;
            if ( (unsigned __int8)IopCheckIfNotNativeDriver((unsigned int)SystemImage, &Destination) == 1 )
            {
              DriverNameFromKeyNode = (a3 != 0) - 1073740949;
              IopLogBlockedDriverEvent(&Destination, v31, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_54:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (unsigned int)&v53,
                                        (_DWORD)IoDriverObjectType,
                                        0,
                                        0,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_38;
              }
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v47, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v47);
                ObfDereferenceObject(v47);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseAddress);
            *(_WORD *)v38 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v38[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading(&v36, KeyHandle, BaseAddress, a3);
            if ( DriverNameFromKeyNode < 0
              || (DriverNameFromKeyNode = ObCreateObjectEx(
                                            KeGetCurrentThread()->PreviousMode,
                                            IoDriverObjectType,
                                            (__int64)&v53,
                                            0,
                                            (__int64)&v40,
                                            416,
                                            0,
                                            0,
                                            &v50,
                                            0LL),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v15 = v50;
              memset(v50, 0, 0x1A0uLL);
              v16 = 28LL;
              v15[6] = v15 + 42;
              v15[42] = v15;
              ReturnLength = 28;
              memset64(v15 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              v17 = (char *)BaseAddress;
              v18 = BaseAddress;
              *(_DWORD *)v15 = 22020100;
              v19 = RtlImageNtHeader(v18);
              *(_WORD *)v38 = v19->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v38[2] = v19->OptionalHeader.MajorImageVersion;
              v20 = &v17[v19->OptionalHeader.AddressOfEntryPoint];
              if ( (v19->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v15 + 4) |= 2u;
              v15[11] = v20;
              v15[5] = BugCheckParameter2;
              v15[3] = v17;
              *((_DWORD *)v15 + 8) = v19->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObjectEx(v15, 0LL, 1u, 0, 0, 0LL, (unsigned __int64 *)&Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v21 = Handle;
                v22 = ObReferenceObjectByHandle(
                        Handle,
                        0,
                        IoDriverObjectType,
                        KeGetCurrentThread()->PreviousMode,
                        &Object,
                        0LL);
                if ( v22 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v21, v22, (ULONG_PTR)Object, 0LL);
                ZwClose(v21);
                v23 = (char *)Object;
                *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v24 = IopVerifierExAllocatePool(NonPagedPoolNx, v39.MaximumLength);
                *((_QWORD *)v23 + 8) = v24;
                if ( v24 )
                {
                  *((_WORD *)v23 + 29) = v39.MaximumLength;
                  *((_WORD *)v23 + 28) = v39.Length;
                  memmove(*((void **)v23 + 8), v39.Buffer, v39.MaximumLength);
                }
                v25 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x1000uLL);
                if ( v25 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v25, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v23);
                    ObfDereferenceObject(v23);
                    ExFreePoolWithTag(v25, 0);
                    v9 = v37;
                  }
                  else
                  {
                    v9 = v37;
                    if ( v37 )
                    {
                      v26 = HIWORD(v36);
                      *(_QWORD *)(*((_QWORD *)v23 + 6) + 32LL) = IopVerifierExAllocatePool(NonPagedPoolNx, HIWORD(v36));
                      v27 = *((_QWORD *)v23 + 6);
                      if ( *(_QWORD *)(v27 + 32) )
                      {
                        *(_WORD *)(v27 + 26) = v26;
                        *(_WORD *)(*((_QWORD *)v23 + 6) + 24LL) = v36;
                        memmove(*(void **)(*((_QWORD *)v23 + 6) + 32LL), v9, v26);
                      }
                      v16 = 28LL;
                    }
                    if ( (v40 & 1) != 0 )
                      *((_DWORD *)v23 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v25);
                    DriverNameFromKeyNode = (*((__int64 (__fastcall **)(char *, PVOID))v23 + 11))(v23, v25);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfXdvDriverCaptureIoCallbacks(v23);
                      KseShimDriverIoCallbacks(v23, v28, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v25,
                      DriverNameFromKeyNode);
                    *v51 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    v29 = (__int64 (__fastcall **)(__int64, IRP *))(v23 + 112);
                    do
                    {
                      if ( !*v29 )
                        *v29 = IopInvalidDeviceRequest;
                      ++v29;
                      --v16;
                    }
                    while ( v16 );
                    ExFreePoolWithTag(v25, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v23);
                      ObfDereferenceObject(v23);
                    }
                    else
                    {
                      IopBootLog(&Destination);
                      MiFreeDriverInitialization(*((_QWORD *)v23 + 5));
                      IopReadyDeviceObjects(v23);
                    }
                  }
                  v8 = (unsigned __int16 *)P;
                }
                else
                {
                  ObMakeTemporaryObject(v23);
                  ObfDereferenceObject(v23);
                  v9 = v37;
                  DriverNameFromKeyNode = -1073741670;
                  v8 = (unsigned __int16 *)P;
                }
                goto LABEL_38;
              }
            }
            IopBootLog(&Destination);
            v9 = v37;
          }
        }
        goto LABEL_38;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_38:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741554 && DriverNameFromKeyNode != -1073741218 )
  {
    PnpDriverLoadingFailed(KeyHandle, 0LL);
    if ( DriverNameFromKeyNode != -1073740955 )
    {
      RegistryValue = IopGetRegistryValue(KeyHandle);
      if ( RegistryValue >= 0 )
      {
        if ( *((_DWORD *)v52 + 3)
          && CmFirstTime == 1
          && (unsigned int)(*(_DWORD *)((char *)v52 + *((unsigned int *)v52 + 2)) - 2) <= 1 )
        {
          if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
            v33 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
          else
            v33 = 0LL;
          if ( ((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) != 0 )
            v4 = *(_QWORD *)(((unsigned __int64)&v39 & -(__int64)(v39.Buffer != 0LL)) + 8);
          KeBugCheckEx(0x5Au, 1uLL, v4, v33, DriverNameFromKeyNode);
        }
        ExFreePoolWithTag(v52, 0);
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v9 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v36,
      DriverNameFromKeyNode,
      (__int64)&v39,
      v38[0]);
    ExFreePoolWithTag(v9, 0);
  }
  if ( v39.Buffer )
    ExFreePoolWithTag(v39.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
