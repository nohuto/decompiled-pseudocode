/*
 * XREFs of ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015EB30
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015E5F0 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18016D2E4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x180189098 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18015E550 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisified(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // di
  int v9; // ecx
  unsigned int v10; // r14d
  unsigned int v11; // ebp
  signed int v12; // eax
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 69);
  v10 = 0;
  if ( *((_DWORD *)this + 81) != v9 )
    goto LABEL_10;
  v11 = 0;
  if ( !*((_DWORD *)this + 76) )
  {
LABEL_8:
    v9 = *((_DWORD *)this + 69);
    if ( *((_DWORD *)this + 81) == v9 )
      *((_DWORD *)this + 81) = *((_DWORD *)this + 68);
LABEL_10:
    if ( a4 )
    {
      v13 = *((_DWORD *)this + 81);
      if ( v13 != *((_DWORD *)this + 68) && v13 != v9 || *((_QWORD *)this + 39) )
        v4 = 1;
      *a4 = v4;
    }
    return v10;
  }
  while ( 1 )
  {
    v12 = CConditionalExpression::CalculateConditionValue(this, v11, a2, a3, &v15);
    v10 = v12;
    if ( v12 < 0 )
      break;
    if ( v15 )
    {
      *((_DWORD *)this + 81) = v11;
      goto LABEL_8;
    }
    if ( ++v11 >= *((_DWORD *)this + 76) )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x222u);
  return v10;
}
