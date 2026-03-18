/*
 * XREFs of MiUpdatePerSessionProto @ 0x1402214F0
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x1406BE030 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 */

__int64 __fastcall MiUpdatePerSessionProto(__int64 a1, __int64 a2, unsigned __int64 a3, int a4)
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
  while ( *(_DWORD *)(a3 + 24) < *(_DWORD *)(v11 + 24) )
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
  RtlAvlInsertNodeEx((unsigned __int64 *)(a2 + 24), v11, v9, a3);
LABEL_11:
  ExReleaseSpinLockExclusiveFromDpcLevel(v4);
  result = v10;
  __writecr8(v10);
  return result;
}
