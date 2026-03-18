/*
 * XREFs of MiRemoveMappingNode @ 0x1401350D4
 * Callers:
 *     MmFreeMappingAddress @ 0x1405727F0 (MmFreeMappingAddress.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

_QWORD *__fastcall MiRemoveMappingNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v3; // rsi
  KIRQL v4; // al
  _QWORD *v5; // rbx
  ULONG_PTR v6; // r8
  KIRQL v7; // bp
  ULONG_PTR v8; // rcx

  v3 = (unsigned int)BugCheckParameter3;
  v4 = ExAcquireSpinLockExclusive(&dword_14036CDA0);
  v5 = (_QWORD *)qword_14036CDA8;
  v6 = BugCheckParameter2 & 0xFFFFFFFFFFFFF000uLL;
  v7 = v4;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v5 )
        KeBugCheckEx(0xDAu, 0x106uLL, BugCheckParameter2, v3, 0LL);
      v8 = v5[3];
      if ( v6 <= v8 )
        break;
      v5 = (_QWORD *)v5[1];
    }
    if ( v6 >= v8 )
      break;
    v5 = (_QWORD *)*v5;
  }
  RtlAvlRemoveNode(&qword_14036CDA8, (__int64)v5);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14036CDA0);
  __writecr8(v7);
  return v5;
}
