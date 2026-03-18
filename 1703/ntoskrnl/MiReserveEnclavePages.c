/*
 * XREFs of MiReserveEnclavePages @ 0x14021CB50
 * Callers:
 *     MiAddPagesToEnclave @ 0x1406BA74C (MiAddPagesToEnclave.c)
 *     MiCreateEnclave @ 0x1406BB47C (MiCreateEnclave.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetEnclavePage @ 0x14021C8F8 (MiGetEnclavePage.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // edi
  _QWORD *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock(a2 + 492, &LockHandle);
  v6 = a2[488];
  if ( v6 < a3 )
  {
    v7 = -1073741801;
  }
  else
  {
    a2[488] = v6 - a3;
    v7 = 0;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( v7 < 0 )
    return (unsigned int)v7;
  for ( *(_QWORD *)(a1 + 80) += a3; a3; --a3 )
  {
    v9 = (_QWORD *)(48 * MiGetEnclavePage(a2, 1) - 0x58000000000LL);
    *v9 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)(a1 + 72) = v9;
  }
  return 0LL;
}
