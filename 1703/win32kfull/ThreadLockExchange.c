/*
 * XREFs of ThreadLockExchange @ 0x1C00CCF68
 * Callers:
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C000A2C0 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C000A460 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C000A594 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C0019E40 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C003B5D0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C004D7D0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsTimers @ 0x1C00B1EC0 (DestroyThreadsTimers.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C8D10 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01C9220 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerParentNotify @ 0x1C01C9F50 (EditionPointerParentNotify.c)
 *     xxxOldNextWindow @ 0x1C01CC84C (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C020497C (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C02078C0 (xxxMNSetTop.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020B978 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    ++*(_DWORD *)(a1 + 8);
  if ( result )
  {
    if ( (*(_DWORD *)(result + 8))-- == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
