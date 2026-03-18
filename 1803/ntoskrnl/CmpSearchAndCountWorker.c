/*
 * XREFs of CmpSearchAndCountWorker @ 0x1405ED2A0
 * Callers:
 *     <none>
 * Callees:
 *     CmpDumpKeyBodyList @ 0x1405ED2C0 (CmpDumpKeyBodyList.c)
 */

__int64 __fastcall CmpSearchAndCountWorker(__int64 a1, __int64 a2)
{
  CmpDumpKeyBodyList(a1, a2 + 8);
  return 0LL;
}
