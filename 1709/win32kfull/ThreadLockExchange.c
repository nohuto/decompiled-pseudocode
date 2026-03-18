/*
 * XREFs of ThreadLockExchange @ 0x1C01242F4
 * Callers:
 *     xxxMakeWindowForegroundWithState @ 0x1C0055114 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z @ 0x1C00589E0 (-xxxbEnumerateRegistryFontsInternal@@YAHPEAXK@Z.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     TimersProc @ 0x1C00888F0 (TimersProc.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C009FE90 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxLoadPermanentFonts@@YAHXZ @ 0x1C00BF910 (-xxxLoadPermanentFonts@@YAHXZ.c)
 *     ?xxxLoadUserAndNetworkFonts@@YAXXZ @ 0x1C00BFAB0 (-xxxLoadUserAndNetworkFonts@@YAXXZ.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x1C00BFBE4 (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DestroyThreadsTimers @ 0x1C00D78F0 (DestroyThreadsTimers.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01CD184 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01CD4E0 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     EditionPointerParentNotify @ 0x1C01CE380 (EditionPointerParentNotify.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxMNChar @ 0x1C02064C0 (xxxMNChar.c)
 *     xxxMNSetTop @ 0x1C02098F8 (xxxMNSetTop.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C020CEA0 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00CF2F0 (HMUnlockObject.c)
 */

__int64 __fastcall ThreadLockExchange(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = a1;
  if ( a1 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  if ( result )
    return HMUnlockObject(result);
  return result;
}
