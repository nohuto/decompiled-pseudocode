/*
 * XREFs of PspProcessOpen @ 0x1405551B0
 * Callers:
 *     <none>
 * Callees:
 *     PsTestProtectedProcessIncompatibility @ 0x140555328 (PsTestProtectedProcessIncompatibility.c)
 */

__int64 __fastcall PspProcessOpen(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4, int *a5)
{
  unsigned int v8; // r11d
  int v9; // eax

  v8 = dword_1407F9CC4[3 * ((unsigned __int64)*(unsigned __int8 *)(a4 + 1738) >> 4)] & 0xFFFFFFFE;
  if ( *(_QWORD *)(a4 + 992) != *(_QWORD *)(a3 + 736) )
    v8 = dword_1407F9CC4[3 * ((unsigned __int64)*(unsigned __int8 *)(a4 + 1738) >> 4)];
  if ( (v8 & *a5) != 0 && (unsigned __int8)PsTestProtectedProcessIncompatibility(a2, a3, a4)
    || *(_QWORD *)(a4 + 1808) && !*(_QWORD *)(a3 + 1808) && a2 && (~DWORD2(xmmword_1403A6120) & *a5) != 0 )
  {
    return 3221225506LL;
  }
  v9 = *a5;
  if ( (*(_BYTE *)a5 & 0x28) == 40 || (*a5 & 0x400) != 0 )
  {
    v9 |= 0x1000u;
    *a5 = v9;
  }
  if ( (v9 & 0x200) != 0 )
    *a5 = v9 | 0x2000;
  return 0LL;
}
