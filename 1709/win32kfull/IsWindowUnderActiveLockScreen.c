/*
 * XREFs of IsWindowUnderActiveLockScreen @ 0x1C005E6A0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     DCELogicalSpeedTopLevelHitTest @ 0x1C01C3520 (DCELogicalSpeedTopLevelHitTest.c)
 *     ?_IsTaskWindow@@YAHPEAUtagWND@@0@Z @ 0x1C01CF5F4 (-_IsTaskWindow@@YAHPEAUtagWND@@0@Z.c)
 *     _GetNextQueueWindow @ 0x1C01D02B4 (_GetNextQueueWindow.c)
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
