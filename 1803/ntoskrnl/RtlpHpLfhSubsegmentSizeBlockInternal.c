/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x14029D260
 * Callers:
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x14029D190 (RtlpHpLfhSubsegmentSizeBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // r8
  unsigned __int16 v7; // cx
  int v8; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = (unsigned __int16)qword_1403A5F28 ^ (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v6 = (unsigned __int16)qword_1403A5F28 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
    v7 = *(_WORD *)(v6 + a2 - 2);
    v8 = (v7 >> 14) & 1;
    if ( ((*(unsigned __int16 *)(v6 + a2 - 2) >> 14) & 1) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v7 = *(_WORD *)(v6 + a2 - 2);
    }
    if ( (v7 & 0x8000u) == 0 )
      v5 -= v7 & 0x3FFF;
    else
      --v5;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
    *a4 = v8;
  return v5;
}
