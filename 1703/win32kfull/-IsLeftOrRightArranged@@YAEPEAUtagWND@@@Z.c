/*
 * XREFs of ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01F0AD0
 * Callers:
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01F5B84 (IsWindowSubjectToShellSizingPolicy.c)
 *     UpdateSizeTrackingInfo @ 0x1C01F6198 (UpdateSizeTrackingInfo.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(struct tagWND *a1)
{
  return (*((_BYTE *)a1 + 305) & 3) != 0 && (*((_BYTE *)a1 + 305) & 3) != 3;
}
