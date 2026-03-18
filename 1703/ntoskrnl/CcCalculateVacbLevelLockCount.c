/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x140039F90
 * Callers:
 *     CcExtendVacbArray @ 0x14011DD28 (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x14011C30C (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r11
  __int64 v4; // r9
  __int64 v5; // rbx
  unsigned int v6; // eax
  _DWORD *result; // rax
  int v9; // r9d
  __int64 v10; // rax

  v2 = 0;
  v3 = a2;
  LODWORD(v4) = 0;
  v5 = 128LL;
  do
  {
    v6 = v4 + 1;
    if ( *v3++ == 0LL )
      v6 = v4;
    v4 = v6;
    --v5;
  }
  while ( v5 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v10 = v3[1] - 16LL;
    do
    {
      if ( *(_WORD *)v10 == 765 )
        v4 = (unsigned int)(v4 + 1);
      else
        ++v2;
      v10 = *(_QWORD *)(v10 + 24) - 16LL;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0LL, v4);
  *result = v9;
  return result;
}
