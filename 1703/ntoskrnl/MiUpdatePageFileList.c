/*
 * XREFs of MiUpdatePageFileList @ 0x140159DA0
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140159BD4 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x1405B9FB8 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x1406B78F4 (MiDeletePagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 */

_UNKNOWN **__fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  bool v3; // bl
  unsigned __int64 v6; // rbp
  KIRQL v7; // r14
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 56) )
    return result;
  v6 = a1 + 264;
  v7 = ExAcquireSpinLockExclusive(&dword_14036CE78);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_14036CE70, v6);
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v9 = (_QWORD *)qword_14036CE70;
  if ( !qword_14036CE70 )
    goto LABEL_4;
  while ( v8 < *(v9 - 26) )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_4;
LABEL_10:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_10;
  v3 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_14036CE70, (unsigned __int64)v9, v3, v6);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CE78);
  result = (_UNKNOWN **)v7;
  __writecr8(v7);
  return result;
}
