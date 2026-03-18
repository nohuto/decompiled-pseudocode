/*
 * XREFs of RtlpHpVsChunkFree @ 0x140245480
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024552C (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140245AE8 (RtlpHpVsContextFree.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x140245060 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkDecommit @ 0x1402452B8 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x140245DA8 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140245F3C (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned __int64 a3, int a4)
{
  unsigned int i; // r14d
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  for ( i = 0; ; i = v10 )
  {
    a3 = RtlpHpVsChunkCoalesce(BugCheckParameter2, a2, a3, &v10);
    if ( v10 == *(unsigned __int16 *)(a2 + 32) && *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 56) + 16LL) != -857879331 )
    {
      RtlpHpVsSubsegmentCleanup(BugCheckParameter2, a2);
      return a2;
    }
    if ( v10 <= i || !(unsigned int)RtlpHpVsChunkDecommit(BugCheckParameter2, a2, a3, a4) )
      break;
  }
  RtlpHpVsFreeChunkInsert(BugCheckParameter2, a2, a3);
  return 0LL;
}
