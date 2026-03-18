/*
 * XREFs of PiDmListAddList @ 0x1405E6AD0
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14050784C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x1405EA31C (PiDmListAddObjectWorker.c)
 */

_QWORD *__fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // r9
  _QWORD **v9; // r15
  void *v10; // rbp
  struct _KTHREAD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *i; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // rcx
  struct _KTHREAD *v18; // rcx
  struct _KTHREAD *v20; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  CurrentThread = KeGetCurrentThread();
  v9 = (_QWORD **)(v8 + 88);
  v10 = ObjectManagerForObjectType;
  --CurrentThread->KernelApcDisable;
  if ( a2 >= v8 )
  {
    if ( a2 > a4 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2LL, v10, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL, v22, v23);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    ExReleasePushLockEx(a2, 0LL, v12, v13);
    v18 = KeGetCurrentThread();
    if ( a2 <= a4 )
      return KeLeaveCriticalRegionThread((__int64)v18);
    KeLeaveCriticalRegionThread((__int64)v18);
    v17 = a4;
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL, v12, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = a2;
  }
  ExReleasePushLockEx(v17, 0LL, v15, v16);
  v18 = KeGetCurrentThread();
  return KeLeaveCriticalRegionThread((__int64)v18);
}
