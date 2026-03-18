/*
 * XREFs of ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x1800A9724
 * Callers:
 *     ?PushConstant@CExpressionValueStack@@QEAAJM@Z @ 0x1800A885C (-PushConstant@CExpressionValueStack@@QEAAJM@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z @ 0x1800A88B4 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DMatrix@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A96CC (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z @ 0x180186368 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DQuaternion@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z @ 0x1801863DC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector2@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z @ 0x180186450 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector3@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z @ 0x1801864CC (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2DVector4@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180186540 (-PushConstant@CExpressionValueStack@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1801865C0 (-PushConstant@CExpressionValueStack@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJ_N@Z @ 0x180186634 (-PushConstant@CExpressionValueStack@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, v3);
    return v1;
  }
  if ( *((_DWORD *)this + 12) == *((_DWORD *)this + 4) )
  {
    v3 = 204;
    goto LABEL_7;
  }
  return 0;
}
