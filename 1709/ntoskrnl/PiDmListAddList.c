/*
 * XREFs of PiDmListAddList @ 0x1405DF40C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PiDmListAddObjectWorker @ 0x140518454 (PiDmListAddObjectWorker.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 */

_QWORD *__fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  _QWORD **v8; // r15
  struct _ERESOURCE *v9; // rbp
  struct _KTHREAD *v10; // rax
  struct _KTHREAD *v11; // rax
  _QWORD *i; // r14
  ULONG_PTR v13; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v16; // rcx
  struct _KTHREAD *v17; // rax

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v8 = (_QWORD **)(v7 + 72);
  v9 = ObjectManagerForObjectType;
  if ( a2 < v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  else
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    if ( a2 > v7 )
    {
      ExAcquirePushLockSharedEx(v7, 0LL);
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2, v9, a2, (__int64)(i - 8), 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 < a4 )
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    goto LABEL_13;
  }
  if ( a2 <= a4 )
  {
LABEL_13:
    v13 = a2;
    goto LABEL_10;
  }
  ExReleasePushLockEx(a2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v13 = a4;
LABEL_10:
  ExReleasePushLockEx(v13, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
