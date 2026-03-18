/*
 * XREFs of ACPIInitialize @ 0x1C00AF648
 * Callers:
 *     ACPIInitStartACPI @ 0x1C00AC2D8 (ACPIInitStartACPI.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     ACPIGetTableVersion @ 0x1C00200B0 (ACPIGetTableVersion.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C002165C (ACPIInitializeKernelTableHandler.c)
 *     ACPIEnableInitializeACPI @ 0x1C00218F0 (ACPIEnableInitializeACPI.c)
 *     ACPIInterruptInitialize @ 0x1C0090DB4 (ACPIInterruptInitialize.c)
 *     AcpiKsrRestorePersistentContext @ 0x1C00A3540 (AcpiKsrRestorePersistentContext.c)
 *     ACPIInitializeAMLI @ 0x1C00AD404 (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDBs @ 0x1C00AE954 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C00AEB50 (ACPILoadProcessRSDT.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C00AF1F8 (AcpiIrqLibConfigureLibrary.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00AF81C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00AFBDC (AcpiIrqLibInitializeGlobalState.c)
 */

char __fastcall ACPIInitialize(__int64 a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // edx
  _QWORD *v6; // rax
  int v7; // eax
  int v8; // edx
  bool v9; // al
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edx
  ULONG_PTR BugCheckParameter4; // rbx
  int v14; // eax
  ETWENABLECALLBACK *v15; // rdx
  void *v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // edx
  ULONG_PTR v20; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  __int64 v24; // [rsp+98h] [rbp+28h] BYREF
  char v25; // [rsp+A0h] [rbp+30h] BYREF

  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      1,
      31,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v2);
  }
  v4 = ACPIInitializeAMLI();
  if ( v4 < 0 )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      32,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v4);
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(a1);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C0079F70 = (__int64)&AcpiDynamicDataBlockTableList;
  AcpiDynamicDataBlockTableList = (__int64)&AcpiDynamicDataBlockTableList;
  KeInitializeSpinLock((PKSPIN_LOCK)AcpiInformation + 8);
  v6 = (_QWORD *)((char *)AcpiInformation + 48);
  *((_QWORD *)AcpiInformation + 7) = (char *)AcpiInformation + 48;
  *v6 = v6;
  *((_QWORD *)AcpiInformation + 9) = 0LL;
  *((_DWORD *)AcpiInformation + 20) = 0;
  v7 = ACPILoadProcessRSDT();
  if ( v7 < 0 )
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      1,
      33,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v7);
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  v9 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0
     || (int)ACPIGetTableVersion(1346584902, &v24) >= 0 && (unsigned int)v24 >= 5);
  gAcpiHonorBiosPolarities = v9;
  if ( (int)ACPIGetTableVersion(1346584902, &v24) >= 0 && (unsigned int)v24 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  HalPrivateDispatchTable[120] = (__int64 (__fastcall *)(_QWORD, __int64))ACPILateRestore;
  if ( (int)KsrGetFirmwareInformation(&v25) >= 0 )
  {
    v24 = 0LL;
    KsrEnumeratePersistedMemory(&GUID_ACPI_KSR_CONTEXT, AcpiKsrEnumeratePersistedMemory, &v24);
    if ( v24 )
      AcpiKsrRestorePersistentContext(v24);
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&AcpiKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(AcpiKsrCallbackObject, (PCALLBACK_FUNCTION)AcpiKsrCallback, 0LL);
  }
  ACPIEnableInitializeACPI(0LL, v10);
  v11 = ACPIInitializeDDBs();
  BugCheckParameter4 = v11;
  if ( v11 < 0 )
  {
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      1,
      34,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids,
      v11);
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  v14 = NotifyHalWithMachineStatesAndRetrieveInterruptModel(&v24);
  if ( v14 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, v14);
  v17 = AcpiIrqLibConfigureLibrary((unsigned int)v24, v15, v16);
  if ( v17 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v17);
  v18 = ACPIInterruptInitialize();
  v20 = v18;
  if ( v18 < 0 )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v19,
      22,
      35,
      (__int64)&WPP_ecc7edd2508a38de2a700e3db204cbe9_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v20);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(a1 + 8));
  return 1;
}
