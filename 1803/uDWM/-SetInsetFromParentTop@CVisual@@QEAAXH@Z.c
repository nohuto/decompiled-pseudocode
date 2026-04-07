/*
 * XREFs of ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960
 * Callers:
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CC20 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18003A2E4 (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18003D51C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800880E0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008D9B8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18008DEE0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x18008E838 (-_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ.c)
 *     ?PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800918C4 (-PlaceVisuals@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180091E4C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180092530 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180092A50 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180092E50 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A968 (-UpdateLocation@CIndirectTouchVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisual::SetInsetFromParentTop(CVisual *this, int a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CVisual *__hidden, unsigned int); // rax

  if ( *((_DWORD *)this + 34) != a2 )
  {
    v2 = *(_QWORD *)this;
    *((_DWORD *)this + 34) = a2;
    v3 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v2 + 24);
    if ( v3 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 2u);
    else
      v3(this, 2u);
  }
}
