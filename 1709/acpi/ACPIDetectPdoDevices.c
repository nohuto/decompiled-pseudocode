/*
 * XREFs of ACPIDetectPdoDevices @ 0x1C0010B84
 * Callers:
 *     ACPIRootIrpQueryBusRelations @ 0x1C008D3BC (ACPIRootIrpQueryBusRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1C0096EC0 (ACPIBusIrpQueryBusRelations.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000213C (ACPIDevicePowerFlushQueue.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0004AB0 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0011024 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0014E98 (WPP_RECORDER_SF_qD.c)
 *     ACPIBuildPdo @ 0x1C0022C94 (ACPIBuildPdo.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIBuildMissingChildren @ 0x1C00432D8 (ACPIBuildMissingChildren.c)
 *     ACPIBuildFlushQueue @ 0x1C008D454 (ACPIBuildFlushQueue.c)
 *     ACPIDetectPdoMatch @ 0x1C009204C (ACPIDetectPdoMatch.c)
 */

__int64 __fastcall ACPIDetectPdoDevices(ULONG_PTR a1, PVOID *a2)
{
  PVOID *v2; // r13
  ULONG_PTR v3; // rbp
  ULONG_PTR v4; // r12
  unsigned int *v5; // r14
  unsigned int v6; // esi
  __int64 DeviceExtension; // rbx
  KIRQL v8; // di
  __int64 v9; // rdx
  int v10; // edi
  KIRQL v11; // dl
  __int64 v12; // rdi
  ULONG_PTR v13; // rdi
  KIRQL v14; // dl
  char v15; // r15
  __int64 v16; // r9
  KIRQL v17; // al
  __int64 v18; // rcx
  char v19; // bp
  _QWORD *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // eax
  unsigned int v24; // ebp
  unsigned int *PoolWithTag; // rax
  unsigned int *v26; // rdi
  unsigned int v27; // ebp
  KIRQL v28; // al
  KIRQL v29; // dl
  __int64 v30; // rcx
  __int64 i; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // esi
  __int64 v35; // r12
  NTSTATUS v36; // eax
  int v37; // edx
  __int64 v38; // r8
  __int64 v39; // rax
  __int64 v40; // r9
  const char *v41; // rcx
  const char *v42; // r8
  unsigned __int16 v43; // r9
  __int64 v44; // r9
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbp
  __int64 v49; // r15
  __int64 v50; // rsi
  __int64 v51; // r15
  __int64 v52; // rdx
  __int64 v55; // [rsp+A0h] [rbp+18h] BYREF

  v2 = a2;
  v3 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( v2 && *v2 )
  {
    v6 = *(_DWORD *)*v2;
    v5 = (unsigned int *)*v2;
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
    v41 = (const char *)&unk_1C0067B08;
    v42 = (const char *)&unk_1C0067B08;
    if ( (v40 & 0x200000000000LL) != 0 )
    {
      v41 = *(const char **)(DeviceExtension + 560);
      if ( (v40 & 0x400000000000LL) != 0 )
        v42 = *(const char **)(DeviceExtension + 568);
    }
    v43 = 20;
    goto LABEL_73;
  }
  v10 = ACPIDevicePowerFlushQueue(DeviceExtension);
  if ( v10 < 0 )
  {
    v44 = *(_QWORD *)(DeviceExtension + 8);
    v41 = (const char *)&unk_1C0067B08;
    v42 = (const char *)&unk_1C0067B08;
    if ( (v44 & 0x200000000000LL) != 0 )
    {
      v41 = *(const char **)(DeviceExtension + 560);
      if ( (v44 & 0x400000000000LL) != 0 )
        v42 = *(const char **)(DeviceExtension + 568);
    }
    v43 = 21;
LABEL_73:
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0xAu,
      v43,
      (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
      v10,
      DeviceExtension,
      v41,
      v42);
    return (unsigned int)v10;
  }
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v12 = *(_QWORD *)(DeviceExtension + 752);
  if ( v12 != DeviceExtension + 752 )
  {
    v13 = v12 - 768;
    ACPIInitReferenceDeviceExtension(v13);
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
    v15 = 0;
    while ( 1 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v13 + 8), 0x100uLL);
      v55 = 0LL;
      if ( (int)ACPIGet((__int64 *)v13, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v55, 0LL) >= 0
        && ((*(_QWORD *)(v13 + 8) & 0x2000000000002LL) == 0
         || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(v13 + 952) & 0x200000LL) != 0) )
      {
        if ( !(unsigned __int8)ACPIDetectPdoMatch(v13, v5) )
        {
          LOBYTE(v16) = (*(_BYTE *)(DeviceExtension + 8) & 0x10) == 0;
          if ( (int)ACPIBuildPdo(*(_QWORD *)(v3 + 8), v13, *(_QWORD *)(DeviceExtension + 736), v16) < 0 )
            goto LABEL_18;
          ++v6;
          goto LABEL_28;
        }
        if ( (*(_BYTE *)(v13 + 8) & 0x20) != 0 )
        {
          v22 = *(_QWORD *)(v13 + 720);
          if ( v22 )
          {
            if ( v5 && (v45 = 0LL, *v5) )
            {
              while ( *(_QWORD *)&v5[2 * v45 + 2] != v22 )
              {
                v45 = (unsigned int)(v45 + 1);
                if ( (unsigned int)v45 >= *v5 )
                  goto LABEL_38;
              }
              if ( (*(_DWORD *)(v13 + 952) & 0x20000000) != 0 )
              {
                --v6;
                goto LABEL_28;
              }
            }
            else
            {
LABEL_38:
              if ( (*(_DWORD *)(v13 + 952) & 0x20000000) == 0 )
              {
                ++v6;
                _InterlockedAnd64((volatile signed __int64 *)(v13 + 8), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_28:
                v15 = 1;
              }
            }
          }
        }
      }
LABEL_18:
      v17 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v18 = *(_QWORD *)(v13 + 768);
      if ( v18 == DeviceExtension + 752 )
      {
        v19 = 1;
      }
      else
      {
        v4 = v18 - 768;
        if ( *(_DWORD *)(v18 - 768 + 684) )
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 684));
        v19 = 0;
      }
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v17);
      ACPIInitDereferenceDeviceExtensionUnlocked(v13);
      if ( v19 )
      {
        v2 = a2;
        if ( !v15 )
          goto LABEL_30;
        v23 = 16;
        if ( v6 )
          v23 = 8 * v6 + 8;
        v24 = v23;
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, 0x44706341u);
        v26 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v24);
          if ( v5 )
          {
            memmove(v26 + 2, v5 + 2, 8LL * *v5);
            v27 = *v5;
          }
          else
          {
            v27 = 0;
          }
          v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          v29 = v28;
          v30 = *(_QWORD *)(DeviceExtension + 752);
          if ( v30 == DeviceExtension + 752 )
          {
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
            ExFreePoolWithTag(v26, 0);
          }
          else
          {
            for ( i = v30 - 768; i; i = v33 - 768 )
            {
              v32 = *(_QWORD *)(i + 8);
              if ( (v32 & 0x20) != 0 )
              {
                v38 = *(_QWORD *)(i + 720);
                if ( v38 )
                {
                  if ( ((v32 & 0x2000000000002LL) == 0
                     || (AcpiOverrideAttributes & 0x80000) != 0 && (*(_DWORD *)(i + 952) & 0x200000) != 0)
                    && (*(_DWORD *)(i + 952) & 0x20000000) == 0 )
                  {
                    if ( v27 >= v6 )
                      break;
                    v39 = v27++;
                    *(_QWORD *)&v26[2 * v39 + 2] = v38;
                    _InterlockedAnd64((volatile signed __int64 *)(i + 8), 0xFFFFFFFFFFFFFEFFuLL);
                  }
                }
              }
              if ( v6 == v27 )
                break;
              v33 = *(_QWORD *)(i + 768);
              if ( v33 == DeviceExtension + 752 )
                break;
            }
            *v26 = v27;
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v29);
            if ( v5 )
              v34 = *v5;
            else
              v34 = 0;
            for ( ; v34 < v27; ++v34 )
            {
              v35 = v34;
              v36 = ObReferenceObjectByPointer(*(PVOID *)&v26[2 * v34 + 2], 0, 0LL, 0);
              if ( v36 < 0 )
              {
                LOBYTE(v37) = 2;
                WPP_RECORDER_SF_qD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v37,
                  22,
                  22,
                  (__int64)&WPP_162dd38d4b03301972a4b65da78217e0_Traceguids,
                  *(_QWORD *)&v26[2 * v34 + 2],
                  v36);
                --*v26;
                --v34;
                v46 = *v26;
                --v27;
                v47 = *(_QWORD *)&v26[2 * v46 + 2];
                *(_QWORD *)&v26[2 * v46 + 2] = *(_QWORD *)&v26[2 * v35 + 2];
                *(_QWORD *)&v26[2 * v35 + 2] = v47;
              }
            }
            if ( (*(_QWORD *)(DeviceExtension + 8) & 0x2000000000LL) != 0 )
            {
              v48 = 0LL;
              if ( *v26 )
              {
                do
                {
                  v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v26[2 * v48 + 2] + 64LL) + 8LL);
                  if ( (v49 & 0x12000000000LL) != 0 && (v49 & 0x40000000000000LL) != 0 )
                    IoDuplicateDependency(*(_QWORD *)(DeviceExtension + 720));
                  if ( (v49 & 0x3000000000LL) != 0 )
                  {
                    v50 = 0LL;
                    if ( *v26 )
                    {
                      v51 = v49 & 0x1000000000LL;
                      do
                      {
                        v52 = *(_QWORD *)&v26[2 * v50 + 2];
                        if ( (_DWORD)v50 != (_DWORD)v48
                          && (((-(__int64)(v51 != 0) & 0x2000000000LL) + 0x10000000000LL) & *(_QWORD *)(*(_QWORD *)(v52 + 64) + 8LL)) != 0
                          && (*(_QWORD *)(*(_QWORD *)(v52 + 64) + 8LL) & 0x40000000000000LL) != 0 )
                        {
                          IoSetDependency(*(_QWORD *)&v26[2 * v48 + 2], v52, 2LL);
                        }
                        v50 = (unsigned int)(v50 + 1);
                      }
                      while ( (unsigned int)v50 < *v26 );
                    }
                  }
                  v48 = (unsigned int)(v48 + 1);
                }
                while ( (unsigned int)v48 < *v26 );
                v2 = a2;
              }
            }
            if ( v5 )
              ExFreePoolWithTag(*v2, 0);
            *v2 = v26;
          }
          return 0LL;
        }
        return 3221225626LL;
      }
      v3 = a1;
      v13 = v4;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
LABEL_30:
  if ( !v5 )
  {
    v21 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x44706341u);
    if ( v21 )
    {
      *v2 = v21;
      *v21 = 0LL;
      v21[1] = 0LL;
      *(_DWORD *)v21 = 0;
      return 0LL;
    }
    return 3221225626LL;
  }
  return 0LL;
}
