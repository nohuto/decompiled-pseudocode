/*
 * XREFs of ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180010650 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x1800130F0 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 *     ?UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z @ 0x180018280 (-UpdateLayout@CRenderDataVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z @ 0x18001A5C0 (-UpdateLayout@CTopLevelWindow@@UEAAJ_N@Z.c)
 *     ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CC20 (-UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001EF88 (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z @ 0x180024000 (-UpdateLayout@CAtlasedRectsVisual@@UEAAJ_N@Z.c)
 *     ?UpdateLayout@CVisual@@UEAAJ_N@Z @ 0x180026110 (-UpdateLayout@CVisual@@UEAAJ_N@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180026320 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003A4B0 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x18003D51C (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18003D6F0 (-Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x180078844 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x1800875C8 (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z @ 0x180087F0C (-Initialize@CRippleEffect@@IEAAJPEAUIDwmChannel@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z @ 0x1800880E0 (-Start@CRippleEffect@@QEAAJPEBUtagPOINT@@M@Z.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18008D9B8 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18008DEE0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008E380 (-Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800917A0 (-Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x180091E4C (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x180092530 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180092880 (-Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z @ 0x180092A50 (-Start@CPressTapVisual@@QEAAJPEBUtagPOINT@@PEBUtagRECT@@0@Z.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180092E50 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18009A160 (-Initialize@CIndirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012440 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  bool v3; // zf
  void (__fastcall *v4)(CThumbnailVisual *, int); // rax
  LONG cx; // eax
  struct tagSIZE v6; // rbx
  int v7; // ecx
  void (__fastcall *v9)(CVisual *__hidden); // rax

  if ( this[15].cx == a2->cx && this[15].cy == a2->cy )
    return 0LL;
  v3 = (this[10].cy & 1) == 0;
  this[15] = *a2;
  if ( !v3 )
    (*(void (__fastcall **)(struct tagSIZE *, __int64))(*(_QWORD *)this + 24LL))(this, 16LL);
  v4 = *(void (__fastcall **)(CThumbnailVisual *, int))(*(_QWORD *)this + 24LL);
  if ( (char *)v4 != (char *)CVisual::SetDirtyFlags )
  {
    if ( v4 != CThumbnailVisual::SetDirtyFlags )
    {
      v4((CThumbnailVisual *)this, 2);
      return 0LL;
    }
    CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)this, 2);
    return 0LL;
  }
  cx = this[10].cx;
  if ( (cx & 2) != 0 )
    return 0LL;
  this[10].cx = cx | 2;
  v6 = this[3];
  if ( !*(_QWORD *)&v6 )
    return 0LL;
  do
  {
    v7 = *(_DWORD *)(*(_QWORD *)&v6 + 80LL);
    if ( (v7 & 1) != 0 )
      break;
    v9 = *(void (__fastcall **)(CVisual *__hidden))(**(_QWORD **)&v6 + 32LL);
    if ( v9 == CVisual::SetDirtyChildren )
      *(_DWORD *)(*(_QWORD *)&v6 + 80LL) = v7 | 1;
    else
      v9(*(CVisual **)&v6);
    v6 = *(struct tagSIZE *)(*(_QWORD *)&v6 + 24LL);
  }
  while ( v6 );
  return 0LL;
}
