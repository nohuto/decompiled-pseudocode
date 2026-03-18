/*
 * XREFs of MiInsertUnusedSubsection @ 0x1400B779C
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiDecrementSubsections @ 0x1400A1F40 (MiDecrementSubsections.c)
 *     MiRemoveViewsFromSection @ 0x1400A23B4 (MiRemoveViewsFromSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A900 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x140110780 (MiAppendSubsectionChain.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x14022E260 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(_DWORD *a1)
{
  int v1; // esi
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v5; // r15
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx

  v1 = 0;
  v3 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v4 = 8LL * (a1[11] + (a1[13] & 0x3FFFFFFFu));
  v5 = a1[11] + (a1[13] & 0x3FFFFFFFu);
  if ( v4 > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (*((_WORD *)a1 + 22) + *((_WORD *)a1 + 26))) & 0xFFFu) > 0xFC0 )
    {
      v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v6 = v4 + 15;
  }
  else
  {
    v6 = v4 + 31;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  *((_WORD *)a1 + 17) |= 8u;
  *(_QWORD *)(v3 + 1616) += v7;
  _InterlockedExchangeAdd64(&qword_140388118, v7);
  v8 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) == 0 && (a1[12] & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = (unsigned int)a1[11];
  }
  if ( a1[26] )
  {
    v9 = a1 + 20;
    v10 = *(_QWORD **)(v3 + 1648);
    if ( *v10 != v3 + 1640 )
      __fastfail(3u);
    *v9 = v3 + 1640;
    v9[1] = v10;
    *v10 = v9;
    *(_QWORD *)(v3 + 1648) = v9;
  }
  else
  {
    v12 = a1 + 20;
    v13 = *(_QWORD **)(v3 + 1664);
    if ( *v13 != v3 + 1656 )
      __fastfail(3u);
    *v12 = v3 + 1656;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(v3 + 1664) = v12;
    *(_QWORD *)(v3 + 1352) += v5;
    if ( *(_QWORD *)(v3 + 1352) >= 0x20000uLL )
      v1 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 1280));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v3 + 1304), 0, 0);
  return v8;
}
