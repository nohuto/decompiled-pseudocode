/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C00B7310
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B7204 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01BFC00 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CB238 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01CBF24 (_GetNextQueueWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowUnderActiveLockScreen(__int64 a1)
{
  PVOID v1; // r8
  unsigned int v2; // edx
  int v4; // eax

  v1 = *(PVOID *)(a1 + 24);
  v2 = 0;
  if ( v1 )
  {
    if ( gbLockScreenActive )
    {
      if ( grpdeskLogon != v1 )
      {
        v4 = *(_DWORD *)(a1 + 320);
        if ( v4 < 2 || v4 > 3 && v4 != 14 && (unsigned int)(v4 - 17) > 1 )
          return 1;
      }
    }
  }
  return v2;
}
