/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x18005EFC0
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x18005EF54 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x18006246C (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004A2A4 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x18005F08C (RtlpHpLfhCacheAddSubsegment.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v6; // ebx
  unsigned __int8 v8; // bp
  char v9; // r15
  int v10; // eax

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v6 = (a4 >> 1) & 1;
  if ( (a4 & 1) == 0 )
    return RtlpHpLfhCacheAddSubsegment(a1 + 96, a1, a2, v6);
  v8 = *(_BYTE *)(a2 + 45);
  v9 = *(_BYTE *)(a2 + 44);
  v10 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
  if ( v10 )
  {
    if ( v8 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 64) + 24LL),
        -(__int64)((unsigned __int64)(unsigned int)(v10 << v9) >> 12));
  }
  return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHeapKey ^ *(_QWORD *)(a1 + 16)))(
           *(_QWORD *)a1,
           a2,
           v8 << v9,
           v6);
}
