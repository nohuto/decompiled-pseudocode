/*
 * XREFs of ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF3D0
 * Callers:
 *     ?GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA?AUtagRECT@@URect@Foundation@Windows@@U3@UtagSIZE@@W4CoreKeyboardAlignment@Core@Text@Internal@UI@6@@Z @ 0x1801AF1F4 (-GetRelativePosition@ViewRectHelper@KeyboardHosting@@CA-AUtagRECT@@URect@Foundation@Windows@@U3@.c)
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801DF514 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1801DF648 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::ShiftRectIntoContainer(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  struct tagRECT v4; // xmm0
  LONG left; // edx
  int v8; // edx
  LONG right; // edx
  LONG top; // r8d
  LONG v11; // r8d
  __m128i v12; // xmm0
  int v13; // r8d
  LONG bottom; // r8d
  int v15; // r8d
  struct tagRECT rc; // [rsp+20h] [rbp-10h] BYREF

  v4 = *a3;
  left = retstr->left;
  *this = *a3;
  if ( this->left >= left )
  {
    right = retstr->right;
    if ( this->right <= right )
      goto LABEL_6;
    v8 = this->left + right - this->right - _mm_cvtsi128_si32((__m128i)v4);
  }
  else
  {
    v8 = left - _mm_cvtsi128_si32((__m128i)v4);
  }
  top = this->top;
  rc = v4;
  OffsetRect(&rc, v8, top - v4.top);
  *this = rc;
LABEL_6:
  v11 = retstr->top;
  if ( this->top < v11 )
  {
    v12 = *(__m128i *)this;
    rc = *this;
    v13 = v11 - rc.top;
LABEL_10:
    OffsetRect(&rc, this->left - _mm_cvtsi128_si32(v12), v13);
    *this = rc;
    return this;
  }
  bottom = retstr->bottom;
  if ( this->bottom > bottom )
  {
    v15 = bottom - this->bottom;
    v12 = *(__m128i *)this;
    rc = *this;
    v13 = this->top + v15 - rc.top;
    goto LABEL_10;
  }
  return this;
}
