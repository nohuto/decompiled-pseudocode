/*
 * XREFs of RtlpHpSegLfhVsDecommit @ 0x180049050
 * Callers:
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x180040530 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhOwnerCompact @ 0x1800495E4 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x18004AECC (RtlpHpVsSubsegmentCommitPages.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180048670 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpScheduleCompaction @ 0x18004911C (RtlpHpScheduleCompaction.c)
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 */

__int64 __fastcall RtlpHpSegLfhVsDecommit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edi
  __int64 v6; // r15
  __int64 v7; // rbp
  _QWORD *v8; // r8
  unsigned int v9; // edi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 result; // rax
  unsigned __int64 v13; // rbx

  v4 = a2;
  v6 = RtlpHpSegDescriptorValidate(a1, a2);
  v7 = a3 >> 12;
  v8 = *(_QWORD **)(a1 + 72);
  v9 = (v4 - (unsigned int)((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)) - ((unsigned int)v6 & *(_DWORD *)a1)) >> 12;
  v10 = v8[1] >> *(_BYTE *)(a1 + 11);
  if ( v10 <= 8 )
    v10 = 8LL;
  v11 = v8[1] >> *(_BYTE *)(a1 + 12);
  if ( v11 <= 8 )
    v11 = 8LL;
  result = v8[2];
  if ( (RtlpHpLfhPerfFlags & 0x20) != 0 )
    result += v8[3];
  v13 = result + v7;
  if ( result + v7 > v10 )
  {
    result = RtlpHpScheduleCompaction();
    if ( (int)result < 0 )
      return RtlpHpSegPageRangeDecommit(a1, v6, v9, (unsigned int)v7);
  }
  if ( v13 > v11 )
    return RtlpHpSegPageRangeDecommit(a1, v6, v9, (unsigned int)v7);
  return result;
}
