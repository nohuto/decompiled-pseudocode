/*
 * XREFs of HideMouseTrails @ 0x1C01B5A70
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C008AF20 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)(gpsi + 4944LL), *(_DWORD *)(gpsi + 4948LL), 1);
}
