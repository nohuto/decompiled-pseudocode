/*
 * XREFs of PspThreadOpen @ 0x140539010
 * Callers:
 *     <none>
 * Callees:
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  int *v5; // r10
  int v9; // r11d
  __int64 v10; // rcx

  v5 = a5;
  v9 = *a5;
  v10 = *((unsigned int *)qword_14078D6E8
        + 3 * ((unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a4 + 544) + 1738LL) >> 4));
  if ( ((unsigned int)v10 & *a5) != 0 )
  {
    LOBYTE(v10) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v10, a3) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1952) && !*(_QWORD *)(a3 + 1808) && a2 && (~HIDWORD(xmmword_140362960) & v9) != 0 )
    return 3221225506LL;
  if ( (v9 & 0x40) != 0 )
    *v5 = v9 | 0x800;
  if ( (*v5 & 0x20) != 0 )
    *v5 |= 0x400u;
  if ( (*v5 & 2) != 0 )
    *v5 |= 0x1000u;
  return 0LL;
}
