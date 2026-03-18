/*
 * XREFs of MiComputeDataFlushRange @ 0x1400E4D20
 * Callers:
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiComputeFlushRange @ 0x1400E1500 (MiComputeFlushRange.c)
 * Callees:
 *     MiFindLastSubsection @ 0x14004CFC0 (MiFindLastSubsection.c)
 *     MiBuildWakeList @ 0x1400E3EDC (MiBuildWakeList.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiRemoveUnusedSegment @ 0x1400E40E4 (MiRemoveUnusedSegment.c)
 *     MiLocateSubsectionNode @ 0x1400E48D0 (MiLocateSubsectionNode.c)
 *     MiReferenceSubsection @ 0x1400E4FB8 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiComputeDataFlushRange(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // r13
  unsigned __int64 v12; // rbp
  _QWORD *SubsectionNode; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 LastSubsection; // rsi
  unsigned __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // r12
  __int64 *v22; // rbp
  __int64 v23; // rax
  __int64 result; // rax
  __int64 i; // rax

  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(a2);
    return 0LL;
  }
  v10 = (_QWORD *)(a1 + 128);
  v11 = 0LL;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_16:
    LastSubsection = MiFindLastSubsection(a1, 1);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v12 = *a3;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1);
  v10 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_24:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    __writecr8(a2);
    return 0LL;
  }
  v14 = (v12 >> 12)
      - (*((unsigned int *)SubsectionNode + 9) | ((unsigned __int64)((_WORD)SubsectionNode[4] & 0xFFC0) << 26));
  if ( !a4
    || (v15 = *a3 + a4 - 1,
        v16 = v15 >> 12,
        v17 = MiLocateSubsectionNode(v9, v15, 1),
        (LastSubsection = (__int64)v17) == 0) )
  {
    a1 = v9;
    goto LABEL_16;
  }
  v19 = v16 - (*((unsigned int *)v17 + 9) | ((unsigned __int64)((_WORD)v17[4] & 0xFFC0) << 26));
LABEL_7:
  if ( !*((_DWORD *)v10 + 26) || (int)MiReferenceSubsection(v10, 0LL) <= 1 )
  {
    v20 = *((_DWORD *)v10 + 11) - v14;
    if ( v10 != (_QWORD *)LastSubsection )
    {
      while ( 1 )
      {
        v10 = (_QWORD *)v10[2];
        if ( !v10 )
          break;
        if ( *((_DWORD *)v10 + 26) && (int)MiReferenceSubsection(v10, 0LL) > 1 )
        {
          v21 = v10[1];
          goto LABEL_10;
        }
        v20 += *((_DWORD *)v10 + 11);
        if ( v10 == (_QWORD *)LastSubsection )
          goto LABEL_24;
      }
    }
    goto LABEL_24;
  }
  v20 = 0;
  v21 = v10[1] + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    for ( i = v10[2]; i != LastSubsection; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 104) && *(_QWORD *)(i + 8) )
        v11 = i;
    }
    LastSubsection = (__int64)v10;
    if ( v11 )
      LastSubsection = v11;
    MiReferenceSubsection(LastSubsection, 0LL);
    v19 = *(_DWORD *)(LastSubsection + 44) - (*(_DWORD *)(LastSubsection + 52) & 0x3FFFFFFFu) - 1;
  }
  ++*(_QWORD *)(v9 + 40);
  v22 = MiBuildWakeList(v9, 4);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  __writecr8(a2);
  MiReleaseControlAreaWaiters(v22);
  v23 = *(_QWORD *)(LastSubsection + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v21;
  *(_QWORD *)(a6 + 16) = v23 + 8 * v19;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v10;
  *(_QWORD *)(a6 + 32) = LastSubsection;
  *(_DWORD *)(a6 + 40) = v20;
  return result;
}
