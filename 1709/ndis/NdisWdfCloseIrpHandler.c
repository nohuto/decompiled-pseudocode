/*
 * XREFs of NdisWdfCloseIrpHandler @ 0x1C0061970
 * Callers:
 *     <none>
 * Callees:
 *     ndisCloseHandler @ 0x1C005CF2C (ndisCloseHandler.c)
 */

int __fastcall NdisWdfCloseIrpHandler(__int64 a1, struct _IRP *a2, _BYTE *a3)
{
  return ndisCloseHandler(*(const struct _DEVICE_OBJECT **)(a1 + 3848), a1, a2, a3);
}
