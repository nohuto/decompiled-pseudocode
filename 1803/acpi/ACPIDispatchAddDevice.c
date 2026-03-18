/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C0099120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0002FF4 (ExFreeToNPagedLookasideList.c)
 *     RtlStringCchCopyA @ 0x1C0003A00 (RtlStringCchCopyA.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0003CBC (ExAllocateFromNPagedLookasideList.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0012FD8 (WPP_RECORDER_SF_sL.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00213B4 (WPP_RECORDER_SF_qq.c)
 *     ACPICreateRootSymbolicLink @ 0x1C0079BC8 (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C00805F4 (AcpiSetupNativeMethodInterface.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C00995B8 (ACPIGetPortRangeInterfaces.c)
 *     ACPIWmiInitLog @ 0x1C009B63C (ACPIWmiInitLog.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, struct _DEVICE_OBJECT *a2)
{
  char v2; // bl
  _QWORD *v4; // rdi
  struct _DEVICE_OBJECT *v5; // r15
  char *PoolWithTag; // rax
  int v7; // edx
  char *v8; // r12
  int v9; // esi
  char *v10; // rax
  int v11; // edx
  char *v12; // r13
  NTSTATUS v13; // eax
  int v14; // edx
  int v15; // edx
  _QWORD *v16; // rax
  int v17; // edx
  KIRQL v18; // al
  KIRQL v19; // al
  const char *v20; // rax
  const char *v21; // r8
  __int64 v22; // rcx
  PDEVICE_OBJECT SourceDevice; // [rsp+A0h] [rbp+18h] BYREF

  v2 = 0;
  SourceDevice = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xEuLL, 0x53706341u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCchCopyA(PoolWithTag, 0xEuLL, "ACPI\\PNP0C08");
    v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
    v12 = v10;
    if ( !v10 )
    {
      LOBYTE(v11) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        6,
        12,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
        11);
LABEL_5:
      v9 = -1073741670;
LABEL_14:
      ExFreePoolWithTag(v8, 0);
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      if ( v5 )
        IoDetachDevice(v5);
      goto LABEL_18;
    }
    RtlStringCchCopyA(v10, 0xBuLL, "0x5F534750");
    v13 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v5 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
      if ( !v5 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_qq(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          6,
          14,
          (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
          (char)SourceDevice,
          (char)a2);
        v9 = -1073741810;
        goto LABEL_14;
      }
      v16 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
      v4 = v16;
      if ( !v16 )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v17,
          22,
          15,
          (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids);
        goto LABEL_5;
      }
      memset(v16, 0, 0x3C0uLL);
      *((_DWORD *)v4 + 171) = 1;
      _InterlockedIncrement((volatile signed __int32 *)v4 + 170);
      v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      SourceDevice->DeviceExtension = v4;
      v4[90] = SourceDevice;
      v4[92] = a2;
      v4[3] = &AcpiFdoIrpDispatch;
      v4[91] = v5;
      *((_DWORD *)v4 + 4) = 1599293264;
      v4[70] = v8;
      v4[71] = v12;
      *((_DWORD *)v4 + 120) = 4;
      *(_QWORD *)((char *)v4 + 484) = 4LL;
      *((_DWORD *)v4 + 116) = 1;
      *((_DWORD *)v4 + 117) = 1;
      *((_DWORD *)v4 + 118) = 1;
      *((_DWORD *)v4 + 119) = 1;
      *((_DWORD *)v4 + 125) = 1;
      *((_DWORD *)v4 + 115) = 0;
      *((_DWORD *)v4 + 123) = 0;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
      _InterlockedOr64(v4 + 1, 0x1E00000200010uLL);
      v4[95] = v4 + 94;
      v4[94] = v4 + 94;
      v4[97] = v4 + 96;
      v4[96] = v4 + 96;
      v4[99] = v4 + 98;
      v4[98] = v4 + 98;
      v4[101] = v4 + 100;
      v4[100] = v4 + 100;
      v4[68] = v4 + 67;
      v4[67] = v4 + 67;
      *((_DWORD *)v4 + 164) = -1;
      v4[84] = v4 + 83;
      v4[83] = v4 + 83;
      *v4 = &gAcpiTriageInfo;
      v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      RootDeviceExtension = (ULONG_PTR)v4;
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
      ACPIGetPortRangeInterfaces(a2);
      ACPIWmiInitLog(SourceDevice);
      AcpiSetupNativeMethodInterface();
      SourceDevice->Flags &= ~0x80u;
      ACPICreateRootSymbolicLink(a2);
    }
    else
    {
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        6,
        13,
        (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
        (__int64)v8,
        v13);
      SourceDevice = 0LL;
    }
    if ( v9 >= 0 )
      goto LABEL_22;
    goto LABEL_14;
  }
  LOBYTE(v7) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    11,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
    14);
  v9 = -1073741670;
LABEL_18:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  if ( v4 )
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, v4);
LABEL_22:
  v20 = (const char *)&unk_1C0097BB3;
  v21 = (const char *)&unk_1C0097BB3;
  if ( v4 )
  {
    v22 = v4[1];
    v2 = (char)v4;
    if ( (v22 & 0x200000000000LL) != 0 )
    {
      v20 = (const char *)v4[70];
      if ( (v22 & 0x400000000000LL) != 0 )
        v21 = (const char *)v4[71];
    }
  }
  WPP_RECORDER_SF_Dqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x10u,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids,
    v9,
    v2,
    v20,
    v21);
  return (unsigned int)v9;
}
