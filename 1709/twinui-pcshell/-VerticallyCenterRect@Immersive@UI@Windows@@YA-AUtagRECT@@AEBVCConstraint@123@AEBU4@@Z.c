/*
 * XREFs of ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1801DF314
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x1801DF514 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x1801DF648 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::VerticallyCenterRect(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  int v5; // kr00_4

  v5 = retstr->top + retstr->bottom - a3->bottom - a3->top;
  *this = *a3;
  OffsetRect(this, 0, v5 / 2);
  return this;
}
