/*
 * XREFs of MiUpdatePerSessionProto @ 0x14022E1A8
 * Callers:
 *     MiCreatePerSessionProtos @ 0x1406EB248 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x1406EB46C (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
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
