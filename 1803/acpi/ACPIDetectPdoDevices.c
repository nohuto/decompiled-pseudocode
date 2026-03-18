/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0018844
 * Callers:
 *     ACPIBusIrpQueryBusRelations @ 0x1C0076C58 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C0087654 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     ACPIBuildMissingChildren @ 0x1C000B868 (ACPIBuildMissingChildren.c)
 *     ACPIBuildPdo @ 0x1C000BBF0 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C001C09C (ACPIDevicePowerFlushQueue.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0028704 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0028B50 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIBuildFlushQueue @ 0x1C00755C8 (ACPIBuildFlushQueue.c)
 *     ACPIDetectPdoMatch @ 0x1C0079420 (ACPIDetectPdoMatch.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  PVOID *v2; // r13
  ULONG_PTR v3; // rbp
  unsigned int *v4; // r14
  unsigned int v5; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // di
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // r9
  const char *v13; // rcx
  const char *v14; // r8
  unsigned __int16 v15; // r9
  __int64 v17; // r9
  _QWORD *v18; // r12
  KIRQL v19; // dl
  __int64 v20; // rdi
  _QWORD *PoolWithTag; // rax
  ULONG_PTR v22; // rdi
  KIRQL v23; // dl
  char v24; // r15
  __int64 v25; // r8
  int v26; // ecx
  KIRQL v27; // al
  _QWORD *v28; // rbp
  KIRQL v29; // r8
  _QWORD *v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // ebp
  unsigned int *v33; // rax
  unsigned int *v34; // rdi
  unsigned int v35; // ebp
  KIRQL v36; // al
  KIRQL v37; // dl
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  _QWORD *v42; // rcx
  unsigned int v43; // esi
  __int64 v44; // r12
  NTSTATUS v45; // eax
  int v46; // edx
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // r8d
  __int64 v50; // rbp
  __int64 v51; // r15
  __int64 v52; // rsi
  __int64 v53; // r15
  __int64 v54; // rdx
  _QWORD *v57; // [rsp+B0h] [rbp+18h]
  ULONG_PTR v58; // [rsp+B0h] [rbp+18h]
  __int64 v59; // [rsp+B8h] [rbp+20h] BYREF

  v2 = a2;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v2 && *v2 )
  {
    v5 = *(_DWORD *)*v2;
    v4 = (unsigned int *)*v2;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(DeviceExtension + 8);
  v9 = v7;
  if ( (v8 & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
    v8 = *(_QWORD *)(DeviceExtension + 8);
  }
  if ( (v8 & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 952), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  LOBYTE(v10) = 1;
  v11 = ACPIBuildFlushQueue(DeviceExtension, v10);
  if ( v11 < 0 )
  {
    v12 = *(_QWORD *)(DeviceExtension + 8);
    v13 = (const char *)&unk_1C005B1F0;
    v14 = (const char *)&unk_1C005B1F0;
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(DeviceExtension + 560);
      if ( (v12 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(DeviceExtension + 568);
    }
    v15 = 20;
LABEL_15:
    WPP_RECORDER_SF_Dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      v15,
      (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
      v11,
      DeviceExtension,
      v13,
      v14);
    return (unsigned int)v11;
  }
  v11 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v11 < 0 )
  {
    v17 = *(_QWORD *)(DeviceExtension + 8);
    v13 = (const char *)&unk_1C005B1F0;
    v14 = (const char *)&unk_1C005B1F0;
    if ( (v17 & 0x200000000000LL) != 0 )
    {
      v13 = *(const char **)(DeviceExtension + 560);
      if ( (v17 & 0x400000000000LL) != 0 )
        v14 = *(const char **)(DeviceExtension + 568);
    }
    v15 = 21;
    goto LABEL_15;
  }
  v18 = (_QWORD *)(DeviceExtension + 752);
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v20 = *(_QWORD *)(DeviceExtension + 752);
  if ( v20 == DeviceExtension + 752 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v19);
    goto LABEL_23;
  }
  v22 = v20 - 768;
  ACPIInitReferenceDeviceExtension(v22);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v23);
  v24 = 0;
  while ( 1 )
  {
    v57 = (_QWORD *)v3;
    _InterlockedOr64((volatile signed __int64 *)(v22 + 8), 0x100uLL);
    v59 = 0LL;
    if ( (int)ACPIGet(v22, 0x4154535Fu, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v59, 0LL) >= 0
      && ((*(_QWORD *)(v22 + 8) & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v22 + 952) & 0x200000LL) != 0) )
    {
      if ( !(unsigned __int8)ACPIDetectPdoMatch(v22, v4) )
      {
        if ( ACPIBuildPdo(
               *(struct _DRIVER_OBJECT **)(a1 + 8),
               v22,
               *(struct _DEVICE_OBJECT **)(DeviceExtension + 736),
               (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0) < 0 )
          goto LABEL_44;
        ++v5;
        goto LABEL_43;
      }
      if ( (*(_BYTE *)(v22 + 8) & 0x20) != 0 )
      {
        v25 = *(_QWORD *)(v22 + 720);
        if ( v25 )
        {
          if ( !v4 || (v26 = 0, !*v4) )
          {
LABEL_41:
            if ( (*(_DWORD *)(v22 + 952) & 0x20000000) != 0 )
              goto LABEL_44;
            ++v5;
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 8), 0xFFFFFFFFFFFFFEFFuLL);
            goto LABEL_43;
          }
          while ( *(_QWORD *)&v4[2 * v26 + 2] != v25 )
          {
            if ( ++v26 >= *v4 )
              goto LABEL_41;
          }
          if ( (*(_DWORD *)(v22 + 952) & 0x20000000) != 0 )
          {
            --v5;
LABEL_43:
            v24 = 1;
          }
        }
      }
    }
LABEL_44:
    v27 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v28 = *(_QWORD **)(v22 + 768);
    v29 = v27;
    if ( v28 != v18 )
      ACPIInitReferenceDeviceExtension(v28 - 96);
    v30 = v57;
    if ( v28 != v18 )
      v30 = v28 - 96;
    v58 = (ULONG_PTR)v30;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
    ACPIInitDereferenceDeviceExtensionUnlocked(v22);
    if ( v28 == v18 )
      break;
    v3 = v58;
    v22 = v58;
  }
  v2 = a2;
  if ( !v24 )
  {
LABEL_23:
    if ( v4 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( PoolWithTag )
    {
      *v2 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *(_DWORD *)PoolWithTag = 0;
      return 0LL;
    }
    return 3221225626LL;
  }
  v31 = 16;
  if ( v5 )
    v31 = 8 * v5 + 8;
  v32 = v31;
  v33 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v31, 0x44706341u);
  v34 = v33;
  if ( !v33 )
    return 3221225626LL;
  memset(v33, 0, v32);
  if ( v4 )
  {
    memmove(v34 + 2, v4 + 2, 8LL * *v4);
    v35 = *v4;
  }
  else
  {
    v35 = 0;
  }
  v36 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v37 = v36;
  if ( (_QWORD *)*v18 == v18 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v36);
    ExFreePoolWithTag(v34, 0);
  }
  else
  {
    v38 = *v18 - 768LL;
    if ( *v18 != 768LL )
    {
      do
      {
        v39 = *(_QWORD *)(v38 + 8);
        if ( (v39 & 0x20) != 0 )
        {
          v40 = *(_QWORD *)(v38 + 720);
          if ( v40 )
          {
            if ( ((v39 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v38 + 952) & 0x200000) != 0)
              && (*(_DWORD *)(v38 + 952) & 0x20000000) == 0 )
            {
              if ( v35 >= v5 )
                break;
              v41 = v35++;
              *(_QWORD *)&v34[2 * v41 + 2] = v40;
              _InterlockedAnd64((volatile signed __int64 *)(v38 + 8), 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v5 == v35 )
          break;
        v42 = *(_QWORD **)(v38 + 768);
        if ( v42 == v18 )
          break;
        v38 = (__int64)(v42 - 96);
      }
      while ( v38 );
    }
    *v34 = v35;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v37);
    if ( v4 )
      v43 = *v4;
    else
      v43 = 0;
    for ( ; v43 < v35; ++v43 )
    {
      v44 = v43;
      v45 = ObReferenceObjectByPointer(*(PVOID *)&v34[2 * v43 + 2], 0, 0LL, 0);
      if ( v45 < 0 )
      {
        LOBYTE(v46) = 2;
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v46,
          22,
          22,
          (__int64)&WPP_5d4fefc32e4d3e8f8429787c7cbc17dc_Traceguids,
          *(_QWORD *)&v34[2 * v43 + 2],
          v45);
        --*v34;
        --v43;
        v47 = *v34;
        --v35;
        v48 = *(_QWORD *)&v34[2 * v47 + 2];
        *(_QWORD *)&v34[2 * v47 + 2] = *(_QWORD *)&v34[2 * v44 + 2];
        *(_QWORD *)&v34[2 * v44 + 2] = v48;
      }
    }
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
    {
      v49 = *v34;
      v50 = 0LL;
      if ( *v34 )
      {
        do
        {
          v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v34[2 * v50 + 2] + 64LL) + 8LL);
          if ( (v51 & 0x12000000000LL) != 0 && (v51 & 0x40000000000000LL) != 0 )
          {
            IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 720));
            v49 = *v34;
          }
          if ( (v51 & 0x3000000000LL) != 0 )
          {
            v52 = 0LL;
            if ( v49 )
            {
              v53 = v51 & 0x1000000000LL;
              do
              {
                v54 = *(_QWORD *)&v34[2 * v52 + 2];
                if ( (_DWORD)v52 != (_DWORD)v50
                  && (((-(__int64)(v53 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v54 + 64)
                                                                                              + 8LL)) != 0
                  && (*(_QWORD *)(*(_QWORD *)(v54 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                {
                  IoSetDependency(*(_QWORD *)&v34[2 * v50 + 2], v54, 2LL);
                }
                v49 = *v34;
                v52 = (unsigned int)(v52 + 1);
              }
              while ( (unsigned int)v52 < *v34 );
            }
          }
          v50 = (unsigned int)(v50 + 1);
        }
        while ( (unsigned int)v50 < v49 );
        v2 = a2;
      }
    }
    if ( v4 )
      ExFreePoolWithTag(*v2, 0);
    *v2 = v34;
  }
  return 0LL;
}
