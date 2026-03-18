/*
 * XREFs of MiUpdatePageFileList @ 0x14014FF48
 * Callers:
 *     MiIncreaseCommitLimits @ 0x14014FD74 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x1405D4984 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
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
  v7 = ExAcquireSpinLockExclusive(&dword_140389138);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140389130, v6);
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v9 = (_QWORD *)qword_140389130;
  if ( !qword_140389130 )
    goto LABEL_4;
  while ( v8 < *(v9 - 26) )
  {
    v10 = (_QWORD *)*v9;
    if ( !*v9 )
      goto LABEL_4;
LABEL_11:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[1];
  if ( v10 )
    goto LABEL_11;
  v3 = 1;
LABEL_4:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140389130, (unsigned __int64)v9, v3, v6);
LABEL_5:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140389138);
  result = (_UNKNOWN **)v7;
  __writecr8(v7);
  return result;
}
