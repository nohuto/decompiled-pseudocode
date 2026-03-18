/*
 * XREFs of ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180052CD4
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x180052014 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180052D08 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x180140460 (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x1801BACE8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1801BAD68 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x1801BADE8 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x1801BAE6C (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801BAEEC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801BAF74 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x1801BAFF4 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpressionValueStack::CheckAvailableStackSpace(CExpressionValueStack *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h]

  if ( *((_DWORD *)this + 4) == -1 )
  {
    v3 = 232;
LABEL_7:
    v1 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CExpressionValueStack::MILINSTRUMENTATIONHRESULTLIST,
      1u,
      -2147418113,
      v3);
    return v1;
  }
  if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
  {
    v3 = 245;
    goto LABEL_7;
  }
  return 0;
}
