/*
 * XREFs of IntersectRect @ 0x1C0067F2C
 * Callers:
 *     _MonitorFromRect @ 0x1C00209D0 (_MonitorFromRect.c)
 *     UT_GetParentDCClipBox @ 0x1C005EF1C (UT_GetParentDCClipBox.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C005FB68 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     GetInheritedMonitor @ 0x1C0060FE8 (GetInheritedMonitor.c)
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C0065A64 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z @ 0x1C00670A8 (-SmartRectInRegion@@YAIPEAUHRGN__@@PEAUtagRECT@@@Z.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0067408 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C006985C (xxxScrollWindowEx.c)
 *     OffsetChildren @ 0x1C009E97C (OffsetChildren.c)
 *     FindOldMonitor @ 0x1C00B7BF4 (FindOldMonitor.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     SpbCheckDce @ 0x1C00E3550 (SpbCheckDce.c)
 *     ParkIcon @ 0x1C00E8BF0 (ParkIcon.c)
 *     SubtractRect @ 0x1C00EE518 (SubtractRect.c)
 *     ?IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z @ 0x1C00F6DB8 (-IsCandidateTransformOwner@@YAHPEAUtagWND@@0@Z.c)
 *     xxxGetUpdateRect @ 0x1C0102B2C (xxxGetUpdateRect.c)
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     xxxSnapWindow @ 0x1C0138DA0 (xxxSnapWindow.c)
 *     xxxRedrawHungWindow @ 0x1C0139BCC (xxxRedrawHungWindow.c)
 *     ?FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z @ 0x1C01A3538 (-FixBogusSWP@@YAXPEAUtagWND@@PEAH1HHI@Z.c)
 *     ?PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z @ 0x1C01A3974 (-PreventInterMonitorBlts@@YAXPEAUtagCVR@@@Z.c)
 *     ?IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z @ 0x1C01BF0B4 (-IsNewMonitorRectMostOccupied@@YAHPEBUtagRECT@@00@Z.c)
 *     xxxPrintWindow @ 0x1C01C2478 (xxxPrintWindow.c)
 *     ?TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z @ 0x1C01CF314 (-TTBetterTarget@@YAHPEAUtagWND@@IPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagRECT@@K@Z.c)
 *     ?_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@HU4@K@Z @ 0x1C01CFC6C (-_TTUpdateBestTarget@@YAXPEAUtagPNTRWINDOWHITTTESTARGS@@PEAUtagWND@@IPEBUtagPOINT@@PEAUtagRECT@@.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D0660 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     NtUserSetWindowShowState @ 0x1C01E0370 (NtUserSetWindowShowState.c)
 *     ?FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z @ 0x1C01E3734 (-FBitsTouch@@YAHPEAUtagWND@@PEAUtagRECT@@PEAUtagSPB@@K@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C01F0B98 (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01F14CC (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     ?xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C01F3018 (-xxxGetSizeRectFromShell@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@P.c)
 *     xxxDrawDragRectEx @ 0x1C01F64F0 (xxxDrawDragRectEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0202A04 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0206528 (xxxMNOpenHierarchy.c)
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C020C2CC (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 *     ?TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z @ 0x1C021342C (-TryRect@@YAHIHHHHPEAUtagRECT@@PEAUtagPOINT@@PEAUtagMONITOR@@@Z.c)
 *     FindBestPos @ 0x1C02135AC (FindBestPos.c)
 *     TouchTargetingClipContact @ 0x1C023A72C (TouchTargetingClipContact.c)
 *     TouchTargetingCreateContact @ 0x1C023A850 (TouchTargetingCreateContact.c)
 *     TouchTargetingRankForRect @ 0x1C023AF0C (TouchTargetingRankForRect.c)
 *     TouchTargetingRankForRectDeep @ 0x1C023B4FC (TouchTargetingRankForRectDeep.c)
 *     DxgkEngBltViaGDI @ 0x1C0250100 (DxgkEngBltViaGDI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(int *a1, int *a2, int *a3)
{
  int *v3; // r9
  int v6; // r10d
  int v7; // r9d
  int v8; // edx
  int v9; // ecx
  __int64 result; // rax

  v3 = a3;
  if ( *a2 > *a3 )
    v3 = a2;
  v6 = *v3;
  *a1 = *v3;
  v7 = a3[2];
  if ( a2[2] < v7 )
    v7 = a2[2];
  a1[2] = v7;
  if ( v6 < v7 )
  {
    v8 = a3[1];
    if ( a2[1] > v8 )
      v8 = a2[1];
    a1[1] = v8;
    v9 = a3[3];
    if ( a2[3] < v9 )
      v9 = a2[3];
    a1[3] = v9;
    if ( v8 < v9 )
      return 1LL;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  return result;
}
