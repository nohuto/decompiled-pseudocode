/*
 * XREFs of ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801DF514
 * Callers:
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1801DF648 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF314 (-VerticallyCenterRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     ?MoveNearRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z @ 0x1801DF34C (-MoveNearRect@Immersive@UI@Windows@@YA-AUtagRECT@@AEBU4@0W4FLYOUT_PLACEMENT@@@Z.c)
 *     ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF3D0 (-ShiftRectIntoContainer@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall Windows::UI::Immersive::PositionRelativeOnSide(
        struct tagRECT *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  const struct tagRECT *v7; // r9
  struct tagRECT v8; // xmm0
  __m128i v9; // xmm1
  LONG right; // eax
  char v11; // cl
  LONG v12; // edx
  struct tagRECT v14; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v15; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&a1->left = 0LL;
  *(_QWORD *)&a1->right = 0LL;
  if ( (int)a4 >= 0 )
  {
    if ( (int)a4 <= 2 )
    {
      v9 = *(__m128i *)Windows::UI::Immersive::MoveNearRect(&v14, a3, a2, (int)a4);
      right = a2->right;
      rc = (struct tagRECT)v9;
      OffsetRect(&rc, (a2->left + right - _mm_cvtsi128_si32(_mm_srli_si128(v9, 8)) - _mm_cvtsi128_si32(v9)) / 2, 0);
      v8 = rc;
      goto LABEL_6;
    }
    if ( (int)a4 <= 4 )
    {
      rc = *Windows::UI::Immersive::MoveNearRect(&v15, a3, a2, (int)a4);
      v8 = *Windows::UI::Immersive::VerticallyCenterRect(&v14, a2, &rc, v7);
LABEL_6:
      *a1 = v8;
    }
  }
  v11 = 1;
  v12 = a1->right;
  if ( a1->left > v12 || a1->top > a1->bottom )
    v11 = 0;
  if ( a1->left < a5->left || v12 > a5->right || a1->top < a5->top || a1->bottom > a5->bottom )
    v11 = 0;
  if ( !v11 )
    *a1 = *Windows::UI::Immersive::ShiftRectIntoContainer(&v14, a5, a1, a4);
  return a1;
}
