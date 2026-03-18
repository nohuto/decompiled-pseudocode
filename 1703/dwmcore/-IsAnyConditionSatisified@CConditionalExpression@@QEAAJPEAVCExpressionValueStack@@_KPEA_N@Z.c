/*
 * XREFs of ?IsAnyConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B6E0
 * Callers:
 *     ?CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B370 (-CalculateValueWorker@CConditionalExpression@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C (-ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpression.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18016B2C4 (-CalculateConditionValue@CConditionalExpression@@AEAAJIPEAVCExpressionValueStack@@_KPEA_N@Z.c)
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
  int v12; // eax
  int v13; // eax
  bool v15; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  if ( a4 )
    *a4 = 0;
  v9 = *((_DWORD *)this + 57);
  v10 = 0;
  if ( *((_DWORD *)this + 69) != v9 )
    goto LABEL_10;
  v11 = 0;
  if ( !*((_DWORD *)this + 64) )
  {
LABEL_8:
    v9 = *((_DWORD *)this + 57);
    if ( *((_DWORD *)this + 69) == v9 )
      *((_DWORD *)this + 69) = *((_DWORD *)this + 56);
LABEL_10:
    if ( a4 )
    {
      v13 = *((_DWORD *)this + 69);
      if ( v13 != *((_DWORD *)this + 56) && v13 != v9 || *((_QWORD *)this + 33) )
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
      *((_DWORD *)this + 69) = v11;
      goto LABEL_8;
    }
    if ( ++v11 >= *((_DWORD *)this + 64) )
      goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x207u);
  return v10;
}
