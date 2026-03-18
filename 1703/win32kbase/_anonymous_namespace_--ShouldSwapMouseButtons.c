/*
 * XREFs of _anonymous_namespace_::ShouldSwapMouseButtons @ 0x1C0082420
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C008237C (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131CB4 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ApiSetEditionShouldSwapMouseButton @ 0x1C0082458 (ApiSetEditionShouldSwapMouseButton.c)
 */

bool __fastcall anonymous_namespace_::ShouldSwapMouseButtons(char a1, char a2, unsigned __int8 a3, unsigned int a4)
{
  char v4; // bl

  v4 = 0;
  if ( a4 - 1 <= 1 && (!a1 || !a2) )
    return (unsigned int)ApiSetEditionShouldSwapMouseButton(a3, a4) != 0;
  return v4;
}
