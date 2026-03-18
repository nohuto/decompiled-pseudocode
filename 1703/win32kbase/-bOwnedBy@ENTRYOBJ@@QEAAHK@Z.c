/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C0033440
 * Callers:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C002BAA4 (HmgIsObjectOwnedByW32Pid.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
