/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0007DFC
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0083480 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C008AE90 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C008B94C (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIBuildFilter @ 0x1C0006ECC (ACPIBuildFilter.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008504 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C00087A0 (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildMissingChildren @ 0x1C0043918 (ACPIBuildMissingChildren.c)
 *     ACPIInternalIsPci @ 0x1C008B9E0 (ACPIInternalIsPci.c)
 *     AcpiQueryPciBusInterface @ 0x1C008C15C (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C008C318 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIDetectFilterMatch @ 0x1C008DA3C (ACPIDetectFilterMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C008DF74 (ACPIBuildFlushQueue.c)
 *     EnableDisableRegions @ 0x1C0090400 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rdx
  int v7; // edi
  __int64 v8; // rdx
  KIRQL v9; // dl
  __int64 v10; // rdi
  __int64 *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  char v15; // r8
  KIRQL v16; // al
  __int64 v17; // r15
  NTSTATUS v19; // eax
  ULONG_PTR v20; // r15
  void *v21; // rsi
  void *v22; // rcx
  int v23; // r9d
  __int64 v24; // rcx
  void *v25; // rax
  __int64 v26; // rax
  void *v27; // rdx
  void *v28; // rcx
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // [rsp+38h] [rbp-70h]
  __int64 v32; // [rsp+40h] [rbp-68h]
  __int64 v33; // [rsp+50h] [rbp-58h]
  struct _DEVICE_OBJECT *v36; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a2;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v36 = 0LL;
  v33 = DeviceExtension;
  v4 = DeviceExtension;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(v4 + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v4);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
  LOBYTE(v6) = 1;
  v7 = ACPIBuildFlushQueue(v4, v6);
  if ( v7 < 0 )
  {
    v8 = *(_QWORD *)(v4 + 8);
    v21 = &unk_1C0066CD0;
    v22 = &unk_1C0066CD0;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v21 = *(void **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v22 = *(void **)(v4 + 568);
    }
    v23 = 16;
    v32 = (__int64)v22;
    goto LABEL_31;
  }
  v7 = ACPIDevicePowerFlushQueue(v4);
  if ( v7 < 0 )
  {
    v24 = *(_QWORD *)(v4 + 8);
    v21 = &unk_1C0066CD0;
    v25 = &unk_1C0066CD0;
    if ( (v24 & 0x200000000000LL) != 0 )
    {
      v21 = *(void **)(v4 + 560);
      if ( (v24 & 0x400000000000LL) != 0 )
        v25 = *(void **)(v4 + 568);
    }
    v23 = 17;
    v32 = (__int64)v25;
LABEL_31:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      v23,
      (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
      v7,
      v4,
      (__int64)v21,
      v32);
    return (unsigned int)v7;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v10 = *(_QWORD *)(v4 + 752);
  if ( v10 == v4 + 752 )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (__int64 *)(v10 - 768);
    ACPIInitReferenceDeviceExtension((__int64)v11);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  if ( v11 )
  {
    while ( 1 )
    {
      v37 = 0LL;
      if ( (int)ACPIGet(v11, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v37, 0LL) >= 0
        && (v11[1] & 0x2000000000002LL) == 0 )
      {
        v14 = ACPIDetectFilterMatch(v11, v2, &v36);
        v15 = v14;
        if ( v14 < 0 )
        {
          v30 = v11[1];
          v27 = &unk_1C0066CD0;
          v28 = &unk_1C0066CD0;
          if ( (v30 & 0x200000000000LL) != 0 )
          {
            v27 = (void *)v11[70];
            if ( (v30 & 0x400000000000LL) != 0 )
              v28 = (void *)v11[71];
          }
          v29 = 19;
          goto LABEL_43;
        }
        if ( !v36 )
          goto LABEL_12;
        v19 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(a1 + 8), (__int64)v11, v36);
        v15 = v19;
        if ( v19 < 0 )
        {
          v26 = v11[1];
          v27 = &unk_1C0066CD0;
          v28 = &unk_1C0066CD0;
          if ( (v26 & 0x200000000000LL) != 0 )
          {
            v27 = (void *)v11[70];
            if ( (v26 & 0x400000000000LL) != 0 )
              v28 = (void *)v11[71];
          }
          v29 = 18;
LABEL_43:
          v31 = (__int64)v27;
          LOBYTE(v27) = 2;
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            (_DWORD)v27,
            22,
            v29,
            (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
            v15,
            (char)v11,
            v31,
            (__int64)v28);
          goto LABEL_12;
        }
        v20 = v11[90];
        if ( (int)AcpiQueryPciBusInterface(v20) >= 0 )
          ACPIInternalIsPci(v20);
        ACPIFilterQueryBusD3ColdSupport(v20);
      }
LABEL_12:
      v16 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v17 = v11[96];
      if ( v17 == v4 + 752 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
        ACPIInitDereferenceDeviceExtensionUnlocked(v11);
        v4 = v33;
        break;
      }
      if ( *(_DWORD *)(v17 - 84) )
        _InterlockedIncrement((volatile signed __int32 *)(v17 - 84));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v16);
      ACPIInitDereferenceDeviceExtensionUnlocked(v11);
      v11 = (__int64 *)(v17 - 768);
      v2 = a2;
    }
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 952) & 0x8000LL) != 0 )
  {
    LOBYTE(v12) = 1;
    LOBYTE(v13) = (*(_QWORD *)(v4 + 952) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 712), v12, v13);
  }
  return 0LL;
}
