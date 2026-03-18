/*
 * XREFs of ?FilterKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187B0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013B444 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013C5B4 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall FilterKeys(struct tagKE *a1, unsigned int a2, __int64 a3)
{
  int v3; // r14d
  char v4; // di
  int v5; // esi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx

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
    else if ( gPhysModifierState == 2 && (dword_1C018AD6C & 4) != 0 && !gtmridFKActivation && gFilterKeysState != 8 )
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
  v8 = (unsigned int)dword_1C018AD6C;
  if ( (dword_1C018AD6C & 1) != 0 )
  {
    if ( v5 )
    {
      if ( v4 == gLastVkDown )
      {
        ApiSetEditionKillAccessibilityTimer((unsigned int)dword_1C018AD6C, gtmridFKResponse);
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
        if ( dword_1C018AD7C )
        {
          gBounceVk = v4;
          gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, (unsigned int)dword_1C018AD7C, FKBounceKeyTimer);
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
        v11 = gtmridFKResponse;
        if ( gtmridFKResponse )
        {
          ((void (*)(void))ApiSetEditionKillAccessibilityTimer)();
          v11 = 0LL;
          gtmridFKResponse = 0LL;
        }
        gBounceVk = 0;
      }
      else
      {
        v11 = gtmridFKResponse;
      }
      gdwPUDFlags &= ~0x400u;
      if ( (dword_1C018AD6C & 0x40) != 0 )
      {
        ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 4LL, a3, 0LL);
        v11 = gtmridFKResponse;
      }
      if ( gtmridFKAcceptanceDelay )
      {
        ApiSetEditionKillAccessibilityTimer(v8, gtmridFKAcceptanceDelay);
        gtmridFKAcceptanceDelay = 0LL;
        v11 = gtmridFKResponse;
      }
      if ( v11 )
      {
        ApiSetEditionKillAccessibilityTimer(v8, v11);
        gtmridFKResponse = 0LL;
      }
      v12 = *(_OWORD *)a1;
      gFKExtraInformation = a2;
      gFKNextProcIndex = v3;
      gFKKeyEvent = v12;
      xmmword_1C018F608 = *((_OWORD *)a1 + 1);
      if ( dword_1C018AD70 )
      {
        v13 = ApiSetEditionSetAccessibilityTimer(0LL, (unsigned int)dword_1C018AD70, xxxFKAcceptanceDelayTimer);
        gdwPUDFlags &= ~0x800u;
        gtmridFKAcceptanceDelay = v13;
        return 0LL;
      }
      v14 = (unsigned int)dword_1C018AD78;
      if ( dword_1C018AD78 )
      {
        if ( dword_1C018AD74 )
          v14 = (unsigned int)dword_1C018AD74;
        gtmridFKResponse = ApiSetEditionSetAccessibilityTimer(0LL, v14, xxxFKRepeatRateTimer);
      }
    }
  }
  return 1LL;
}
