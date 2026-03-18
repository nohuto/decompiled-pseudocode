/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x1401FB0A0
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x140117EC8 (IopIrpHasExtensionType.c)
 */

unsigned __int8 __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  return IopIrpHasExtensionType(a1, 5u);
}
