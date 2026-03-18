/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1406A33F0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     PsIsThreadInSilo @ 0x140089378 (PsIsThreadInSilo.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlUnicodeStringCopy @ 0x1400AF93C (RtlUnicodeStringCopy.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ULongLongMult @ 0x1401E5E10 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x14024E430 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1405BFDE4 (CmpGetOrCreateContextForSiloNoRef.c)
 *     PspGetStorageArray @ 0x1405C0028 (PspGetStorageArray.c)
 *     CmSetCallbackObjectContext @ 0x140689270 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x140694724 (CmGetRootKeyObjectForSilo.c)
 *     VrpIncrementSiloCount @ 0x1406A330C (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x1406A3AA8 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1406A3BD0 (VrpFreeKeyContext.c)
 *     VrpAddNamespaceNodeToList @ 0x1406A5394 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406A56CC (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x1406A5A34 (VrpDestroyNamespaceNode.c)
 *     PsInsertSiloContext @ 0x140714720 (PsInsertSiloContext.c)
 *     PsRemoveSiloContext @ 0x140714840 (PsRemoveSiloContext.c)
 */

__int64 __fastcall VrpHandleIoctlInitializeJobForVreg(
        ULONG_PTR *a1,
        unsigned int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        PVOID RootKeyObjectForSilo)
{
  UNICODE_STRING *v6; // r15
  PVOID v7; // r12
  int started; // edi
  char *v9; // rsi
  volatile signed __int64 *v10; // r13
  void *v11; // r12
  PVOID v12; // rax
  void *v13; // rbx
  size_t v14; // rdi
  PVOID PoolWithTag; // rax
  void *v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  __int64 v19; // r12
  __int64 v20; // r14
  char IsThreadInSilo; // al
  PVOID v22; // rcx
  UNICODE_STRING *KeyContext; // rax
  wchar_t *v24; // rax
  ULONG_PTR v25; // rdi
  __int64 v27; // [rsp+28h] [rbp-69h]
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  __int64 v29; // [rsp+60h] [rbp-31h]
  __int64 v30; // [rsp+68h] [rbp-29h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+70h] [rbp-21h] BYREF
  PVOID v32; // [rsp+78h] [rbp-19h] BYREF
  ULONGLONG pullResult; // [rsp+80h] [rbp-11h] BYREF
  __int64 v34; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v35[9]; // [rsp+90h] [rbp-1h] BYREF
  char v37; // [rsp+F0h] [rbp+5Fh]
  int v39; // [rsp+100h] [rbp+6Fh]

  v32 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v39 = 0;
  RootKeyObjectForSilo = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  started = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0LL, 1, v27, 96, 0, 0, &Object, 0LL);
  if ( started < 0 )
  {
    v9 = (char *)Object;
    goto LABEL_64;
  }
  v9 = (char *)Object;
  memset(Object, 0, 0x60uLL);
  v10 = (volatile signed __int64 *)(v9 + 16);
  *((_QWORD *)v9 + 2) = 0LL;
  memset(v9 + 32, 0, 0x30uLL);
  *((_QWORD *)v9 + 4) = 0LL;
  *((_QWORD *)v9 + 5) = 8LL;
  *((_QWORD *)v9 + 8) = 16LL;
  *((_QWORD *)v9 + 6) = 0LL;
  *((_QWORD *)v9 + 7) = 0LL;
  *((_QWORD *)v9 + 9) = 0LL;
  if ( ULongLongMult(0LL, 8uLL, &pullResult) >= 0 && ULongLongMult(0x20uLL, *((_QWORD *)v9 + 5), &NumberOfBytes) >= 0 )
  {
    v11 = (void *)*((_QWORD *)v9 + 9);
    if ( v11 )
    {
      v14 = NumberOfBytes;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v13 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, v14);
      if ( !v13 )
      {
LABEL_18:
        started = -2147024882;
        goto LABEL_19;
      }
      if ( pullResult < v14 )
        v14 = pullResult;
      memmove(v13, v11, v14);
      ExFreePoolWithTag(v11, 0x72615452u);
    }
    else
    {
      v12 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
      v13 = v12;
      if ( v12 )
        memset(v12, 0, NumberOfBytes);
    }
    if ( v13 )
    {
      *((_QWORD *)v9 + 9) = v13;
      *((_QWORD *)v9 + 7) = 32LL;
      started = 0;
      goto LABEL_22;
    }
    goto LABEL_18;
  }
  started = -2147483637;
LABEL_19:
  v16 = (void *)*((_QWORD *)v9 + 9);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x72615452u);
  memset(v9 + 32, 0, 0x30uLL);
LABEL_22:
  if ( started < 0 || (started = VrpIncrementSiloCount(), started < 0) )
  {
    v7 = 0LL;
    goto LABEL_64;
  }
  *((_DWORD *)v9 + 22) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 16), 0LL);
  v9 = (char *)Object;
  v37 = 1;
  v18 = VrpCreateNamespaceNode(Object, &CmRegistryContainersName, 0LL, &CmRegistryContainersName, 0, &v30);
  v19 = v30;
  started = v18;
  if ( v18 < 0 || (started = VrpAddNamespaceNodeToList(v9, v30), started < 0) )
  {
    v20 = v29;
    goto LABEL_51;
  }
  v7 = 0LL;
  v30 = 0LL;
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v37 = 0;
  started = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 1381395779, &v32, 0LL, 0LL);
  if ( started < 0 || (started = PsGetJobSilo((__int64)v32), started < 0) )
  {
    v9 = (char *)Object;
  }
  else
  {
    v20 = v29;
    IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), v29);
    v9 = (char *)Object;
    if ( IsThreadInSilo )
    {
      started = -1073741811;
      goto LABEL_64;
    }
    v22 = Object;
    *(_OWORD *)Object = *(_OWORD *)(v20 + 1224);
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v22);
    v6 = KeyContext;
    if ( KeyContext )
    {
      *KeyContext = *(UNICODE_STRING *)(v20 + 1224);
      KeyContext[2].Length = 1;
      v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u);
      v6[1].Buffer = v24;
      if ( v24 )
      {
        v6[1].Length = 0;
        v6[1].MaximumLength = CmRegistryRootName.Length;
        RtlUnicodeStringCopy(v6 + 1, &CmRegistryRootName);
        started = CmpGetOrCreateContextForSiloNoRef(v20, &v34);
        if ( started >= 0 )
        {
          started = CmpStartSiloRegistryNamespace(v34);
          if ( started >= 0 )
            started = 0;
        }
        if ( started < 0 )
          goto LABEL_64;
        started = PsInsertSiloContext(v20, (unsigned int)VrpSiloContextSlot, v9);
        if ( started < 0 )
          goto LABEL_64;
        v39 = 1;
        RootKeyObjectForSilo = CmGetRootKeyObjectForSilo(v20);
        v7 = RootKeyObjectForSilo;
        started = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v6, 0LL);
        if ( started < 0 )
        {
LABEL_60:
          PsRemoveSiloContext(v20, (unsigned int)VrpSiloContextSlot, 0LL);
          goto LABEL_64;
        }
        if ( (int)PspGetStorageArray(*(_QWORD *)(v20 + 1288), VrpSiloContextSlot, &a5, v35) >= 0 )
        {
          v25 = v35[0] + 16LL * a5;
          ExAcquirePushLockExclusiveEx(v25, 0LL);
          if ( (*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            *(_QWORD *)(v25 + 8) = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v25);
          KeAbPostRelease(v25);
          v9 = (char *)Object;
          v20 = v29;
        }
        v19 = v30;
        started = 0;
LABEL_51:
        if ( v19 )
          VrpDestroyNamespaceNode(v9);
        if ( v37 )
        {
          if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v10);
          KeAbPostRelease((ULONG_PTR)v10);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v9 = (char *)Object;
          v20 = v29;
        }
        v6 = 0LL;
        if ( started >= 0 || !v39 )
        {
          v7 = RootKeyObjectForSilo;
          goto LABEL_64;
        }
        v7 = RootKeyObjectForSilo;
        goto LABEL_60;
      }
    }
    started = -1073741670;
  }
LABEL_64:
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( v32 )
    ObfDereferenceObjectWithTag(v32, 0x52566D43u);
  return (unsigned int)started;
}
