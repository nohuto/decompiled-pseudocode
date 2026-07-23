/*
 * XREFs of EtwInitializeSiloState @ 0x14063D968
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x1408A3474 (EtwpInitialize.c)
 * Callees:
 *     ExFreeCacheAwareRundownProtection @ 0x140006330 (ExFreeCacheAwareRundownProtection.c)
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400D38F0 (KeQueryMaximumProcessorCountEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x14017EEF0 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x14017F110 (EtwpReadPerSiloConfigParameters.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404955A0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExSubscribeWnfStateChange @ 0x1405751F0 (ExSubscribeWnfStateChange.c)
 *     EtwpInitializeAutoLoggers @ 0x14063DCC0 (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwInitializeSiloState(__int64 a1)
{
  PVOID PoolWithTag; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  ULONG MaximumProcessorCount; // ebx
  unsigned int v6; // ebp
  PVOID v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _WORD *v12; // r14
  _QWORD *v13; // rdx
  __int64 v14; // r8
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbp
  unsigned int v18; // ebx
  char *v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rbx
  void *v28; // rcx
  void *v29; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x11C0uLL, 0x61777445u);
  v3 = 0;
  v4 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x11C0uLL);
  *(_QWORD *)v4 = a1;
  *(_QWORD *)(v4 + 8) = PsGetServerSiloGlobals(a1);
  EtwpReadPerSiloConfigParameters(v4);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = 16 * MaximumProcessorCount * (*(_DWORD *)(v4 + 16) + 4);
  v7 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x61777445u);
  *(_QWORD *)(v4 + 4112) = v7;
  if ( !v7 )
    goto LABEL_25;
  memset(v7, 0, v6);
  v8 = MaximumProcessorCount;
  v9 = *(_QWORD *)(v4 + 4112) + ((unsigned __int64)MaximumProcessorCount << 6);
  if ( MaximumProcessorCount )
  {
    v10 = 0LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4112)) = v9;
      v10 += 64LL;
      v11 = v9 + 8LL * *(unsigned int *)(v4 + 16);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4112) - 56) = v11;
      v9 = v11 + 8LL * *(unsigned int *)(v4 + 16);
      --v8;
    }
    while ( v8 );
  }
  v12 = (_WORD *)(v4 + 4024);
  *(_WORD *)(v4 + 4024) = 3;
  v13 = (_QWORD *)(v4 + 440);
  v14 = 64LL;
  do
  {
    v13[6] = 0LL;
    v15 = v13;
    v16 = 3LL;
    do
    {
      v15[1] = v15;
      *v15 = v15;
      v15 += 2;
      --v16;
    }
    while ( v16 );
    v13 += 7;
    --v14;
  }
  while ( v14 );
  v17 = (unsigned int)(8 * *(_DWORD *)(v4 + 16));
  v18 = 16 * *(_DWORD *)(v4 + 16);
  v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v18, 0x61777445u);
  *(_QWORD *)(v4 + 424) = v19;
  if ( !v19 )
  {
LABEL_25:
    v28 = *(void **)(v4 + 4112);
    if ( v28 )
      ExFreePoolWithTag(v28, 0x61777445u);
    v29 = *(void **)(v4 + 424);
    if ( v29 )
      ExFreePoolWithTag(v29, 0x61777445u);
    ExFreePoolWithTag((PVOID)v4, 0x61777445u);
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(v4 + 432) = &v19[v17];
  memset(v19, 0, v18);
  v20 = 0LL;
  if ( *(_DWORD *)(v4 + 16) )
  {
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 432) + 8 * v20) = 1LL;
      *(_QWORD *)(*(_QWORD *)(v4 + 424) + 8 * v20) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(*(_QWORD *)(v4 + 424) + 8 * v20) )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= *(_DWORD *)(v4 + 16) )
        goto LABEL_14;
    }
    if ( (_DWORD)v20 )
    {
      v27 = 0LL;
      do
      {
        ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v27 + *(_QWORD *)(v4 + 424)));
        v27 += 8LL;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_25;
  }
LABEL_14:
  *(_QWORD *)(v4 + 400) = v4;
  *(_QWORD *)(v4 + 408) = 0LL;
  *(GUID *)(v4 + 48) = SecurityProviderGuid;
  *((_QWORD *)PsGetServerSiloGlobals(a1) + 108) = v4;
  if ( PsIsHostSilo(v21) )
  {
    qword_14039B7E8 = *(_QWORD *)(v4 + 432);
    EtwpHostSiloState = v4;
    qword_14039B7F0 = v4;
    ExSubscribeWnfStateChange(
      v4 + 4120,
      (__int64)&WNF_CONT_RESTORE_FROM_SNAPSHOT_COMPLETE,
      1,
      0,
      (__int64)EtwpContainerResumeWnfCallback,
      0LL);
  }
  v22 = PsAttachSiloToCurrentThread(a1);
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4128),
    (_DWORD *)(v4 + 4168),
    (_QWORD *)(v4 + 4160),
    (GUID *)(v4 + 4144));
  EtwpInitializeAutoLoggers();
  PsDetachSiloFromCurrentThread(v22);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 408, 0LL);
  v24 = v4 + 140;
  *(_QWORD *)(v4 + 416) = KeGetCurrentThread();
  LODWORD(v25) = 0;
  do
  {
    if ( *v12 )
    {
      *(_WORD *)(v24 + 2) = *v12;
      *(_DWORD *)(v24 - 4) = 1;
      *(_BYTE *)v24 = -1;
      *(_QWORD *)(v24 + 12) = -1LL;
      *(_QWORD *)(v24 + 20) = 0LL;
      *(_DWORD *)(v24 + 4) = 64;
      *(_BYTE *)(v4 + 4040) |= 1 << v25;
    }
    v25 = (unsigned int)(v25 + 1);
    ++v12;
    v24 += 32LL;
  }
  while ( (unsigned int)v25 < 8 );
  *(_QWORD *)(v4 + 416) = 0LL;
  ExReleasePushLockEx(v4 + 408, 0LL, v24, v25);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v4 + 4072) = 0LL;
  *(_QWORD *)(v4 + 4056) = 0LL;
  *(_QWORD *)(v4 + 4064) = 0LL;
  return v3;
}
