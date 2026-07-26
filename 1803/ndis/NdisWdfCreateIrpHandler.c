/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C0062310
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C00098C0 (ndisCreateHandler.c)
 */

__int64 __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2, _BYTE *a3)
{
  return ndisCreateHandler(*(_QWORD *)(a1 + 3848), a1, a2, a3);
}
