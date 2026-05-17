/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180060A70
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180062508 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r10d
  unsigned __int16 v6; // dx
  int v7; // eax

  v4 = (unsigned __int16)((unsigned int)a1 >> 12);
  v5 = (unsigned __int16)RtlpLFHKey ^ v4 ^ *(unsigned __int16 *)(a1 + 40);
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v6 = *(_WORD *)(((unsigned __int16)RtlpLFHKey ^ v4 ^ *(unsigned __int16 *)(a1 + 40)) + a2 - 2);
    if ( (v6 & 0x8000u) != 0 )
      --v5;
    else
      v5 -= v6 & 0x3FFF;
    v7 = (v6 >> 14) & 1;
  }
  else
  {
    v7 = 0;
  }
  if ( a4 )
    *a4 = v7;
  return v5;
}
