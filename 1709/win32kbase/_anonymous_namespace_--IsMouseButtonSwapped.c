/*
 * XREFs of _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C00185A8
 * Callers:
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C0018438 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C0131348 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ApiSetEditionShouldSwapMouseButton @ 0x1C00185DC (ApiSetEditionShouldSwapMouseButton.c)
 */

char __fastcall anonymous_namespace_::IsMouseButtonSwapped(unsigned int a1, unsigned __int8 a2)
{
  char v2; // bl

  v2 = 1;
  if ( a1 - 1 > 1 || !(unsigned int)ApiSetEditionShouldSwapMouseButton(a2, a1) )
    return 0;
  return v2;
}
