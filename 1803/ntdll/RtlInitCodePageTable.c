/*
 * XREFs of RtlInitCodePageTable @ 0x1800DEE70
 * Callers:
 *     RtlInitNlsTables @ 0x1800DEF30 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v5; // r8
  unsigned __int16 v6; // r9
  unsigned __int16 *v7; // rdx
  _WORD *v8; // r8
  _WORD *result; // rax
  __int16 v10; // cx

  v3 = *a1;
  v5 = v3 + 1;
  v6 = a1[v3] + v3;
  *(_WORD *)a2 = a1[1];
  *(_WORD *)(a2 + 2) = a1[2];
  *(_WORD *)(a2 + 4) = a1[3];
  *(_WORD *)(a2 + 6) = a1[4];
  *(_WORD *)(a2 + 8) = a1[5];
  *(_WORD *)(a2 + 10) = a1[6];
  *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
  *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
  v7 = &a1[v5];
  *(_QWORD *)(a2 + 32) = v7;
  v8 = (unsigned __int16 *)((char *)v7 + (v7[256] != 0 ? 514LL : 2LL) + 512);
  *(_QWORD *)(a2 + 48) = v8;
  result = v8 + 1;
  v10 = *v8 != 0;
  if ( !*v8 )
    result = 0LL;
  *(_QWORD *)(a2 + 56) = result;
  *(_WORD *)(a2 + 12) = v10;
  *(_QWORD *)(a2 + 40) = &a1[v6 + 1];
  return result;
}
