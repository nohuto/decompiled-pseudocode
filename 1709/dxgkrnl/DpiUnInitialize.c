/*
 * XREFs of DpiUnInitialize @ 0x1C01E4FB0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCleanup @ 0x1C01E4C78 (DpiCleanup.c)
 */

void __fastcall DpiUnInitialize(struct _DRIVER_OBJECT *a1, __int64 a2, __int64 a3)
{
  DpiCleanup(a1, 0, a3);
}
