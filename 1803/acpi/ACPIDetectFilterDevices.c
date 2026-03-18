/*
 * XREFs of ACPIDetectFilterDevices @ 0x1C0018468
 * Callers:
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1C0071690 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0076C58 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1C0087A90 (ACPIRootIrpQueryDeviceRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIBuildFilter @ 0x1C000B204 (ACPIBuildFilter.c)
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C09C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildFlushQueue @ 0x1C00755C8 (ACPIBuildFlushQueue.c)
 *     ACPIDetectFilterMatch @ 0x1C0079394 (ACPIDetectFilterMatch.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1C007C884 (ACPIFilterQueryBusD3ColdSupport.c)
 *     ACPIInternalIsPci @ 0x1C007D908 (ACPIInternalIsPci.c)
 *     AcpiQueryPciBusInterface @ 0x1C007F9CC (AcpiQueryPciBusInterface.c)
 *     EnableDisableRegions @ 0x1C007FB94 (EnableDisableRegions.c)
 */

__int64 __fastcall ACPIDetectFilterDevices(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  __int64 v3; // rdi
  KIRQL v4; // bl
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rcx
  const char *v8; // rbp
  const char *v9; // rax
  unsigned __int16 v10; // r9
  __int64 v12; // rcx
  __int64 v13; // r13
  KIRQL v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  char v20; // r8
  NTSTATUS v21; // eax
  ULONG_PTR v22; // rbx
  __int64 v23; // rax
  const char *v24; // rdx
  const char *v25; // rcx
  unsigned __int16 v26; // r9
  __int64 v27; // rax
  KIRQL v28; // al
  __int64 v29; // rbx
  _QWORD *v30; // rbx
  KIRQL v31; // dl
  struct _DEVICE_OBJECT *v34; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v34 = 0LL;
  v3 = DeviceExtension;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(v3 + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(v3);
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  LOBYTE(v5) = 1;
  v6 = ACPIBuildFlushQueue(v3, v5);
  if ( v6 < 0 )
  {
    v7 = *(_QWORD *)(v3 + 8);
    v8 = (const char *)&unk_1C005B1F0;
    v9 = (const char *)&unk_1C005B1F0;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v3 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v3 + 568);
    }
    v10 = 16;
LABEL_8:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x16u,
      v10,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v6,
      v3,
      v8,
      v9);
    return (unsigned int)v6;
  }
  v6 = ACPIDevicePowerFlushQueue(v3);
  if ( v6 < 0 )
  {
    v12 = *(_QWORD *)(v3 + 8);
    v8 = (const char *)&unk_1C005B1F0;
    v9 = (const char *)&unk_1C005B1F0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v3 + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v3 + 568);
    }
    v10 = 17;
    goto LABEL_8;
  }
  v13 = v3 + 752;
  v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v15 = *(_QWORD *)(v3 + 752);
  if ( v15 != v3 + 752 )
    ACPIInitReferenceDeviceExtension(v15 - 768);
  v16 = 0LL;
  if ( v15 != v13 )
    v16 = (_QWORD *)(v15 - 768);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( v16 )
  {
    do
    {
      v35 = 0LL;
      if ( (int)ACPIGet((__int64)v16, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v35, 0LL) >= 0
        && ((v16[1] & 0x2000000000002LL) == 0
         || (_bittest(&AcpiOverrideAttributes, 0x17u) & ((*(_QWORD *)(v3 + 8) & 0x2000000LL) != 0)) != 0) )
      {
        v19 = ACPIDetectFilterMatch(v16, a2, &v34);
        v20 = v19;
        if ( v19 < 0 )
        {
          v27 = v16[1];
          v24 = (const char *)&unk_1C005B1F0;
          v25 = (const char *)&unk_1C005B1F0;
          if ( (v27 & 0x200000000000LL) != 0 )
          {
            v24 = (const char *)v16[70];
            if ( (v27 & 0x400000000000LL) != 0 )
              v25 = (const char *)v16[71];
          }
          v26 = 19;
          goto LABEL_36;
        }
        if ( !v34 )
          goto LABEL_37;
        v21 = ACPIBuildFilter(*(struct _DRIVER_OBJECT **)(a1 + 8), (__int64)v16, v34);
        v20 = v21;
        if ( v21 < 0 )
        {
          v23 = v16[1];
          v24 = (const char *)&unk_1C005B1F0;
          v25 = (const char *)&unk_1C005B1F0;
          if ( (v23 & 0x200000000000LL) != 0 )
          {
            v24 = (const char *)v16[70];
            if ( (v23 & 0x400000000000LL) != 0 )
              v25 = (const char *)v16[71];
          }
          v26 = 18;
LABEL_36:
          WPP_RECORDER_SF_Dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            0x16u,
            v26,
            (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
            v20,
            (char)v16,
            v24,
            v25);
          goto LABEL_37;
        }
        v22 = v16[90];
        if ( (int)AcpiQueryPciBusInterface(v22) >= 0 )
          ACPIInternalIsPci(v22);
        ACPIFilterQueryBusD3ColdSupport(v22);
      }
LABEL_37:
      v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v29 = v16[96];
      if ( v29 == v13 )
      {
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
        ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v16);
        break;
      }
      v30 = (_QWORD *)(v29 - 768);
      ACPIInitReferenceDeviceExtension(v30);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v31);
      ACPIInitDereferenceDeviceExtensionUnlocked((ULONG_PTR)v16);
      v16 = v30;
    }
    while ( v30 );
  }
  if ( (*(_DWORD *)(v3 + 8) & 0x2000000) != 0 || (*(_QWORD *)(v3 + 952) & 0x8000LL) != 0 )
  {
    LOBYTE(v17) = 1;
    LOBYTE(v18) = (*(_QWORD *)(v3 + 952) & 0x8000) != 0;
    EnableDisableRegions(*(_QWORD *)(v3 + 712), v17, v18);
  }
  return 0LL;
}
