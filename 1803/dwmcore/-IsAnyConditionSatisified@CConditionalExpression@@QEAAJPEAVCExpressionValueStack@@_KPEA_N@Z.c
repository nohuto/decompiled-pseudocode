/*
 * XREFs of ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187CD0
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187730 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x18019552C (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KW4ScrollAxis@@PEA_NPEAM@Z @ 0x1801BE4D8 (-ProcessConditionalExpression@CScrollAnimation@@SAJPEAVCConditionalExpression@@PEAVCExpressionVa.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180187688 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CConditionalExpression::IsAnyConditionSatisified(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  bool v4; // bl
  unsigned int v9; // eax
  unsigned int v10; // ebp
  int v11; // ecx
  unsigned int v12; // esi
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 85);
  v10 = 0;
  v11 = *((_DWORD *)this + 73);
  if ( v9 != v11 )
    goto LABEL_11;
  v12 = 0;
  if ( !*((_DWORD *)this + 80) )
  {
LABEL_9:
    v11 = *((_DWORD *)this + 73);
    if ( v9 == v11 )
    {
      v9 = *((_DWORD *)this + 72);
      *((_DWORD *)this + 85) = v9;
    }
LABEL_11:
    if ( a4 )
    {
      if ( v9 != *((_DWORD *)this + 72) && v9 != v11 || *((_QWORD *)this + 41) )
        v4 = 1;
      *a4 = v4;
    }
    return v10;
  }
  while ( 1 )
  {
    v13 = CConditionalExpression::CalculateConditionValue(this, v12, a2, a3, &v15);
    v10 = v13;
    if ( v13 < 0 )
      break;
    if ( v15 )
    {
      *((_DWORD *)this + 85) = v12;
      v9 = v12;
      goto LABEL_9;
    }
    if ( ++v12 >= *((_DWORD *)this + 80) )
    {
      v9 = *((_DWORD *)this + 85);
      goto LABEL_9;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x222u);
  return v10;
}
