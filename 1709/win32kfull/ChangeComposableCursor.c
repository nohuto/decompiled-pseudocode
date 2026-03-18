/*
 * XREFs of ChangeComposableCursor @ 0x1C01A0F94
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     MagContextThreadCallout @ 0x1C01A8010 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 *     xxxCancelTrackingForThread @ 0x1C01DD620 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C01DF270 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C0047300 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(int a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = (unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + (a1 != 0 ? 1 : -1);
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
    result = SetPointer(1);
  }
  gSoftwareCursorCount = v2;
  return result;
}
