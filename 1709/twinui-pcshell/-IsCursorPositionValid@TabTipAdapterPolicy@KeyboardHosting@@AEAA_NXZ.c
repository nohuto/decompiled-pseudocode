/*
 * XREFs of ?IsCursorPositionValid@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NXZ @ 0x1801AB934
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x1801AACE0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z @ 0x1801AB5FC (-GetPrimaryMonitorRect@TabTipAdapterPolicy@KeyboardHosting@@CAJPEAUtagRECT@@@Z.c)
 */

bool __fastcall KeyboardHosting::TabTipAdapterPolicy::IsCursorPositionValid(const __m128i *this)
{
  bool result; // al
  struct tagRECT v3; // [rsp+20h] [rbp-20h] BYREF

  v3 = (struct tagRECT)_mm_loadu_si128(this + 7);
  result = 0;
  if ( *(float *)&v3.left != 0.0
    || *(float *)&v3.top != 0.0
    || *(float *)&v3.right != 0.0
    || *(float *)&v3.bottom != 0.0
    || (v3 = (struct tagRECT)_mm_loadu_si128(this + 9), *(float *)&v3.left != 0.0)
    || *(float *)&v3.top != 0.0
    || *(float *)&v3.right != 0.0
    || *(float *)&v3.bottom != 0.0 )
  {
    *(_QWORD *)&v3.left = 0LL;
    *(_QWORD *)&v3.right = 0LL;
    KeyboardHosting::TabTipAdapterPolicy::GetPrimaryMonitorRect(&v3);
    if ( *(float *)this[8].m128i_i32 != (float)(v3.right - 1) || *(float *)&this[8].m128i_i32[3] != 0.0 )
      return 1;
  }
  return result;
}
