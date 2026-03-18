/*
 * XREFs of RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14029D138
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x14029B370 (RtlpHpLfhSubsegmentAllocateBlock.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlpHpLfhSubsegmentSetUnusedBytes(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // r9
  __int16 v4; // cx
  __int16 result; // ax
  __int16 v6; // cx

  v3 = (unsigned __int16)qword_1403A5F28 ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)a1 >> 12);
  *(_BYTE *)(v3 + a2 - 1) = 0;
  v4 = *(_WORD *)(v3 + a2 - 2);
  if ( a3 == 1 )
  {
    result = 0x8000;
    v6 = v4 | 0x8000;
  }
  else
  {
    result = (a3 ^ v4) & 0x3FFF;
    v6 = result ^ v4;
  }
  *(_WORD *)(v3 + a2 - 2) = v6;
  return result;
}
