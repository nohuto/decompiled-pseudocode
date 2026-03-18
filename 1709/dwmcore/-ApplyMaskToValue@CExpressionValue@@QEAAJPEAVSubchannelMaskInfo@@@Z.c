/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18018766C
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A2860 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x1800A3CE0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011D9E0 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x180173F8C (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180093028 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18009306C (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, struct SubchannelMaskInfo *a2)
{
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v5; // edi
  unsigned int v6; // r15d
  __int64 v7; // rdx
  int AsFloatArray; // eax
  __int64 v9; // r8
  unsigned int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // edi
  unsigned int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // edi
  DWORD v17; // r9d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  unsigned __int64 v21; // xmm1_8
  bool v22; // zf
  __int128 v23; // xmm0
  int v24; // eax
  unsigned int v26; // [rsp+28h] [rbp-79h]
  __int128 v27; // [rsp+58h] [rbp-49h] BYREF
  __int128 v28; // [rsp+68h] [rbp-39h]
  __int128 v29; // [rsp+78h] [rbp-29h]
  __int128 v30; // [rsp+88h] [rbp-19h]
  float v31; // [rsp+98h] [rbp-9h] BYREF
  char v32[60]; // [rsp+9Ch] [rbp-5h] BYREF

  v31 = 0.0;
  memset_0(v32, 0, sizeof(v32));
  LODWORD(v27) = 0;
  memset_0((char *)&v27 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 16));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, v7, &v31);
  v9 = 0LL;
  v10 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    v26 = 690;
    v17 = AsFloatArray;
    goto LABEL_32;
  }
  if ( !v5 )
  {
LABEL_10:
    v12 = v5 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( !v15 )
          {
            v22 = *((_DWORD *)this + 16) == 71;
            v23 = v27;
            *((_BYTE *)this + 68) = 1;
            *(_OWORD *)this = v23;
            if ( v22 )
              *((_DWORD *)this + 16) = 71;
            else
              *((_DWORD *)this + 16) = 69;
            return v10;
          }
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 10 )
            {
              v26 = 794;
              goto LABEL_18;
            }
            v18 = v28;
            *(_OWORD *)this = v27;
            *((_DWORD *)this + 16) = 265;
            v19 = v29;
            *((_OWORD *)this + 1) = v18;
            v20 = v30;
            *((_OWORD *)this + 2) = v19;
            *((_OWORD *)this + 3) = v20;
          }
          else
          {
            v21 = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
            *(_OWORD *)this = v27;
            *((_DWORD *)this + 16) = 104;
            *((_QWORD *)this + 2) = v21;
          }
        }
        else
        {
          v24 = DWORD2(v27);
          *(_QWORD *)this = _mm_unpacklo_ps((__m128)(unsigned int)v27, (__m128)DWORD1(v27)).m128_u64[0];
          *((_DWORD *)this + 2) = v24;
          *((_DWORD *)this + 16) = 52;
        }
LABEL_30:
        *((_BYTE *)this + 68) = 1;
        return v10;
      }
      *((_DWORD *)this + 1) = DWORD1(v27);
      *((_DWORD *)this + 16) = 35;
    }
    else
    {
      *((_DWORD *)this + 16) = 18;
    }
    *(_DWORD *)this = v27;
    goto LABEL_30;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v11 = (*((unsigned __int8 *)a2 + 8) >> (2 * (*((_BYTE *)a2 + 4) - v9) - 2)) & 3;
      goto LABEL_7;
    }
    if ( *(_DWORD *)a2 != 2 )
      break;
    v11 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)v9) - 4)) & 0xFLL;
LABEL_7:
    if ( (unsigned int)v11 >= v6 )
    {
      v26 = 728;
      goto LABEL_18;
    }
    if ( (unsigned int)v9 >= 0x10 )
    {
      v26 = 739;
      goto LABEL_18;
    }
    *((float *)&v27 + v9) = *(float *)&v32[4 * v11 - 4];
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_10;
  }
  v26 = 717;
LABEL_18:
  v17 = -2147467259;
  LODWORD(v9) = 0;
  v10 = -2147467259;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, v9, v17, v26);
  return v10;
}
