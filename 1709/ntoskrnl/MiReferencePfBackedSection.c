/*
 * XREFs of MiReferencePfBackedSection @ 0x14012AC34
 * Callers:
 *     MiTrimSharedPage @ 0x1400F1EDC (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140226494 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
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
  v4 = ExAcquireSpinLockShared(&dword_140388280);
  v5 = (_QWORD *)qword_140388278;
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
        if ( *(_DWORD *)(v9 + 56) & 1 | ((*(_DWORD *)(v9 + 56) & 2) != 0) )
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
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140388280);
  __writecr8(v6);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
