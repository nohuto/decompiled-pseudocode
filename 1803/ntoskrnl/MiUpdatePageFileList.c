/*
 * XREFs of MiUpdatePageFileList @ 0x14017DF20
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14017DC60 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x14063C7A8 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x14074E938 (MiDeletePagefile.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

_UNKNOWN **__fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  bool v3; // bl
  _QWORD *v6; // rbp
  KIRQL v7; // r14
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 56) )
    return result;
  v6 = (_QWORD *)(a1 + 264);
  v7 = ExAcquireSpinLockExclusive(&dword_1403CC3B8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_1403CC3B0, (__int64)v6);
    goto LABEL_7;
  }
  v8 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v9 = (_QWORD *)qword_1403CC3B0;
  if ( !qword_1403CC3B0 )
    goto LABEL_6;
  while ( v8 < *(v9 - 26) )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_6;
LABEL_9:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_9;
  v3 = 1;
LABEL_6:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_1403CC3B0, (unsigned __int64)v9, v3, v6);
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_1403CC3B8);
  result = (_UNKNOWN **)v7;
  __writecr8(v7);
  return result;
}
