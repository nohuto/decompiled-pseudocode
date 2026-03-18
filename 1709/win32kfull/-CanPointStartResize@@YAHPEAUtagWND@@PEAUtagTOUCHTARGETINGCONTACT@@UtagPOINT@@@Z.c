/*
 * XREFs of ?CanPointStartResize@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D3668
 * Callers:
 *     ?DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D38D4 (-DoesPointSnapToTopLevelWindow@@YAHPEAUtagWND@@0PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     xxxTouchTargetWindow @ 0x1C01D6F54 (xxxTouchTargetWindow.c)
 * Callees:
 *     ?DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z @ 0x1C01D37D0 (-DoesPointSnapToBorder@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall CanPointStartResize(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  unsigned int v3; // ebx

  v3 = 1;
  if ( (*((_BYTE *)a1 + 71) & 1) != 0
    || (*((_BYTE *)a1 + 70) & 4) == 0
    || !(unsigned int)DoesPointSnapToBorder(a1, a2, a3) )
  {
    return 0;
  }
  return v3;
}
