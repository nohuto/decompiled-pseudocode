/*
 * XREFs of MiReferencePfBackedSection @ 0x140083410
 * Callers:
 *     MiTrimSharedPage @ 0x140081E44 (MiTrimSharedPage.c)
 *     MiGetPageFileSectionForReservation @ 0x140150C40 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

_QWORD *__fastcall MiReferencePfBackedSection(unsigned __int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbp
  _QWORD *v3; // r14
  KIRQL v5; // al
  _QWORD *v6; // rcx
  KIRQL v7; // r15
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // rax
  int v18; // eax
  __int64 v19; // [rsp+58h] [rbp+10h]

  v1 = v19;
  v2 = 0LL;
  v3 = 0LL;
  while ( 2 )
  {
    v5 = ExAcquireSpinLockShared(&dword_1403CB420);
    v6 = (_QWORD *)qword_1403CB418;
    v7 = v5;
    while ( v6 )
    {
      v8 = v6[3] & 7LL;
      if ( v8 > 4 )
        goto LABEL_32;
      if ( (_DWORD)v8 )
      {
        v10 = v8 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( !v11 )
          {
            v12 = *(v6 - 7) + 128LL;
            v1 = 0LL;
            v9 = *(_QWORD *)(*(v6 - 7) + 136LL);
            do
            {
              v13 = *(unsigned int *)(v12 + 44);
              v12 = *(_QWORD *)(v12 + 16);
              v1 += v13;
            }
            while ( v12 );
            goto LABEL_8;
          }
          v18 = v11 - 1;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
LABEL_32:
              v9 = 0LL;
              goto LABEL_8;
            }
            v9 = v6[4];
            v1 = v6[5];
          }
          else
          {
            v9 = v6[6];
            v1 = v6[4];
          }
        }
        else
        {
          v9 = *(v6 - 6);
          v1 = *((unsigned int *)v6 - 3);
        }
      }
      else
      {
        v9 = *(v6 - 13);
        v1 = *((unsigned int *)v6 - 17);
      }
LABEL_8:
      if ( a1 < v9 )
      {
        v6 = (_QWORD *)*v6;
      }
      else
      {
        if ( a1 < v9 + 8 * v1 )
          break;
        v6 = (_QWORD *)v6[1];
      }
    }
    v14 = 0LL;
    if ( v6 && (v6[3] & 7) == 1 )
    {
      v15 = v6 - 7;
      v14 = *(v6 - 7);
      if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v14 + 72)) )
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
        __writecr8(v7);
        continue;
      }
      if ( (*(_DWORD *)(v14 + 56) & 3) == 0 )
      {
        v16 = MiBuildWakeList(v14, 4LL);
        ++*(_DWORD *)(v14 + 76);
        v2 = v16;
        MiRemoveUnusedSegment(v14);
        v3 = v15;
      }
    }
    break;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1403CB420);
  if ( v14 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  __writecr8(v7);
  if ( v2 )
    MiReleaseControlAreaWaiters(v2);
  return v3;
}
