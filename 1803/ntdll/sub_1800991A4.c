/*
 * XREFs of sub_1800991A4 @ 0x1800991A4
 * Callers:
 *     sub_180098874 @ 0x180098874 (sub_180098874.c)
 *     sub_1800991F0 @ 0x1800991F0 (sub_1800991F0.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall sub_1800991A4(__int16 a1, __int64 a2, _DWORD *a3)
{
  _WORD *result; // rax
  __int16 v4; // r9
  bool v5; // sf

  result = (_WORD *)*(unsigned int *)(a2 + 24);
  v4 = a1;
  if ( ((unsigned __int8)result & 0x40) != 0 && !*(_QWORD *)(a2 + 16) )
    goto LABEL_9;
  v5 = *(_DWORD *)(a2 + 8) - 2 < 0;
  *(_DWORD *)(a2 + 8) -= 2;
  if ( v5 )
  {
    result = (_WORD *)((unsigned int)result | 0x20);
    v4 = -1;
    *(_DWORD *)(a2 + 24) = (_DWORD)result;
  }
  else
  {
    result = *(_WORD **)a2;
    **(_WORD **)a2 = a1;
    *(_QWORD *)a2 += 2LL;
  }
  if ( v4 == -1 && (result = (_WORD *)*(unsigned int *)(a2 + 24), ((unsigned __int8)result & 0x20) != 0) )
    *a3 = -1;
  else
LABEL_9:
    ++*a3;
  return result;
}
