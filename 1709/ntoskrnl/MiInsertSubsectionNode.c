/*
 * XREFs of MiInsertSubsectionNode @ 0x1400B747C
 * Callers:
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1404F9DFC (MiCreateDataFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 */

char __fastcall MiInsertSubsectionNode(__int64 a1, unsigned __int64 a2, int a3)
{
  bool v3; // bl
  unsigned __int64 *v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // r10
  char result; // al
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax

  v3 = 0;
  v4 = (unsigned __int64 *)(a1 + 240);
  if ( a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = (_QWORD *)*v4;
  if ( !*v4 )
    goto LABEL_4;
  v10 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
  while ( 1 )
  {
    v11 = *((unsigned int *)v8 - 5) | ((unsigned __int64)(*(_WORD *)(v8 - 3) & 0xFFC0) << 26);
    v12 = *((unsigned int *)v8 - 4);
    v13 = v12 + v11;
    if ( *((_WORD *)v8 - 11) < 0x10u )
      v13 = v12 + v11 - 1;
    if ( v10 >= v11 || v10 > v13 )
      break;
    v14 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_16:
    v8 = v14;
  }
  v14 = (_QWORD *)v8[1];
  if ( v14 )
    goto LABEL_16;
  v3 = 1;
LABEL_4:
  result = RtlAvlInsertNodeEx(v4, (unsigned __int64)v8, v3, a2 + 56);
  ++v4[1];
  v4[2] = a2;
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    result = v7;
    __writecr8(v7);
  }
  return result;
}
