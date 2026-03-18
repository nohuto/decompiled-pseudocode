/*
 * XREFs of MiInsertUnusedSubsection @ 0x1400E41E4
 * Callers:
 *     MiAppendSubsectionChain @ 0x14004D030 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400542A0 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1400847B0 (MiDereferenceControlAreaPfnList.c)
 *     MiRemoveViewsFromSection @ 0x1400E503C (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400E5350 (MiDecrementSubsections.c)
 *     MiFlushSectionInternal @ 0x1401187E0 (MiFlushSectionInternal.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x140268404 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r9d

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v2) > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (_WORD)v2) & 0xFFFu) > 0xFC0 )
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
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v5 + 1624) += v7;
  _InterlockedExchangeAdd64(&qword_1403CB298, v7);
  v8 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x40000000) == 0 && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (v13 & *(_DWORD *)(a1 + 52));
  }
  v9 = (_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = *(_QWORD **)(v5 + 1656);
    if ( *v10 != v5 + 1648 )
      __fastfail(3u);
    *v9 = v5 + 1648;
    *(_QWORD *)(a1 + 88) = v10;
    *v10 = v9;
    *(_QWORD *)(v5 + 1656) = v9;
  }
  else
  {
    v12 = *(_QWORD **)(v5 + 1672);
    if ( *v12 != v5 + 1664 )
      __fastfail(3u);
    *v9 = v5 + 1664;
    *(_QWORD *)(a1 + 88) = v12;
    *v12 = v9;
    *(_QWORD *)(v5 + 1672) = v9;
    *(_QWORD *)(v5 + 1360) += v2;
    if ( *(_QWORD *)(v5 + 1360) >= 0x20000uLL )
      v1 = 1;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 1312), 0, 0);
  return v8;
}
