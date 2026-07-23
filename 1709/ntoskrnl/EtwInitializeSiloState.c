/*
 * XREFs of EtwInitializeSiloState @ 0x1405DA61C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407153F0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140840858 (EtwpInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x140089394 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x1400AF180 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400AF1A0 (PsAttachSiloToCurrentThread.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1400FA200 (ExFreeCacheAwareRundownProtection.c)
 *     KeQueryMaximumProcessorCountEx @ 0x1400FC800 (KeQueryMaximumProcessorCountEx.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140152640 (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x140152860 (EtwpReadPerSiloConfigParameters.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140554740 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpInitializeAutoLoggers @ 0x1405A8E4C (EtwpInitializeAutoLoggers.c)
 */

__int64 __fastcall EtwInitializeSiloState(__int64 a1)
{
  unsigned int v2; // esi
  PVOID PoolWithTag; // rax
  __int64 v4; // rdi
  ULONG MaximumProcessorCount; // ebx
  SIZE_T v6; // rbp
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
  __int64 v21; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r8
  unsigned int i; // r9d
  __int64 v26; // rbx
  void *v27; // rcx
  void *v28; // rcx

  v2 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, 0x1190uLL, 0x61777445u);
  v4 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memset(PoolWithTag, 0, 0x1190uLL);
  *(_QWORD *)v4 = PsGetServerSiloGlobals(a1);
  EtwpReadPerSiloConfigParameters(v4);
  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v6 = 16 * MaximumProcessorCount * (*(_DWORD *)(v4 + 8) + 4);
  v7 = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x61777445u);
  *(_QWORD *)(v4 + 4104) = v7;
  if ( !v7 )
    goto LABEL_25;
  memset(v7, 0, (unsigned int)v6);
  v8 = MaximumProcessorCount;
  v9 = *(_QWORD *)(v4 + 4104) + ((unsigned __int64)MaximumProcessorCount << 6);
  if ( MaximumProcessorCount )
  {
    v10 = 0LL;
    do
    {
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4104)) = v9;
      v10 += 64LL;
      v11 = v9 + 8LL * *(unsigned int *)(v4 + 8);
      *(_QWORD *)(v10 + *(_QWORD *)(v4 + 4104) - 56) = v11;
      v9 = v11 + 8LL * *(unsigned int *)(v4 + 8);
      --v8;
    }
    while ( v8 );
  }
  v12 = (_WORD *)(v4 + 4016);
  *(_WORD *)(v4 + 4016) = 3;
  v13 = (_QWORD *)(v4 + 432);
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
  v17 = (unsigned int)(8 * *(_DWORD *)(v4 + 8));
  v18 = 16 * *(_DWORD *)(v4 + 8);
  v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v18, 0x61777445u);
  *(_QWORD *)(v4 + 416) = v19;
  if ( !v19 )
  {
LABEL_25:
    v27 = *(void **)(v4 + 4104);
    if ( v27 )
      ExFreePoolWithTag(v27, 0x61777445u);
    v28 = *(void **)(v4 + 416);
    if ( v28 )
      ExFreePoolWithTag(v28, 0x61777445u);
    ExFreePoolWithTag((PVOID)v4, 0x61777445u);
    return (unsigned int)-1073741801;
  }
  *(_QWORD *)(v4 + 424) = &v19[v17];
  memset(v19, 0, v18);
  v20 = 0LL;
  if ( *(_DWORD *)(v4 + 8) )
  {
    while ( 1 )
    {
      *(_QWORD *)(*(_QWORD *)(v4 + 424) + 8 * v20) = 1LL;
      *(_QWORD *)(*(_QWORD *)(v4 + 416) + 8 * v20) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(*(_QWORD *)(v4 + 416) + 8 * v20) )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= *(_DWORD *)(v4 + 8) )
        goto LABEL_14;
    }
    if ( (_DWORD)v20 )
    {
      v26 = 0LL;
      do
      {
        ExFreeCacheAwareRundownProtection(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v26 + *(_QWORD *)(v4 + 416)));
        v26 += 8LL;
        --v20;
      }
      while ( v20 );
    }
    goto LABEL_25;
  }
LABEL_14:
  *(_QWORD *)(v4 + 392) = v4;
  *(_QWORD *)(v4 + 400) = 0LL;
  *(GUID *)(v4 + 40) = SecurityProviderGuid;
  *((_QWORD *)PsGetServerSiloGlobals(a1) + 108) = v4;
  if ( PsIsHostSilo(a1) )
  {
    qword_1403581A8 = *(_QWORD *)(v4 + 424);
    EtwpHostSiloState = v4;
    qword_1403581B0 = v4;
  }
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(v4 + 4112),
    (_DWORD *)(v4 + 4152),
    (_QWORD *)(v4 + 4144),
    (GUID *)(v4 + 4128));
  v21 = PsAttachSiloToCurrentThread(a1);
  EtwpInitializeAutoLoggers();
  PsDetachSiloFromCurrentThread(v21);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v4 + 400, 0LL);
  v23 = v4 + 132;
  *(_QWORD *)(v4 + 408) = KeGetCurrentThread();
  for ( i = 0; i < 8; ++i )
  {
    if ( *v12 )
    {
      *(_WORD *)(v23 + 2) = *v12;
      *(_DWORD *)(v23 - 4) = 1;
      *(_BYTE *)v23 = -1;
      *(_QWORD *)(v23 + 12) = -1LL;
      *(_QWORD *)(v23 + 20) = 0LL;
      *(_DWORD *)(v23 + 4) = 64;
      *(_BYTE *)(v4 + 4032) |= 1 << i;
    }
    ++v12;
    v23 += 32LL;
  }
  *(_QWORD *)(v4 + 408) = 0LL;
  ExReleasePushLockEx(v4 + 400, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  *(_QWORD *)(v4 + 4064) = 0LL;
  *(_QWORD *)(v4 + 4048) = 0LL;
  *(_QWORD *)(v4 + 4056) = 0LL;
  return v2;
}
