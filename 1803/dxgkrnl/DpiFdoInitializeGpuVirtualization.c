/*
 * XREFs of DpiFdoInitializeGpuVirtualization @ 0x1C01F7750
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000276C (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DxgkIsGpuParavirtualizationSupported @ 0x1C015C5E4 (DxgkIsGpuParavirtualizationSupported.c)
 *     DpiCreateSecurityDescriptorForGpuVirtualization @ 0x1C01F1C04 (DpiCreateSecurityDescriptorForGpuVirtualization.c)
 *     DpiFdoCleanupGpuVirtualization @ 0x1C01F1F0C (DpiFdoCleanupGpuVirtualization.c)
 *     DpiQueryMiniportInterface @ 0x1C01FE2B8 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeGpuVirtualization(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbx
  char v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  NTSTATUS v16; // eax
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
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C005F910,
    1,
    v30);
  if ( !*(_BYTE *)(v1 + 4864) )
  {
    LODWORD(v3) = DpiQueryMiniportInterface(
                    a1,
                    (unsigned int)&GUID_DXGKDDI_GPU_PARTITION_INTERFACE,
                    128,
                    1,
                    v31,
                    v1 + 4872);
    if ( (int)v3 < 0 )
      goto LABEL_36;
    if ( !*(_QWORD *)(v1 + 4936)
      || !*(_QWORD *)(v1 + 4960)
      || !*(_QWORD *)(v1 + 4912)
      || !*(_QWORD *)(v1 + 4920)
      || !*(_QWORD *)(v1 + 4928)
      || !*(_QWORD *)(v1 + 4944)
      || !*(_QWORD *)(v1 + 4952)
      || !*(_QWORD *)(v1 + 4968)
      || !*(_QWORD *)(v1 + 4976)
      || !*(_QWORD *)(v1 + 4984)
      || !*(_QWORD *)(v1 + 4992)
      || !*(_QWORD *)(v1 + 4904) )
    {
      goto LABEL_33;
    }
    *(_BYTE *)(v1 + 4864) = 1;
  }
  if ( *(_BYTE *)(v1 + 4736) )
  {
LABEL_29:
    if ( !*(_BYTE *)(v1 + 5000) )
    {
      LODWORD(v3) = DpiQueryMiniportInterface(
                      a1,
                      (unsigned int)&GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE,
                      48,
                      1,
                      v31,
                      v1 + 5008);
      if ( (int)v3 < 0 )
      {
        LODWORD(v3) = 0;
      }
      else
      {
        *(_BYTE *)(v1 + 5000) = 1;
        if ( !*(_QWORD *)(v1 + 5040) || !*(_QWORD *)(v1 + 5048) )
        {
LABEL_33:
          LODWORD(v3) = -1073741823;
          v6 = WdLogNewEntry5_WdError(v5);
          *(_QWORD *)(v6 + 24) = -1073741823LL;
          WdLogEvent5_WdError(v6);
LABEL_82:
          DpiFdoCleanupGpuVirtualization(v1);
          return (unsigned int)v3;
        }
      }
    }
    if ( *(_BYTE *)(v1 + 4864) )
    {
      v4 = 1;
      *(_BYTE *)(v1 + 4736) = 1;
      *(_BYTE *)(v1 + 5056) = 1;
    }
    goto LABEL_40;
  }
  LODWORD(v3) = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGKDDI_SRIOV_INTERFACE, 120, 1, v31, v1 + 4744);
  if ( (int)v3 >= 0 )
  {
    *(_BYTE *)(v1 + 4736) = 1;
    if ( !*(_QWORD *)(v1 + 4776)
      || !*(_QWORD *)(v1 + 4784)
      || !*(_QWORD *)(v1 + 4792)
      || !*(_QWORD *)(v1 + 4800)
      || !*(_QWORD *)(v1 + 4808)
      || !*(_QWORD *)(v1 + 4816)
      || !*(_QWORD *)(v1 + 4824)
      || !*(_QWORD *)(v1 + 4832)
      || !*(_QWORD *)(v1 + 4840)
      || !*(_QWORD *)(v1 + 4856)
      || !*(_QWORD *)(v1 + 4848) )
    {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
LABEL_36:
  if ( *(_BYTE *)(v1 + 4864) )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = (int)v3;
LABEL_80:
    WdLogEvent5_WdError(v7);
    goto LABEL_81;
  }
LABEL_40:
  if ( DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3728)) )
  {
    *(_BYTE *)(v1 + 4736) = 1;
    *(_BYTE *)(v1 + 5056) = 1;
    if ( !*(_QWORD *)(v1 + 2648) )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitUnicodeString(&DestinationString, L"GPUPARAV");
      v8 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(v1 + 152),
             &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
             &DestinationString,
             (PUNICODE_STRING)(v1 + 2640));
      v10 = v8;
      if ( v8 < 0 )
      {
        v7 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v7 + 24) = v10;
        goto LABEL_80;
      }
    }
  }
  if ( v4 || *(_QWORD *)(v1 + 2648) )
  {
    *(_BYTE *)(v1 + 57) = 1;
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
    *(_DWORD *)(v1 + 5272) = 0;
    *(_QWORD *)(v1 + 104) = DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = DpiFdoDispatchCleanupAndClose;
    v11 = DpiCreateSecurityDescriptorForGpuVirtualization(&P);
    v3 = v11;
    if ( v11 < 0 )
    {
LABEL_79:
      v7 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v7 + 24) = v3;
      goto LABEL_80;
    }
    v13 = ObSetSecurityObjectByPointer(a1, 4LL, P);
    v3 = v13;
    if ( v13 < 0 )
    {
      v15 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v15 + 24) = v3;
      WdLogEvent5_WdError(v15);
    }
    ExFreePoolWithTag(P, 0);
  }
  if ( (int)v3 >= 0 )
  {
    if ( !v4
      || (*(_QWORD *)(v1 + 2632)
       || (v16 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_GPU_PARTITIONING_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2624)),
           v3 = v16,
           v16 >= 0))
      && (*(_QWORD *)(v1 + 2664)
       || (v17 = IoRegisterDeviceInterface(
                   *(PDEVICE_OBJECT *)(v1 + 152),
                   &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                   0LL,
                   (PUNICODE_STRING)(v1 + 2656)),
           v3 = v17,
           v17 >= 0)) )
    {
      if ( !DxgkIsGpuParavirtualizationSupported(*(_QWORD *)(v1 + 3728))
        || *(_QWORD *)(v1 + 2680)
        || (*(_QWORD *)&ReferenceString.Length = 0LL,
            ReferenceString.Buffer = 0LL,
            RtlInitUnicodeString(&ReferenceString, L"GPUPARAV"),
            v18 = IoRegisterDeviceInterface(
                    *(PDEVICE_OBJECT *)(v1 + 152),
                    &GUID_DEVINTERFACE_VIRTUALIZABLE_DEVICE,
                    &ReferenceString,
                    (PUNICODE_STRING)(v1 + 2672)),
            v3 = v18,
            v18 >= 0) )
      {
        if ( *(_QWORD *)(v1 + 2696)
          || (v19 = IoRegisterDeviceInterface(
                      *(PDEVICE_OBJECT *)(v1 + 152),
                      &GUID_MITIGABLE_DEVICE_INTERFACE,
                      0LL,
                      (PUNICODE_STRING)(v1 + 2688)),
              v3 = v19,
              v19 >= 0) )
        {
          if ( *(_QWORD *)(v1 + 2712)
            || (v20 = IoRegisterDeviceInterface(
                        *(PDEVICE_OBJECT *)(v1 + 152),
                        &GUID_SRIOV_DEVICE_INTERFACE_STANDARD,
                        0LL,
                        (PUNICODE_STRING)(v1 + 2704)),
                v3 = v20,
                v20 >= 0) )
          {
            if ( *(_QWORD *)(v1 + 2728)
              || (v21 = IoRegisterDeviceInterface(
                          *(PDEVICE_OBJECT *)(v1 + 152),
                          &GUID_FLEXIBLE_IOV_INTERFACE,
                          0LL,
                          (PUNICODE_STRING)(v1 + 2720)),
                  v3 = v21,
                  v21 >= 0) )
            {
              if ( !*(_BYTE *)(v1 + 4864)
                || (v22 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2624), 1u), v3 = v22, v22 >= 0) )
              {
                if ( !*(_QWORD *)(v1 + 2648)
                  || (v23 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2640), 1u), v3 = v23, v23 >= 0) )
                {
                  if ( !*(_QWORD *)(v1 + 2664)
                    || (v24 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2656), 1u), v3 = v24, v24 >= 0) )
                  {
                    if ( !*(_QWORD *)(v1 + 2680)
                      || (v25 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2672), 1u), v3 = v25, v25 >= 0) )
                    {
                      if ( !*(_QWORD *)(v1 + 2696)
                        || (v26 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2688), 1u), v3 = v26, v26 >= 0) )
                      {
                        if ( !*(_QWORD *)(v1 + 2712)
                          || (v27 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2704), 1u), v3 = v27, v27 >= 0) )
                        {
                          if ( !*(_QWORD *)(v1 + 2728) )
                            goto LABEL_81;
                          v28 = IoSetDeviceInterfaceState((PUNICODE_STRING)(v1 + 2720), 1u);
                          v3 = v28;
                          if ( v28 >= 0 )
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
    goto LABEL_79;
  }
  LODWORD(v3) = 0;
LABEL_81:
  if ( (int)v3 < 0 )
    goto LABEL_82;
  return (unsigned int)v3;
}
