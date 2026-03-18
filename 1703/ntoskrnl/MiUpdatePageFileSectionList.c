/*
 * XREFs of MiUpdatePageFileSectionList @ 0x140119284
 * Callers:
 *     MiCreatePrototypePtes @ 0x14011933C (MiCreatePrototypePtes.c)
 *     MiSegmentDelete @ 0x14054A42C (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 */

__int64 __fastcall MiUpdatePageFileSectionList(__int64 a1, int a2)
{
  KIRQL v4; // al
  bool v5; // dl
  KIRQL v6; // bp
  _QWORD *v7; // r10
  _QWORD *v8; // rax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive(&dword_14036BF60);
  v5 = 0;
  v6 = v4;
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14036BF58, a1 + 56);
    goto LABEL_10;
  }
  v7 = (_QWORD *)qword_14036BF58;
  if ( !qword_14036BF58 )
    goto LABEL_9;
  while ( *(_QWORD *)(a1 + 8) < *(v7 - 6) )
  {
    v8 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_9;
LABEL_5:
    v7 = v8;
  }
  v8 = (_QWORD *)v7[1];
  if ( v8 )
    goto LABEL_5;
  v5 = 1;
LABEL_9:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14036BF58, (unsigned __int64)v7, v5, a1 + 56);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036BF60);
  result = v6;
  __writecr8(v6);
  return result;
}
