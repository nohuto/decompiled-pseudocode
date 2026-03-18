/*
 * XREFs of ?Update@CExpressionForce@@UEAAMMPEAVCExpressionValueStack@@_K@Z @ 0x180188CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x180188D20 (-AdvanceToTime@CForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 *     ?Reset@CForceEvaluator@@QEAAXMMPEAUIAccelerator@@W4ScrollAxis@@@Z @ 0x180189070 (-Reset@CForceEvaluator@@QEAAXMMPEAUIAccelerator@@W4ScrollAxis@@@Z.c)
 */

float __fastcall CExpressionForce::Update(
        CExpressionForce *this,
        float a2,
        struct CExpressionValueStack *a3,
        __int64 a4)
{
  __int64 v4; // rdx
  bool v5; // zf

  v5 = *((_BYTE *)this + 104) == 0;
  *((_QWORD *)this + 11) = a3;
  *((_QWORD *)this + 12) = a4;
  if ( v5 )
  {
    CForceEvaluator::Reset((char *)this + 24, v4, a3, this, *((_DWORD *)this + 20));
    *((_BYTE *)this + 104) = 1;
  }
  CForceEvaluator::AdvanceToTime((CExpressionForce *)((char *)this + 24), a2, this);
  return *((float *)this + 10);
}
