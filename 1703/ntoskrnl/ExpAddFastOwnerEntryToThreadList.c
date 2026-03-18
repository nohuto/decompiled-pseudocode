/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x14014D9F4
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x14014D420 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14014D6F0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14014E340 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14014E540 (ExAcquireFastResourceShared.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpAddFastOwnerEntryToThreadList(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *result; // rax
  __int64 v5; // rcx

  *(_BYTE *)(a4 + 18) = 1;
  *(_QWORD *)(a4 + 48) = a4 + 40;
  *(_QWORD *)(a4 + 40) = a4 + 40;
  if ( a3 )
  {
    result = (_QWORD *)(a1 + 2048);
    v5 = *(_QWORD *)(a1 + 2048);
    if ( *(_QWORD **)(v5 + 8) != result )
      __fastfail(3u);
  }
  else
  {
    result = (_QWORD *)(a1 + 2024);
    v5 = *(_QWORD *)(a1 + 2024);
    if ( *(_QWORD **)(v5 + 8) != result )
      __fastfail(3u);
  }
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = a4;
  return result;
}
