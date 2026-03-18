/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0117EA0
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C007AFE0 (PostWinlogonMessage.c)
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1C009B5F0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C0118CC0 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C018F8EC & 1) != 0
    || (dword_1C018F8E4 & 1) != 0
    || (dword_1C018F8C4 & 1) != 0
    || (dword_1C018F8AC & 1) != 0
    || (dword_1C0192CB4 & 1) != 0
    || (dword_1C018F89C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C018F8EC &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C018F8C4 &= ~1u;
    dword_1C018F8AC &= ~1u;
    dword_1C0192CB4 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C018F89C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C018F8B4 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
