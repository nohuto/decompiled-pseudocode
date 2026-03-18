/*
 * XREFs of CcCalculateVacbLevelLockCount @ 0x140150E28
 * Callers:
 *     CcExtendVacbArray @ 0x1400F814C (CcExtendVacbArray.c)
 * Callees:
 *     VacbLevelReference @ 0x1400F7A78 (VacbLevelReference.c)
 */

_DWORD *__fastcall CcCalculateVacbLevelLockCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r10d
  _QWORD *v3; // r11
  int v4; // r9d
  __int64 v5; // rbx
  int v6; // eax
  __int64 v8; // rax
  _DWORD *result; // rax
  int v10; // r9d

  v2 = 0;
  v3 = (_QWORD *)a2;
  v4 = 0;
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
    v8 = v3[1] - 16LL;
    do
    {
      if ( *(_WORD *)v8 == 765 )
        ++v4;
      else
        ++v2;
      v8 = *(_QWORD *)(v8 + 24) - 16LL;
    }
    while ( v2 <= 0x3F );
  }
  result = (_DWORD *)VacbLevelReference(a1, a2, 0);
  *result = v10;
  return result;
}
