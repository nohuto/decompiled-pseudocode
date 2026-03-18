/*
 * XREFs of VmFlushTb @ 0x1402AB308
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     VmpFlushTb @ 0x1402ABEA8 (VmpFlushTb.c)
 */

struct _KTHREAD *__fastcall VmFlushTb(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  volatile LONG *v4; // rcx

  if ( a3 == 1 )
  {
    result = KeGetCurrentThread();
    v4 = (volatile LONG *)result->ApcState.Process[2].ActiveProcessors.Bitmap[16];
    if ( v4 )
      return (struct _KTHREAD *)VmpFlushTb(v4);
  }
  return result;
}
