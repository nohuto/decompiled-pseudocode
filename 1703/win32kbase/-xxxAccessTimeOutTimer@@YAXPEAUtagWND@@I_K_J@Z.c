/*
 * XREFs of ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0119030
 * Callers:
 *     <none>
 * Callees:
 *     PostWinlogonMessage @ 0x1C00669C0 (PostWinlogonMessage.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C011A090 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013BE54 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 */

void __fastcall xxxAccessTimeOutTimer(struct tagWND *a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8

  if ( (dword_1C018AD6C & 1) != 0
    || (dword_1C018AD64 & 1) != 0
    || (dword_1C018AD44 & 1) != 0
    || (dword_1C018AD2C & 1) != 0
    || (dword_1C018DE04 & 1) != 0
    || (dword_1C018AD1C & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    v1 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
    dword_1C018AD6C &= ~1u;
    xxxTurnOffStickyKeys();
    dword_1C018AD44 &= ~1u;
    dword_1C018AD2C &= ~1u;
    dword_1C018DE04 &= ~1u;
    gdwPUDFlags &= ~0x8000u;
    dword_1C018AD1C &= ~1u;
    PostWinlogonMessage(1026LL, 9u);
    if ( (dword_1C018AD34 & 2) != 0 )
      ApiSetEditionPostRitSound(v1, 1LL, v2, 0LL);
    ApiSetEditionPostAccessibility(3LL);
    ApiSetEditionPostAccessibility(2LL);
    ApiSetEditionPostAccessibility(1LL);
  }
  SetAccessEnabledFlag();
}
