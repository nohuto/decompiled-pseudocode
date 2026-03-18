/*
 * XREFs of MiDeleteEmptySubsections @ 0x14004B6D4
 * Callers:
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 * Callees:
 *     MiUpdateSystemProtoPtesTree @ 0x14004B350 (MiUpdateSystemProtoPtesTree.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     MiReduceUnusedSubsectionCount @ 0x1400E4064 (MiReduceUnusedSubsectionCount.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeleteEmptySubsections(__int64 a1)
{
  volatile LONG *v1; // rdi
  KIRQL v3; // al
  _QWORD **v4; // r14
  _QWORD *v5; // rbx
  KIRQL v6; // bp
  __int64 v7; // r12
  void *v8; // r15
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 result; // rax

  v1 = (volatile LONG *)(a1 + 1280);
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  v4 = (_QWORD **)(a1 + 1664);
  while ( 1 )
  {
    v5 = *v4;
    v6 = v3;
    if ( *v4 == v4 )
      break;
    v7 = *(v5 - 10);
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v7 + 72) )
    {
      if ( (*((_BYTE *)v5 - 46) & 8) != 0 )
      {
        v8 = (void *)*(v5 - 9);
        MiUpdateSystemProtoPtesTree((__int64)(v5 + 4), 0);
        *(v5 - 9) = 0LL;
        v9 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v10 = (_QWORD *)v5[1], (_QWORD *)*v10 != v5) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *((_WORD *)v5 - 23) &= ~8u;
        v5[1] = v5;
        *v5 = v5;
        MiReduceUnusedSubsectionCount(v5 - 10);
      }
      else
      {
        v8 = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v7 + 72));
      __writecr8(v6);
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      __writecr8(v6);
    }
    v3 = ExAcquireSpinLockExclusive(v1);
  }
  *(_QWORD *)(a1 + 1360) = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  result = v6;
  __writecr8(v6);
  return result;
}
