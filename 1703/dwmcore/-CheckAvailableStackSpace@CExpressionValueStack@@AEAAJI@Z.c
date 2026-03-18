/*
 * XREFs of ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x18003390C
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x18001F0CC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x18001F12C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x18001F18C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x18003393C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180135484 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801354F4 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180135568 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x18017F194 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18017F208 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x18017F288 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::CheckAvailableStackSpace(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 4) == -1 )
  {
    v3 = 191;
LABEL_7:
    v1 = -2147418113;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, v3);
    return v1;
  }
  if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
  {
    v3 = 204;
    goto LABEL_7;
  }
  return 0;
}
