/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x1801820E8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18003B590 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18003C8AC (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002983C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180029880 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *this,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        __int64 a4,
        float *a5)
{
  int v7; // ecx
  int v9; // r9d
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int AsFloatArray; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v20; // [rsp+20h] [rbp-88h]
  float v21[16]; // [rsp+30h] [rbp-78h] BYREF

  v7 = *((_DWORD *)this + 18);
  if ( *(_DWORD *)a3 == 1 )
  {
    v10 = (unsigned int)(v7 - 18);
    if ( (unsigned int)v10 > 0x33 || (v11 = 0x8000400020001LL, !_bittest64(&v11, v10)) )
    {
      v20 = 1794;
      goto LABEL_22;
    }
  }
  else
  {
    if ( *(_DWORD *)a3 != 2 )
    {
      v9 = -2147467259;
      v20 = 1813;
      goto LABEL_23;
    }
    if ( v7 != 104 && v7 != 265 )
    {
      v20 = 1803;
LABEL_22:
      v9 = -2147024809;
      goto LABEL_23;
    }
  }
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, (unsigned int)(*(_DWORD *)a3 - 1), a5);
  v13 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, AsFloatArray, 0x71Fu);
    return v13;
  }
  memset_0(v21, 0, sizeof(v21));
  v15 = CExpressionValue::GetAsFloatArray(a2, v14, v21);
  v13 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x722u);
    return v13;
  }
  if ( !*((_BYTE *)a3 + 4) )
    return 0;
  while ( *(_DWORD *)a3 == 1 || *(_DWORD *)a3 == 2 )
  {
    ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
    if ( (unsigned int)v17 >= ExpressionTypeChannelCount )
    {
      v9 = -2147467259;
      v20 = 1868;
      goto LABEL_23;
    }
    a5[v17] = v21[v18];
    if ( (int)v18 + 1 >= (unsigned int)*((unsigned __int8 *)a3 + 4) )
      return 0;
  }
  v9 = -2147467259;
  v20 = 1853;
LABEL_23:
  v13 = v9;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, v20);
  return v13;
}
