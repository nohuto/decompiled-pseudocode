/*
 * XREFs of PiDmListRemoveList @ 0x140728E5C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140504E60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x14050784C (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x140729088 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  struct _KTHREAD *CurrentThread; // rcx
  ULONG_PTR v8; // r9
  _QWORD **v9; // r15
  void *v10; // rbp
  struct _KTHREAD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // rcx
  struct _KTHREAD *v22; // rcx

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
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
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
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2LL, v10, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL, v17, v18);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 < a4 )
  {
    ExReleasePushLockEx(a4, 0LL, v12, v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v21 = a2;
LABEL_13:
    ExReleasePushLockEx(v21, 0LL, v19, v20);
    v22 = KeGetCurrentThread();
    return KeLeaveCriticalRegionThread((__int64)v22);
  }
  ExReleasePushLockEx(a2, 0LL, v12, v13);
  v22 = KeGetCurrentThread();
  if ( a2 > a4 )
  {
    KeLeaveCriticalRegionThread((__int64)v22);
    v21 = a4;
    goto LABEL_13;
  }
  return KeLeaveCriticalRegionThread((__int64)v22);
}
