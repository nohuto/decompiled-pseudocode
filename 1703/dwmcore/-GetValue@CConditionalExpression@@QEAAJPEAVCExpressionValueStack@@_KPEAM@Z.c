/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x18016B5CC
 * Callers:
 *     ?ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpressionValueStack@@_KPEA_NPEAM@Z @ 0x180181D4C (-ProcessConditionalExpression@CScrollAnimation@@IEAAJPEAVCConditionalExpression@@PEAVCExpression.c)
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ @ 0x180181E40 (-SelectInertiaModifier@CScrollAnimation@@QEAAPEAUIAccelerator@@XZ.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x180188C80 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  __int64 v4; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rdx
  char v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  *a4 = 0.0;
  v7 = (*(__int64 (__fastcall **)(CConditionalExpression *, struct CExpressionValueStack *, __int64, char *))(v4 + 168))(
         this,
         a2,
         a3,
         &v12);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1D8u);
  }
  else
  {
    v9 = *((_DWORD *)a2 + 4);
    v10 = *((_QWORD *)a2 + 3);
    *((_DWORD *)a2 + 4) = v9 - 1;
    *a4 = *(float *)(v10 + 72LL * (unsigned int)(2 * v9 - 2));
  }
  return v8;
}
