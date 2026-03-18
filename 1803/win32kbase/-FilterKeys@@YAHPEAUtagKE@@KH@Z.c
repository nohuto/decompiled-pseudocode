/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C010A080
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013EEA0 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C013FA14 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013FF88 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  int v3; // r14d
  char v4; // di
  int v5; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx

  v3 = a3;
  v4 = *((_BYTE *)a1 + 2);
  v5 = *((_WORD *)a1 + 1) & 0x8000;
  if ( v4 == -95 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      if ( gtmridFKActivation )
      {
        ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
        gtmridFKActivation = 0LL;
      }
      gFilterKeysState = 0;
    }
    else if ( gPhysModifierState == 2 && (dword_1C01A4E8C & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
    {
      gFilterKeysState = 1;
      gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(0LL, 4000LL, FKActivationTimer);
    }
  }
  else if ( gtmridFKActivation )
  {
    gFilterKeysState = 0;
    ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
    gtmridFKActivation = 0LL;
  }
  v8 = (unsigned int)dword_1C01A4E8C;
  if ( (dword_1C01A4E8C & 1) != 0 )
  {
    if ( v5 )
    {
      if ( v4 == gLastVkDown )
      {
        ApiSetEditionKillAccessibilityTimer((unsigned int)dword_1C01A4E8C, gtmridFKResponse);
        gtmridFKResponse = 0LL;
        gLastVkDown = 0;
        if ( gtmridFKAcceptanceDelay )
        {
          ApiSetEditionKillAccessibilityTimer(v9, gtmridFKAcceptanceDelay);
          gtmridFKAcceptanceDelay = 0LL;
          if ( (gdwPUDFlags & 0x800) == 0 )
            return 0LL;
          gdwPUDFlags &= ~0x800u;
        }
        if ( dword_1C01A4E9C )
        {
          gBounceVk = v4;
          gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, dword_1C01A4E9C, FKBounceKeyTimer);
          if ( (gdwPUDFlags & 0x400) != 0 )
            return 0LL;
        }
      }
    }
    else
    {
      if ( v4 == gLastVkDown )
        return 0LL;
      gLastVkDown = v4;
      if ( gBounceVk )
      {
        if ( v4 == gBounceVk )
        {
          gdwPUDFlags |= 0x400u;
          return 0LL;
        }
        if ( gtmridFKResponse )
        {
          ApiSetEditionKillAccessibilityTimer((unsigned int)dword_1C01A4E8C, gtmridFKResponse);
          gtmridFKResponse = 0LL;
        }
        gBounceVk = 0;
      }
      gdwPUDFlags &= ~0x400u;
      if ( (dword_1C01A4E8C & 0x40) != 0 )
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
      if ( gtmridFKAcceptanceDelay )
      {
        ApiSetEditionKillAccessibilityTimer(v8, gtmridFKAcceptanceDelay);
        gtmridFKAcceptanceDelay = 0LL;
      }
      if ( gtmridFKResponse )
      {
        ApiSetEditionKillAccessibilityTimer(v8, gtmridFKResponse);
        gtmridFKResponse = 0LL;
      }
      v11 = *(_OWORD *)a1;
      gFKExtraInformation = a2;
      gFKNextProcIndex = v3;
      gFKKeyEvent = v11;
      xmmword_1C01A4AB0 = *((_OWORD *)a1 + 1);
      if ( Value )
      {
        v12 = ApiSetEditionSetAccessibilityTimer(0LL, Value, xxxFKAcceptanceDelayTimer);
        gdwPUDFlags &= ~0x800u;
        gtmridFKAcceptanceDelay = v12;
        return 0LL;
      }
      v13 = dword_1C01A4E98;
      if ( dword_1C01A4E98 )
      {
        if ( dword_1C01A4E94 )
          v13 = dword_1C01A4E94;
        gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, v13, xxxFKRepeatRateTimer);
      }
    }
  }
  return 1LL;
}
