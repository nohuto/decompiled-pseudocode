/*
 * XREFs of ExpAddFastOwnerEntryToThreadList @ 0x14013F99C
 * Callers:
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14013F0C0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14013F3D0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14013F6A0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14013FBD0 (ExAcquireFastResourceShared.c)
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
