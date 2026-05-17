/*
 * XREFs of sub_18007FDB8 @ 0x18007FDB8
 * Callers:
 *     sub_1800420A8 @ 0x1800420A8 (sub_1800420A8.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 *     sub_1800CB430 @ 0x1800CB430 (sub_1800CB430.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_18007FDB8(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _DWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + *(unsigned int *)(a2 + 16) + 8 * ((a3 - *(unsigned int *)(a2 + 12) - v5) >> 3));
  if ( v7 < 0 )
  {
    v8 = (unsigned __int16)v7;
  }
  else
  {
    v8 = 0;
    v6 = v7 + v5 + 2;
  }
  *a4 = v6;
  result = a5;
  *a5 = v8;
  return result;
}
