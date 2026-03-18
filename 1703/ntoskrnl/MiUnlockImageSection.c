/*
 * XREFs of MiUnlockImageSection @ 0x14006CF8C
 * Callers:
 *     MiLockPagableImageSection @ 0x14006CCF0 (MiLockPagableImageSection.c)
 * Callees:
 *     MiUnlockCodePage @ 0x14006D068 (MiUnlockCodePage.c)
 *     ExpUnblockPushLock @ 0x14007EB48 (ExpUnblockPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiUnlockImageSection(volatile signed __int32 *a1, __int64 a2, __int64 a3, ULONG_PTR a4)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // si
  signed __int32 v7; // ecx
  __int64 result; // rax
  signed __int32 v9[8]; // [rsp+0h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
    --CurrentThread->KernelApcDisable;
  v7 = _InterlockedDecrement(a1);
  result = (unsigned int)(v7 + 1);
  if ( (unsigned int)result <= 1 )
    KeBugCheckEx(0x1Au, 0x1010uLL, a2 << 25 >> 16, a4, v7);
  if ( v7 == 1 )
  {
    result = MiUnlockCodePage(a2, a3);
    _InterlockedAdd(a1, 0xFFFFFFFF);
    _InterlockedOr(v9, 0);
    if ( qword_14036C0F0 )
      result = ExpUnblockPushLock(&qword_14036C0F0, 0LL, 0LL);
  }
  if ( !CurrentIrql )
    return KeLeaveCriticalRegionThread(CurrentThread);
  return result;
}
