/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x180020C3C
 * Callers:
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x180030084 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180135348 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002B054 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002B088 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CExpressionValue::ApplyMaskToValue(CExpressionValue *this, struct SubchannelMaskInfo *a2)
{
  __int64 v4; // rdx
  unsigned int ExpressionTypeChannelCount; // eax
  unsigned int v6; // edi
  unsigned int v7; // r15d
  unsigned int v8; // edx
  int AsFloatArray; // eax
  __int64 v10; // r8
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // edi
  int v16; // r9d
  unsigned int v17; // edi
  unsigned int v18; // edi
  unsigned int v19; // edi
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned __int64 v23; // xmm1_8
  bool v24; // zf
  __int128 v25; // xmm0
  int v26; // eax
  unsigned int v27; // [rsp+28h] [rbp-79h]
  __int128 v28; // [rsp+58h] [rbp-49h] BYREF
  __int128 v29; // [rsp+68h] [rbp-39h]
  __int128 v30; // [rsp+78h] [rbp-29h]
  __int128 v31; // [rsp+88h] [rbp-19h]
  float v32; // [rsp+98h] [rbp-9h] BYREF
  char v33[60]; // [rsp+9Ch] [rbp-5h] BYREF

  v32 = 0.0;
  memset_0(v33, 0, sizeof(v33));
  LODWORD(v28) = 0;
  memset_0((char *)&v28 + 4, 0, 0x3CuLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)this + 16), v4);
  v6 = *((unsigned __int8 *)a2 + 4);
  v7 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, v8, &v32);
  v10 = 0LL;
  v11 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    v27 = 647;
    v16 = AsFloatArray;
    goto LABEL_32;
  }
  if ( !v6 )
  {
LABEL_8:
    v13 = v6 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v17 = v14 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( !v18 )
          {
            v24 = *((_DWORD *)this + 16) == 71;
            v25 = v28;
            *((_BYTE *)this + 68) = 1;
            *(_OWORD *)this = v25;
            if ( v24 )
              *((_DWORD *)this + 16) = 71;
            else
              *((_DWORD *)this + 16) = 69;
            return v11;
          }
          v19 = v18 - 2;
          if ( v19 )
          {
            if ( v19 != 10 )
            {
              v27 = 751;
              goto LABEL_17;
            }
            v20 = v29;
            *(_OWORD *)this = v28;
            *((_DWORD *)this + 16) = 265;
            v21 = v30;
            *((_OWORD *)this + 1) = v20;
            v22 = v31;
            *((_OWORD *)this + 2) = v21;
            *((_OWORD *)this + 3) = v22;
          }
          else
          {
            v23 = _mm_unpacklo_ps((__m128)(unsigned int)v29, (__m128)DWORD1(v29)).m128_u64[0];
            *(_OWORD *)this = v28;
            *((_DWORD *)this + 16) = 104;
            *((_QWORD *)this + 2) = v23;
          }
        }
        else
        {
          v26 = DWORD2(v28);
          *(_QWORD *)this = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
          *((_DWORD *)this + 2) = v26;
          *((_DWORD *)this + 16) = 52;
        }
      }
      else
      {
        *(_QWORD *)this = _mm_unpacklo_ps((__m128)(unsigned int)v28, (__m128)DWORD1(v28)).m128_u64[0];
        *((_DWORD *)this + 16) = 35;
      }
    }
    else
    {
      *(_DWORD *)this = v28;
      *((_DWORD *)this + 16) = 18;
    }
    *((_BYTE *)this + 68) = 1;
    return v11;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)a2 == 1 )
    {
      v12 = (*((unsigned __int8 *)a2 + 8) >> (2 * (*((_BYTE *)a2 + 4) - v10) - 2)) & 3;
      goto LABEL_5;
    }
    if ( *(_DWORD *)a2 != 2 )
      break;
    v12 = (*((_QWORD *)a2 + 1) >> (4 * (*((_BYTE *)a2 + 4) - (unsigned __int8)v10) - 4)) & 0xFLL;
LABEL_5:
    if ( (unsigned int)v12 >= v7 )
    {
      v27 = 685;
      goto LABEL_17;
    }
    if ( (unsigned int)v10 >= 0x10 )
    {
      v27 = 696;
      goto LABEL_17;
    }
    *((float *)&v28 + v10) = *(float *)&v33[4 * v12 - 4];
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= v6 )
      goto LABEL_8;
  }
  v27 = 674;
LABEL_17:
  v16 = -2147467259;
  LODWORD(v10) = 0;
  v11 = -2147467259;
LABEL_32:
  MilInstrumentationCheckHR(0x14u, 0LL, v10, v16, v27);
  return v11;
}
