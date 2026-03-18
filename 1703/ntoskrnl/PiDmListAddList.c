/*
 * XREFs of PiDmListAddList @ 0x140599268
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140483340 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     PiDmGetObjectManagerForObjectType @ 0x140485AA0 (PiDmGetObjectManagerForObjectType.c)
 *     PiDmListAddObjectWorker @ 0x1404E4584 (PiDmListAddObjectWorker.c)
 */

__int64 __fastcall PiDmListAddList(__int64 a1, ULONG_PTR a2, __int64 a3, ULONG_PTR a4)
{
  struct _ERESOURCE *ObjectManagerForObjectType; // rax
  ULONG_PTR v7; // r9
  _QWORD **v8; // r15
  struct _ERESOURCE *v9; // rbp
  struct _KTHREAD *v10; // rcx
  struct _KTHREAD *v11; // rcx
  _QWORD *i; // r14
  ULONG_PTR v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v16; // rax
  struct _KTHREAD *v17; // rax

  ObjectManagerForObjectType = (struct _ERESOURCE *)PiDmGetObjectManagerForObjectType(*(_DWORD *)(a2 + 28));
  v8 = (_QWORD **)(v7 + 72);
  v9 = ObjectManagerForObjectType;
  if ( a2 >= v7 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a2 > a4 )
    {
      ExAcquirePushLockSharedEx(a4, 0LL);
      v16 = KeGetCurrentThread();
      --v16->KernelApcDisable;
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
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(i - 8), 0LL);
    PiDmListAddObjectWorker(2, v9, a2, (__int64)(i - 8), 0LL);
    ExReleasePushLockEx((ULONG_PTR)(i - 8), 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( a2 >= a4 )
  {
    if ( a2 > a4 )
    {
      ExReleasePushLockEx(a2, 0LL);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v13 = a4;
      goto LABEL_8;
    }
  }
  else
  {
    ExReleasePushLockEx(a4, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  v13 = a2;
LABEL_8:
  ExReleasePushLockEx(v13, 0LL);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
