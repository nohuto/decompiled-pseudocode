/*
 * XREFs of RtlpHpLfhCacheAddSubsegment @ 0x14029A288
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x14029C1A0 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x14029B84C (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14029BC78 (RtlpHpLfhSubsegmentDecommitPages.c)
 */

__int64 __fastcall RtlpHpLfhCacheAddSubsegment(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // r12
  char v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r15d
  unsigned int v9; // eax
  _SLIST_ENTRY *v10; // rdi
  _SLIST_HEADER *v12; // rbp
  int v13; // eax

  v4 = *(_BYTE *)(a3 + 45);
  v5 = *(_BYTE *)(a3 + 44);
  v6 = 0;
  v7 = v4 << v5;
  _BitScanForward(&v9, v7);
  v10 = (_SLIST_ENTRY *)a3;
  v12 = (_SLIST_HEADER *)(a1 + 16LL * (v9 - 12));
  if ( LOWORD(v12->Alignment) )
  {
    v13 = RtlpHpLfhSubsegmentCountEmptyUnits(a3);
    if ( v13 && v4 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a2 + 72) + 24LL),
        -(__int64)((unsigned __int64)(unsigned int)(v13 << v5) >> 12));
    ((void (__fastcall *)(_QWORD, _SLIST_ENTRY *, _QWORD, _QWORD))(a2 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a2 + 16)))(
      *(_QWORD *)a2,
      v10,
      v7,
      a4);
    v10 = 0LL;
  }
  else
  {
    RtlpHpLfhSubsegmentDecommitPages(a2, a3, -2, 1, a4);
    RtlpInterlockedPushEntrySList(v12, v10);
  }
  LOBYTE(v6) = v10 != 0LL;
  return v6;
}
