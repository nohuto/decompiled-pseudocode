/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0010900
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0087230 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0096670 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0096EC0 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000213C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildFilter @ 0x1C0022B0C (ACPIBuildFilter.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 *     ACPIBuildFlushQueue @ 0x1C008D454 (ACPIBuildFlushQueue.c)
 *     EnableDisableRegions @ 0x1C008FEB4 (EnableDisableRegions.c)
 *     ACPIDetectFilterMatch @ 0x1C0091FBC (ACPIDetectFilterMatch.c)
 *     AcpiQueryPciBusInterface @ 0x1C00956EC (AcpiQueryPciBusInterface.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C0095ACC (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalIsPci @ 0x1C0096F54 (ACPIInternalIsPci.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  ULONG_PTR v2; // r15
  __int64 DeviceExtension; // rax
  __int64 v4; // rbx
  KIRQL v5; // di
  __int64 v6; // rdx
  int v7; // edi
  KIRQL v8; // dl
  __int64 v9; // rdi
  __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  char v14; // r8
  KIRQL v15; // al
  __int64 v16; // r15
  int v18; // eax
  ULONG_PTR v19; // r15
  __int64 v20; // rcx
  const char *v21; // rsi
  const char *v22; // rax
  unsigned __int16 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rax
  const char *v26; // rdx
  const char *v27; // rcx
  unsigned __int16 v28; // r9
  __int64 v29; // rax
  __int64 v32; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a1;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v32 = 0LL;
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
    v20 = *(_QWORD *)(v4 + 8);
    v21 = (const char *)&unk_1C0067B08;
    v22 = (const char *)&unk_1C0067B08;
    if ( (v20 & 0x200000000000LL) != 0 )
    {
      v21 = *(const char **)(v4 + 560);
      if ( (v20 & 0x400000000000LL) != 0 )
        v22 = *(const char **)(v4 + 568);
    }
    v23 = 16;
    goto LABEL_33;
  }
  v7 = ACPIDevicePowerFlushQueue(v4);
  if ( v7 < 0 )
  {
    v24 = *(_QWORD *)(v4 + 8);
    v21 = (const char *)&unk_1C0067B08;
    v22 = (const char *)&unk_1C0067B08;
    if ( (v24 & 0x200000000000LL) != 0 )
    {
      v21 = *(const char **)(v4 + 560);
      if ( (v24 & 0x400000000000LL) != 0 )
        v22 = *(const char **)(v4 + 568);
    }
    v23 = 17;
LABEL_33:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v23,
      (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
      v7,
      v4,
      v21,
      v22);
    return (unsigned int)v7;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v9 = *(_QWORD *)(v4 + 752);
  if ( v9 == v4 + 752 )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (__int64 *)(v9 - 768);
    ACPIInitReferenceDeviceExtension(v10);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  if ( v10 )
  {
    while ( 1 )
    {
      v33 = 0LL;
      if ( (int)ACPIGet(v10, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v33, 0LL) >= 0
        && ((v10[1] & 0x2000000000002LL) == 0
         || (AcpiOverrideAttributes & 0x800000) != 0 && (*(_DWORD *)(v4 + 8) & 0x2000000) != 0) )
      {
        v13 = ACPIDetectFilterMatch(v10, a2, &v32);
        v14 = v13;
        if ( v13 < 0 )
        {
          v29 = v10[1];
          v26 = (const char *)&unk_1C0067B08;
          v27 = (const char *)&unk_1C0067B08;
          if ( (v29 & 0x200000000000LL) != 0 )
          {
            v26 = (const char *)v10[70];
            if ( (v29 & 0x400000000000LL) != 0 )
              v27 = (const char *)v10[71];
          }
          v28 = 19;
          goto LABEL_47;
        }
        if ( !v32 )
          goto LABEL_12;
        v18 = ACPIBuildFilter(*(_QWORD *)(v2 + 8), v10);
        v14 = v18;
        if ( v18 < 0 )
        {
          v25 = v10[1];
          v26 = (const char *)&unk_1C0067B08;
          v27 = (const char *)&unk_1C0067B08;
          if ( (v25 & 0x200000000000LL) != 0 )
          {
            v26 = (const char *)v10[70];
            if ( (v25 & 0x400000000000LL) != 0 )
              v27 = (const char *)v10[71];
          }
          v28 = 18;
LABEL_47:
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            v28,
            (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
            v14,
            (char)v10,
            v26,
            v27);
          goto LABEL_12;
        }
        v19 = v10[90];
        if ( (int)AcpiQueryPciBusInterface(v19) >= 0 )
          ACPIInternalIsPci(v19);
        ACPIFilterQueryBusD3ColdSupport(v19);
      }
LABEL_12:
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v16 = v10[96];
      if ( v16 == v4 + 752 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
        ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v10);
        break;
      }
      if ( *(_DWORD *)(v16 - 84) )
        _InterlockedIncrement((volatile signed __int32 *)(v16 - 84));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
      ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v10);
      v10 = (__int64 *)(v16 - 768);
      v2 = a1;
    }
  }
  if ( (*(_DWORD *)(v4 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v4 + 952) & 0x8000LL) != 0 )
  {
    LOBYTE(v11) = 1;
    LOBYTE(v12) = (*(_QWORD *)(v4 + 952) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v4 + 712), v11, v12);
  }
  return 0LL;
}
