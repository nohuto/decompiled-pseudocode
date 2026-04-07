/*
 * XREFs of ?SetRect@CSolidRectangleInstruction@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A41C
 * Callers:
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18001D35C (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z @ 0x18007901C (-_AddPPIRectangleInstruction@CDesktopWindowReplacement@@AEAAJPEAUIDwmChannel@@KH@Z.c)
 *     ?_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007CC68 (-_UpdateSolidFill@CImmersiveWindowIconic@@AEAAJXZ.c)
 *     ?_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007F294 (-_AddRectInstruction@CProjectionBorderVisual@@IEAAJAEBUtagRECT@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800951C0 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 *     ?SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800A0264 (-SetupInstructions@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSolidRectangleInstruction::SetRect(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *(_OWORD *)(a1 + 32) = *a2;
  }
  else
  {
    result = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
