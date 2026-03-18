/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C008BA50
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C009A08C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013B444 (ApiSetEditionKillAccessibilityTimer.c)
 */

void ResetAccessibilityCountersOnMouseInput()
{
  signed __int32 v0[10]; // [rsp+0h] [rbp-28h] BYREF
  int v1; // [rsp+30h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v0, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v1);
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer();
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v1 )
      UserSessionSwitchLeaveCrit();
  }
}
