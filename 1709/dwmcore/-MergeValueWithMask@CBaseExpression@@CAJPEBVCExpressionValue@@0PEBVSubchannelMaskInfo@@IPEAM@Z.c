/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180159000
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1800A2E74 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180093028 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18009306C (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *this,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        __int64 a4,
        float *a5)
{
  int v7; // ecx
  DWORD v9; // r9d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int AsFloatArray; // eax
  DWORD v13; // ebx
  __int64 v14; // rdx
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v16; // rdx
  int v17; // r8d
  unsigned int v19; // [rsp+20h] [rbp-88h]
  float v20; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v21[60]; // [rsp+34h] [rbp-74h] BYREF

  v7 = *((_DWORD *)this + 16);
  if ( *(_DWORD *)a3 == 1 )
  {
    v10 = (unsigned int)(v7 - 18);
    if ( (unsigned int)v10 > 0x33 || (v11 = 0x8000400020001LL, !_bittest64(&v11, v10)) )
    {
      v19 = 1901;
      goto LABEL_23;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 2 )
    {
      v9 = -2147467259;
      v19 = 1920;
LABEL_24:
      v13 = v9;
      goto LABEL_25;
    }
    if ( v7 != 104 && v7 != 265 )
    {
      v19 = 1910;
LABEL_23:
      v9 = -2147024809;
      goto LABEL_24;
    }
  }
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, (unsigned int)(*(_DWORD *)a3 - 1), a5);
  v13 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    v19 = 1930;
    goto LABEL_20;
  }
  v20 = 0.0;
  memset_0(v21, 0, sizeof(v21));
  AsFloatArray = CExpressionValue::GetAsFloatArray(a2, v14, &v20);
  v13 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    v19 = 1933;
LABEL_20:
    v9 = AsFloatArray;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v19);
    return v13;
  }
  if ( *((_BYTE *)a3 + 4) )
  {
    while ( *(_DWORD *)a3 == 1 || *(_DWORD *)a3 == 2 )
    {
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 16));
      if ( (unsigned int)v16 >= ExpressionTypeChannelCount )
      {
        v9 = -2147467259;
        v19 = 1975;
        goto LABEL_24;
      }
      a5[v16] = *(float *)&v21[4 * v17 - 4];
      if ( v17 + 1 >= (unsigned int)*((unsigned __int8 *)a3 + 4) )
        return 0;
    }
    v9 = -2147467259;
    v19 = 1960;
    goto LABEL_24;
  }
  return 0;
}
