/*
 * XREFs of CmpGetCorrectKcbLockOrder @ 0x140562948
 * Callers:
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     CmpIsKcbLockAllowed @ 0x140562910 (CmpIsKcbLockAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetCorrectKcbLockOrder(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  unsigned int v5; // r10d
  __int16 v6; // r10
  __int16 v7; // r10

  result = (*(_DWORD *)(a1 + 4) >> 21) & 0x3FF;
  v5 = (*(_DWORD *)(a2 + 4) >> 21) & 0x3FF;
  if ( (unsigned int)result <= v5
    && ((unsigned int)result < v5
     || ((v6 = *(_WORD *)(a1 + 178), (v6 & 4) == 0) || (result = *(unsigned int *)(a2 + 176), (result & 0x20000) == 0))
     && ((v6 & 2) != 0 && (result = *(unsigned int *)(a2 + 176), (result & 0x40000) != 0)
      || (result = *(unsigned __int16 *)(a1 + 58), v7 = *(_WORD *)(a2 + 58), (__int16)result <= v7)
      && ((__int16)result < v7 || a1 <= a2))) )
  {
    *a4 = a2;
    *a3 = a1;
  }
  else
  {
    *a3 = a2;
    *a4 = a1;
  }
  return result;
}
