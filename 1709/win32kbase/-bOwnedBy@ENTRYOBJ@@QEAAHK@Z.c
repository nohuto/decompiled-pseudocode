/*
 * XREFs of ?bOwnedBy@ENTRYOBJ@@QEAAHK@Z @ 0x1C004E600
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C0051CD0 (HmgCheckDCForPrivateReferences.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0061AE0 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ENTRYOBJ::bOwnedBy(ENTRYOBJ *this, int a2)
{
  return *((_BYTE *)this + 14) && ((*((_DWORD *)this + 2) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
}
