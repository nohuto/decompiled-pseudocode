/*
 * XREFs of DestroyUnlockedCursor @ 0x1C0119240
 * Callers:
 *     <none>
 * Callees:
 *     _DestroyCursor @ 0x1C0098338 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyUnlockedCursor(struct tagCURSOR *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return DestroyCursor(a1, 2LL, a3, a4);
}
