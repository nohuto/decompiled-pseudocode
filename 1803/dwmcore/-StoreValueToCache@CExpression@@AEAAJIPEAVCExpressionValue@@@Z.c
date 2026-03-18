/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180053660
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180054548 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v6 = -2147024362;
    v9 = 695;
    goto LABEL_49;
  }
  if ( a2 + 8 > *((_DWORD *)this + 82) )
  {
    v6 = -2147483637;
    v9 = 700;
LABEL_49:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v9);
    v17 = 1548;
    goto LABEL_50;
  }
  v4 = *((_QWORD *)this + 40) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 18);
  v5 = *((_DWORD *)a3 + 18);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v6 = -2147024362;
      v16 = 695;
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 82) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v6 = -2147483637;
      v16 = 700;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v16);
    v17 = 1579;
LABEL_50:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v17);
    return v6;
  }
  if ( v5 != 104 )
  {
    switch ( v5 )
    {
      case 11:
        v14 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v6 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x66Au);
        else
          Microsoft::WRL::ComPtr<CPathData>::operator=(v4 + 8, *((_QWORD *)a3 + 8));
        return v6;
      case 17:
        v10 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v6 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x624u);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x632u);
        return v6;
      case 42:
        v13 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v6 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x663u);
        else
          *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x639u);
        return v6;
      case 69:
        v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v11;
        if ( v11 >= 0 )
          goto LABEL_22;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x640u);
        return v6;
      case 70:
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v8;
        if ( v8 >= 0 )
          goto LABEL_22;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x647u);
        return v6;
      case 71:
        v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v6 = v12;
        if ( v12 >= 0 )
        {
LABEL_22:
          result = v6;
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          return result;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x64Eu);
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
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x65Cu);
        break;
      default:
        v6 = -2147024809;
        v17 = 1649;
        goto LABEL_50;
    }
    return v6;
  }
  if ( a2 + 32 < a2 )
  {
    v6 = -2147024362;
    v15 = 695;
    goto LABEL_44;
  }
  if ( a2 + 32 > *((_DWORD *)this + 82) )
  {
    v6 = -2147483637;
    v15 = 700;
LABEL_44:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v15);
    v17 = 1621;
    goto LABEL_50;
  }
  result = 0LL;
  *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
  *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
  return result;
}
