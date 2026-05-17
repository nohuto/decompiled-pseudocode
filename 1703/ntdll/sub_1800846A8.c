/*
 * XREFs of sub_1800846A8 @ 0x1800846A8
 * Callers:
 *     sub_180004F9C @ 0x180004F9C (sub_180004F9C.c)
 *     sub_18003AAAC @ 0x18003AAAC (sub_18003AAAC.c)
 *     sub_1800845DC @ 0x1800845DC (sub_1800845DC.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800846A8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  _DWORD *result; // rax
  int v8; // ecx

  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(v5 + *(unsigned int *)(a2 + 16) + 8 * ((a3 - *(unsigned int *)(a2 + 12) - v5) >> 3));
  if ( v6 < 0 )
  {
    *a4 = 0LL;
    v8 = (unsigned __int16)v6;
    result = a5;
    *a5 = v8;
  }
  else
  {
    *a4 = v5 + v6 + 2;
    result = a5;
    *a5 = 0;
  }
  return result;
}
