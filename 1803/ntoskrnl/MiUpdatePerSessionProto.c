/*
 * XREFs of MiUpdatePerSessionProto @ 0x140268350
 * Callers:
 *     MiCreatePerSessionProtos @ 0x140754AFC (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140754D20 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile LONG *v4; // rbp
  KIRQL v8; // al
  bool v9; // cl
  KIRQL v10; // r14
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 result; // rax

  v4 = (volatile LONG *)(a1 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = 0;
  v10 = v8;
  if ( !a4 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)(a2 + 24), a3);
    goto LABEL_11;
  }
  v11 = *(_QWORD *)(a2 + 24);
  if ( !v11 )
    goto LABEL_9;
  while ( *(_DWORD *)(a3 + 64) < *(_DWORD *)(v11 + 64) )
  {
    v12 = *(_QWORD *)v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_9;
LABEL_7:
    v11 = v12;
  }
  v12 = *(_QWORD *)(v11 + 8);
  if ( v12 )
    goto LABEL_7;
  v9 = 1;
LABEL_9:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v11, v9, (_QWORD *)a3);
LABEL_11:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v10;
  __writecr8(v10);
  return result;
}
