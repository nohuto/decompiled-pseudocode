/*
 * XREFs of ?xxxTwoKeysDown@@YAHH@Z @ 0x1C0118D20
 * Callers:
 *     ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01187D0 (-xxxStickyKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C0118E20 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 */

__int64 __fastcall xxxTwoKeysDown(int a1, __int64 a2, __int64 a3)
{
  char v4; // al
  __int64 v5; // rcx

  v4 = dword_1C018F8E4;
  v5 = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL);
  if ( (dword_1C018F8E4 & 0x100) != 0 )
  {
    dword_1C018F8E4 &= ~1u;
    if ( (v4 & 0x10) != 0 )
      ApiSetEditionPostRitSound(v5, 1LL, a3, 0LL);
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
  }
  xxxUpdateModifierState((unsigned __int8)gPhysModifierState, a1);
  gLatchBits = 0;
  gLockBits = 0;
  ApiSetEditionPostAccessibility(1LL);
  return dword_1C018F8E4 & 1;
}
