/*
 * XREFs of NdisWdfCreateIrpHandler @ 0x1C00615B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall NdisWdfCreateIrpHandler(__int64 a1, _IRP *a2, _BYTE *a3)
{
  return ndisCreateHandler(*(struct _DEVICE_OBJECT **)(a1 + 3848), a1, a2, a3);
}
