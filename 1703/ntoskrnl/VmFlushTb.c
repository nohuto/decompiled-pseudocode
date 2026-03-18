/*
 * XREFs of VmFlushTb @ 0x140251988
 * Callers:
 *     KeFlushTb @ 0x140063C74 (KeFlushTb.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x1400D7E80 (MiAgeWorkingSetTail.c)
 *     KeFlushMultipleRangeTb @ 0x1400D9210 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140143868 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x1401590B0 (KeFlushEntireTb.c)
 * Callees:
 *     VmpFlushTb @ 0x140251E58 (VmpFlushTb.c)
 */

struct _KTHREAD *VmFlushTb()
{
  struct _KTHREAD *result; // rax
  volatile LONG *v1; // rcx

  result = KeGetCurrentThread();
  v1 = (volatile LONG *)result->ApcState.Process[2].ActiveProcessors.Bitmap[13];
  if ( v1 )
    return (struct _KTHREAD *)VmpFlushTb(v1);
  return result;
}
