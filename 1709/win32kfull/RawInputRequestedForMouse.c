/*
 * XREFs of RawInputRequestedForMouse @ 0x1C0052C90
 * Callers:
 *     EditionPostRawMouseInputMessage @ 0x1C0052930 (EditionPostRawMouseInputMessage.c)
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00555DC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     <none>
 */

__int64 RawInputRequestedForMouse()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( gHidCounters[1] || gForegroundQRawMouseRequested )
    return 1;
  return v0;
}
