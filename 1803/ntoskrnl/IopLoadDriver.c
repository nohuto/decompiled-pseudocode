/*
 * XREFs of IopLoadDriver @ 0x1405F7CAC
 * Callers:
 *     IopLoadUnloadDriver @ 0x1405F6C00 (IopLoadUnloadDriver.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeSystemDrivers @ 0x1408B5994 (IopInitializeSystemDrivers.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x140007BA0 (IopVerifierExAllocatePool.c)
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     RtlAppendUnicodeToString @ 0x14006DCF0 (RtlAppendUnicodeToString.c)
 *     DbgPrint @ 0x1400772C0 (DbgPrint.c)
 *     PnpDiagnosticTraceObject @ 0x1400C8D00 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x1400C8E84 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400FFE30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140160C9C (PnpDiagnosticTraceDriverFullInfo.c)
 *     HeadlessKernelAddLogEntry @ 0x140160D84 (HeadlessKernelAddLogEntry.c)
 *     IopResurrectDriver @ 0x14016E1D8 (IopResurrectDriver.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     NtQueryObject @ 0x1404A7270 (NtQueryObject.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObMakeTemporaryObject @ 0x14053ECF0 (ObMakeTemporaryObject.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopGetRegistryValue @ 0x1405D9B94 (IopGetRegistryValue.c)
 *     IopReadyDeviceObjects @ 0x1405F6DDC (IopReadyDeviceObjects.c)
 *     IopBootLog @ 0x1405F6E00 (IopBootLog.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     MiFreeDriverInitialization @ 0x1405F845C (MiFreeDriverInitialization.c)
 *     MmLoadSystemImageEx @ 0x1405F9AF4 (MmLoadSystemImageEx.c)
 *     KseShimDriverIoCallbacks @ 0x1405FB47C (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x1405FB610 (PnpPrepareDriverLoading.c)
 *     IopBuildFullDriverPath @ 0x1405FB6D4 (IopBuildFullDriverPath.c)
 *     MmUnloadSystemImage @ 0x140605910 (MmUnloadSystemImage.c)
 *     PnpDriverLoadingFailed @ 0x140653954 (PnpDriverLoadingFailed.c)
 *     IopCheckIfNotNativeDriver @ 0x140719710 (IopCheckIfNotNativeDriver.c)
 *     IopLogBlockedDriverEvent @ 0x14071A2F8 (IopLogBlockedDriverEvent.c)
 *     IopSafebootDriverLoad @ 0x14071A6D0 (IopSafebootDriverLoad.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14080EE78 (VfXdvDriverCaptureIoCallbacks.c)
 */

__int64 __fastcall IopLoadDriver(HANDLE KeyHandle, char a2, unsigned __int8 a3, int *a4)
{
  ULONG_PTR v4; // rbx
  unsigned __int16 *v7; // r15
  _WORD *v8; // r14
  NTSTATUS v9; // eax
  int DriverNameFromKeyNode; // edi
  __int64 v11; // rdx
  PVOID Pool; // rax
  int SystemImage; // eax
  PIMAGE_NT_HEADERS v14; // rax
  _QWORD *v15; // rsi
  char *v16; // rdi
  PVOID v17; // rcx
  PIMAGE_NT_HEADERS v18; // rdx
  char *v19; // rax
  HANDLE v20; // rdi
  NTSTATUS v21; // eax
  PVOID v22; // rsi
  PVOID v23; // rax
  PVOID v24; // r15
  unsigned __int16 v25; // di
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned int i; // eax
  __int64 v30; // rdx
  ULONG_PTR v31; // r9
  UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Length; // [rsp+68h] [rbp-98h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  PVOID v36; // [rsp+78h] [rbp-88h]
  char v37[4]; // [rsp+80h] [rbp-80h]
  UNICODE_STRING v38; // [rsp+88h] [rbp-78h] BYREF
  int v39; // [rsp+98h] [rbp-68h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-60h] BYREF
  PVOID P; // [rsp+A8h] [rbp-58h]
  ULONG ReturnLength; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BaseAddress; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C0h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  PVOID v46; // [rsp+D8h] [rbp-28h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  ULONG v48; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v49; // [rsp+F0h] [rbp-10h] BYREF
  int *v50; // [rsp+F8h] [rbp-8h]
  PVOID v51; // [rsp+100h] [rbp+0h] BYREF
  int v52; // [rsp+108h] [rbp+8h] BYREF
  __int64 v53; // [rsp+110h] [rbp+10h]
  UNICODE_STRING *v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+120h] [rbp+20h]
  __int128 v56; // [rsp+128h] [rbp+28h]
  _WORD KeyValueInformation[40]; // [rsp+140h] [rbp+40h] BYREF

  v4 = 0LL;
  v50 = a4;
  *a4 = 0;
  Length = 0;
  v35 = 0;
  v36 = 0LL;
  *(_DWORD *)v37 = 0;
  v7 = 0LL;
  v38.Buffer = 0LL;
  v8 = 0LL;
  *(_DWORD *)&v38.Length = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&Destination.Length = 0;
  v39 = 0;
  v9 = NtQueryKey(KeyHandle, KeyBasicInformation, 0LL, 0, &Length);
  if ( v9 != -1073741789 && v9 != -2147483643 )
  {
    DriverNameFromKeyNode = -1073741472;
    goto LABEL_36;
  }
  if ( Length + 8 < Length )
  {
    DriverNameFromKeyNode = -1073741675;
    goto LABEL_36;
  }
  P = IopVerifierExAllocatePool(NonPagedPoolNx, Length + 8);
  v7 = (unsigned __int16 *)P;
  if ( !P )
  {
    DriverNameFromKeyNode = -1073741670;
    goto LABEL_36;
  }
  DriverNameFromKeyNode = NtQueryKey(KeyHandle, KeyBasicInformation, P, Length, &Length);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v11 = v7[6];
    Destination.Length = v11;
    Destination.MaximumLength = v11 + 8;
    Destination.Buffer = v7 + 8;
    Pool = IopVerifierExAllocatePool(PagedPool, v11 + 2);
    v36 = Pool;
    v8 = Pool;
    if ( Pool )
    {
      LOWORD(v35) = Destination.Length;
      HIWORD(v35) = Destination.Length + 2;
      memmove(Pool, Destination.Buffer, Destination.Length);
      v8[(unsigned __int64)Destination.Length >> 1] = 0;
      RtlAppendUnicodeToString(&Destination, L".SYS");
      HeadlessKernelAddLogEntry();
      PnpDiagnosticTraceObject(&KMPnPEvt_DriverLoad_Start, (unsigned __int16 *)&v35);
      if ( InitSafeBootMode )
      {
        if ( a2 )
        {
          RtlInitUnicodeString(&DestinationString, L"Group");
          memset(KeyValueInformation, 0, 0x4CuLL);
          if ( NtQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x4Cu,
                 &v48) < 0
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
      DriverNameFromKeyNode = IopBuildFullDriverPath(&v35, KeyHandle, &Destination);
      if ( DriverNameFromKeyNode >= 0 )
      {
        DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &v38);
        if ( DriverNameFromKeyNode >= 0 )
        {
          v52 = 48;
          v53 = 0LL;
          v54 = &v38;
          v55 = IopCaseInsensitive != 0 ? 592 : 528;
          v56 = 0LL;
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
              IopLogBlockedDriverEvent(&Destination, v30, (unsigned int)DriverNameFromKeyNode);
            }
            if ( DriverNameFromKeyNode == -1073741554 )
            {
LABEL_54:
              DriverNameFromKeyNode = ObOpenObjectByName(
                                        (__int64)&v52,
                                        (__int64)IoDriverObjectType,
                                        0,
                                        0LL,
                                        0,
                                        0LL,
                                        (__int64)&Handle);
              if ( DriverNameFromKeyNode < 0 )
              {
                ExReleaseResourceLite(&IopDriverLoadResource);
                IopBootLog(&Destination, 0);
                if ( DriverNameFromKeyNode == -1073741772 )
                  DriverNameFromKeyNode = -1073740914;
                goto LABEL_36;
              }
              DriverNameFromKeyNode = ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v46, 0LL);
              ZwClose(Handle);
              if ( DriverNameFromKeyNode >= 0 )
              {
                DriverNameFromKeyNode = IopResurrectDriver((__int64)v46);
                ObfDereferenceObject(v46);
              }
            }
            ExReleaseResourceLite(&IopDriverLoadResource);
            IopBootLog(&Destination, 0);
          }
          else
          {
            v14 = RtlImageNtHeader(BaseAddress);
            *(_WORD *)v37 = v14->OptionalHeader.MinorImageVersion;
            *(_WORD *)&v37[2] = v14->OptionalHeader.MajorImageVersion;
            DriverNameFromKeyNode = PnpPrepareDriverLoading(&v35, KeyHandle, BaseAddress, a3);
            if ( DriverNameFromKeyNode < 0
              || (DriverNameFromKeyNode = ObCreateObjectEx(
                                            KeGetCurrentThread()->gap0[10],
                                            IoDriverObjectType,
                                            (int)&v52,
                                            0,
                                            (__int64)&v39,
                                            416,
                                            0,
                                            0,
                                            &v49,
                                            0LL),
                  DriverNameFromKeyNode < 0) )
            {
              MmUnloadSystemImage(BugCheckParameter2);
              ExReleaseResourceLite(&IopDriverLoadResource);
            }
            else
            {
              v15 = v49;
              memset(v49, 0, 0x1A0uLL);
              v15[6] = v15 + 42;
              v15[42] = v15;
              ReturnLength = 28;
              memset64(v15 + 14, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
              v16 = (char *)BaseAddress;
              v17 = BaseAddress;
              *(_DWORD *)v15 = 22020100;
              v18 = RtlImageNtHeader(v17);
              *(_WORD *)v37 = v18->OptionalHeader.MinorImageVersion;
              *(_WORD *)&v37[2] = v18->OptionalHeader.MajorImageVersion;
              v19 = &v16[v18->OptionalHeader.AddressOfEntryPoint];
              if ( (v18->OptionalHeader.DllCharacteristics & 0x2000) == 0 )
                *((_DWORD *)v15 + 4) |= 2u;
              v15[11] = v19;
              v15[5] = BugCheckParameter2;
              v15[3] = v16;
              *((_DWORD *)v15 + 8) = v18->OptionalHeader.SizeOfImage;
              DriverNameFromKeyNode = ObInsertObjectEx(v15, 0LL, 1LL, 0, 0, 0LL, &Handle);
              ExReleaseResourceLite(&IopDriverLoadResource);
              if ( DriverNameFromKeyNode >= 0 )
              {
                v20 = Handle;
                v21 = ObReferenceObjectByHandle(
                        Handle,
                        0,
                        IoDriverObjectType,
                        KeGetCurrentThread()->PreviousMode,
                        &Object,
                        0LL);
                if ( v21 )
                  KeBugCheckEx(0x11Fu, (ULONG_PTR)v20, v21, (ULONG_PTR)Object, 0LL);
                ZwClose(v20);
                v22 = Object;
                *((_QWORD *)Object + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                v23 = IopVerifierExAllocatePool(NonPagedPoolNx, v38.MaximumLength);
                *((_QWORD *)v22 + 8) = v23;
                if ( v23 )
                {
                  *((_WORD *)v22 + 29) = v38.MaximumLength;
                  *((_WORD *)v22 + 28) = v38.Length;
                  memmove(*((void **)v22 + 8), v38.Buffer, v38.MaximumLength);
                }
                v24 = IopVerifierExAllocatePool(NonPagedPoolNx, 0x1000uLL);
                if ( v24 )
                {
                  DriverNameFromKeyNode = NtQueryObject(KeyHandle, ObjectNameInformation, v24, 0x1000u, &ReturnLength);
                  if ( DriverNameFromKeyNode < 0 )
                  {
                    ObMakeTemporaryObject(v22);
                    ObfDereferenceObject(v22);
                    ExFreePoolWithTag(v24, 0);
                    v8 = v36;
                  }
                  else
                  {
                    v8 = v36;
                    if ( v36 )
                    {
                      v25 = HIWORD(v35);
                      *(_QWORD *)(*((_QWORD *)v22 + 6) + 32LL) = IopVerifierExAllocatePool(NonPagedPoolNx, HIWORD(v35));
                      v26 = *((_QWORD *)v22 + 6);
                      if ( *(_QWORD *)(v26 + 32) )
                      {
                        *(_WORD *)(v26 + 26) = v25;
                        *(_WORD *)(*((_QWORD *)v22 + 6) + 24LL) = v35;
                        memmove(*(void **)(*((_QWORD *)v22 + 6) + 32LL), v8, v25);
                      }
                    }
                    if ( (v39 & 1) != 0 )
                      *((_DWORD *)v22 + 4) |= 0x100u;
                    PnpDiagnosticTraceObject(&KMPnPEvt_DriverInit_Start, (unsigned __int16 *)v24);
                    DriverNameFromKeyNode = (*((__int64 (__fastcall **)(PVOID, PVOID))v22 + 11))(v22, v24);
                    if ( DriverNameFromKeyNode >= 0 )
                    {
                      VfXdvDriverCaptureIoCallbacks(v22);
                      KseShimDriverIoCallbacks(v22, v27, &Destination);
                    }
                    PnpDiagnosticTraceObjectWithStatus(
                      &KMPnPEvt_DriverInit_Stop,
                      (unsigned __int16 *)v24,
                      DriverNameFromKeyNode);
                    *v50 = DriverNameFromKeyNode;
                    if ( DriverNameFromKeyNode < 0 )
                      DriverNameFromKeyNode = -1073740955;
                    for ( i = 0; i <= 0x1B; ++i )
                    {
                      if ( !*((_QWORD *)v22 + i + 14) )
                        *((_QWORD *)v22 + i + 14) = IopInvalidDeviceRequest;
                    }
                    ExFreePoolWithTag(v24, 0);
                    if ( DriverNameFromKeyNode < 0 )
                    {
                      ObMakeTemporaryObject(v22);
                      ObfDereferenceObject(v22);
                    }
                    else
                    {
                      IopBootLog(&Destination, 1);
                      MiFreeDriverInitialization(*((_QWORD *)v22 + 5));
                      IopReadyDeviceObjects((__int64)v22);
                    }
                  }
                  v7 = (unsigned __int16 *)P;
                }
                else
                {
                  ObMakeTemporaryObject(v22);
                  ObfDereferenceObject(v22);
                  v8 = v36;
                  DriverNameFromKeyNode = -1073741670;
                  v7 = (unsigned __int16 *)P;
                }
                goto LABEL_36;
              }
            }
            IopBootLog(&Destination, 0);
            v8 = v36;
          }
        }
        goto LABEL_36;
      }
    }
    else
    {
      DriverNameFromKeyNode = -1073741670;
    }
    Destination.Buffer = 0LL;
  }
LABEL_36:
  HeadlessKernelAddLogEntry();
  if ( DriverNameFromKeyNode < 0 && DriverNameFromKeyNode != -1073741554 && DriverNameFromKeyNode != -1073741218 )
  {
    PnpDriverLoadingFailed(KeyHandle);
    if ( DriverNameFromKeyNode != -1073740955 && IopGetRegistryValue(KeyHandle, L"ErrorControl", 0, &v51) >= 0 )
    {
      if ( *((_DWORD *)v51 + 3)
        && (_BYTE)CmFirstTime == 1
        && (unsigned int)(*(_DWORD *)((char *)v51 + *((unsigned int *)v51 + 2)) - 2) <= 1 )
      {
        if ( ((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) != 0 )
          v31 = *(_QWORD *)(((unsigned __int64)&Destination & -(__int64)(Destination.Buffer != 0LL)) + 8);
        else
          v31 = 0LL;
        if ( ((unsigned __int64)&v38 & -(__int64)(v38.Buffer != 0LL)) != 0 )
          v4 = *(_QWORD *)(((unsigned __int64)&v38 & -(__int64)(v38.Buffer != 0LL)) + 8);
        KeBugCheckEx(0x5Au, 1uLL, v4, v31, DriverNameFromKeyNode);
      }
      ExFreePoolWithTag(v51, 0);
    }
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverLoad_Stop,
      (unsigned __int16 *)&v35,
      DriverNameFromKeyNode,
      (__int64)&v38,
      v37[0]);
    ExFreePoolWithTag(v8, 0);
  }
  if ( v38.Buffer )
    ExFreePoolWithTag(v38.Buffer, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  ObCloseHandle(KeyHandle, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
