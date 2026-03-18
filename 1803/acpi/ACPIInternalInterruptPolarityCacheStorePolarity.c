/*
 * XREFs of ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C002A0C4
 * Callers:
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C002A024 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C007B640 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalInterruptPolarityCacheStorePolarity(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 **v7; // rdi
  KIRQL v8; // r14
  __int64 *i; // rax
  _DWORD *PoolWithTag; // rax
  __int64 ***v11; // rcx

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0LL;
  v7 = (__int64 **)(a1 + 664);
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = *v7; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v7 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x43706341u);
      if ( PoolWithTag )
      {
        PoolWithTag[4] = a2;
        PoolWithTag[5] = a3;
        v11 = (__int64 ***)v7[1];
        if ( *v11 != v7 )
          __fastfail(3u);
        *(_QWORD *)PoolWithTag = v7;
        *((_QWORD *)PoolWithTag + 1) = v11;
        *v11 = (__int64 **)PoolWithTag;
        v7[1] = (__int64 *)PoolWithTag;
      }
      else
      {
        v3 = -1073741670;
      }
      goto LABEL_14;
    }
    if ( *((_DWORD *)i + 4) == a2 )
      break;
  }
  if ( *((_DWORD *)i + 5) != a3 )
    *((_DWORD *)i + 5) = -1;
LABEL_14:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  return v3;
}
