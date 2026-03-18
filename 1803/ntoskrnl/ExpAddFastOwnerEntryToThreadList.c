/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x140159474
 * Callers:
 *     ExAcquireFastResourceExclusive @ 0x140158600 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140158940 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140158BE0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140158E80 (ExAcquireFastResourceShared.c)
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
    result = (_QWORD *)(a1 + 2056);
    v5 = *(_QWORD *)(a1 + 2056);
    if ( *(_QWORD **)(v5 + 8) != result )
      __fastfail(3u);
  }
  else
  {
    result = (_QWORD *)(a1 + 2032);
    v5 = *(_QWORD *)(a1 + 2032);
    if ( *(_QWORD **)(v5 + 8) != result )
      __fastfail(3u);
  }
  *(_QWORD *)a4 = v5;
  *(_QWORD *)(a4 + 8) = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = a4;
  return result;
}
