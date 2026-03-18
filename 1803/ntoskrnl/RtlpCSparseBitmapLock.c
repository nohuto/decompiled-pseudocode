/*
 * XREFs of RtlpCSparseBitmapLock @ 0x14029EF04
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x14029DDC4 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14029DF34 (RtlpCSparseBitmapPageDecommit.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 */

KIRQL __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  KIRQL result; // al

  v5 = (volatile LONG *)(a1 + 32);
  if ( *(_BYTE *)(a1 + 56) )
  {
    if ( a2 == 1 )
      result = ExAcquireSpinLockExclusive(v5);
    else
      result = ExAcquireSpinLockShared(v5);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a2 == 1 )
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
    else
      ExAcquirePushLockSharedEx((ULONG_PTR)v5, 0LL);
    result = -1;
  }
  *(_BYTE *)(a3 + 4) = result;
  *(_QWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  return result;
}
