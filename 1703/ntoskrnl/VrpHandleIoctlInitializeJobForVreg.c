/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140679E44
 * Callers:
 *     IoctlDeviceDispatch @ 0x140678B40 (IoctlDeviceDispatch.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ULongLongMult @ 0x1401E1D04 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x140239490 (PsGetJobSilo.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1405A3938 (CmpGetOrCreateContextForSiloNoRef.c)
 *     PspGetStorageArray @ 0x1405A3B70 (PspGetStorageArray.c)
 *     CmSetCallbackObjectContext @ 0x140660300 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x14066A180 (CmGetRootKeyObjectForSilo.c)
 *     VrpIncrementSiloCount @ 0x1406792EC (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x1406794D0 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1406795DC (VrpFreeKeyContext.c)
 *     PsInsertSiloContext @ 0x1406DE270 (PsInsertSiloContext.c)
 *     PsRemoveSiloContext @ 0x1406DE390 (PsRemoveSiloContext.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        _QWORD *Object,
        ULONGLONG NumberOfBytes)
{
  void *v6; // r14
  UNICODE_STRING *v7; // r15
  PVOID RootKeyObjectForSilo; // r12
  int JobSilo; // ebx
  int v10; // eax
  _QWORD *v11; // rsi
  void *v12; // r13
  PVOID v13; // rax
  void *v14; // rbx
  size_t v15; // r12
  PVOID PoolWithTag; // rax
  void *v17; // rcx
  char v18; // r9
  int v19; // eax
  __int64 v20; // rdi
  UNICODE_STRING *KeyContext; // rax
  ULONG_PTR v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-58h]
  ULONGLONG pullResult; // [rsp+50h] [rbp-28h] BYREF
  __int64 v26; // [rsp+58h] [rbp-20h] BYREF
  __int64 v27; // [rsp+60h] [rbp-18h]
  __int64 v28; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp+50h] BYREF
  char v31; // [rsp+D0h] [rbp+58h]
  __int64 v32; // [rsp+D8h] [rbp+60h] BYREF

  v31 = a3;
  v32 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  RootKeyObjectForSilo = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v10 = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0, 1u, v24, 96, 0, 0, &Object, 0LL);
  v11 = Object;
  JobSilo = v10;
  if ( v10 >= 0 )
  {
    memset(Object, 0, 0x60uLL);
    v11[2] = 0LL;
    memset(v11 + 4, 0, 0x30uLL);
    v11[4] = 0LL;
    v11[5] = 8LL;
    v11[8] = 16LL;
    v11[6] = 0LL;
    v11[7] = 0LL;
    v11[9] = 0LL;
    if ( ULongLongMult(0LL, 8uLL, &pullResult) < 0 || ULongLongMult(0x20uLL, v11[5], &NumberOfBytes) < 0 )
    {
      JobSilo = -2147483637;
LABEL_19:
      v17 = (void *)v11[9];
      if ( v17 )
        ExFreePoolWithTag(v17, 0x72615452u);
      memset(v11 + 4, 0, 0x30uLL);
      goto LABEL_22;
    }
    v12 = (void *)v11[9];
    if ( v12 )
    {
      v15 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v15);
      if ( !v14 )
      {
LABEL_18:
        JobSilo = -2147024882;
        RootKeyObjectForSilo = 0LL;
        goto LABEL_19;
      }
      if ( pullResult < v15 )
        v15 = pullResult;
      memmove(v14, v12, v15);
      ExFreePoolWithTag(v12, 0x72615452u);
      RootKeyObjectForSilo = 0LL;
    }
    else
    {
      v13 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v14 = v13;
      if ( v13 )
        memset(v13, 0, NumberOfBytes);
    }
    if ( v14 )
    {
      v11[9] = v14;
      v11[7] = 32LL;
      JobSilo = 0;
LABEL_22:
      if ( JobSilo >= 0 )
      {
        JobSilo = VrpIncrementSiloCount();
        if ( JobSilo >= 0 )
        {
          v18 = v31;
          *((_DWORD *)v11 + 22) = 1;
          v19 = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, v18, 1381395779, &v32, 0LL, 0LL);
          v6 = (void *)v32;
          JobSilo = v19;
          if ( v19 >= 0 )
          {
            JobSilo = PsGetJobSilo(v32);
            if ( JobSilo >= 0 )
            {
              v20 = v27;
              *(_OWORD *)v11 = *(_OWORD *)(v27 + 1224);
              KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v11);
              v7 = KeyContext;
              if ( KeyContext )
              {
                *KeyContext = *(UNICODE_STRING *)(v20 + 1224);
                JobSilo = CmpGetOrCreateContextForSiloNoRef(v20, &v26);
                if ( JobSilo >= 0 )
                {
                  JobSilo = CmpStartSiloRegistryNamespace(v26);
                  if ( JobSilo >= 0 )
                    JobSilo = 0;
                }
                if ( JobSilo >= 0 )
                {
                  JobSilo = PsInsertSiloContext(v20, (unsigned int)gVregSiloContextSlot, v11);
                  if ( JobSilo >= 0 )
                  {
                    RootKeyObjectForSilo = CmGetRootKeyObjectForSilo(v20);
                    JobSilo = CmSetCallbackObjectContext(RootKeyObjectForSilo, &gCallbackCookie, v7, 0LL);
                    if ( JobSilo < 0 )
                    {
                      PsRemoveSiloContext(v20, (unsigned int)gVregSiloContextSlot, 0LL);
                    }
                    else
                    {
                      v7 = 0LL;
                      if ( (int)PspGetStorageArray(*(_QWORD *)(v20 + 1288), gVregSiloContextSlot, &v30, &v28) >= 0 )
                      {
                        v22 = v28 + 16LL * v30;
                        ExAcquirePushLockExclusiveEx(v22, 0LL);
                        if ( (*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
                          *(_QWORD *)(v22 + 8) = *(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
                        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                          ExfTryToWakePushLock((volatile signed __int64 *)v22);
                        KeAbPostRelease(v22);
                        v6 = (void *)v32;
                        v11 = Object;
                      }
                      JobSilo = 0;
                    }
                  }
                }
              }
              else
              {
                JobSilo = -1073741670;
              }
            }
          }
        }
      }
      goto LABEL_42;
    }
    goto LABEL_18;
  }
LABEL_42:
  if ( v11 )
    ObfDereferenceObjectWithTag(v11, 0x67655256u);
  if ( RootKeyObjectForSilo )
    ObfDereferenceObject(RootKeyObjectForSilo);
  if ( v7 )
    VrpFreeKeyContext(v7);
  if ( v6 )
    ObfDereferenceObjectWithTag(v6, 0x52566D43u);
  return (unsigned int)JobSilo;
}
