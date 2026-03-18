/*
 * XREFs of MiInsertUnusedSubsection @ 0x140016540
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1400162F8 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x14005E4A0 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MiDecrementSubsections @ 0x1400A8D04 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x1400A8D90 (MiRemoveViewsFromSection.c)
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14009B290 (ExpAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402215A8 (MiUpdateSubsectionCrossPartitionRefs.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14025C6B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(_DWORD *a1, __int64 a2)
{
  int v3; // r14d
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v15; // rbx
  _QWORD *v16; // rcx
  unsigned int v17; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  v4 = *(_QWORD *)(qword_14036C8F8 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v5 = a1[11] + (a1[13] & 0x3FFFFFFFu);
  v6 = v5;
  v7 = 8 * v5;
  if ( (unsigned __int64)(8 * v5) <= 0xFE0 )
  {
    v8 = v7 + 31;
LABEL_3:
    v9 = v8 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_4;
  }
  v17 = (8 * (_WORD)v5) & 0xFFF;
  if ( v7 < 0x10000 && v17 <= 0xFC0 )
  {
    v8 = v7 + 15;
    goto LABEL_3;
  }
  v9 = (v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_4:
  v10 = v4 + 1344;
  LOBYTE(a2) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, a2);
  else
    ExpAcquireSpinLockExclusive(v10, a2);
  *((_WORD *)a1 + 17) |= 8u;
  qword_14036BE18 += v9;
  v11 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) == 0 && (a1[12] & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v11 = (unsigned int)a1[11];
  }
  if ( a1[26] )
  {
    v12 = a1 + 20;
    v13 = *(_QWORD **)(v4 + 1584);
    if ( *v13 != v4 + 1576 )
      __fastfail(3u);
    *v12 = v4 + 1576;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(v4 + 1584) = v12;
  }
  else
  {
    v15 = a1 + 20;
    v16 = *(_QWORD **)(v4 + 1600);
    if ( *v16 != v4 + 1592 )
      __fastfail(3u);
    *v15 = v4 + 1592;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v4 + 1600) = v15;
    *(_QWORD *)(v4 + 1416) += v6;
    if ( *(_QWORD *)(v4 + 1416) >= 0x20000uLL )
      v3 = 1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4 + 1344, retaddr);
  else
    *(_DWORD *)(v4 + 1344) = 0;
  if ( v3 == 1 )
    KeSetEvent((PRKEVENT)(v4 + 1368), 0, 0);
  return v11;
}
