/*
 * XREFs of ExFlushTb @ 0x1402BB738
 * Callers:
 *     MiDeleteVaTail @ 0x14000DF50 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x14000EAF0 (MiAgeWorkingSetTail.c)
 *     KeFlushTb @ 0x1400349E0 (KeFlushTb.c)
 *     KeFlushMultipleRangeTb @ 0x140037AE0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1401685E4 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushEntireTb @ 0x14017D5B0 (KeFlushEntireTb.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

struct _KTHREAD *__fastcall ExFlushTb(unsigned int a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  unsigned __int64 v5; // rcx

  result = KeGetCurrentThread();
  if ( a3 != 1 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(__int64, _QWORD, __int64))HalIommuDispatch[10])(
                                ExpSvmIommuSystemContext,
                                a1,
                                a2);
  v5 = result->ApcState.Process[2].ActiveProcessors.Bitmap[2];
  if ( v5 )
    return (struct _KTHREAD *)((__int64 (__fastcall *)(unsigned __int64, _QWORD, __int64))HalIommuDispatch[9])(
                                v5,
                                a1,
                                a2);
  return result;
}
