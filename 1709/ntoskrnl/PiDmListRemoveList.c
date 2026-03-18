/*
 * XREFs of PiDmListRemoveList @ 0x1406C2D6C
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140520F60 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140523BF4 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListRemoveObjectWorker @ 0x1406C2FA8 (PiDmListRemoveObjectWorker.c)
 */

_QWORD *__fastcall PiDmListRemoveList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  void *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  _QWORD **v8; // r15
  void *v9; // rbp
  struct _KTHREAD *v10; // rcx
  struct _KTHREAD *v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v13; // rax
  _QWORD *i; // r14
  struct _KTHREAD *v15; // rax
  ULONG_PTR v16; // rcx

  ObjectManagerForObjectType = PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v8 = (_QWORD **)(v7 + 72);
  v9 = ObjectManagerForObjectType;
  if ( a2 >= v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a2 > a4 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v13 = KeGetCurrentThread();
      --v13->KernelApcDisable;
    }
    ExAcquirePushLockExclusiveEx(a2, 0LL);
  }
  else
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2, 0LL);
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    ExAcquirePushLockSharedEx(a4, 0LL);
  }
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListRemoveObjectWorker(2LL, v9, a2, i - 8, 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    if ( a2 > a4 )
    {
      ExReleasePushLockEx(a2, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v16 = a4;
      goto LABEL_12;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v16 = a2;
LABEL_12:
  ExReleasePushLockEx(v16, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
