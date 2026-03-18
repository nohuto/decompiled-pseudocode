/*
 * XREFs of ??$AddPropertyValue@M@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAM@Z @ 0x180031A3C
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180031BF0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180034C50 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<float>(CResource *this, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // edi
  _QWORD *inserted; // r13
  char *v10; // rbx
  int v12; // r9d
  char *v13; // rax
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
    goto LABEL_15;
  }
  v18 = a2;
  v19 = 0LL;
  if ( RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &v18) )
  {
    v12 = -2147418113;
    v15 = 324;
    goto LABEL_17;
  }
  NewElement = 0;
  Buffer = a2;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &Buffer, 0x10u, &NewElement);
  if ( !inserted )
  {
    v12 = -2147024882;
    v15 = 334;
    goto LABEL_17;
  }
  if ( a3 == 17 )
  {
    v10 = (char *)operator new(0x10uLL);
    if ( v10 )
    {
      *((_QWORD *)v10 + 1) = 0LL;
      *(_QWORD *)v10 = 0LL;
      *((_DWORD *)v10 + 2) = 0;
    }
    else
    {
      v10 = 0LL;
    }
    if ( v10 )
    {
      v10[12] = *(_BYTE *)a4;
      goto LABEL_10;
    }
    v12 = -2147024882;
    v15 = 352;
    goto LABEL_17;
  }
  if ( a3 != 18 )
  {
    switch ( a3 )
    {
      case 35:
        v10 = (char *)operator new(0x14uLL);
        if ( v10 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          *((_DWORD *)v10 + 4) = 0;
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
          goto LABEL_10;
        }
        v12 = -2147024882;
        v15 = 370;
        goto LABEL_17;
      case 52:
        v10 = (char *)operator new(0x18uLL);
        if ( v10 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          *(_QWORD *)(v10 + 12) = *(_QWORD *)a4;
          *((_DWORD *)v10 + 5) = *(_DWORD *)(a4 + 8);
          goto LABEL_10;
        }
        v12 = -2147024882;
        v15 = 379;
        goto LABEL_17;
      case 69:
        v10 = (char *)operator new(0x1CuLL);
        if ( v10 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *((_DWORD *)v10 + 6) = 0;
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( !v10 )
        {
          v12 = -2147024882;
          v15 = 388;
          goto LABEL_17;
        }
        break;
      case 70:
        v10 = (char *)operator new(0x1CuLL);
        if ( v10 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *((_DWORD *)v10 + 6) = 0;
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( !v10 )
        {
          v12 = -2147024882;
          v15 = 397;
          goto LABEL_17;
        }
        break;
      case 71:
        v10 = (char *)operator new(0x1CuLL);
        if ( v10 )
        {
          *((_QWORD *)v10 + 1) = 0LL;
          *((_QWORD *)v10 + 2) = 0LL;
          *((_DWORD *)v10 + 6) = 0;
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( !v10 )
        {
          v12 = -2147024882;
          v15 = 406;
          goto LABEL_17;
        }
        break;
      case 104:
        v14 = (char *)operator new(0x24uLL);
        v10 = v14;
        if ( v14 )
        {
          memset_0(v14, 0, 0x24uLL);
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
          *(_QWORD *)(v10 + 28) = *(_QWORD *)(a4 + 16);
          goto LABEL_10;
        }
        v12 = -2147024882;
        v15 = 415;
        goto LABEL_17;
      case 265:
        v13 = (char *)operator new(0x4CuLL);
        v10 = v13;
        if ( v13 )
        {
          memset_0(v13, 0, 0x4CuLL);
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 2) = 0;
        }
        else
        {
          v10 = 0LL;
        }
        if ( v10 )
        {
          *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
          *(_OWORD *)(v10 + 28) = *(_OWORD *)(a4 + 16);
          *(_OWORD *)(v10 + 44) = *(_OWORD *)(a4 + 32);
          *(_OWORD *)(v10 + 60) = *(_OWORD *)(a4 + 48);
          goto LABEL_10;
        }
        v12 = -2147024882;
        v15 = 424;
LABEL_17:
        v4 = v12;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v15);
        return v4;
      default:
        v15 = 431;
LABEL_15:
        v12 = -2147024809;
        goto LABEL_17;
    }
    *(_OWORD *)(v10 + 12) = *(_OWORD *)a4;
    goto LABEL_10;
  }
  v10 = (char *)operator new(0x10uLL);
  if ( v10 )
  {
    *((_QWORD *)v10 + 1) = 0LL;
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 0;
  }
  else
  {
    v10 = 0LL;
  }
  if ( !v10 )
  {
    v12 = -2147024882;
    v15 = 361;
    goto LABEL_17;
  }
  *((_DWORD *)v10 + 3) = *(_DWORD *)a4;
LABEL_10:
  *(_DWORD *)v10 = a3;
  *((_DWORD *)v10 + 1) = 1;
  *((_DWORD *)v10 + 2) = a2;
  inserted[1] = v10;
  CResource::InvalidateAnimationSources(this, a2);
  return v4;
}
