/*
 * XREFs of MiInsertSubsectionNode @ 0x14004D364
 * Callers:
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1404BEDE8 (MiCreateDataFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x1400E7830 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  char v3; // bl
  __int64 v4; // rdi
  KIRQL v7; // si
  _QWORD *v8; // r10
  __int64 result; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  _QWORD *v13; // rax

  v3 = 0;
  v4 = a1 + 272;
  if ( (_DWORD)a3 )
    v7 = 17;
  else
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v8 = *(_QWORD **)v4;
  if ( !*(_QWORD *)v4 )
    goto LABEL_4;
  a3 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
  while ( 1 )
  {
    v10 = *((unsigned int *)v8 - 5) | ((unsigned __int64)(*(_WORD *)(v8 - 3) & 0xFFC0) << 26);
    v11 = *((unsigned int *)v8 - 4);
    v12 = v11 + v10;
    if ( *((_WORD *)v8 - 11) < 0x10u )
      v12 = v11 + v10 - 1;
    if ( a3 >= v10 || a3 > v12 )
      break;
    v13 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_4;
LABEL_16:
    v8 = v13;
  }
  v13 = (_QWORD *)v8[1];
  if ( v13 )
    goto LABEL_16;
  v3 = 1;
LABEL_4:
  LOBYTE(a3) = v3;
  result = RtlAvlInsertNodeEx(v4, v8, a3, a2 + 56);
  ++*(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 16) = a2;
  if ( v7 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    result = v7;
    __writecr8(v7);
  }
  return result;
}
