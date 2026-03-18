/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0008074
 * Callers:
 *     ACPIBusIrpQueryBusRelations @ 0x1C008B94C (ACPIBusIrpQueryBusRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1C008C928 (ACPIRootIrpQueryBusRelations.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0008504 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0008630 (WPP_RECORDER_SF_qD.c)
 *     ACPIDevicePowerFlushQueue @ 0x1C00087A0 (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildPdo @ 0x1C00089D4 (ACPIBuildPdo.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIBuildMissingChildren @ 0x1C0043918 (ACPIBuildMissingChildren.c)
 *     ACPIDetectPdoMatch @ 0x1C008D9D8 (ACPIDetectPdoMatch.c)
 *     ACPIBuildFlushQueue @ 0x1C008DF74 (ACPIBuildFlushQueue.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  ULONG_PTR v3; // rbp
  __int64 v4; // r12
  unsigned int *v5; // r15
  unsigned int v6; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v8; // di
  __int64 v9; // rdx
  int v10; // edi
  _QWORD *v11; // r13
  KIRQL v12; // dl
  __int64 v13; // rdi
  __int64 v14; // rdi
  KIRQL v15; // dl
  char v16; // r14
  __int64 v17; // r9
  KIRQL v18; // al
  _QWORD *v19; // rcx
  char v20; // bp
  _QWORD *PoolWithTag; // rax
  __int64 v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // ebp
  unsigned int *v26; // rax
  unsigned int *v27; // rdi
  unsigned int v28; // ebp
  KIRQL v29; // al
  KIRQL v30; // dl
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rcx
  unsigned int v34; // esi
  __int64 v35; // r12
  NTSTATUS v36; // eax
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r9
  void *v41; // rcx
  int v42; // edx
  void *v43; // r8
  int v44; // r9d
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 i; // rbp
  __int64 v50; // r14
  __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v56; // [rsp+A0h] [rbp+18h] BYREF

  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( a2 && *a2 )
  {
    v6 = *(_DWORD *)*a2;
    v5 = (unsigned int *)*a2;
  }
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x20000000000LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFDFFFFFFFFFFuLL);
    ACPIBuildMissingChildren(DeviceExtension);
  }
  if ( (*(_QWORD *)(DeviceExtension + 8) & 0x40000000000LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 8), 0xFFFFFBFFFFFFFFFFuLL);
  if ( (*(_DWORD *)(DeviceExtension + 952) & 0x200LL) != 0 )
    _InterlockedAnd64((volatile signed __int64 *)(DeviceExtension + 952), 0xFFFFFFFFFFFFFDFFuLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  LOBYTE(v9) = 1;
  v10 = ACPIBuildFlushQueue(DeviceExtension, v9);
  if ( v10 < 0 )
  {
    v40 = *(_QWORD *)(DeviceExtension + 8);
    v41 = &unk_1C0066CD0;
    v42 = 0;
    v43 = &unk_1C0066CD0;
    if ( (v40 & 0x200000000000LL) != 0 )
    {
      v41 = *(void **)(DeviceExtension + 560);
      if ( (v40 & 0x400000000000LL) != 0 )
        v43 = *(void **)(DeviceExtension + 568);
    }
    v44 = 20;
    goto LABEL_72;
  }
  v10 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v10 < 0 )
  {
    v45 = *(_QWORD *)(DeviceExtension + 8);
    v41 = &unk_1C0066CD0;
    v42 = 0;
    v43 = &unk_1C0066CD0;
    if ( (v45 & 0x200000000000LL) != 0 )
    {
      v41 = *(void **)(DeviceExtension + 560);
      if ( (v45 & 0x400000000000LL) != 0 )
        v43 = *(void **)(DeviceExtension + 568);
    }
    v44 = 21;
LABEL_72:
    LOBYTE(v42) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v42,
      10,
      v44,
      (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
      v10,
      DeviceExtension,
      (__int64)v41,
      (__int64)v43);
    return (unsigned int)v10;
  }
  v11 = (_QWORD *)(DeviceExtension + 752);
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(DeviceExtension + 752);
  if ( v13 == DeviceExtension + 752 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
    if ( v5 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( PoolWithTag )
    {
      *a2 = PoolWithTag;
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
      *(_DWORD *)PoolWithTag = 0;
      return 0LL;
    }
    return 3221225626LL;
  }
  v14 = v13 - 768;
  ACPIInitReferenceDeviceExtension(v14);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
  v16 = 0;
  while ( 1 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v14 + 8), 0x100uLL);
    v56 = 0LL;
    if ( (int)ACPIGet((__int64 *)v14, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v56, 0LL) >= 0
      && ((*(_QWORD *)(v14 + 8) & 0x2000000000002LL) == 0
       || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v14 + 952) & 0x200000LL) != 0) )
    {
      if ( !(unsigned __int8)ACPIDetectPdoMatch(v14, v5) )
      {
        LOBYTE(v17) = (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0;
        if ( (int)ACPIBuildPdo(*(_QWORD *)(v3 + 8), v14, *(_QWORD *)(DeviceExtension + 736), v17) < 0 )
          goto LABEL_18;
        ++v6;
        goto LABEL_28;
      }
      if ( (*(_BYTE *)(v14 + 8) & 0x20) != 0 )
      {
        v23 = *(_QWORD *)(v14 + 720);
        if ( v23 )
        {
          if ( v5 && (v46 = 0LL, *v5) )
          {
            while ( *(_QWORD *)&v5[2 * v46 + 2] != v23 )
            {
              v46 = (unsigned int)(v46 + 1);
              if ( (unsigned int)v46 >= *v5 )
                goto LABEL_37;
            }
            if ( (*(_DWORD *)(v14 + 952) & 0x20000000) != 0 )
            {
              --v6;
              goto LABEL_28;
            }
          }
          else
          {
LABEL_37:
            if ( (*(_DWORD *)(v14 + 952) & 0x20000000) == 0 )
            {
              ++v6;
              _InterlockedAnd64((volatile signed __int64 *)(v14 + 8), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_28:
              v16 = 1;
            }
          }
        }
      }
    }
LABEL_18:
    v18 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v19 = *(_QWORD **)(v14 + 768);
    if ( v19 == v11 )
    {
      v20 = 1;
    }
    else
    {
      v4 = (__int64)(v19 - 96);
      if ( *((_DWORD *)v19 - 21) )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 684));
      v20 = 0;
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v18);
    ACPIInitDereferenceDeviceExtensionUnlocked((PVOID)v14);
    if ( v20 )
      break;
    v3 = a1;
    v14 = v4;
  }
  if ( !v16 )
    return 0LL;
  v24 = 16;
  if ( v6 )
    v24 = 8 * v6 + 8;
  v25 = v24;
  v26 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x44706341u);
  v27 = v26;
  if ( !v26 )
    return 3221225626LL;
  memset(v26, 0, v25);
  if ( v5 )
  {
    memmove(v27 + 2, v5 + 2, 8LL * *v5);
    v28 = *v5;
  }
  else
  {
    v28 = 0;
  }
  v29 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v30 = v29;
  if ( (_QWORD *)*v11 == v11 )
  {
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
    ExFreePoolWithTag(v27, 0);
  }
  else
  {
    v31 = *v11 - 768LL;
    if ( *v11 != 768LL )
    {
      do
      {
        v32 = *(_QWORD *)(v31 + 8);
        if ( (v32 & 0x20) != 0 )
        {
          v38 = *(_QWORD *)(v31 + 720);
          if ( v38 )
          {
            if ( ((v32 & 0x2000000000002LL) == 0
               || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v31 + 952) & 0x200000) != 0)
              && (*(_DWORD *)(v31 + 952) & 0x20000000) == 0 )
            {
              if ( v28 >= v6 )
                break;
              v39 = v28++;
              *(_QWORD *)&v27[2 * v39 + 2] = v38;
              _InterlockedAnd64((volatile signed __int64 *)(v31 + 8), 0xFFFFFFFFFFFFFEFFuLL);
            }
          }
        }
        if ( v6 == v28 )
          break;
        v33 = *(_QWORD **)(v31 + 768);
        if ( v33 == v11 )
          break;
        v31 = (__int64)(v33 - 96);
      }
      while ( v31 );
    }
    *v27 = v28;
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v30);
    if ( v5 )
      v34 = *v5;
    else
      v34 = 0;
    for ( ; v34 < v28; ++v34 )
    {
      v35 = v34;
      v36 = ObReferenceObjectByPointer(*(PVOID *)&v27[2 * v34 + 2], 0, 0LL, 0);
      if ( v36 < 0 )
      {
        LOBYTE(v37) = 2;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          v37,
          22,
          22,
          (__int64)&WPP_6c95d7dca6633290cc5c2f72c740a678_Traceguids,
          *(_QWORD *)&v27[2 * v34 + 2],
          v36);
        --*v27;
        --v34;
        v47 = *v27;
        --v28;
        v48 = *(_QWORD *)&v27[2 * v47 + 2];
        *(_QWORD *)&v27[2 * v47 + 2] = *(_QWORD *)&v27[2 * v35 + 2];
        *(_QWORD *)&v27[2 * v35 + 2] = v48;
      }
    }
    if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *v27; i = (unsigned int)(i + 1) )
      {
        v50 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v27[2 * i + 2] + 64LL) + 8LL);
        if ( (v50 & 0x12000000000LL) != 0 && (v50 & 0x40000000000000LL) != 0 )
          IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 720));
        if ( (v50 & 0x3000000000LL) != 0 )
        {
          v51 = 0LL;
          if ( *v27 )
          {
            v52 = v50 & 0x1000000000LL;
            do
            {
              v53 = *(_QWORD *)&v27[2 * v51 + 2];
              if ( (_DWORD)v51 != (_DWORD)i
                && (((-(__int64)(v52 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v53 + 64) + 8LL)) != 0
                && (*(_QWORD *)(*(_QWORD *)(v53 + 64) + 8LL) & 0x40000000000000LL) != 0 )
              {
                IoSetDependency(*(_QWORD *)&v27[2 * i + 2], v53, 2LL);
              }
              v51 = (unsigned int)(v51 + 1);
            }
            while ( (unsigned int)v51 < *v27 );
          }
        }
      }
    }
    if ( v5 )
      ExFreePoolWithTag(*a2, 0);
    *a2 = v27;
  }
  return 0LL;
}
