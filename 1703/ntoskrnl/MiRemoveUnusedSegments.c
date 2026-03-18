/*
 * XREFs of MiRemoveUnusedSegments @ 0x140161338
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1401611B0 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1400EE150 (KeDelayExecutionThread.c)
 *     MiFreeExcessSegments @ 0x140126A94 (MiFreeExcessSegments.c)
 *     MiProcessDereferenceList @ 0x14013A7D0 (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x1401613C4 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x140209CC8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140209E24 (MiDeleteCachedSubsection.c)
 */

_QWORD *__fastcall MiRemoveUnusedSegments(__int64 a1)
{
  unsigned int v2; // edi
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0;
  while ( 1 )
  {
    result = (_QWORD *)MiFreeExcessSegments();
    v5 = (unsigned int)dword_14036BE20;
    if ( !(_DWORD)result && !dword_14036BE20 )
      break;
    if ( dword_14036BE20 )
      v5 = (unsigned int)--dword_14036BE20;
    if ( (++v2 & 0x3F) == 0 )
    {
      MiProcessDereferenceList(a1);
      if ( v2 >= 0x80 )
        CcUnmapInactiveViews(v7, v6, 0LL, 0LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    if ( *(_QWORD *)(a1 + 1560) == a1 + 1560 )
    {
      result = (_QWORD *)(a1 + 1576);
      if ( (_QWORD *)*result == result )
      {
        dword_14036BE20 = 0;
        if ( *(_DWORD *)(a1 + 140) )
          return result;
        result = (_QWORD *)CcUnmapInactiveViews(v5, v4, 0LL, 0LL);
        if ( !(_DWORD)result )
          return result;
      }
      else
      {
        MiDeleteCachedSubsection(a1);
      }
    }
    else
    {
      MiDeleteCachedSegment(a1);
    }
  }
  return result;
}
