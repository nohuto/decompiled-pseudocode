/*
 * XREFs of PiDmListEnumObjectsWithCallback @ 0x140526D90
 * Callers:
 *     PiDmGetObjectConstraintList @ 0x140518260 (PiDmGetObjectConstraintList.c)
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x140580700 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405962D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140523DEC (PiDmObjectRelease.c)
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
  unsigned int v13; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rdx
  volatile signed __int32 *v16; // rcx
  unsigned int v17; // ebp
  _QWORD *v18; // rsi
  unsigned int **v19; // rsi
  char v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v10 = 5LL * a1;
  CurrentThread = KeGetCurrentThread();
  v12 = a2 + *((_QWORD *)&PiDmListDefs + 5 * a1 + 1);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a2, 0LL);
  v13 = *(_DWORD *)(v12 + 16);
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v13, 0x5A706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = *(_QWORD **)v12;
      if ( *(_QWORD *)v12 != v12 )
      {
        do
        {
          v16 = (volatile signed __int32 *)((char *)v15 - *((_QWORD *)&PiDmListDefs + v10 + 3));
          PoolWithTag[v6] = v16;
          _InterlockedIncrement(v16 + 2);
          v15 = (_QWORD *)*v15;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( v15 != (_QWORD *)v12 );
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v17 = 0;
  if ( (_DWORD)v6 )
  {
    v18 = v5;
    do
    {
      v4 = a3(*v18, a4, &v21);
      if ( v4 < 0 )
        break;
      if ( v21 )
        break;
      ++v17;
      ++v18;
    }
    while ( v17 < (unsigned int)v6 );
  }
  if ( v5 )
  {
    if ( (_DWORD)v6 )
    {
      v19 = (unsigned int **)v5;
      do
      {
        PiDmObjectRelease(*v19++);
        --v6;
      }
      while ( v6 );
    }
    ExFreePoolWithTag(v5, 0x5A706E50u);
  }
  return (unsigned int)v4;
}
