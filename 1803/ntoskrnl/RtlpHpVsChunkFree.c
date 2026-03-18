/*
 * XREFs of RtlpHpVsChunkFree @ 0x1400AB964
 * Callers:
 *     RtlpHpVsContextFree @ 0x1400AB428 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkSplit @ 0x1400AB668 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x1400ABA24 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x1400ABBE8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1400AC19C (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x1400AC868 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkAlignSplit @ 0x1402977A8 (RtlpHpVsChunkAlignSplit.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(PEX_SPIN_LOCK SpinLock, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  unsigned int i; // r14d
  __int64 v10; // rcx
  __int64 v12; // rax
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = a5;
  for ( i = 0; ; i = v13 )
  {
    a3 = RtlpHpVsChunkCoalesce(SpinLock, a2, a3, &v13);
    if ( v13 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(SpinLock, a2);
      return a2;
    }
    if ( v13 <= i || !(unsigned int)RtlpHpVsChunkDecommit(SpinLock, v5) )
      break;
  }
  if ( (SpinLock[28] & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v12 = RtlpHpVsChunkAlignSplit(v10, a2, a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert(SpinLock, a2, v12);
  }
  RtlpHpVsFreeChunkInsert(SpinLock, a2, a3);
  return 0LL;
}
