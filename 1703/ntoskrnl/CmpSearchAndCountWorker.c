/*
 * XREFs of CmpSearchAndCountWorker @ 0x1406661C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDumpKeyBodyList @ 0x140665BB0 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchAndCountWorker(_DWORD *a1, __int64 a2)
{
  CmpDumpKeyBodyList(a1, (_DWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
  return 0LL;
}
