/*
 * XREFs of MiInsertUnusedSegment @ 0x1400E44A8
 * Callers:
 *     MiCheckControlArea @ 0x1400E5110 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x14015E0C0 (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14024F320 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14024F768 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14024F838 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x14024FFD8 (MiSetDeleteOnClose.c)
 * Callees:
 *     KiSetTimerEx @ 0x14005AB60 (KiSetTimerEx.c)
 *     MiConvertStaticSubsections @ 0x1400E3F54 (MiConvertStaticSubsections.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1400E442C (MiComputePagedPoolSegmentBytes.c)
 *     MiReleaseControlAreaCharges @ 0x1400E6C48 (MiReleaseControlAreaCharges.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdi
  int v5; // edx
  int v6; // ecx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v12; // rdx

  v1 = *(_DWORD *)(a1 + 56);
  v2 = 0LL;
  if ( (v1 & 0x100) != 0 )
    return 0LL;
  if ( (v1 & 0x20) == 0 )
    v2 = MiConvertStaticSubsections(a1);
  v4 = *(_QWORD *)(qword_1403CBD88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
  if ( !v2 )
    v2 = MiReleaseControlAreaCharges(a1, 1LL);
  v5 = *(_DWORD *)(a1 + 56) | 0x8000000;
  *(_DWORD *)(a1 + 56) = v5;
  v6 = v5;
  if ( (*(_DWORD *)(v4 + 4) & 1) != 0 && (v5 & 0x40000) == 0 )
  {
    v6 = v5 | 0x40000;
    *(_DWORD *)(a1 + 56) = v5 | 0x40000;
  }
  v7 = (_QWORD *)(a1 + 8);
  if ( (v6 & 0x40000) != 0 )
  {
    v12 = *(_QWORD **)(v4 + 1544);
    if ( *v12 != v4 + 1536 )
      __fastfail(3u);
    *v7 = v4 + 1536;
    *(_QWORD *)(a1 + 16) = v12;
    *v12 = v7;
    *(_QWORD *)(v4 + 1544) = v7;
    ++*(_DWORD *)(v4 + 1284);
    if ( !*(_BYTE *)(v4 + 1616) )
    {
      *(_BYTE *)(v4 + 1616) = 1;
      KiSetTimerEx(v4 + 1552, Mi10Milliseconds.QuadPart, 0, 0, 0LL);
    }
  }
  else
  {
    v8 = *(_QWORD **)(v4 + 1640);
    if ( *v8 != v4 + 1632 )
      __fastfail(3u);
    *v7 = v4 + 1632;
    *(_QWORD *)(a1 + 16) = v8;
    *v8 = v7;
    *(_QWORD *)(v4 + 1640) = v7;
  }
  v9 = MiComputePagedPoolSegmentBytes(a1);
  *(_QWORD *)(v4 + 1624) += v9;
  v10 = v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
  _InterlockedExchangeAdd64(&qword_1403CB298, v10);
  return v2;
}
