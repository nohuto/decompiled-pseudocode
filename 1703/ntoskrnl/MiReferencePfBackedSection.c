/*
 * XREFs of MiReferencePfBackedSection @ 0x140118534
 * Callers:
 *     MiTrimSharedPage @ 0x140014134 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x14013A4BC (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x140096C90 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x140096DC4 (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x140097F50 (MiReleaseControlAreaWaiters.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400A6AB0 (ExAcquireSpinLockShared.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 *v2; // rbx
  _QWORD *v3; // rbp
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r15
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r12
  __int64 v9; // rdi
  KIRQL v10; // r14
  __int64 *v11; // rax

  v2 = 0LL;
  v3 = 0LL;
  v4 = ExAcquireSpinLockShared(&dword_14036BF60);
  v5 = (_QWORD *)qword_14036BF58;
  v6 = v4;
  while ( v5 )
  {
    v7 = *(v5 - 6);
    if ( a1 < v7 )
    {
      v5 = (_QWORD *)*v5;
    }
    else
    {
      if ( a1 < v7 + 8LL * *((unsigned int *)v5 - 3) )
      {
        v8 = v5 - 7;
        v9 = *(v5 - 7);
        v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 72));
        if ( *(_BYTE *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0) )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
          __writecr8(v10);
        }
        else
        {
          v11 = MiBuildWakeList(v9, 4);
          ++*(_DWORD *)(v9 + 76);
          v2 = v11;
          MiRemoveUnusedSegment(v9);
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
          __writecr8(v10);
          v3 = v8;
        }
        break;
      }
      v5 = (_QWORD *)v5[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_14036BF60);
  __writecr8(v6);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
