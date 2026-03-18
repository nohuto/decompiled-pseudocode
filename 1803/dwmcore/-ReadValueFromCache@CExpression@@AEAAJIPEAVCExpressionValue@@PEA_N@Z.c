/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x1800535D8
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x180054548 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18018B994 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x18018BA80 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  int v8; // eax
  bool v9; // bp
  unsigned int v10; // ebx
  __int64 v11; // rsi
  int v12; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  bool v18; // dl
  __int64 v19; // rdx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v9 = 0;
  v10 = v8;
  if ( v8 < 0 )
  {
    v25 = 1673;
    goto LABEL_58;
  }
  v11 = *((_QWORD *)this + 40) + a2;
  v12 = *(_DWORD *)v11;
  if ( *(_DWORD *)v11 )
  {
    if ( v12 <= 52 )
    {
      if ( v12 == 52 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 52;
          *(_QWORD *)a3 = *(_QWORD *)(v11 + 8);
          *((_DWORD *)a3 + 2) = *(_DWORD *)(v11 + 16);
          goto LABEL_51;
        }
        v25 = 1715;
        goto LABEL_58;
      }
      v14 = v12 - 11;
      if ( !v14 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v19 = *(_QWORD *)(v11 + 8);
          *((_DWORD *)a3 + 18) = 11;
          *((_BYTE *)a3 + 76) = 1;
          Microsoft::WRL::ComPtr<CPathData>::operator=((char *)a3 + 64, v19);
          goto LABEL_52;
        }
        v25 = 1764;
        goto LABEL_58;
      }
      v15 = v14 - 6;
      if ( !v15 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          *(_BYTE *)a3 = *(_BYTE *)(v11 + 8);
          *((_DWORD *)a3 + 18) = 17;
          goto LABEL_51;
        }
        v25 = 1694;
        goto LABEL_58;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          *(_DWORD *)a3 = *(_DWORD *)(v11 + 8);
          *((_DWORD *)a3 + 18) = 18;
          goto LABEL_51;
        }
        v25 = 1701;
        goto LABEL_58;
      }
      v17 = v16 - 17;
      if ( !v17 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 35;
          *(_QWORD *)a3 = *(_QWORD *)(v11 + 8);
          goto LABEL_51;
        }
        v25 = 1708;
LABEL_58:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v25);
        return v10;
      }
      if ( v17 == 7 )
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
        v10 = v8;
        if ( v8 >= 0 )
        {
          *((_DWORD *)a3 + 18) = 42;
          *(_DWORD *)a3 = *(_DWORD *)(v11 + 8);
LABEL_51:
          *((_BYTE *)a3 + 76) = 1;
LABEL_52:
          v24 = *(_DWORD *)(*((_QWORD *)this + 35) + 4LL);
          if ( (v24 & 0x40000000) != 0 || v24 < 0 )
            CExpression::LogCacheAccess(this, v18, a2, a3);
          v9 = 1;
          goto LABEL_3;
        }
        v25 = 1757;
        goto LABEL_58;
      }
LABEL_37:
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x6EBu);
      return v10;
    }
    v20 = v12 - 69;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( v22 )
        {
          v23 = v22 - 33;
          if ( !v23 )
          {
            v8 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
            v10 = v8;
            if ( v8 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 104;
              *(_OWORD *)a3 = *(_OWORD *)(v11 + 8);
              *((_QWORD *)a3 + 2) = *(_QWORD *)(v11 + 24);
              goto LABEL_51;
            }
            v25 = 1743;
            goto LABEL_58;
          }
          if ( v23 == 161 )
          {
            v8 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
            v10 = v8;
            if ( v8 >= 0 )
            {
              *((_DWORD *)a3 + 18) = 265;
              *(_OWORD *)a3 = *(_OWORD *)(v11 + 8);
              *((_OWORD *)a3 + 1) = *(_OWORD *)(v11 + 24);
              *((_OWORD *)a3 + 2) = *(_OWORD *)(v11 + 40);
              *((_OWORD *)a3 + 3) = *(_OWORD *)(v11 + 56);
              goto LABEL_51;
            }
            v25 = 1750;
            goto LABEL_58;
          }
          goto LABEL_37;
        }
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v10 = v8;
        if ( v8 < 0 )
        {
          v25 = 1736;
          goto LABEL_58;
        }
        *((_DWORD *)a3 + 18) = 71;
      }
      else
      {
        v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
        v10 = v8;
        if ( v8 < 0 )
        {
          v25 = 1729;
          goto LABEL_58;
        }
        *((_DWORD *)a3 + 18) = 70;
      }
    }
    else
    {
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v10 = v8;
      if ( v8 < 0 )
      {
        v25 = 1722;
        goto LABEL_58;
      }
      *((_DWORD *)a3 + 18) = 69;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v11 + 8);
    goto LABEL_51;
  }
LABEL_3:
  *a4 = v9;
  return v10;
}
