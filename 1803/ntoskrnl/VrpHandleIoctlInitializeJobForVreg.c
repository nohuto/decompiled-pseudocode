/*
 * XREFs of VrpHandleIoctlInitializeJobForVreg @ 0x140708A30
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x140707A60 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     PsIsThreadInSilo @ 0x1400F17F4 (PsIsThreadInSilo.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ULongLongMult @ 0x140223478 (ULongLongMult.c)
 *     PsGetJobSilo @ 0x1402847C0 (PsGetJobSilo.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140620584 (CmpGetOrCreateContextForSiloNoRef.c)
 *     PspGetStorageArray @ 0x1406207C8 (PspGetStorageArray.c)
 *     CmSetCallbackObjectContext @ 0x1406ED660 (CmSetCallbackObjectContext.c)
 *     CmGetRootKeyObjectForSilo @ 0x1406F7B84 (CmGetRootKeyObjectForSilo.c)
 *     VrpIncrementSiloCount @ 0x140707988 (VrpIncrementSiloCount.c)
 *     VrpAllocateKeyContext @ 0x140708118 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x140708240 (VrpFreeKeyContext.c)
 *     VrpAddNamespaceNodeToList @ 0x140709A0C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140709D4C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14070A0B4 (VrpDestroyNamespaceNode.c)
 *     PsInsertSiloContext @ 0x140778920 (PsInsertSiloContext.c)
 *     PsRemoveSiloContext @ 0x140778A40 (PsRemoveSiloContext.c)
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
  size_t v11; // rdi
  void *v12; // r12
  PVOID PoolWithTag; // rax
  void *v14; // rbx
  size_t v15; // r8
  void *v16; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  __int64 v23; // r14
  char IsThreadInSilo; // al
  PVOID v25; // rcx
  UNICODE_STRING *KeyContext; // rax
  wchar_t *v27; // rax
  ULONG_PTR v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 Tag; // [rsp+28h] [rbp-69h]
  PVOID Object; // [rsp+58h] [rbp-39h] BYREF
  __int64 v35; // [rsp+60h] [rbp-31h]
  __int64 v36; // [rsp+68h] [rbp-29h] BYREF
  PVOID v37; // [rsp+70h] [rbp-21h] BYREF
  ULONGLONG NumberOfBytes; // [rsp+78h] [rbp-19h] BYREF
  ULONGLONG pullResult; // [rsp+80h] [rbp-11h] BYREF
  __int64 v40; // [rsp+88h] [rbp-9h] BYREF
  _QWORD v41[9]; // [rsp+90h] [rbp-1h] BYREF
  char v43; // [rsp+F0h] [rbp+5Fh]
  int v45; // [rsp+100h] [rbp+6Fh]

  v37 = 0LL;
  v6 = 0LL;
  Object = 0LL;
  v7 = 0LL;
  v45 = 0;
  RootKeyObjectForSilo = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  started = ObCreateObjectEx(0, (_DWORD *)VrpJobContextType, 0, 1u, Tag, 96, 0, 0, &Object, 0LL);
  if ( started < 0 )
  {
    v9 = (char *)Object;
    goto LABEL_62;
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
    v11 = NumberOfBytes;
    v12 = (void *)*((_QWORD *)v9 + 9);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x72615452u);
    v14 = PoolWithTag;
    if ( v12 )
    {
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v11);
        v15 = pullResult;
        if ( pullResult >= v11 )
          v15 = v11;
        memmove(v14, v12, v15);
        ExFreePoolWithTag(v12, 0x72615452u);
LABEL_14:
        if ( v14 )
        {
          *((_QWORD *)v9 + 9) = v14;
          *((_QWORD *)v9 + 7) = 32LL;
          started = 0;
          goto LABEL_20;
        }
      }
    }
    else if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v11);
      goto LABEL_14;
    }
    started = -2147024882;
    goto LABEL_17;
  }
  started = -2147483637;
LABEL_17:
  v16 = (void *)*((_QWORD *)v9 + 9);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x72615452u);
  memset(v9 + 32, 0, 0x30uLL);
LABEL_20:
  if ( started < 0 || (started = VrpIncrementSiloCount(), started < 0) )
  {
    v7 = 0LL;
    goto LABEL_62;
  }
  *((_DWORD *)v9 + 22) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v9 + 16), 0LL);
  v9 = (char *)Object;
  v43 = 1;
  v18 = VrpCreateNamespaceNode(Object, &CmRegistryContainersName, 0LL, &CmRegistryContainersName, 0, &v36);
  v22 = v36;
  started = v18;
  if ( v18 < 0 || (started = VrpAddNamespaceNodeToList(v9, v36), started < 0) )
  {
    v23 = v35;
    goto LABEL_49;
  }
  v7 = 0LL;
  v36 = 0LL;
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10, v19, v20, v21);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v43 = 0;
  started = ObpReferenceObjectByHandleWithTag(*a1, 6, (__int64)PsJobType, a3, 0x52566D43u, &v37, 0LL, 0LL);
  if ( started < 0 || (started = PsGetJobSilo((__int64)v37), started < 0) )
  {
    v9 = (char *)Object;
  }
  else
  {
    v23 = v35;
    IsThreadInSilo = PsIsThreadInSilo((__int64)KeGetCurrentThread(), v35);
    v9 = (char *)Object;
    if ( IsThreadInSilo )
    {
      started = -1073741811;
      goto LABEL_62;
    }
    v25 = Object;
    *(_OWORD *)Object = *(_OWORD *)(v23 + 1224);
    KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(v25);
    v6 = KeyContext;
    if ( KeyContext )
    {
      *KeyContext = *(UNICODE_STRING *)(v23 + 1224);
      KeyContext[2].Length = 1;
      v27 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, CmRegistryRootName.Length, 0x67655256u);
      v6[1].Buffer = v27;
      if ( v27 )
      {
        v6[1].Length = 0;
        v6[1].MaximumLength = CmRegistryRootName.Length;
        RtlUnicodeStringCopy(v6 + 1, &CmRegistryRootName);
        started = CmpGetOrCreateContextForSiloNoRef(v23, &v40);
        if ( started >= 0 )
        {
          started = CmpStartSiloRegistryNamespace(v40);
          if ( started >= 0 )
            started = 0;
        }
        if ( started < 0 )
          goto LABEL_62;
        started = PsInsertSiloContext(v23, (unsigned int)VrpSiloContextSlot, v9);
        if ( started < 0 )
          goto LABEL_62;
        v45 = 1;
        RootKeyObjectForSilo = CmGetRootKeyObjectForSilo(v23);
        v7 = RootKeyObjectForSilo;
        started = CmSetCallbackObjectContext(RootKeyObjectForSilo, &VrpCallbackCookie, v6, 0LL);
        if ( started < 0 )
        {
LABEL_58:
          PsRemoveSiloContext(v23, (unsigned int)VrpSiloContextSlot, 0LL);
          goto LABEL_62;
        }
        if ( (int)PspGetStorageArray(*(_QWORD *)(v23 + 1288), VrpSiloContextSlot, &a5, v41) >= 0 )
        {
          v28 = v41[0] + 16LL * a5;
          ExAcquirePushLockExclusiveEx(v28, 0LL);
          if ( (*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
            *(_QWORD *)(v28 + 8) = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFFEuLL | 1;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)v28, v29, v30, v31);
          KeAbPostRelease(v28);
          v9 = (char *)Object;
          v23 = v35;
        }
        v22 = v36;
        started = 0;
LABEL_49:
        if ( v22 )
          VrpDestroyNamespaceNode(v9);
        if ( v43 )
        {
          if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v10, v19, v20, v21);
          KeAbPostRelease((ULONG_PTR)v10);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          v9 = (char *)Object;
          v23 = v35;
        }
        v6 = 0LL;
        if ( started >= 0 || !v45 )
        {
          v7 = RootKeyObjectForSilo;
          goto LABEL_62;
        }
        v7 = RootKeyObjectForSilo;
        goto LABEL_58;
      }
    }
    started = -1073741670;
  }
LABEL_62:
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x67655256u);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( v37 )
    ObfDereferenceObjectWithTag(v37, 0x52566D43u);
  return (unsigned int)started;
}
