/*
 * XREFs of ndisCreateIrpHandler @ 0x1C0008A60
 * Callers:
 *     <none>
 * Callees:
 *     ndisCreateHandler @ 0x1C0008A80 (ndisCreateHandler.c)
 */

__int64 __fastcall ndisCreateIrpHandler(struct _DEVICE_OBJECT *a1)
{
  return ndisCreateHandler(a1);
}
