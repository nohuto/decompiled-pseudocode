/*
 * XREFs of DestroyUnlockedCursor @ 0x1C010F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1)
{
  return DestroyCursor(a1, 2LL);
}
