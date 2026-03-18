/*
 * XREFs of ChangeComposableCursor @ 0x1C0195E08
 * Callers:
 *     xxxFreeWindow @ 0x1C005DD44 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01EBC20 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C01F6400 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01F8110 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C00B9720 (SetPointer.c)
 */

void __fastcall ChangeComposableCursor(int a1)
{
  int v1; // ebx

  v1 = gSoftwareCursorCount + (a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !a1 )
    {
      SetPointer(0);
      gbForceSoftwareCursor = 0;
      goto LABEL_7;
    }
  }
  else if ( a1 )
  {
    SetPointer(0);
    gbForceSoftwareCursor = 1;
LABEL_7:
    SetPointer(1);
  }
  gSoftwareCursorCount = v1;
}
