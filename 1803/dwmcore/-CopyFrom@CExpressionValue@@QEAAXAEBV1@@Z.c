/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800296B0
 * Callers:
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18001BCFC (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x1800295C4 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003D670 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180052D08 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x180187448 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x180197988 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

void __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  int v2; // eax
  __int128 v3; // xmm0
  __int64 v4; // rdx

  v2 = *((_DWORD *)a2 + 18);
  if ( v2 == 18 )
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *((_DWORD *)this + 18) = 18;
LABEL_3:
    *((_BYTE *)this + 76) = 1;
  }
  else
  {
    switch ( v2 )
    {
      case 11:
        v4 = *((_QWORD *)a2 + 8);
        *((_DWORD *)this + 18) = 11;
        *((_BYTE *)this + 76) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 64, v4);
        break;
      case 17:
        *(_BYTE *)this = *(_BYTE *)a2;
        *((_DWORD *)this + 18) = 17;
        goto LABEL_3;
      case 35:
        *((_DWORD *)this + 18) = 35;
        *(_QWORD *)this = *(_QWORD *)a2;
        goto LABEL_3;
      case 42:
        *((_DWORD *)this + 18) = 42;
        *(_DWORD *)this = *(_DWORD *)a2;
        goto LABEL_3;
      case 52:
        *((_DWORD *)this + 18) = 52;
        *(_QWORD *)this = *(_QWORD *)a2;
        *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
        goto LABEL_3;
      case 69:
        *((_DWORD *)this + 18) = 69;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 70:
        *((_DWORD *)this + 18) = 70;
        v3 = *(_OWORD *)a2;
        *((_BYTE *)this + 76) = 1;
        *(_OWORD *)this = v3;
        break;
      case 71:
        *((_DWORD *)this + 18) = 71;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 104:
        *((_DWORD *)this + 18) = 104;
        *(_OWORD *)this = *(_OWORD *)a2;
        *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
        goto LABEL_3;
      case 265:
        *((_DWORD *)this + 18) = 265;
        *(_OWORD *)this = *(_OWORD *)a2;
        *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
        *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
        *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
        goto LABEL_3;
      default:
        return;
    }
  }
}
