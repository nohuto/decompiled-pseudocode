/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C0111468
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiQueryMiniportInterface @ 0x1C010FC78 (DpiQueryMiniportInterface.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C010FE60 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C01C2AE4 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01C2DEC (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  NTSTATUS v30; // eax
  NTSTATUS v31; // eax
  __int64 v32; // [rsp+20h] [rbp-48h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  if ( !*(_BYTE *)(v1 + 4696) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 128, 1, v32, v1 + 4704);
    if ( (int)v3 < 0 )
      goto LABEL_3;
    if ( !*(_QWORD *)(v1 + 4768)
      || !*(_QWORD *)(v1 + 4792)
      || !*(_QWORD *)(v1 + 4744)
      || !*(_QWORD *)(v1 + 4752)
      || !*(_QWORD *)(v1 + 4760)
      || !*(_QWORD *)(v1 + 4776)
      || !*(_QWORD *)(v1 + 4784)
      || !*(_QWORD *)(v1 + 4800)
      || !*(_QWORD *)(v1 + 4808)
      || !*(_QWORD *)(v1 + 4816)
      || !*(_QWORD *)(v1 + 4824)
      || !*(_QWORD *)(v1 + 4736) )
    {
      goto LABEL_40;
    }
    *(_BYTE *)(v1 + 4696) = 1;
  }
  if ( !*(_BYTE *)(v1 + 4568) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(a1, (__int64)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, v32, v1 + 4576);
    if ( (int)v3 < 0 )
    {
LABEL_3:
      if ( *(_BYTE *)(v1 + 4696) )
      {
        v16 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v16 + 24) = (int)v3;
LABEL_51:
        WdLogEvent5_WdError(v16);
        goto LABEL_8;
      }
      goto LABEL_4;
    }
    *(_BYTE *)(v1 + 4568) = 1;
    if ( !*(_QWORD *)(v1 + 4608)
      || !*(_QWORD *)(v1 + 4616)
      || !*(_QWORD *)(v1 + 4624)
      || !*(_QWORD *)(v1 + 4632)
      || !*(_QWORD *)(v1 + 4640)
      || !*(_QWORD *)(v1 + 4648)
      || !*(_QWORD *)(v1 + 4656)
      || !*(_QWORD *)(v1 + 4664)
      || !*(_QWORD *)(v1 + 4672)
      || !*(_QWORD *)(v1 + 4688)
      || !*(_QWORD *)(v1 + 4680) )
    {
LABEL_40:
      LODWORD(v3) = -1073741823;
      v8 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v8 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v8);
      goto LABEL_41;
    }
  }
  if ( !*(_BYTE *)(v1 + 4832) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(
                    a1,
                    (__int64)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                    48,
                    1,
                    v32,
                    v1 + 4840);
    if ( (int)v3 < 0 )
    {
      LODWORD(v3) = 0;
    }
    else
    {
      *(_BYTE *)(v1 + 4832) = 1;
      if ( !*(_QWORD *)(v1 + 4872) || !*(_QWORD *)(v1 + 4880) )
        goto LABEL_40;
    }
  }
  if ( *(_BYTE *)(v1 + 4696) )
  {
    v4 = 1;
    *(_BYTE *)(v1 + 4568) = 1;
    *(_BYTE *)(v1 + 4888) = 1;
    goto LABEL_45;
  }
LABEL_4:
  if ( !DxgkIsGpuParavirtualizationSupported() )
    goto LABEL_5;
  *(_BYTE *)(v1 + 4568) = 1;
  *(_BYTE *)(v1 + 4888) = 1;
  if ( !*(_QWORD *)(v1 + 2648) )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
    v17 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
            &DestinationString,
            (PUNICODE_STRING)(v1 + 2640));
    v20 = v17;
    if ( v17 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v16 + 24) = v20;
      goto LABEL_51;
    }
LABEL_5:
    if ( !*(_QWORD *)(v1 + 2648) )
      goto LABEL_6;
  }
LABEL_45:
  *(_BYTE *)(v1 + 57) = 1;
  *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  *(_DWORD *)(v1 + 5072) = 0;
  *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
  *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
  v9 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
  v3 = v9;
  if ( v9 < 0 )
  {
LABEL_50:
    v16 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v16 + 24) = v3;
    goto LABEL_51;
  }
  v12 = ObSetSecurityObjectByPointer(a1, 4LL, P);
  v3 = v12;
  if ( v12 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v15 + 24) = v3;
    WdLogEvent5_WdError(v15);
  }
  ExFreePoolWithTag(P, 0);
LABEL_6:
  if ( (int)v3 < 0 )
  {
    LODWORD(v3) = 0;
    goto LABEL_8;
  }
  if ( v4 )
  {
    if ( !*(_QWORD *)(v1 + 2632) )
    {
      v21 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v1 + 152),
              &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
              0LL,
              (PUNICODE_STRING)(v1 + 2624));
      v3 = v21;
      if ( v21 < 0 )
        goto LABEL_50;
    }
  }
  if ( !*(_QWORD *)(v1 + 2664) )
  {
    v22 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
            0LL,
            (PUNICODE_STRING)(v1 + 2656));
    v3 = v22;
    if ( v22 < 0 )
      goto LABEL_50;
  }
  if ( !*(_QWORD *)(v1 + 2680) )
  {
    v23 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_MITIGABLE_DEVICE_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v1 + 2672));
    v3 = v23;
    if ( v23 < 0 )
      goto LABEL_50;
  }
  if ( !*(_QWORD *)(v1 + 2696) )
  {
    v24 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
            0LL,
            (PUNICODE_STRING)(v1 + 2688));
    v3 = v24;
    if ( v24 < 0 )
      goto LABEL_50;
  }
  if ( !*(_QWORD *)(v1 + 2712) )
  {
    v25 = IoRegisterDeviceInterface(
            *(PDEVICE_OBJECT *)(v1 + 152),
            &GUID_FLEXIBLE_IOV_INTERFACE,
            0LL,
            (PUNICODE_STRING)(v1 + 2704));
    v3 = v25;
    if ( v25 < 0 )
      goto LABEL_50;
  }
  if ( *(_BYTE *)(v1 + 4696) )
  {
    v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2624), 1u);
    v3 = v26;
    if ( v26 < 0 )
      goto LABEL_50;
  }
  if ( *(_QWORD *)(v1 + 2648) )
  {
    v27 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2640), 1u);
    v3 = v27;
    if ( v27 < 0 )
      goto LABEL_50;
  }
  if ( *(_BYTE *)(v1 + 4696) || *(_QWORD *)(v1 + 2648) )
  {
    v28 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2656), 1u);
    v3 = v28;
    if ( v28 < 0 )
      goto LABEL_50;
  }
  if ( *(_QWORD *)(v1 + 2680) )
  {
    v29 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2672), 1u);
    v3 = v29;
    if ( v29 < 0 )
      goto LABEL_50;
  }
  if ( *(_QWORD *)(v1 + 2696) )
  {
    v30 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2688), 1u);
    v3 = v30;
    if ( v30 < 0 )
      goto LABEL_50;
  }
  if ( *(_QWORD *)(v1 + 2712) )
  {
    v31 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2704), 1u);
    v3 = v31;
    if ( v31 >= 0 )
      return (unsigned int)v3;
    goto LABEL_50;
  }
LABEL_8:
  if ( (int)v3 < 0 )
LABEL_41:
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)v3;
}
