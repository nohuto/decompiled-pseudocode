/*
 * XREFs of PspProcessOpen @ 0x1405390C0
 * Callers:
 *     <none>
 * Callees:
 *     PsTestProtectedProcessIncompatibility @ 0x14053919C (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int *a5)
{
  int v8; // ecx
  int *v9; // r11
  int v10; // r10d

  v8 = dword_14078D6E4[3 * ((unsigned __int64)*(unsigned __int8 *)(a4 + 1738) >> 4)];
  if ( *(_QWORD *)(a4 + 992) == *(_QWORD *)(a3 + 736) )
    v8 &= ~1u;
  v9 = a5;
  v10 = *a5;
  if ( (*a5 & v8) != 0 && (unsigned __int8)PsTestProtectedProcessIncompatibility(a2, a3)
    || *(_QWORD *)(a4 + 1808) && !*(_QWORD *)(a3 + 1808) && a2 && (~DWORD2(xmmword_140362960) & v10) != 0 )
  {
    return 3221225506LL;
  }
  if ( (v10 & 0x28) == 40 || (v10 & 0x400) != 0 )
    *v9 = v10 | 0x1000;
  if ( (*v9 & 0x200) != 0 )
    *v9 |= 0x2000u;
  return 0LL;
}
