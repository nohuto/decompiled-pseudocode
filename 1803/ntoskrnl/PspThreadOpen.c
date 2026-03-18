/*
 * XREFs of PspThreadOpen @ 0x140555280
 * Callers:
 *     <none>
 * Callees:
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  __int64 v6; // r8
  __int64 v9; // rcx
  int v10; // eax

  v6 = *(_QWORD *)(a4 + 544);
  v9 = *((unsigned int *)qword_1407F9CC8 + 3 * ((unsigned __int64)*(unsigned __int8 *)(v6 + 1738) >> 4));
  if ( ((unsigned int)v9 & *a5) != 0 )
  {
    LOBYTE(v9) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v9, a3, v6) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1952) && !*(_QWORD *)(a3 + 1808) && a2 && (~HIDWORD(xmmword_1403A6120) & *a5) != 0 )
    return 3221225506LL;
  v10 = *a5;
  if ( (*a5 & 0x40) != 0 )
  {
    v10 |= 0x800u;
    *a5 = v10;
  }
  if ( (v10 & 0x20) != 0 )
  {
    v10 |= 0x400u;
    *a5 = v10;
  }
  if ( (v10 & 2) != 0 )
    *a5 = v10 | 0x1000;
  return 0LL;
}
