/*
 * XREFs of ExFlushTb @ 0x14025D8F8
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
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
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
