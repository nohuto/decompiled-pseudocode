/*
 * XREFs of ??$AddPropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x1801822C8
 * Callers:
 *     ?UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A64A0 (-UpdatePropertyValue@CPropertyBag@@MEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2DVector4@@@Z @ 0x180182850 (--$UpdatePropertyValue@UD2DVector4@@@CPropertyBag@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEAUD2.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 */

__int64 __fastcall CPropertyBag::AddPropertyValue<D2DVector4>(CResource *this, int a2, int a3, __int64 a4)
{
  DWORD v4; // edi
  DWORD v9; // r9d
  _QWORD *inserted; // r13
  char *v11; // rax
  char *v12; // rbx
  char *v13; // rax
  unsigned int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  int Buffer; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]
  unsigned __int8 NewElement; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v16 = 0;
  v17 = 0LL;
  if ( a4 )
  {
    v19 = 0LL;
    Buffer = a2;
    if ( RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &Buffer) )
    {
      v9 = -2147418113;
      v15 = 324;
      goto LABEL_4;
    }
    NewElement = 0;
    v16 = a2;
    inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 64), &v16, 0x10u, &NewElement);
    if ( !inserted )
    {
      v9 = -2147024882;
      v15 = 334;
      goto LABEL_4;
    }
    switch ( a3 )
    {
      case 17:
        v12 = (char *)operator new(0x10uLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 352;
          goto LABEL_4;
        }
        v12[12] = *(_BYTE *)a4;
        goto LABEL_71;
      case 18:
        v12 = (char *)operator new(0x10uLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 361;
          goto LABEL_4;
        }
        *((_DWORD *)v12 + 3) = *(_DWORD *)a4;
        goto LABEL_71;
      case 35:
        v12 = (char *)operator new(0x14uLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *((_DWORD *)v12 + 4) = 0;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 370;
          goto LABEL_4;
        }
        *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
        goto LABEL_71;
    }
    if ( a3 != 52 )
    {
      if ( a3 == 69 )
      {
        v12 = (char *)operator new(0x1CuLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *((_QWORD *)v12 + 2) = 0LL;
          *((_DWORD *)v12 + 6) = 0;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 388;
          goto LABEL_4;
        }
      }
      else if ( a3 == 70 )
      {
        v12 = (char *)operator new(0x1CuLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *((_QWORD *)v12 + 2) = 0LL;
          *((_DWORD *)v12 + 6) = 0;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 397;
          goto LABEL_4;
        }
      }
      else
      {
        if ( a3 != 71 )
        {
          if ( a3 == 104 )
          {
            v13 = (char *)operator new(0x24uLL);
            v12 = v13;
            if ( v13 )
            {
              memset_0(v13, 0, 0x24uLL);
              *(_QWORD *)v12 = 0LL;
              *((_DWORD *)v12 + 2) = 0;
            }
            else
            {
              v12 = 0LL;
            }
            if ( !v12 )
            {
              v9 = -2147024882;
              v15 = 415;
              goto LABEL_4;
            }
            *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
            *(_QWORD *)(v12 + 28) = *(_QWORD *)(a4 + 16);
          }
          else
          {
            if ( a3 != 265 )
            {
              v15 = 431;
              goto LABEL_3;
            }
            v11 = (char *)operator new(0x4CuLL);
            v12 = v11;
            if ( v11 )
            {
              memset_0(v11, 0, 0x4CuLL);
              *(_QWORD *)v12 = 0LL;
              *((_DWORD *)v12 + 2) = 0;
            }
            else
            {
              v12 = 0LL;
            }
            if ( !v12 )
            {
              v9 = -2147024882;
              v15 = 424;
              goto LABEL_4;
            }
            *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
            *(_OWORD *)(v12 + 28) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v12 + 44) = *(_OWORD *)(a4 + 32);
            *(_OWORD *)(v12 + 60) = *(_OWORD *)(a4 + 48);
          }
LABEL_71:
          *(_DWORD *)v12 = a3;
          *((_DWORD *)v12 + 1) = 1;
          *((_DWORD *)v12 + 2) = a2;
          inserted[1] = v12;
          CResource::InvalidateAnimationSources(this);
          return v4;
        }
        v12 = (char *)operator new(0x1CuLL);
        if ( v12 )
        {
          *((_QWORD *)v12 + 1) = 0LL;
          *((_QWORD *)v12 + 2) = 0LL;
          *((_DWORD *)v12 + 6) = 0;
          *(_QWORD *)v12 = 0LL;
          *((_DWORD *)v12 + 2) = 0;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
        {
          v9 = -2147024882;
          v15 = 406;
          goto LABEL_4;
        }
      }
      *(_OWORD *)(v12 + 12) = *(_OWORD *)a4;
      goto LABEL_71;
    }
    v12 = (char *)operator new(0x18uLL);
    if ( v12 )
    {
      *((_QWORD *)v12 + 1) = 0LL;
      *((_QWORD *)v12 + 2) = 0LL;
      *(_QWORD *)v12 = 0LL;
      *((_DWORD *)v12 + 2) = 0;
    }
    else
    {
      v12 = 0LL;
    }
    if ( !v12 )
    {
      v9 = -2147024882;
      v15 = 379;
      goto LABEL_4;
    }
    *(_QWORD *)(v12 + 12) = *(_QWORD *)a4;
    *((_DWORD *)v12 + 5) = *(_DWORD *)(a4 + 8);
    goto LABEL_71;
  }
  v15 = 312;
LABEL_3:
  v9 = -2147024809;
LABEL_4:
  v4 = v9;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, v15);
  return v4;
}
