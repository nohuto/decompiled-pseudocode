/*
 * XREFs of PspThreadOpen @ 0x140546290
 * Callers:
 *     <none>
 * Callees:
 *     PsTestProtectedProcessIncompatibility @ 0x14054633C (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspThreadOpen(__int64 a1, char a2, __int64 a3, __int64 a4, int *a5)
{
  int *v5; // r10
  __int64 v7; // r8
  int v10; // r11d
  __int64 v11; // rcx

  v5 = a5;
  v7 = *(_QWORD *)(a4 + 544);
  v10 = *a5;
  v11 = *((unsigned int *)qword_14074AE78 + 3 * ((unsigned __int64)*(unsigned __int8 *)(v7 + 1738) >> 4));
  if ( ((unsigned int)v11 & *a5) != 0 )
  {
    LOBYTE(v11) = a2;
    if ( (unsigned __int8)PsTestProtectedProcessIncompatibility(v11, a3, v7) )
      return 3221225506LL;
  }
  if ( *(_QWORD *)(a4 + 1944) && !*(_QWORD *)(a3 + 1808) && a2 && (~HIDWORD(xmmword_140348E60) & v10) != 0 )
    return 3221225506LL;
  if ( (v10 & 0x40) != 0 )
    *v5 = v10 | 0x800;
  if ( (*v5 & 0x20) != 0 )
    *v5 |= 0x400u;
  if ( (*v5 & 2) != 0 )
    *v5 |= 0x1000u;
  return 0LL;
}
