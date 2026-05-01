/*
 * XREFs of ?ConvertInputAppPositionAndSizeRequstToIHMDisplayMode@TabTipAdapterPolicy@KeyboardHosting@@AEAA?AW4IHM_DISPLAY_MODE@@UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180251A84
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180253660 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::ConvertInputAppPositionAndSizeRequstToIHMDisplayMode(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = 2LL;
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      if ( !*(_BYTE *)(a2 + 24) && !*(_BYTE *)(a2 + 25) )
        return 3LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
