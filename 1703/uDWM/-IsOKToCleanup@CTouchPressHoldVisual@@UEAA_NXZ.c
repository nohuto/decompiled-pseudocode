/*
 * XREFs of ?IsOKToCleanup@CTouchPressHoldVisual@@UEAA_NXZ @ 0x18009F080
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?CleanupFinishedAnimations@CContactManager@@AEAAXXZ @ 0x180070700 (-CleanupFinishedAnimations@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTouchPressHoldVisual::IsOKToCleanup(CTouchPressHoldVisual *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) && !*((_QWORD *)this + 44) )
    return *((_QWORD *)this + 45) == 0LL;
  return result;
}
