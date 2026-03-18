/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180092EB0
 * Callers:
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180092D44 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1800A2208 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A3FA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800A96CC (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x18015E314 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x18016F5AC (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 * Callees:
 *     <none>
 */

void __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  int v2; // eax
  __int128 v3; // xmm0

  v2 = *((_DWORD *)a2 + 16);
  if ( v2 == 18 )
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *((_DWORD *)this + 16) = 18;
LABEL_3:
    *((_BYTE *)this + 68) = 1;
  }
  else
  {
    switch ( v2 )
    {
      case 17:
        *(_BYTE *)this = *(_BYTE *)a2;
        *((_DWORD *)this + 16) = 17;
        goto LABEL_3;
      case 35:
        *((_DWORD *)this + 16) = 35;
        *(_QWORD *)this = *(_QWORD *)a2;
        goto LABEL_3;
      case 42:
        *((_DWORD *)this + 16) = 42;
        *(_DWORD *)this = *(_DWORD *)a2;
        goto LABEL_3;
      case 52:
        *((_DWORD *)this + 16) = 52;
        *(_QWORD *)this = *(_QWORD *)a2;
        *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
        goto LABEL_3;
      case 69:
        *((_DWORD *)this + 16) = 69;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 70:
        *((_DWORD *)this + 16) = 70;
        v3 = *(_OWORD *)a2;
        *((_BYTE *)this + 68) = 1;
        *(_OWORD *)this = v3;
        break;
      case 71:
        *((_DWORD *)this + 16) = 71;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 104:
        *((_DWORD *)this + 16) = 104;
        *(_OWORD *)this = *(_OWORD *)a2;
        *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
        goto LABEL_3;
      case 265:
        *((_DWORD *)this + 16) = 265;
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
