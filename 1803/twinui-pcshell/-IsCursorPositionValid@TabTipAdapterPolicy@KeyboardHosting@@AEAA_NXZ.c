/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x180252588
 * Callers:
 *     ?IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180252538 (-IgnoreInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NUCoreKeyboardPositionAnd.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z @ 0x180249CD0 (-IsRectNull@KeyboardHosting@@YA_NURect@Foundation@Windows@@@Z.c)
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z @ 0x180251EF8 (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid(KeyboardHosting::TabTipAdapterPolicy *this)
{
  bool result; // al
  struct tagRECT v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = (struct tagRECT)*((_OWORD *)this + 9);
  result = 0;
  if ( !KeyboardHosting::IsRectNull((float *)&v3.left)
    || (v3 = (struct tagRECT)*((_OWORD *)this + 11), !KeyboardHosting::IsRectNull((float *)&v3.left)) )
  {
    *(_QWORD *)&v3.left = 0LL;
    *(_QWORD *)&v3.right = 0LL;
    KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(&v3);
    if ( *((float *)this + 40) != (float)(v3.right - 1) || *((float *)this + 43) != 0.0 )
      return 1;
  }
  return result;
}
