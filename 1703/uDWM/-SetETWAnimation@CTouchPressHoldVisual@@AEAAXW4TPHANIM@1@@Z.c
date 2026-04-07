/*
 * XREFs of ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x18009F0AC
 * Callers:
 *     ?StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F108 (-StartAbort@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F2A8 (-StartHold@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009F42C (-StartRightTap@CTouchPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x18009F540 (-Stop@CTouchPressHoldVisual@@UEAAXXZ.c)
 *     ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009FC50 (-UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ.c)
 * Callees:
 *     Template_q @ 0x18007FA50 (Template_q.c)
 */

__int64 __fastcall CTouchPressHoldVisual::SetETWAnimation(__int64 a1, int a2)
{
  int v2; // r8d
  __int64 result; // rax
  __int64 v6; // rcx

  v2 = *(_DWORD *)(a1 + 296);
  if ( a2 != v2 )
  {
    result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      Template_q(a1, (__int64)&UdwmTouchPressHoldVisual_Stop, v2);
      result = (unsigned int)Microsoft_Windows_Dwm_UdwmEnableBits;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        result = Template_q(v6, (__int64)&UdwmTouchPressHoldVisual_Start, a2);
    }
  }
  *(_DWORD *)(a1 + 296) = a2;
  return result;
}
