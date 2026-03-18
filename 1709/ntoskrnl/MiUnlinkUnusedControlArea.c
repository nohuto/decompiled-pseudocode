/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x1400A4C8C
 * Callers:
 *     MiRemoveUnusedSegment @ 0x1400A48A8 (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x14021083C (MiDeleteCachedSegment.c)
 *     MiProcessDeleteOnClose @ 0x1402113D0 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiComputePagedPoolSegmentBytes @ 0x140067794 (MiComputePagedPoolSegmentBytes.c)
 */

signed __int64 __fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // r10
  _QWORD *v6; // rdx

  v1 = MiComputePagedPoolSegmentBytes(a1);
  if ( (*(_DWORD *)(v2 + 56) & 0x40000) != 0 )
    --*(_DWORD *)(v3 + 1284);
  v4 = (_QWORD *)(v2 + 8);
  v5 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v5 + 8) != v2 + 8 || (v6 = *(_QWORD **)(v2 + 16), (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_DWORD *)(v2 + 56) &= ~0x8000000u;
  *(_QWORD *)(v2 + 16) = v2 + 8;
  *v4 = v4;
  *(_QWORD *)(v3 + 1616) -= v1;
  return _InterlockedExchangeAdd64(&qword_140388118, -v1);
}
