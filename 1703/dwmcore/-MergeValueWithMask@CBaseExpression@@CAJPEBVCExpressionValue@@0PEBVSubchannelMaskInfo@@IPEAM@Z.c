/*
 * XREFs of ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x18001C618
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x180020A00 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18002E81C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18002B054 (-GetExpressionTypeChannelCount@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CBaseExpression::MergeValueWithMask(
        const struct CExpressionValue *Src,
        const struct CExpressionValue *a2,
        const struct SubchannelMaskInfo *a3,
        __int64 a4,
        float *a5)
{
  int v8; // edx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  unsigned int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // r8d
  char v18; // cl
  __int64 v19; // rdx
  unsigned int ExpressionTypeChannelCount; // eax
  __int64 v21; // rdx
  unsigned int v22; // r8d
  __int64 v23; // rax
  int v25; // ebx
  int v26; // r9d
  int v27; // ebx
  unsigned int v28; // [rsp+20h] [rbp-88h]
  int v29; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v30[60]; // [rsp+34h] [rbp-74h] BYREF

  v8 = *((_DWORD *)Src + 16);
  if ( *(_DWORD *)a3 == 1 )
  {
    v9 = (unsigned int)(v8 - 18);
    if ( (unsigned int)v9 <= 0x33 )
    {
      v10 = 0x8000400020001LL;
      if ( _bittest64(&v10, v9) )
        goto LABEL_4;
    }
    v28 = 1721;
LABEL_57:
    v26 = -2147024809;
    v11 = -2147024809;
    goto LABEL_58;
  }
  if ( *(_DWORD *)a3 != 2 )
  {
    v28 = 1740;
LABEL_36:
    v25 = -2147467259;
LABEL_39:
    v11 = v25;
    v26 = v25;
LABEL_58:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, v28);
    return v11;
  }
  if ( v8 != 265 && v8 != 104 )
  {
    v28 = 1730;
    goto LABEL_57;
  }
LABEL_4:
  v11 = 0;
  *a5 = 0.0;
  if ( !*((_BYTE *)Src + 68) )
  {
    v25 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1A0u);
    goto LABEL_38;
  }
  v12 = *((_DWORD *)Src + 16);
  if ( v12 >= 17 && (v12 == 52 || v12 == 35 || v12 <= 18 || v12 > 68 && (v12 == 265 || v12 <= 71 || v12 == 104)) )
    v13 = v12 >> 4;
  else
    v13 = 0;
  if ( v13 > 0x10 )
  {
    v25 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1A9u);
LABEL_38:
    v28 = 1750;
    goto LABEL_39;
  }
  memcpy_0(a5, Src, 4LL * v13);
  memset_0(v30, 0, sizeof(v30));
  v29 = 0;
  if ( !*((_BYTE *)a2 + 68) )
  {
    v27 = -2147023728;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023728, 0x1A0u);
LABEL_54:
    v11 = v27;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x6D9u);
    return v11;
  }
  v14 = *((_DWORD *)a2 + 16);
  if ( v14 >= 17 && (v14 == 35 || v14 <= 18 || v14 == 52 || v14 > 68 && (v14 <= 71 || v14 == 104 || v14 == 265)) )
    v15 = v14 >> 4;
  else
    v15 = 0;
  if ( v15 > 0x10 )
  {
    v27 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1A9u);
    goto LABEL_54;
  }
  memcpy_0(&v29, a2, 4LL * v15);
  LOBYTE(v16) = *((_BYTE *)a3 + 4);
  LOBYTE(v17) = 0;
  v18 = v16;
  if ( (_BYTE)v16 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)a3 == 1 )
      {
        v19 = (*((unsigned __int8 *)a3 + 8) >> (2 * (v16 - v17) - 2)) & 3;
      }
      else
      {
        if ( *(_DWORD *)a3 != 2 )
        {
          v28 = 1780;
          goto LABEL_36;
        }
        v19 = (*((_QWORD *)a3 + 1) >> (4 * (v18 - (unsigned __int8)v17) - 4)) & 0xFLL;
      }
      ExpressionTypeChannelCount = GetExpressionTypeChannelCount(*((unsigned int *)Src + 16), v19);
      if ( (unsigned int)v21 >= ExpressionTypeChannelCount || (unsigned int)v21 >= 0x10 )
        break;
      v23 = v22;
      v17 = v22 + 1;
      a5[v21] = *(float *)&v30[4 * v23 - 4];
      v16 = *((unsigned __int8 *)a3 + 4);
      v18 = *((_BYTE *)a3 + 4);
      if ( v17 >= v16 )
        return v11;
    }
    v28 = 1795;
    goto LABEL_36;
  }
  return v11;
}
