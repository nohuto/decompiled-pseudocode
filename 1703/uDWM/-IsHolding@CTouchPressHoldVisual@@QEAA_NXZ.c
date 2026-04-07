/*
 * XREFs of ?IsHolding@CTouchPressHoldVisual@@QEAA_NXZ @ 0x18006F958
 * Callers:
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18004B998 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTouchPressHoldVisual::IsHolding(CTouchPressHoldVisual *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) )
    return *((_QWORD *)this + 44) == 0LL;
  return result;
}
