/*
 * XREFs of ndisCreateIrpHandler @ 0x1C00098A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 */

__int64 __fastcall ndisCreateIrpHandler(__int64 a1, __int64 a2)
{
  return ndisCreateHandler(a1, *(_QWORD *)(a1 + 64), a2, 0LL);
}
