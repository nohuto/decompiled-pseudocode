/*
 * XREFs of IsWindowBeingDestroyed @ 0x1C001DCFC
 * Callers:
 *     zzzComposeDesktop @ 0x1C0016E24 (zzzComposeDesktop.c)
 *     ?ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1C00170BC (-ShouldComposeWindow@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     UserDetachQueueFromInputWindowApiExt @ 0x1C001ACC0 (UserDetachQueueFromInputWindowApiExt.c)
 *     xxxSetLayeredWindow @ 0x1C001DD44 (xxxSetLayeredWindow.c)
 *     _HungWindowFromGhostWindow @ 0x1C003C134 (_HungWindowFromGhostWindow.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     GreUpdateSpriteVisRgn @ 0x1C006D400 (GreUpdateSpriteVisRgn.c)
 *     xxxCreateCaret @ 0x1C00B0198 (xxxCreateCaret.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4280 (_GhostWindowFromHungWindow.c)
 *     NtUserSetBrokeredForeground @ 0x1C00F6260 (NtUserSetBrokeredForeground.c)
 *     NtUserSetWindowFNID @ 0x1C00FD100 (NtUserSetWindowFNID.c)
 *     xxxRegisterGhostWindow @ 0x1C0132440 (xxxRegisterGhostWindow.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C013294C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D3040 (-_ShouldFrostCrashedWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D312C (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 *     _RegisterErrorReportingDialog @ 0x1C01D32EC (_RegisterErrorReportingDialog.c)
 *     xxxFrostCrashedWindow @ 0x1C01D3340 (xxxFrostCrashedWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01D3460 (xxxRegisterSiblingFrostWindow.c)
 *     NtUserDisableImmersiveOwner @ 0x1C01D7490 (NtUserDisableImmersiveOwner.c)
 *     xxxMNMouseMove @ 0x1C020621C (xxxMNMouseMove.c)
 *     UserRemoveWindowedSwapChain @ 0x1C02098D0 (UserRemoveWindowedSwapChain.c)
 *     UserSetWindowedSwapChain @ 0x1C02099AC (UserSetWindowedSwapChain.c)
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
    if ( (*(_DWORD *)(v2 + 440) & 1) != 0 )
      return 1;
  }
  return v1;
}
