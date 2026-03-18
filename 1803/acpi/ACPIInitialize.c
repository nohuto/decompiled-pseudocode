/*
 * XREFs of ACPIInitialize @ 0x1C0099FEC
 * Callers:
 *     ACPIInitStartACPI @ 0x1C0099EA4 (ACPIInitStartACPI.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIInitializeKernelTableHandler @ 0x1C0029794 (ACPIInitializeKernelTableHandler.c)
 *     ACPIGetTableVersion @ 0x1C002DDB0 (ACPIGetTableVersion.c)
 *     ACPIEnableInitializeACPI @ 0x1C00329A0 (ACPIEnableInitializeACPI.c)
 *     ACPIKsrSupportInitialize @ 0x1C0032A58 (ACPIKsrSupportInitialize.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C0071008 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIInterruptInitialize @ 0x1C007D708 (ACPIInterruptInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C0098974 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitializeAMLI @ 0x1C009A2F4 (ACPIInitializeAMLI.c)
 *     ACPIInitializeDDBs @ 0x1C009A488 (ACPIInitializeDDBs.c)
 *     ACPILoadProcessRSDT @ 0x1C009A99C (ACPILoadProcessRSDT.c)
 *     AcpiIrqLibConfigureLibrary @ 0x1C009C690 (AcpiIrqLibConfigureLibrary.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C009C790 (AcpiIrqLibInitializeGlobalState.c)
 */

char __fastcall ACPIInitialize(ULONG_PTR BugCheckParameter3)
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
  ULONG_PTR BugCheckParameter4; // rdi
  int InterruptModel; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  ULONG_PTR v18; // rdi
  __int64 DeviceExtension; // rax
  unsigned int v21; // [rsp+48h] [rbp+10h] BYREF

  v2 = EmProviderRegister(AcpiDriverObject, &EntryReg, 3LL, &CallbackReg, 3, &AcpiEmProviderHandle);
  if ( v2 < 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      1,
      31,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
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
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v4);
    KeBugCheckEx(0xA5u, 0x11uLL, 0LL, 0LL, 0LL);
  }
  AcpiIrqLibInitializeGlobalState(BugCheckParameter3);
  KeInitializeSpinLock(&GpeTableLock);
  KeInitializeSpinLock(&NotifyHandlerLock);
  qword_1C0067908 = (__int64)&AcpiDynamicDataBlockTableList;
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
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v7);
    KeBugCheckEx(0xA5u, 0x11uLL, 3uLL, 0LL, 0LL);
  }
  v9 = (AcpiOverrideAttributes & 0x20000) == 0
    && ((AcpiOverrideAttributes & 0x40000) != 0 || (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && v21 >= 5);
  gAcpiHonorBiosPolarities = v9;
  if ( (int)ACPIGetTableVersion(1346584902, &v21) >= 0 && v21 >= 5 )
    AcpiRetainDebugDeviceInD0 = 1;
  ACPIKsrSupportInitialize();
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
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids,
      v11);
    KeBugCheckEx(0xA5u, 0x11uLL, 4uLL, 0LL, BugCheckParameter4);
  }
  InterruptModel = NotifyHalWithMachineStatesAndRetrieveInterruptModel((int *)&v21);
  if ( InterruptModel < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 5uLL, 0LL, InterruptModel);
  v15 = AcpiIrqLibConfigureLibrary(v21);
  if ( v15 < 0 )
    KeBugCheckEx(0xA5u, 0x11uLL, 6uLL, 0LL, v15);
  v16 = ACPIInterruptInitialize();
  v18 = v16;
  if ( v16 < 0 )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      22,
      35,
      (__int64)&WPP_39c96ad8920d3438934321ce8847dddc_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 7uLL, 0LL, v18);
  }
  ACPIInitializeKernelTableHandler(1, *(_QWORD *)(BugCheckParameter3 + 8));
  DeviceExtension = ACPIInternalGetDeviceExtension(BugCheckParameter3);
  if ( DeviceExtension )
    ACPIQueryPhysicalDeviceLocation(DeviceExtension);
  return 1;
}
