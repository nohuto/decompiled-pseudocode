/*
 * XREFs of MiComputeDataFlushRange @ 0x1400A2450
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiComputeFlushRange @ 0x1400A4B48 (MiComputeFlushRange.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReferenceSubsection @ 0x1400A2330 (MiReferenceSubsection.c)
 *     MiLocateSubsectionNode @ 0x1400A2890 (MiLocateSubsectionNode.c)
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiBuildWakeList @ 0x1400A4908 (MiBuildWakeList.c)
 *     MiFindLastSubsection @ 0x140110710 (MiFindLastSubsection.c)
 *     KeSignalGate @ 0x1401246E0 (KeSignalGate.c)
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
  __int64 v10; // rsi
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 SubsectionNode; // rax
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  __int64 LastSubsection; // rbp
  unsigned __int64 v19; // rdi
  int v20; // r12d
  __int64 v21; // r15
  _QWORD *v22; // r14
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v25; // rax
  _QWORD *v26; // rdi
  unsigned __int64 v27; // [rsp+50h] [rbp+8h]

  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    __writecr8(a2);
    return 0LL;
  }
  v10 = a1 + 128;
  v11 = 0LL;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_17:
    LastSubsection = MiFindLastSubsection(a1, 1LL);
    v19 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
    goto LABEL_7;
  }
  v12 = *a3;
  SubsectionNode = MiLocateSubsectionNode(a1, *a3, 1LL);
  v10 = SubsectionNode;
  if ( !SubsectionNode )
  {
LABEL_24:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
    __writecr8(a2);
    return 0LL;
  }
  v14 = (v12 >> 12)
      - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = *a3 + a4 - 1, v16 = v15 >> 12, v17 = MiLocateSubsectionNode(v9, v15, 1LL), (LastSubsection = v17) == 0) )
  {
    a1 = v9;
    goto LABEL_17;
  }
  v19 = v16 - (*(unsigned int *)(v17 + 36) | ((unsigned __int64)(*(_WORD *)(v17 + 32) & 0xFFC0) << 26));
LABEL_7:
  v27 = v19;
  if ( !*(_DWORD *)(v10 + 104) || (int)MiReferenceSubsection(v10, 0LL) <= 1 )
  {
    v20 = *(_DWORD *)(v10 + 44) - v14;
    if ( v10 != LastSubsection )
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v10 + 16);
        if ( !v10 )
          break;
        if ( *(_DWORD *)(v10 + 104) && (int)MiReferenceSubsection(v10, 0LL) > 1 )
        {
          v21 = *(_QWORD *)(v10 + 8);
          goto LABEL_10;
        }
        v20 += *(_DWORD *)(v10 + 44);
        if ( v10 == LastSubsection )
          goto LABEL_24;
      }
    }
    goto LABEL_24;
  }
  v20 = 0;
  v21 = *(_QWORD *)(v10 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(LastSubsection + 104) || (int)MiReferenceSubsection(LastSubsection, 0LL) <= 1 )
  {
    v25 = *(_QWORD *)(v10 + 16);
    if ( v25 == LastSubsection )
      goto LABEL_19;
    do
    {
      if ( *(_DWORD *)(v25 + 104) && *(_QWORD *)(v25 + 8) )
        v11 = v25;
      v25 = *(_QWORD *)(v25 + 16);
    }
    while ( v25 != LastSubsection );
    if ( !v11 )
LABEL_19:
      LastSubsection = v10;
    else
      LastSubsection = v11;
    MiReferenceSubsection(LastSubsection, 0LL);
    v19 = (unsigned int)(*(_DWORD *)(LastSubsection + 44) - 1);
    v27 = (unsigned int)v19;
  }
  ++*(_QWORD *)(v9 + 40);
  v22 = (_QWORD *)MiBuildWakeList(v9, 4LL);
  MiRemoveUnusedSegment(v9);
  if ( a5 == 1 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  __writecr8(a2);
  if ( v22 )
  {
    do
    {
      v26 = (_QWORD *)*v22;
      KeSignalGate(v22 + 2, 1LL);
      v22 = v26;
    }
    while ( v26 );
    v19 = v27;
  }
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
