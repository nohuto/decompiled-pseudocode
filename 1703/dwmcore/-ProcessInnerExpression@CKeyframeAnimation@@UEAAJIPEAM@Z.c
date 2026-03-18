/*
 * XREFs of ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x18016AD50
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x18002B0D0 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessInnerExpression(CKeyframeAnimation *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // edi
  __int64 v7; // rsi
  int v8; // eax
  float v9; // xmm1_4
  bool v11; // [rsp+30h] [rbp-29h] BYREF
  float v12[16]; // [rsp+40h] [rbp-19h] BYREF
  int v13; // [rsp+80h] [rbp+27h]

  v3 = a2;
  memset_0(v12, 0, sizeof(v12));
  v13 = 18;
  if ( (unsigned int)v3 >= *((_DWORD *)this + 18) )
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x636u);
LABEL_16:
    *(_QWORD *)a3 = 0LL;
    *((_QWORD *)a3 + 1) = 0LL;
    return v6;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v3);
  v8 = CBaseExpression::CalculateValue(
         (CBaseExpression *)v7,
         *((struct CExpressionValueStack **)this + 14),
         *((CComponentTransform3D **)this - 9),
         &v11);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x63Du);
    goto LABEL_16;
  }
  CExpressionValue::CopyFrom((CExpressionValue *)v12, (const struct CExpressionValue *)(v7 + 64));
  switch ( v13 )
  {
    case 18:
      goto LABEL_13;
    case 35:
      a3[1] = v12[1];
LABEL_13:
      *a3 = v12[0];
      return 0;
    case 52:
      v9 = v12[1];
      *a3 = v12[0];
      *(_QWORD *)(a3 + 1) = __PAIR64__(LODWORD(v12[2]), LODWORD(v9));
      break;
    default:
      if ( v13 != 69 && (unsigned int)(v13 - 70) >= 2 )
      {
        v6 = -2147467259;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x67Du);
        goto LABEL_16;
      }
      *(_OWORD *)a3 = *(_OWORD *)v12;
      break;
  }
  return 0;
}
