/*
 * XREFs of ndisCloseIrpHandler @ 0x1C000C8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall ndisCloseIrpHandler(__int64 a1, struct _IRP *a2)
{
  return ndisCloseHandler((const struct _DEVICE_OBJECT *)a1, *(_QWORD *)(a1 + 64), a2, 0LL);
}
