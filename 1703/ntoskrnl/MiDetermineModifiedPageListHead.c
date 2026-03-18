/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x140073B9C
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400750E8 (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  char v3; // al
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int8)v2 >> 1;
  v4 = v2 >> 12;
  if ( (v3 & 1) != 0 || v4 == *(_DWORD *)(a2 + 1188) )
    return a2 + 40 * (v4 + 64LL);
  else
    return a2 + 2496;
}
