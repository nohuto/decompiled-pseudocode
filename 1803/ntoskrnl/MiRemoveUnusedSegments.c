/*
 * XREFs of MiRemoveUnusedSegments @ 0x14024FD3C
 * Callers:
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x14017CE40 (MiDereferenceSegmentThread.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     MiProcessDereferenceList @ 0x140153094 (MiProcessDereferenceList.c)
 *     CcUnmapInactiveViews @ 0x14015C064 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x14024EC98 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14024EDD4 (MiDeleteCachedSubsection.c)
 *     MiShouldTrimUnusedSegments @ 0x140250098 (MiShouldTrimUnusedSegments.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_1403CFC28 )
      v6 = 0LL;
    else
      v6 = qword_1403CFC28 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 6864) / qword_1403CFA10;
  if ( !v8 )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 1624);
  v11 = ((unsigned __int64)qword_1403CB298 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  v12 = v10;
  v13 = v8 * (qword_1403CB298 / 0x3E8uLL);
  if ( v13 <= v10 )
    v12 = v8 * (qword_1403CB298 / 0x3E8uLL);
  if ( !v12 )
    return 0LL;
  v14 = v10 - v12;
  if ( v14 < 0x100000 )
    v14 = 0x100000LL;
  while ( 1 )
  {
    if ( a2 )
    {
      if ( qword_1403CFC28 <= v6 )
        return v2;
      goto LABEL_20;
    }
    if ( !v7 )
      return v2;
    v13 = qword_1403CFCA8;
    v11 = qword_1403CFCA8 / 0xAuLL;
    if ( qword_1403CFC28 < 9 * (qword_1403CFCA8 / 0xAuLL) )
      return v2;
    --v7;
LABEL_20:
    if ( !(unsigned int)MiShouldTrimUnusedSegments(v13, v11) || *(_QWORD *)(a1 + 1624) <= v14 )
      return v2;
    if ( (++v3 & 0x3F) == 0 )
    {
      MiProcessDereferenceList(a1, 0);
      if ( v3 >= 0x80 )
        CcUnmapInactiveViews(0LL, v16, 0LL, 0LL);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    if ( *(_QWORD *)(a1 + 1632) == a1 + 1632 )
    {
      if ( *(_QWORD *)(a1 + 1648) == a1 + 1648 )
      {
        if ( *(_DWORD *)(a1 + 108) || !(unsigned int)CcUnmapInactiveViews(0LL, v15, 0LL, 0LL) )
          return v2;
      }
      else if ( (int)MiDeleteCachedSubsection(a1) >= 0 )
      {
        goto LABEL_31;
      }
    }
    else if ( (unsigned int)MiDeleteCachedSegment(a1) )
    {
LABEL_31:
      v2 = 1;
    }
  }
}
