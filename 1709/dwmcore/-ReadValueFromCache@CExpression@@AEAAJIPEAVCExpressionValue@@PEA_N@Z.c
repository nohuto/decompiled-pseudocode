/*
 * XREFs of ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x180162748
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureCacheBounds@CExpression@@AEAAJI_K@Z @ 0x1800A7E58 (-EnsureCacheBounds@CExpression@@AEAAJI_K@Z.c)
 *     ?LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z @ 0x180161C34 (-LogCacheAccess@CExpression@@AEAAX_NIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpression::ReadValueFromCache(
        CExpression *this,
        unsigned int a2,
        struct CExpressionValue *a3,
        bool *a4)
{
  signed int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  unsigned int v14; // [rsp+20h] [rbp-28h]

  v8 = CExpression::EnsureCacheBounds(this, a2, 8uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 1594;
    goto LABEL_47;
  }
  v10 = *((_QWORD *)this + 38) + a2;
  switch ( *(_DWORD *)v10 )
  {
    case 0:
      *a4 = 0;
      return v9;
    case 0x11:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1615;
        goto LABEL_47;
      }
      *(_BYTE *)a3 = *(_BYTE *)(v10 + 8);
      *((_DWORD *)a3 + 16) = 17;
      goto LABEL_41;
    case 0x12:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0xCuLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1622;
        goto LABEL_47;
      }
      *(_DWORD *)a3 = *(_DWORD *)(v10 + 8);
      *((_DWORD *)a3 + 16) = 18;
      goto LABEL_41;
    case 0x23:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x10uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1629;
        goto LABEL_47;
      }
      *((_DWORD *)a3 + 16) = 35;
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
      goto LABEL_41;
    case 0x34:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x14uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1636;
        goto LABEL_47;
      }
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *(_QWORD *)(v10 + 8);
      *((_DWORD *)a3 + 2) = *(_DWORD *)(v10 + 16);
      goto LABEL_41;
    case 0x45:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1643;
        goto LABEL_47;
      }
      *((_DWORD *)a3 + 16) = 69;
LABEL_22:
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
      goto LABEL_41;
    case 0x46:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1650;
        goto LABEL_47;
      }
      *((_DWORD *)a3 + 16) = 70;
      goto LABEL_22;
    case 0x47:
      v8 = CExpression::EnsureCacheBounds(this, a2, 0x18uLL);
      v9 = v8;
      if ( v8 < 0 )
      {
        v14 = 1657;
        goto LABEL_47;
      }
      *((_DWORD *)a3 + 16) = 71;
      goto LABEL_22;
  }
  if ( *(_DWORD *)v10 != 104 )
  {
    if ( *(_DWORD *)v10 != 265 )
    {
      v9 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x68Eu);
      return v9;
    }
    v8 = CExpression::EnsureCacheBounds(this, a2, 0x48uLL);
    v9 = v8;
    if ( v8 >= 0 )
    {
      *((_DWORD *)a3 + 16) = 265;
      *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(v10 + 24);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(v10 + 40);
      *((_OWORD *)a3 + 3) = *(_OWORD *)(v10 + 56);
      goto LABEL_41;
    }
    v14 = 1671;
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v14);
    return v9;
  }
  v8 = CExpression::EnsureCacheBounds(this, a2, 0x20uLL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v14 = 1664;
    goto LABEL_47;
  }
  *((_DWORD *)a3 + 16) = 104;
  *(_OWORD *)a3 = *(_OWORD *)(v10 + 8);
  *((_QWORD *)a3 + 2) = *(_QWORD *)(v10 + 24);
LABEL_41:
  *((_BYTE *)a3 + 68) = 1;
  v12 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL);
  if ( (v12 & 0x40000000) != 0 || v12 < 0 )
    CExpression::LogCacheAccess(this, v11, a2, a3);
  *a4 = 1;
  return v9;
}
