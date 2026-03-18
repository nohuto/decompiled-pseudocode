/*
 * XREFs of TR_AcquireSegment @ 0x1C0022364
 * Callers:
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x1C0007CE4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     TR_Create @ 0x1C005E82C (TR_Create.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TR_AcquireSegment(__int64 a1)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdx

  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v2 = a1 + 208;
  if ( *(_QWORD *)v2 == v2 )
  {
    v3 = 0LL;
  }
  else
  {
    v3 = *(_QWORD **)v2;
    if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *(_QWORD *)v2 = v4;
    *(_QWORD *)(v4 + 8) = v2;
    v3[1] = v3;
    *v3 = v3;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v3;
}
