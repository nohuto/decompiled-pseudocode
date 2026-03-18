/*
 * XREFs of IoIrpHasFsTrackOffsetExtensionType @ 0x140237E40
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1400A4C7C (IopIrpHasExtensionType.c)
 */

unsigned __int8 __fastcall IoIrpHasFsTrackOffsetExtensionType(__int64 a1)
{
  return IopIrpHasExtensionType(a1, 5u);
}
