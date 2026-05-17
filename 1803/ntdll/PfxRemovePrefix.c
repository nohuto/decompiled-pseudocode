/*
 * XREFs of PfxRemovePrefix @ 0x1800DFA60
 * Callers:
 *     <none>
 * Callees:
 *     RtlDelete @ 0x180066C00 (RtlDelete.c)
 */

__int64 __fastcall PfxRemovePrefix(__int64 a1, __int16 *a2)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  _QWORD *i; // rbx
  _WORD *v6; // rdi
  __int64 v7; // rdx
  __int64 k; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 j; // rcx

  result = (unsigned int)(*a2 - 513);
  if ( (unsigned int)result <= 1 )
  {
    v3 = a2 + 8;
    v4 = (_QWORD *)*((_QWORD *)a2 + 2);
    for ( i = v3; v4 != i; v4 = (_QWORD *)*v4 )
      i = v4;
    v6 = i - 2;
    result = (__int64)RtlDelete(v3);
    if ( result )
    {
      if ( i != (_QWORD *)result )
      {
        v9 = result - 16;
        v10 = *(i - 1);
        for ( j = *(_QWORD *)(v10 + 8); (_WORD *)j != v6; j = *(_QWORD *)(j + 8) )
          v10 = j;
        *(_WORD *)v9 = 513;
        *(_QWORD *)(v10 + 8) = v9;
        *(_QWORD *)(v9 + 8) = *(i - 1);
        result = 514LL;
        *(i - 1) = 0LL;
        *v6 = 514;
      }
    }
    else
    {
      v7 = *(i - 1);
      result = v7;
      for ( k = *(_QWORD *)(v7 + 8); (_WORD *)k != v6; k = *(_QWORD *)(k + 8) )
        result = k;
      *(_QWORD *)(result + 8) = v7;
    }
  }
  return result;
}
