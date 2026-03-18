/*
 * XREFs of PopPepCompleteActivity @ 0x1400795D8
 * Callers:
 *     PopPepProcessEvent @ 0x140078F58 (PopPepProcessEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPepCompleteActivity(__int64 a1, __int64 a2, signed int a3)
{
  int *v3; // rax

  if ( (unsigned int)a3 <= 5 && *((_BYTE *)&ActivityAttributes + 136 * a3) == 1 )
    v3 = *(int **)(a1 + 8LL * a3 + 72);
  else
    v3 = *(int **)(a2 + 8LL * a3 + 56);
  if ( (*v3 & 4) == 0 )
    PopFxBugCheck(0x667uLL, (ULONG_PTR)v3, a3, *v3);
  *v3 &= ~4u;
  return (*((__int64 (__fastcall **)(__int64))&ActivityAttributes + 17 * a3 + 16))(a1);
}
