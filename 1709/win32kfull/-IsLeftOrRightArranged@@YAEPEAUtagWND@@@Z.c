/*
 * XREFs of ?IsLeftOrRightArranged@@YAEPEAUtagWND@@@Z @ 0x1C01D87E8
 * Callers:
 *     IsWindowSubjectToShellSizingPolicy @ 0x1C01DCEBC (IsWindowSubjectToShellSizingPolicy.c)
 *     UpdateSizeTrackingInfo @ 0x1C01DD398 (UpdateSizeTrackingInfo.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsLeftOrRightArranged(struct tagWND *a1)
{
  return (*((_BYTE *)a1 + 305) & 3) != 0 && (*((_BYTE *)a1 + 305) & 3) != 3;
}
