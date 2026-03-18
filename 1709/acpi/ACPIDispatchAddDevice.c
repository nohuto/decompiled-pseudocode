/*
 * XREFs of ACPIDispatchAddDevice @ 0x1C00AFDB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000EA0C (WPP_RECORDER_SF_.c)
 *     RtlStringCchCopyA @ 0x1C000EEC4 (RtlStringCchCopyA.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000FC60 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C00111E4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0021340 (WPP_RECORDER_SF_qq.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0044F3C (WPP_RECORDER_SF_sL.c)
 *     ACPICreateRootSymbolicLink @ 0x1C0095C0C (ACPICreateRootSymbolicLink.c)
 *     AcpiSetupNativeMethodInterface @ 0x1C0095CDC (AcpiSetupNativeMethodInterface.c)
 *     ACPIGetPortRangeInterfaces @ 0x1C00B0100 (ACPIGetPortRangeInterfaces.c)
 */

__int64 __fastcall ACPIDispatchAddDevice(PDRIVER_OBJECT DriverObject, struct _DEVICE_OBJECT *a2)
{
  char v2; // bl
  _QWORD *v4; // rdi
  struct _DEVICE_OBJECT *v5; // r15
  char *PoolWithTag; // rax
  int v7; // edx
  char *v8; // r12
  char *v9; // rax
  int v10; // edx
  char *v11; // r13
  NTSTATUS v12; // eax
  int v13; // edx
  int v14; // esi
  int v15; // edx
  _QWORD *v16; // rax
  int v17; // edx
  KIRQL v18; // al
  KIRQL v19; // al
  int v20; // edx
  const char *v21; // rax
  const char *v22; // r8
  __int64 v23; // rcx
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
    v9 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xBuLL, 0x53706341u);
    v11 = v9;
    if ( v9 )
    {
      RtlStringCchCopyA(v9, 0xBuLL, "0x5F534750");
      v12 = IoCreateDevice(DriverObject, 0, 0LL, 0x32u, 0x100u, 0, &SourceDevice);
      v14 = v12;
      if ( v12 < 0 )
      {
        WPP_RECORDER_SF_sL(
          WPP_GLOBAL_Control->DeviceExtension,
          v13,
          6,
          13,
          (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
          (__int64)v8,
          v12);
        SourceDevice = 0LL;
        goto LABEL_9;
      }
      v5 = IoAttachDeviceToDeviceStack(SourceDevice, a2);
      if ( !v5 )
      {
        LOBYTE(v15) = 2;
        WPP_RECORDER_SF_qq(
          WPP_GLOBAL_Control->DeviceExtension,
          v15,
          6,
          14,
          (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
          (char)SourceDevice,
          (char)a2);
        v14 = -1073741810;
        goto LABEL_19;
      }
      v16 = ExAllocateFromNPagedLookasideList(&DeviceExtensionLookAsideList);
      v4 = v16;
      if ( v16 )
      {
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
        v4[71] = v11;
        *((_DWORD *)v4 + 116) = 1;
        *((_DWORD *)v4 + 117) = 1;
        *((_DWORD *)v4 + 118) = 1;
        *((_DWORD *)v4 + 119) = 1;
        *((_DWORD *)v4 + 125) = 1;
        *((_DWORD *)v4 + 120) = 4;
        *(_QWORD *)((char *)v4 + 484) = 4LL;
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
        if ( IoWMIRegistrationControl(SourceDevice, 1u) < 0 )
        {
          LOBYTE(v20) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            1,
            10,
            (__int64)&WPP_8e7095626164326d852ba5a21c051e0b_Traceguids);
        }
        AcpiSetupNativeMethodInterface();
        SourceDevice->Flags &= ~0x80u;
        ACPICreateRootSymbolicLink(a2);
LABEL_9:
        if ( v14 >= 0 )
          goto LABEL_10;
        goto LABEL_19;
      }
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        22,
        15,
        (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids);
    }
    else
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        6,
        12,
        (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
        11);
    }
    v14 = -1073741670;
LABEL_19:
    ExFreePoolWithTag(v8, 0);
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    if ( v5 )
      IoDetachDevice(v5);
    goto LABEL_23;
  }
  LOBYTE(v7) = 2;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    11,
    (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
    14);
  v14 = -1073741670;
LABEL_23:
  if ( SourceDevice )
    IoDeleteDevice(SourceDevice);
  if ( v4 )
    ExFreeToNPagedLookasideList(&DeviceExtensionLookAsideList, v4);
LABEL_10:
  v21 = (const char *)&unk_1C00ABBB3;
  v22 = (const char *)&unk_1C00ABBB3;
  if ( v4 )
  {
    v23 = v4[1];
    v2 = (char)v4;
    if ( (v23 & 0x200000000000LL) != 0 )
    {
      v21 = (const char *)v4[70];
      if ( (v23 & 0x400000000000LL) != 0 )
        v22 = (const char *)v4[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x10u,
    (__int64)&WPP_e0570baefa8c316ce3c0f07f4fd0ec2c_Traceguids,
    v14,
    v2,
    v21,
    v22);
  return (unsigned int)v14;
}
