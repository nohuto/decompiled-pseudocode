/*
 * XREFs of MiUpdatePageFileSectionList @ 0x14001F824
 * Callers:
 *     MiCreatePrototypePtes @ 0x14001F8DC (MiCreatePrototypePtes.c)
 *     MiSegmentDelete @ 0x14048D574 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x14048D708 (MiCreatePagingFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 */

__int64 __fastcall MiUpdatePageFileSectionList(__int64 a1, int a2)
{
  KIRQL v4; // al
  char v5; // dl
  KIRQL v6; // bp
  _QWORD *v7; // r10
  unsigned __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 result; // rax

  v4 = ExAcquireSpinLockExclusive(&dword_140388280);
  v5 = 0;
  v6 = v4;
  if ( !a2 )
  {
    RtlAvlRemoveNode(&qword_140388278, a1 + 56);
    goto LABEL_10;
  }
  v7 = (_QWORD *)qword_140388278;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !qword_140388278 )
    goto LABEL_9;
  while ( v8 < *(v7 - 6) )
  {
    v9 = (_QWORD *)*v7;
    if ( !*v7 )
      goto LABEL_9;
LABEL_5:
    v7 = v9;
  }
  v9 = (_QWORD *)v7[1];
  if ( v9 )
    goto LABEL_5;
  v5 = 1;
LABEL_9:
  LOBYTE(v8) = v5;
  RtlAvlInsertNodeEx(&qword_140388278, v7, v8, a1 + 56);
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140388280);
  result = v6;
  __writecr8(v6);
  return result;
}
