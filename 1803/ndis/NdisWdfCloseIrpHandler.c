/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1C00622E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseHandler @ 0x1C005D8C4 (ndisCloseHandler.c)
 */

__int64 __fastcall NdisWdfCloseIrpHandler(__int64 a1, _IRP *a2, _BYTE *a3)
{
  return ndisCloseHandler(*(_QWORD *)(a1 + 3848), a1, a2, a3);
}
