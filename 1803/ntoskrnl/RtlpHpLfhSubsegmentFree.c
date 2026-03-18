/*
 * XREFs of RtlpHpLfhSubsegmentFree @ 0x14029C1A0
 * Callers:
 *     RtlpHpLfhBucketAddSubsegment @ 0x140299490 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpLfhOwnerCleanup @ 0x14029A6FC (RtlpHpLfhOwnerCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpLfhCacheAddSubsegment @ 0x14029A288 (RtlpHpLfhCacheAddSubsegment.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14029B84C (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentFree(unsigned __int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v6; // ebx
  unsigned __int8 v7; // bp
  char v8; // r15
  BOOL v9; // r12d
  int v10; // eax

  _InterlockedDecrement64((volatile signed __int64 *)(a3 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 56), -*(__int16 *)(a2 + 34));
  v6 = 0;
  if ( (a4 & 1) != 0 )
  {
    v7 = *(_BYTE *)(a2 + 45);
    v8 = *(_BYTE *)(a2 + 44);
    v9 = (a4 & 2) != 0;
    v10 = RtlpHpLfhSubsegmentCountEmptyUnits(a2);
    if ( v10 )
    {
      if ( v7 > 1u )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
          -(__int64)((unsigned __int64)(unsigned int)(v10 << v8) >> 12));
    }
    return ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, BOOL))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
             *(_QWORD *)a1,
             a2,
             v7 << v8,
             v9);
  }
  else
  {
    LOBYTE(v6) = (a4 & 2) != 0;
    return RtlpHpLfhCacheAddSubsegment(a1 + 112, a1, a2, v6);
  }
}
