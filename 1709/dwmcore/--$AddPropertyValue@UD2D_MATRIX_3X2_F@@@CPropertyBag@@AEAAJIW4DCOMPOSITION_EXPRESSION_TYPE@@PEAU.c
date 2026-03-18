/*
 * XREFs of ??$AddPropertyValue@UD2D_MATRIX_3X2_F@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800A5CF4
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<D2D_MATRIX_3X2_F>(
        CResource *this,
        unsigned int a2,
        int a3,
        __int64 a4)
{
  DWORD v4; // edi
  _QWORD *inserted; // r13
  char *v10; // rax
  char *v11; // rbx
  DWORD v13; // r9d
  char *v14; // rax
  unsigned int v15; // [rsp+20h] [rbp-58h]
  unsigned int Buffer; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  unsigned int v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  Buffer = 0;
  v17 = 0LL;
  if ( !a4 )
  {
    v15 = 312;
    goto LABEL_21;
  }
  v18 = a2;
  v19 = 0LL;
  if ( RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &v18) )
  {
    v13 = -2147418113;
    v15 = 324;
    goto LABEL_23;
  }
  NewElement = 0;
  Buffer = a2;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &Buffer, 0x10u, &NewElement);
  if ( !inserted )
  {
    v13 = -2147024882;
    v15 = 334;
    goto LABEL_23;
  }
  switch ( a3 )
  {
    case 17:
      v11 = (char *)operator new(0x10uLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        v11[12] = *(_BYTE *)a4;
        goto LABEL_16;
      }
      v13 = -2147024882;
      v15 = 352;
      goto LABEL_23;
    case 18:
      v11 = (char *)operator new(0x10uLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        *((_DWORD *)v11 + 3) = *(_DWORD *)a4;
        goto LABEL_16;
      }
      v13 = -2147024882;
      v15 = 361;
      goto LABEL_23;
    case 35:
      v11 = (char *)operator new(0x14uLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *((_DWORD *)v11 + 4) = 0;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        *(_QWORD *)(v11 + 12) = *(_QWORD *)a4;
        goto LABEL_16;
      }
      v13 = -2147024882;
      v15 = 370;
      goto LABEL_23;
    case 52:
      v11 = (char *)operator new(0x18uLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        *(_QWORD *)(v11 + 12) = *(_QWORD *)a4;
        *((_DWORD *)v11 + 5) = *(_DWORD *)(a4 + 8);
        goto LABEL_16;
      }
      v13 = -2147024882;
      v15 = 379;
      goto LABEL_23;
    case 69:
      v11 = (char *)operator new(0x1CuLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_DWORD *)v11 + 6) = 0;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v13 = -2147024882;
        v15 = 388;
        goto LABEL_23;
      }
      goto LABEL_49;
    case 70:
      v11 = (char *)operator new(0x1CuLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_DWORD *)v11 + 6) = 0;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v13 = -2147024882;
        v15 = 397;
        goto LABEL_23;
      }
      goto LABEL_49;
    case 71:
      v11 = (char *)operator new(0x1CuLL);
      if ( v11 )
      {
        *((_QWORD *)v11 + 1) = 0LL;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_DWORD *)v11 + 6) = 0;
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( !v11 )
      {
        v13 = -2147024882;
        v15 = 406;
        goto LABEL_23;
      }
LABEL_49:
      *(_OWORD *)(v11 + 12) = *(_OWORD *)a4;
      goto LABEL_16;
  }
  if ( a3 != 104 )
  {
    if ( a3 == 265 )
    {
      v14 = (char *)operator new(0x4CuLL);
      v11 = v14;
      if ( v14 )
      {
        memset_0(v14, 0, 0x4CuLL);
        *(_QWORD *)v11 = 0LL;
        *((_DWORD *)v11 + 2) = 0;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        *(_OWORD *)(v11 + 12) = *(_OWORD *)a4;
        *(_OWORD *)(v11 + 28) = *(_OWORD *)(a4 + 16);
        *(_OWORD *)(v11 + 44) = *(_OWORD *)(a4 + 32);
        *(_OWORD *)(v11 + 60) = *(_OWORD *)(a4 + 48);
        goto LABEL_16;
      }
      v13 = -2147024882;
      v15 = 424;
LABEL_23:
      v4 = v13;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, v15);
      return v4;
    }
    v15 = 431;
LABEL_21:
    v13 = -2147024809;
    goto LABEL_23;
  }
  v10 = (char *)operator new(0x24uLL);
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x24uLL);
    *(_QWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v11 )
  {
    v13 = -2147024882;
    v15 = 415;
    goto LABEL_23;
  }
  *(_OWORD *)(v11 + 12) = *(_OWORD *)a4;
  *(_QWORD *)(v11 + 28) = *(_QWORD *)(a4 + 16);
LABEL_16:
  *(_DWORD *)v11 = a3;
  *((_DWORD *)v11 + 1) = 1;
  *((_DWORD *)v11 + 2) = a2;
  inserted[1] = v11;
  CResource::InvalidateAnimationSources(this, a2);
  return v4;
}
