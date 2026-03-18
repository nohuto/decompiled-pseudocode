/*
 * XREFs of GetWindowExtendedMargin @ 0x1C00CA8F0
 * Callers:
 *     ?xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00CA334 (-xxxNormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 *     ?ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z @ 0x1C01AAB10 (-ExtendArrangedRectangleByFrameMargin@@YAXPEAUtagWND@@PEAUtagSIZERECT@@@Z.c)
 *     ReduceArrangedRectangleByFrameMargin @ 0x1C01AB288 (ReduceArrangedRectangleByFrameMargin.c)
 *     ?IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z @ 0x1C01D8748 (-IsEqualRectToArrangedWindow@@YAHPEAUtagWND@@QEBUtagRECT@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@3PEAUtagWND@@33@Z @ 0x1C01D91F8 (-TransformShellProvidedRectangles@@YAXPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIR.c)
 *     UpdateSizeTrackingInfo @ 0x1C01DD398 (UpdateSizeTrackingInfo.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0065520 (_IsTopLevelWindow.c)
 *     IsPWNDEligibleForGDIScaling @ 0x1C009269C (IsPWNDEligibleForGDIScaling.c)
 */

__int64 __fastcall GetWindowExtendedMargin(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v7; // rcx
  INT ScaledLogPixels; // edi
  __int16 v9; // ax
  INT v10; // ecx
  __int16 v11; // ax
  INT v12; // ecx
  __int16 v13; // ax
  INT v14; // ecx
  _BYTE v15[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-18h]

  *(_QWORD *)a2 = 0LL;
  if ( (unsigned int)IsTopLevelWindow(a1)
    && (unsigned int)GetWindowCompositionInfo(a1, (__int64)v15)
    && ((v4 = v16, (_WORD)v16) || __PAIR32__(WORD1(v16), 0) != HIWORD(v16)) )
  {
    v5 = 1;
    if ( !IsPWNDEligibleForGDIScaling(a1) || (v7 = *(unsigned __int16 *)(a1 + 372), (_WORD)v7 == 96) )
    {
      *(_QWORD *)a2 = v4;
    }
    else
    {
      ScaledLogPixels = (unsigned __int16)GreGetScaledLogPixels(v7);
      v9 = EngMulDiv((unsigned __int16)v4, 96, ScaledLogPixels);
      v10 = WORD2(v16);
      *(_WORD *)a2 = v9;
      v11 = EngMulDiv(v10, 96, ScaledLogPixels);
      v12 = WORD1(v16);
      *(_WORD *)(a2 + 4) = v11;
      v13 = EngMulDiv(v12, 96, ScaledLogPixels);
      v14 = HIWORD(v16);
      *(_WORD *)(a2 + 2) = v13;
      *(_WORD *)(a2 + 6) = EngMulDiv(v14, 96, ScaledLogPixels);
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
