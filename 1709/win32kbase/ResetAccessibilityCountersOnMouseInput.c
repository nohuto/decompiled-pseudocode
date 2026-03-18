/*
 * XREFs of ResetAccessibilityCountersOnMouseInput @ 0x1C0092420
 * Callers:
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x1C00A538C (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003BB04 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013A708 (ApiSetEditionKillAccessibilityTimer.c)
 */

void ResetAccessibilityCountersOnMouseInput()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp+8h] BYREF

  gStickyKeysLeftShiftCount = 0;
  gStickyKeysRightShiftCount = 0;
  _InterlockedOr(v4, 0);
  if ( gtmridFKActivation )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v5);
    v3 = gtmridFKActivation;
    if ( gtmridFKActivation )
    {
      ApiSetEditionKillAccessibilityTimer();
      gtmridFKActivation = 0LL;
      gFilterKeysState = 8;
    }
    if ( !v5 )
      UserSessionSwitchLeaveCrit(v0, v3, v1, v2);
  }
}
