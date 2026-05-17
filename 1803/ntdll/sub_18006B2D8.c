/*
 * XREFs of sub_18006B2D8 @ 0x18006B2D8
 * Callers:
 *     sub_1800021C8 @ 0x1800021C8 (sub_1800021C8.c)
 *     sub_1800111DC @ 0x1800111DC (sub_1800111DC.c)
 *     sub_180012270 @ 0x180012270 (sub_180012270.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_18001BA50 @ 0x18001BA50 (sub_18001BA50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006B2D8(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  int v9; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = a2 - 16;
  v6 = *(_DWORD *)(a1 + 112) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 -= 16LL;
  if ( ((v5 ^ qword_18015A440 ^ *(_QWORD *)v5) & 0xFF000000000000LL) != 0 )
  {
    v7 = 16 * (WORD1(qword_18015A440) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
    if ( v6 && ((v5 + 32) & 0xFFF) == 0 )
      v7 = 16 * (WORD1(qword_18015A440) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 32;
    if ( (*(_DWORD *)(v5 + 8) & 0x100) != 0 )
    {
      v8 = *(_WORD *)(v7 + a2 - 2);
      v9 = (v8 >> 14) & 1;
      if ( v9 )
      {
        _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
        v8 = *(_WORD *)(v7 + a2 - 2);
      }
      if ( (v8 & 0x8000u) != 0 )
        LODWORD(v7) = v7 - 1;
      else
        LODWORD(v7) = v7 - (v8 & 0x1FFF);
    }
    else
    {
      v9 = 0;
    }
    if ( a4 )
      *a4 = v9;
  }
  else
  {
    LODWORD(v7) = -1;
  }
  return (unsigned int)v7;
}
