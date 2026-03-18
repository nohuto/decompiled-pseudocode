/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x14014BC24
 * Callers:
 *     CcExtendVacbArray @ 0x1400C48A4 (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x1400DAC48 (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r11d
  int v4; // r9d
  _QWORD *v5; // r10
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  bool v9; // zf
  __int64 v10; // r8
  int v11; // eax
  _DWORD *result; // rax
  int v13; // r9d

  v2 = 0;
  v4 = 0;
  v5 = (_QWORD *)a2;
  v6 = 128LL;
  do
  {
    v7 = v4 + 1;
    v9 = *v5++ == 0LL;
    if ( v9 )
      v7 = v4;
    v4 = v7;
    --v6;
  }
  while ( v6 );
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
  {
    v8 = v5[1] - 16LL;
    do
    {
      v9 = *(_WORD *)v8 == 765;
      v10 = *(_QWORD *)(v8 + 24);
      if ( !v9 )
        ++v2;
      v11 = v4 + 1;
      if ( !v9 )
        v11 = v4;
      v8 = v10 - 16;
      v4 = v11;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0);
  *result = v13;
  return result;
}
