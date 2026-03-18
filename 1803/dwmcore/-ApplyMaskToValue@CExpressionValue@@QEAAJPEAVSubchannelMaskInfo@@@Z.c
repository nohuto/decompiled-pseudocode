/*
 * XREFs of ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801AE054
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?SampleStartingValue@CKeyframeAnimation@@AEAAJXZ @ 0x18003D2F0 (-SampleStartingValue@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801404D8 (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNo.c)
 *     ?SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18019D19C (-SampleInitialValueAndFinalValueIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18002983C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180029880 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
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
  int v17; // r9d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // xmm1_8
  int v22; // eax
  int v23; // eax
  unsigned int v25; // [rsp+28h] [rbp-79h]
  __int128 v26; // [rsp+58h] [rbp-49h] BYREF
  __int128 v27; // [rsp+68h] [rbp-39h]
  __int128 v28; // [rsp+78h] [rbp-29h]
  __int128 v29; // [rsp+88h] [rbp-19h]
  float v30[16]; // [rsp+98h] [rbp-9h] BYREF

  memset_0(v30, 0, sizeof(v30));
  memset_0(&v26, 0, 0x40uLL);
  ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((_DWORD *)this + 18));
  v5 = *((unsigned __int8 *)a2 + 4);
  v6 = ExpressionTypeChannelCount;
  AsFloatArray = CExpressionValue::GetAsFloatArray(this, v7, v30);
  v9 = 0LL;
  v10 = AsFloatArray;
  if ( AsFloatArray < 0 )
  {
    v25 = 697;
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
          if ( v15 )
          {
            v16 = v15 - 2;
            if ( v16 )
            {
              if ( v16 != 10 )
              {
                v25 = 801;
                goto LABEL_18;
              }
              v18 = v27;
              *(_OWORD *)this = v26;
              *((_DWORD *)this + 18) = 265;
              v19 = v28;
              *((_OWORD *)this + 1) = v18;
              v20 = v29;
              *((_OWORD *)this + 2) = v19;
              *((_OWORD *)this + 3) = v20;
            }
            else
            {
              v21 = v27;
              *(_OWORD *)this = v26;
              *((_DWORD *)this + 18) = 104;
              *((_QWORD *)this + 2) = v21;
            }
          }
          else
          {
            v22 = 71;
            *(_OWORD *)this = v26;
            if ( *((_DWORD *)this + 18) != 71 )
              v22 = 69;
            *((_DWORD *)this + 18) = v22;
          }
        }
        else
        {
          v23 = DWORD2(v26);
          *(_QWORD *)this = v26;
          *((_DWORD *)this + 2) = v23;
          *((_DWORD *)this + 18) = 52;
        }
        goto LABEL_30;
      }
      *((_DWORD *)this + 1) = DWORD1(v26);
      *((_DWORD *)this + 18) = 35;
    }
    else
    {
      *((_DWORD *)this + 18) = 18;
    }
    *(_DWORD *)this = v26;
LABEL_30:
    *((_BYTE *)this + 76) = 1;
    return v10;
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
      v25 = 735;
      goto LABEL_18;
    }
    if ( (unsigned int)v9 >= 0x10 )
    {
      v25 = 746;
      goto LABEL_18;
    }
    *((float *)&v26 + v9) = v30[v11];
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v5 )
      goto LABEL_10;
  }
  v25 = 724;
LABEL_18:
  v17 = -2147467259;
  LODWORD(v9) = 0;
  v10 = -2147467259;
LABEL_32:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, v9, v17, v25);
  return v10;
}
