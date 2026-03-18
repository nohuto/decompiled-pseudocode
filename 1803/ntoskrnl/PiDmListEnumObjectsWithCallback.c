/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x1405040D0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14056BD98 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405817B0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiDmGetObjectConstraintList @ 0x1405BE86C (PiDmGetObjectConstraintList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1405078AC (PiDmObjectRelease.c)
 */

__int64 __fastcall PiDmListEnumObjectsWithCallback(
        int a1,
        ULONG_PTR a2,
        __int64 (__fastcall *a3)(_QWORD, __int64, char *),
        __int64 a4)
{
  int v4; // r14d
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v10; // rbp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rsi
  void *v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rdx
  volatile signed __int32 *v18; // rcx
  unsigned int v19; // ebp
  _QWORD *v20; // rsi
  PVOID *v21; // rsi
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2, 0LL);
  v15 = *(_DWORD *)(v12 + 16);
  if ( v15 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v15, 0x5A706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v17 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        v13 = &PiDmListDefs;
        do
        {
          v18 = (volatile signed __int32 *)((char *)v17 - *((_QWORD *)&PiDmListDefs + v10 + 3));
          PoolWithTag[v6] = v18;
          _InterlockedIncrement(v18 + 2);
          v17 = (_QWORD *)*v17;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( v17 != (_QWORD *)v12 );
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  ExReleasePushLockEx(a2, 0LL, (__int64)v13, v14);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v19 = 0;
  if ( (_DWORD)v6 )
  {
    v20 = v5;
    do
    {
      v4 = a3(*v20, a4, &v23);
      if ( v4 < 0 )
        break;
      if ( v23 )
        break;
      ++v19;
      ++v20;
    }
    while ( v19 < (unsigned int)v6 );
  }
  if ( v5 )
  {
    if ( (_DWORD)v6 )
    {
      v21 = (PVOID *)v5;
      do
      {
        PiDmObjectRelease(*v21++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v5, 0x5A706E50u);
  }
  return (unsigned int)v4;
}
