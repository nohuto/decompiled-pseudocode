/*
 * XREFs of RtlpHpLfhCacheAddSubsegment @ 0x18005F08C
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x18005EFC0 (RtlpHpLfhSubsegmentFree.c)
 * Callees:
 *     RtlpHpLfhSubsegmentCountEmptyUnits @ 0x18004A2A4 (RtlpHpLfhSubsegmentCountEmptyUnits.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18005F17C (RtlpHpLfhSubsegmentDecommitPages.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3B50 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall RtlpHpLfhCacheAddSubsegment(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int8 v4; // r15
  char v5; // r13
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v9; // eax
  __int64 v10; // rdi
  _WORD *v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // eax

  v4 = *(_BYTE *)(a3 + 45);
  v5 = *(_BYTE *)(a3 + 44);
  v6 = 0;
  v7 = v4 << v5;
  _BitScanForward(&v9, v7);
  v10 = a3;
  v12 = (_WORD *)(a1 + 16LL * (v9 - 12));
  if ( *v12 )
  {
    v16 = RtlpHpLfhSubsegmentCountEmptyUnits(a3);
    if ( v16 && v4 > 1u )
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a2 + 64) + 24LL),
        -(__int64)((unsigned __int64)(unsigned int)(v16 << v5) >> 12));
    ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a2 ^ RtlpHeapKey ^ *(_QWORD *)(a2 + 16)))(
      *(_QWORD *)a2,
      v10,
      v7,
      a4);
    v10 = 0LL;
  }
  else
  {
    RtlpHpLfhSubsegmentDecommitPages(a2, a3, -2, 1, a4);
    RtlpInterlockedPushEntrySList(v12, v10, v13, v14);
  }
  LOBYTE(v6) = v10 != 0;
  return v6;
}
