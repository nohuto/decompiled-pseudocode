/*
 * XREFs of ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x1801755B0
 * Callers:
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180175670 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, unsigned int a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx

  v3 = 0;
  if ( a2 > 7 )
  {
    v10 = a2 - 8;
    if ( !v10 )
    {
      *a3 = *((float *)this + 33);
      return v3;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v9 = *((_DWORD *)this + 34);
      goto LABEL_15;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v9 = *((_DWORD *)this + 35);
      goto LABEL_15;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v9 = *((_DWORD *)this + 36);
      goto LABEL_15;
    }
    if ( v13 == 1 )
    {
      v9 = *((_DWORD *)this + 37);
      goto LABEL_15;
    }
    goto LABEL_22;
  }
  if ( a2 == 7 )
  {
    v9 = *((_DWORD *)this + 32);
    goto LABEL_15;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v9 = *((_DWORD *)this + 26);
    goto LABEL_15;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v9 = *((_DWORD *)this + 27);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v9 = *((_DWORD *)this + 28);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v9 = *((_DWORD *)this + 29);
    goto LABEL_15;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = *((_DWORD *)this + 30);
    goto LABEL_15;
  }
  if ( v8 != 1 )
  {
LABEL_22:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x166u);
    return v3;
  }
  v9 = *((_DWORD *)this + 31);
LABEL_15:
  *(_DWORD *)a3 = v9;
  return v3;
}
