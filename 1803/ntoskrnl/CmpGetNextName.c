/*
 * XREFs of CmpGetNextName @ 0x14063510C
 * Callers:
 *     CmpWalkPath @ 0x140635068 (CmpWalkPath.c)
 *     CmpPreserveSystemHiveData @ 0x1406FE2C0 (CmpPreserveSystemHiveData.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpGetNextName(__int16 *a1, __int64 a2, bool *a3)
{
  _WORD *v4; // rcx
  _WORD *v5; // rcx
  unsigned __int16 v6; // cx
  bool result; // al
  __int16 v8; // ax

  v4 = (_WORD *)*((_QWORD *)a1 + 1);
  if ( !v4 || !*a1 || !*v4 )
  {
LABEL_13:
    *a3 = 1;
    result = 1;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_WORD *)a2 = 0;
    return result;
  }
  while ( *v4 == 92 )
  {
    *a1 -= 2;
    ++v4;
    v8 = *a1;
    a1[1] -= 2;
    *((_QWORD *)a1 + 1) = v4;
    if ( !v8 )
      goto LABEL_13;
  }
  *(_QWORD *)(a2 + 8) = v4;
  if ( *a1 )
  {
    v5 = (_WORD *)*((_QWORD *)a1 + 1);
    do
    {
      if ( *v5 == 92 )
        break;
      *a1 -= 2;
      ++v5;
      a1[1] -= 2;
      *((_QWORD *)a1 + 1) = v5;
    }
    while ( *a1 );
  }
  v6 = a1[4] - *(_WORD *)(a2 + 8);
  *(_WORD *)a2 = v6;
  *(_WORD *)(a2 + 2) = v6;
  *a3 = *a1 == 0;
  return v6 <= 0x200u;
}
