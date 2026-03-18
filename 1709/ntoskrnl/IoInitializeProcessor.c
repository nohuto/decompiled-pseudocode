/*
 * XREFs of IoInitializeProcessor @ 0x1405C6B3C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1406D7344 (KiStartDynamicProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExInitializeSystemLookasideList @ 0x1404275CC (ExInitializeSystemLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x1405F18A8 (IopQueryProcessorInitValues.c)
 */

__int64 __fastcall IoInitializeProcessor(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // rsi
  char *PoolWithTag; // rbx
  _BYTE v6[32]; // [rsp+30h] [rbp-48h] BYREF

  v2 = a2;
  if ( !a2 )
  {
    IopQueryProcessorInitValues(v6);
    v2 = v6;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x6F49u);
  if ( IopIrpCreditsEnabled > 0 )
    *(_DWORD *)(a1 + 11676) = *((_DWORD *)v2 + 7);
  else
    *(_DWORD *)(a1 + 11676) = 0x7FFFFFFF;
  *(_QWORD *)(a1 + 2168) = &IopCompletionLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      56,
      1349542729,
      *((_WORD *)v2 + 3),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2160) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 2160) = &IopCompletionLookasideList;
  }
  *(_QWORD *)(a1 + 2088) = &IopLargeIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 5),
      1282437705,
      *((_WORD *)v2 + 2),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2080) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 2080) = &IopLargeIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2072) = &IopMediumIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 4),
      1299214921,
      *((_WORD *)v2 + 1),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2064) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 2064) = &IopMediumIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2056) = &IopSmallIrpLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 3),
      1399878217,
      *(_WORD *)v2,
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2048) = PoolWithTag;
    PoolWithTag += 128;
  }
  else
  {
    *(_QWORD *)(a1 + 2048) = &IopSmallIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2104) = &IopMdlLookasideList;
  if ( PoolWithTag )
  {
    ExInitializeSystemLookasideList(
      (__int64)PoolWithTag,
      512,
      *((_DWORD *)v2 + 6),
      1349280845,
      *((_WORD *)v2 + 4),
      (__int64)&ExSystemLookasideListHead);
    *(_QWORD *)(a1 + 2096) = PoolWithTag;
  }
  else
  {
    *(_QWORD *)(a1 + 2096) = &IopMdlLookasideList;
  }
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    memset((void *)(a1 + 25792), 0, 0x50uLL);
    *(_DWORD *)(a1 + 25872) = 0;
    memset((void *)(a1 + 25876), 0, 0x50uLL);
    *(_DWORD *)(a1 + 25956) = 0;
  }
  return 0LL;
}
