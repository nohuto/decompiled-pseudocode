/*
 * XREFs of KdRegisterPowerHandler @ 0x140201410
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall KdRegisterPowerHandler(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rbx
  unsigned __int8 CurrentIrql; // di
  _QWORD *v10; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6F49644Bu);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KxAcquireSpinLock(&KdpPowerSpinLock);
  v10 = (_QWORD *)qword_14037FD78;
  if ( *(__int64 **)qword_14037FD78 != &KdpPowerListHead )
    __fastfail(3u);
  *v7 = &KdpPowerListHead;
  v7[1] = v10;
  *v10 = v7;
  qword_14037FD78 = (__int64)v7;
  KxReleaseSpinLock(&KdpPowerSpinLock);
  __writecr8(CurrentIrql);
  *a3 = v7;
  return 0LL;
}
