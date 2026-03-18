/*
 * XREFs of ?FKActivationTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0118630
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C013B444 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013BE54 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C013C5B4 (ApiSetEditionSetAccessibilityTimer.c)
 */

void __fastcall FKActivationTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  __int64 v5; // r10
  char v6; // al

  v4 = gFilterKeysState;
  v5 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( gFilterKeysState == 1 )
    goto LABEL_20;
  if ( gFilterKeysState != 2 )
  {
    if ( gFilterKeysState != 3 )
    {
      if ( gFilterKeysState == 4 )
      {
        dword_1C018AD78 = 0;
        dword_1C018AD7C = 0;
        dword_1C018AD70 = 2000;
        if ( (dword_1C018AD6C & 0x10) != 0 )
          ApiSetEditionPostRitSound(v5, 5LL, a3, 3LL);
      }
      return;
    }
    if ( (dword_1C018AD6C & 0x10) != 0 )
    {
      ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 5LL, a3, 2LL);
      v4 = gFilterKeysState;
    }
    dword_1C018AD78 = 0;
    dword_1C018AD70 = 0;
    dword_1C018AD7C = 1000;
LABEL_20:
    gFilterKeysState = v4 + 1;
    gtmridFKActivation = ApiSetEditionSetAccessibilityTimer(a3, 4000LL, FKActivationTimer);
    return;
  }
  v6 = dword_1C018AD6C;
  if ( (dword_1C018AD6C & 1) == 0 )
  {
    if ( (dword_1C018AD6C & 0x10) != 0 )
      ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 0LL, a3, 0LL);
    PostWinlogonMessage(1026LL, 2u);
    v4 = gFilterKeysState;
    goto LABEL_20;
  }
  dword_1C018AD6C &= ~1u;
  if ( (v6 & 0x10) != 0 )
    ApiSetEditionPostRitSound(v5, 1LL, a3, 0LL);
  ApiSetEditionPostAccessibility(2LL);
  if ( gtmridFKResponse )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    ApiSetEditionKillAccessibilityTimer();
    gtmridFKAcceptanceDelay = 0LL;
  }
}
