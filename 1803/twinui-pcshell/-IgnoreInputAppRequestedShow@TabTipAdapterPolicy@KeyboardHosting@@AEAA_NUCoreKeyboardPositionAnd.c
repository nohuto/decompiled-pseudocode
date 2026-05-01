/*
 * XREFs of ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180252538
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180252588 (-IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreInputAppRequestedShow(__int64 a1, _DWORD *a2)
{
  return *(_BYTE *)(a1 + 392)
      && *a2 == 2
      && a2[2] == (int)*(float *)(a1 + 208)
      && a2[1] == (int)*(float *)(a1 + 212)
      && !KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid((KeyboardHosting::TabTipAdapterPolicy *)a1);
}
