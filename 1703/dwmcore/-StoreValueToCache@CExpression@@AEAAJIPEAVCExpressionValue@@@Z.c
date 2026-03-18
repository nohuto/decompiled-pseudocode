/*
 * XREFs of ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x1800327E0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800333D8 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CExpression::StoreValueToCache(CExpression *this, unsigned int a2, struct CExpressionValue *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 result; // rax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  if ( a2 + 8 < a2 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1F4u);
    goto LABEL_42;
  }
  if ( a2 + 8 > *((_DWORD *)this + 66) )
  {
    v8 = -2147483637;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x1F9u);
LABEL_42:
    v13 = v8;
    v14 = 1298;
    goto LABEL_43;
  }
  v4 = *((_QWORD *)this + 32) + a2;
  if ( !*(_DWORD *)v4 )
    *(_DWORD *)v4 = *((_DWORD *)a3 + 16);
  v5 = *((_DWORD *)a3 + 16);
  if ( v5 == 18 )
  {
    if ( a2 + 12 < a2 )
    {
      v8 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1F4u);
    }
    else
    {
      if ( a2 + 12 <= *((_DWORD *)this + 66) )
      {
        v6 = 0;
        *(_DWORD *)(v4 + 8) = *(_DWORD *)a3;
        return v6;
      }
      v8 = -2147483637;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x1F9u);
    }
    v13 = v8;
    v14 = 1329;
LABEL_43:
    v6 = v8;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v14);
    return v6;
  }
  switch ( v5 )
  {
    case 17:
      v9 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v6 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x52Au);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x538u);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x53Fu);
      return v6;
    case 69:
      v10 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v10;
      if ( v10 >= 0 )
        goto LABEL_28;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x546u);
      return v6;
    case 70:
      v11 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v11;
      if ( v11 >= 0 )
        goto LABEL_28;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x54Du);
      return v6;
    case 71:
      v12 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v6 = v12;
      if ( v12 >= 0 )
LABEL_28:
        *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x554u);
      return v6;
    case 104:
      if ( a2 + 32 < a2 )
      {
        v8 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0x1F4u);
      }
      else
      {
        if ( a2 + 32 <= *((_DWORD *)this + 66) )
        {
          result = 0LL;
          *(_OWORD *)(v4 + 8) = *(_OWORD *)a3;
          *(_QWORD *)(v4 + 24) = *((_QWORD *)a3 + 2);
          return result;
        }
        v8 = -2147483637;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147483637, 0x1F9u);
      }
      v13 = v8;
      v14 = 1371;
      goto LABEL_43;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0x562u);
      break;
    default:
      v6 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x569u);
      return v6;
  }
  return v6;
}
