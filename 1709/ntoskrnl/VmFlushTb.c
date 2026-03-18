/*
 * XREFs of VmFlushTb @ 0x1402781F8
 * Callers:
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     KeFlushMultipleRangeTb @ 0x140057530 (KeFlushMultipleRangeTb.c)
 *     KeFlushTb @ 0x140059170 (KeFlushTb.c)
 *     KeFlushSingleTb @ 0x1400CA124 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x1400D034C (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401502AC (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     VmpFlushTb @ 0x140278DBC (VmpFlushTb.c)
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
