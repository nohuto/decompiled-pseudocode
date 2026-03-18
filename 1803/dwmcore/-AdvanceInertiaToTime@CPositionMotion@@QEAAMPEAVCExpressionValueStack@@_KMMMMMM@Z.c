/*
 * XREFs of ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1801C51B4
 * Callers:
 *     ?CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x1801BF380 (-CalculateInertiaValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStac.c)
 * Callees:
 *     ?AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z @ 0x1801C4850 (-AdvanceInertiaToTime@CMotion@@UEAAMPEAVCExpressionValueStack@@_KMMM@Z.c)
 *     ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x1801C5160 (-AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ.c)
 */

float __fastcall CPositionMotion::AdvanceInertiaToTime(
        CPositionMotion *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9)
{
  struct CExpressionValueStack *v10; // rdx
  CMotion *v11; // rcx
  unsigned __int64 v12; // r8
  float v13; // xmm4_4
  float result; // xmm0_4

  *((float *)this + 40) = a7;
  *((float *)this + 41) = a8;
  *((float *)this + 42) = a9;
  CPositionMotion::AdvanceDeltaDueToScale(this);
  result = CMotion::AdvanceInertiaToTime(v11, v10, v12, a5, a6, v13);
  *((_DWORD *)this + 47) = *((_DWORD *)this + 40);
  *((float *)this + 46) = result;
  return result;
}
