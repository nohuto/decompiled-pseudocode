/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C0114654
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C0114750 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiQueryMiniportInterface @ 0x1C0116190 (DpiQueryMiniportInterface.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C01DC1D0 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01DC4D8 (DpiFdoCleanupGpuVirtualization.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // r12
  __int64 v5; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  NTSTATUS v23; // eax
  NTSTATUS v24; // eax
  NTSTATUS v25; // eax
  NTSTATUS v26; // eax
  NTSTATUS v27; // eax
  NTSTATUS v28; // eax
  NTSTATUS v29; // eax
  int v30; // [rsp+20h] [rbp-58h]
  int v31; // [rsp+20h] [rbp-58h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  struct _UNICODE_STRING ReferenceString; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  LODWORD(v3) = 0;
  v4 = 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUPartitioning__private_propertyCache,
    9280166LL,
    (__int64)&unk_1C003CEE0,
    1u,
    v30);
  if ( !*(_BYTE *)(v1 + 4792) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(
                    a1,
                    (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE,
                    128,
                    1,
                    v31,
                    v1 + 4800);
    if ( (int)v3 < 0 )
      goto LABEL_3;
    if ( !*(_QWORD *)(v1 + 4864)
      || !*(_QWORD *)(v1 + 4888)
      || !*(_QWORD *)(v1 + 4840)
      || !*(_QWORD *)(v1 + 4848)
      || !*(_QWORD *)(v1 + 4856)
      || !*(_QWORD *)(v1 + 4872)
      || !*(_QWORD *)(v1 + 4880)
      || !*(_QWORD *)(v1 + 4896)
      || !*(_QWORD *)(v1 + 4904)
      || !*(_QWORD *)(v1 + 4912)
      || !*(_QWORD *)(v1 + 4920)
      || !*(_QWORD *)(v1 + 4832) )
    {
LABEL_41:
      LODWORD(v3) = -1073741823;
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v7);
      goto LABEL_42;
    }
    *(_BYTE *)(v1 + 4792) = 1;
  }
  if ( *(_BYTE *)(v1 + 4664) )
  {
LABEL_37:
    if ( !*(_BYTE *)(v1 + 4928) )
    {
      LODWORD(v3) = DpiQueryMiniportInterface(
                      a1,
                      (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                      48,
                      1,
                      v31,
                      v1 + 4936);
      if ( (int)v3 < 0 )
      {
        LODWORD(v3) = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 4928) = 1;
        if ( !*(_QWORD *)(v1 + 4968) || !*(_QWORD *)(v1 + 4976) )
          goto LABEL_41;
      }
    }
    if ( *(_BYTE *)(v1 + 4792) )
    {
      v4 = 1;
      *(_BYTE *)(v1 + 4664) = 1;
      *(_BYTE *)(v1 + 4984) = 1;
    }
LABEL_4:
    if ( (unsigned __int8)DxgkIsGpuParavirtualizationSupported() )
    {
      *(_BYTE *)(v1 + 4664) = 1;
      *(_BYTE *)(v1 + 4984) = 1;
      if ( !*(_QWORD *)(v1 + 2648) )
      {
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
        v9 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(v1 + 152),
               &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
               &DestinationString,
               (PUNICODE_STRING)(v1 + 2640));
        v11 = v9;
        if ( v9 < 0 )
        {
          v8 = WdLogNewEntry5_WdError(v10);
          *(_QWORD *)(v8 + 24) = v11;
          goto LABEL_83;
        }
      }
    }
    if ( v4 || *(_QWORD *)(v1 + 2648) )
    {
      *(_BYTE *)(v1 + 57) = 1;
      *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
      *(_DWORD *)(v1 + 5208) = 0;
      *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
      *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
      v12 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
      v3 = v12;
      if ( v12 < 0 )
      {
LABEL_82:
        v8 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v8 + 24) = v3;
        goto LABEL_83;
      }
      v14 = ObSetSecurityObjectByPointer(a1, 4LL, P);
      v3 = v14;
      if ( v14 < 0 )
      {
        v16 = WdLogNewEntry5_WdError(v15);
        *(_QWORD *)(v16 + 24) = v3;
        WdLogEvent5_WdError(v16);
      }
      ExFreePoolWithTag(P, 0);
    }
    if ( (int)v3 < 0 )
    {
      LODWORD(v3) = 0;
      goto LABEL_9;
    }
    if ( !v4
      || (*(_QWORD *)(v1 + 2632)
       || (v17 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2624)),
           v3 = v17,
           v17 >= 0))
      && (*(_QWORD *)(v1 + 2664)
       || (v18 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2656)),
           v3 = v18,
           v18 >= 0)) )
    {
      if ( !(unsigned __int8)DxgkIsGpuParavirtualizationSupported()
        || *(_QWORD *)(v1 + 2680)
        || (*(_QWORD *)&ReferenceString.Length = 0LL,
            ReferenceString.Buffer = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v19 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v1 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v1 + 2672)),
            v3 = v19,
            v19 >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2696)
          || (v20 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v1 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v1 + 2688)),
              v3 = v20,
              v20 >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2712)
            || (v21 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v1 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v1 + 2704)),
                v3 = v21,
                v21 >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2728)
              || (v22 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v1 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v1 + 2720)),
                  v3 = v22,
                  v22 >= 0) )
            {
              if ( !*(_BYTE *)(v1 + 4792)
                || (v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2624), 1u), v3 = v23, v23 >= 0) )
              {
                if ( !*(_QWORD *)(v1 + 2648)
                  || (v24 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2640), 1u), v3 = v24, v24 >= 0) )
                {
                  if ( !*(_QWORD *)(v1 + 2664)
                    || (v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2656), 1u), v3 = v25, v25 >= 0) )
                  {
                    if ( !*(_QWORD *)(v1 + 2680)
                      || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2672), 1u), v3 = v26, v26 >= 0) )
                    {
                      if ( !*(_QWORD *)(v1 + 2696)
                        || (v27 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2688), 1u), v3 = v27, v27 >= 0) )
                      {
                        if ( !*(_QWORD *)(v1 + 2712)
                          || (v28 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2704), 1u), v3 = v28, v28 >= 0) )
                        {
                          if ( !*(_QWORD *)(v1 + 2728) )
                            goto LABEL_9;
                          v29 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2720), 1u);
                          v3 = v29;
                          if ( v29 >= 0 )
                            return (unsigned int)v3;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_82;
  }
  LODWORD(v3) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, v31, v1 + 4672);
  if ( (int)v3 >= 0 )
  {
    *(_BYTE *)(v1 + 4664) = 1;
    if ( !*(_QWORD *)(v1 + 4704)
      || !*(_QWORD *)(v1 + 4712)
      || !*(_QWORD *)(v1 + 4720)
      || !*(_QWORD *)(v1 + 4728)
      || !*(_QWORD *)(v1 + 4736)
      || !*(_QWORD *)(v1 + 4744)
      || !*(_QWORD *)(v1 + 4752)
      || !*(_QWORD *)(v1 + 4760)
      || !*(_QWORD *)(v1 + 4768)
      || !*(_QWORD *)(v1 + 4784)
      || !*(_QWORD *)(v1 + 4776) )
    {
      goto LABEL_41;
    }
    goto LABEL_37;
  }
LABEL_3:
  if ( !*(_BYTE *)(v1 + 4792) )
    goto LABEL_4;
  v8 = WdLogNewEntry5_WdError(v5);
  *(_QWORD *)(v8 + 24) = (int)v3;
LABEL_83:
  WdLogEvent5_WdError(v8);
LABEL_9:
  if ( (int)v3 < 0 )
LABEL_42:
    DpiFdoCleanupGpuVirtualization(v1);
  return (unsigned int)v3;
}
