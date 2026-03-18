/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0117E40
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C01186B0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C009BD20 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostAccessibility @ 0x1C013AFC4 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C013B39C (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // r8

  dword_1C018F8C4 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C018F8C4 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
