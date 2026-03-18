/*
 * XREFs of ?AdvanceDeltaDueToScale@CPositionMotion@@AEAAXXZ @ 0x1801853A4
 * Callers:
 *     ?AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z @ 0x1801853F8 (-AdvanceInertiaToTime@CPositionMotion@@QEAAMPEAVCExpressionValueStack@@_KMMMMMM@Z.c)
 *     ?CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z @ 0x1801854CC (-CalculateInContactValue@CPositionMotion@@QEAAMMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPositionMotion::AdvanceDeltaDueToScale(CPositionMotion *this)
{
  float v1; // xmm0_4
  float v2; // xmm3_4

  v1 = *((float *)this + 59);
  v2 = FLOAT_1_0;
  if ( v1 > 0.0 )
    v2 = *((float *)this + 52) / v1;
  *((float *)this + 57) = (float)((float)((float)(*((float *)this + 58) - *((float *)this + 54)) * v2)
                                + *((float *)this + 54))
                        - *((float *)this + 58);
}
