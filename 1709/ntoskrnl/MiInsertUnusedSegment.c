/*
 * XREFs of MiInsertUnusedSegment @ 0x1400676AC
 * Callers:
 *     MiCheckControlArea @ 0x14005B160 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x14010A810 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140210974 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140210EB8 (MiFlushControlArea.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x140211B84 (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputePagedPoolSegmentBytes @ 0x140067794 (MiComputePagedPoolSegmentBytes.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseControlAreaCharges @ 0x1400A2C24 (MiReleaseControlAreaCharges.c)
 *     KiSetTimerEx @ 0x1400E1F70 (KiSetTimerEx.c)
 *     MiConvertStaticSubsections @ 0x14011CF9C (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx

  v1 = *(_DWORD *)(a1 + 56);
  v2 = 0LL;
  if ( (v1 & 0x100) != 0 )
    return 0LL;
  if ( (v1 & 0x20) == 0 )
    v2 = MiConvertStaticSubsections();
  v4 = *(_QWORD *)(qword_140388AF0 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
  if ( !v2 )
    v2 = MiReleaseControlAreaCharges(a1, 1LL);
  *(_DWORD *)(a1 + 56) |= 0x8000000u;
  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 )
  {
    v10 = *(_QWORD **)(v4 + 1536);
    v11 = (_QWORD *)(a1 + 8);
    if ( *v10 != v4 + 1528 )
      __fastfail(3u);
    *v11 = v4 + 1528;
    *(_QWORD *)(a1 + 16) = v10;
    *v10 = v11;
    *(_QWORD *)(v4 + 1536) = v11;
    ++*(_DWORD *)(v4 + 1284);
    if ( !*(_BYTE *)(v4 + 1608) && (*(_DWORD *)(v4 + 4) & 1) == 0 )
    {
      *(_BYTE *)(v4 + 1608) = 1;
      KiSetTimerEx(v4 + 1544, Mi10Milliseconds.LowPart, 0, 0, 0LL);
    }
  }
  else
  {
    v5 = *(_QWORD **)(v4 + 1632);
    v6 = (_QWORD *)(a1 + 8);
    if ( *v5 != v4 + 1624 )
      __fastfail(3u);
    *v6 = v4 + 1624;
    *(_QWORD *)(a1 + 16) = v5;
    *v5 = v6;
    *(_QWORD *)(v4 + 1632) = v6;
  }
  v7 = MiComputePagedPoolSegmentBytes(a1);
  *(_QWORD *)(v4 + 1616) += v7;
  v8 = v7;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
  _InterlockedExchangeAdd64(&qword_140388118, v8);
  return v2;
}
