/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800A7600
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800A7E58 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  DWORD v6; // edi
  __int64 result; // rax
  signed int v8; // eax
  signed int v9; // eax
  signed int v10; // eax
  signed int v11; // eax
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x294u);
    goto LABEL_43;
  }
  if ( a2 + 8 > *((_DWORD *)this + 78) )
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000000B, 0x299u);
LABEL_43:
    v12 = 1483;
    goto LABEL_44;
  }
  v4 = *((_QWORD *)this + 38) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 16);
  v5 = *((_DWORD *)a3 + 16);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x294u);
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 78) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v6 = -2147483637;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000000B, 0x299u);
    }
    v12 = 1514;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, v12);
    return v6;
  }
  if ( v5 != 104 )
  {
    switch ( v5 )
    {
      case 17:
        v9 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x5E3u);
        else
          *(_BYTE *)(v4 + 8) = *(_BYTE *)a3;
        return v6;
      case 35:
        result = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, result, 0x5F1u);
        return v6;
      case 52:
        LODWORD(result) = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_QWORD *)(v4 + 8) = *(_QWORD *)a3;
          *(_DWORD *)(v4 + 16) = *((_DWORD *)a3 + 2);
          return (unsigned int)result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, result, 0x5F8u);
        return v6;
      case 69:
        v10 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v10;
        if ( v10 >= 0 )
          goto LABEL_20;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x5FFu);
        return v6;
      case 70:
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v8;
        if ( v8 >= 0 )
          goto LABEL_20;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x606u);
        return v6;
      case 71:
        v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v11;
        if ( v11 >= 0 )
        {
LABEL_20:
          result = v6;
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x60Du);
        return v6;
      case 265:
        result = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
        v6 = result;
        if ( (int)result >= 0 )
        {
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          *(_OWORD *)(v4 + 24) = *((_OWORD *)a3 + 1);
          *(_OWORD *)(v4 + 40) = *((_OWORD *)a3 + 2);
          *(_OWORD *)(v4 + 56) = *((_OWORD *)a3 + 3);
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, result, 0x61Bu);
        break;
      default:
        v6 = -2147024809;
        v12 = 1570;
        goto LABEL_44;
    }
    return v6;
  }
  if ( a2 + 32 < a2 )
  {
    v6 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x294u);
    goto LABEL_38;
  }
  if ( a2 + 32 > *((_DWORD *)this + 78) )
  {
    v6 = -2147483637;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000000B, 0x299u);
LABEL_38:
    v12 = 1556;
    goto LABEL_44;
  }
  result = 0LL;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
  *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
  return result;
}
