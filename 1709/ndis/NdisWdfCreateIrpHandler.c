/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C00619A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 */

int __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2, _BYTE *a3)
{
  return ndisCreateHandler(*(struct _DEVICE_OBJECT **)(a1 + 3848), a1, a2, a3);
}
