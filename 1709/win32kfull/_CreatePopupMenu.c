/*
 * XREFs of _CreatePopupMenu @ 0x1C01253B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0050778 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 */

struct tagMENU *__fastcall CreatePopupMenu(__int64 a1, __int64 a2, __int64 a3)
{
  return InternalCreateMenu(1, a2, a3);
}
