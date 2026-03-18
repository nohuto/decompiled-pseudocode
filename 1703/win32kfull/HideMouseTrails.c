/*
 * XREFs of HideMouseTrails @ 0x1C01B2A60
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00BC9F0 (GreMovePointer.c)
 */

void HideMouseTrails()
{
  if ( gMouseTrailsToHide > 0 && _InterlockedDecrement(&gMouseTrailsToHide) < gMouseTrails )
    GreMovePointer(*(HDEV *)(gpDispInfo + 32LL), *(_DWORD *)(gpsi + 5368LL), *(_DWORD *)(gpsi + 5372LL), 1);
}
