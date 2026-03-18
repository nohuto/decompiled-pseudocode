/*
 * XREFs of ?TurnOffMouseKeys@@YAXXZ @ 0x1C0118FD0
 * Callers:
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C0119A50 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0074980 (-MKHideMouseCursor@@YAXXZ.c)
 *     ApiSetEditionPostRitSound @ 0x1C013C174 (ApiSetEditionPostRitSound.c)
 */

void TurnOffMouseKeys(void)
{
  __int64 v0; // r8

  dword_1C018AD44 &= ~1u;
  gdwPUDFlags &= ~0x2000u;
  MKHideMouseCursor();
  if ( (dword_1C018AD44 & 0x10) != 0 )
    ApiSetEditionPostRitSound(*(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 24LL), 1LL, v0, 0LL);
  ApiSetEditionPostAccessibility(3LL);
}
