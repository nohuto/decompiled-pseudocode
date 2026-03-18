/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C008BBE4
 * Callers:
 *     zzzComposeDesktop @ 0x1C0044710 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00449AC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00721C0 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateCaret @ 0x1C0084868 (xxxCreateCaret.c)
 *     _HungWindowFromGhostWindow @ 0x1C00871C4 (_HungWindowFromGhostWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008BC2C (xxxSetLayeredWindow.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C008DDE0 (UserDetachQueueFromInputWindowApiExt.c)
 *     NtUserSetBrokeredForeground @ 0x1C00D5DB0 (NtUserSetBrokeredForeground.c)
 *     NtUserSetWindowFNID @ 0x1C010A3E0 (NtUserSetWindowFNID.c)
 *     xxxRegisterGhostWindow @ 0x1C0134590 (xxxRegisterGhostWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     UserSetWindowedSwapChain @ 0x1C013E7F4 (UserSetWindowedSwapChain.c)
 *     UserRemoveWindowedSwapChain @ 0x1C0140210 (UserRemoveWindowedSwapChain.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D7300 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D73EC (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01D75B8 (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01D760C (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D7730 (xxxRegisterSiblingFrostWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01E3CA0 (NtUserDisableImmersiveOwner.c)
 *     xxxMNMouseMove @ 0x1C0207FA4 (xxxMNMouseMove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowBeingDestroyed(__int64 a1)
{
  unsigned int v1; // edx
  __int64 v2; // rax

  v1 = 0;
  if ( *(char *)(a1 + 59) < 0 )
    return 1;
  if ( *(char *)(a1 + 60) < 0 )
    return 1;
  if ( *(__int16 *)(a1 + 82) < 0 )
    return 1;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 464) & 1) != 0 )
      return 1;
  }
  return v1;
}
