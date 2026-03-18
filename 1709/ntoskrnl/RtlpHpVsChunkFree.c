/*
 * XREFs of RtlpHpVsChunkFree @ 0x14025C970
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14025CA10 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14025CFD0 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x14025C580 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x14025C7D8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14025D29C (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14025D430 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int i; // r14d
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0; ; i = v10 )
  {
    a3 = RtlpHpVsChunkCoalesce(BugCheckParameter2, a2, a3, &v10);
    if ( v10 == *(unsigned __int16 *)(a2 + 32) )
      break;
    if ( v10 <= i || !(unsigned int)RtlpHpVsChunkDecommit(BugCheckParameter2, a2, a3, a4) )
    {
      RtlpHpVsFreeChunkInsert(BugCheckParameter2, a2, a3);
      return 0LL;
    }
  }
  RtlpHpVsSubsegmentCleanup(BugCheckParameter2, a2);
  return a2;
}
