/*
 * XREFs of ?GetProperty@CRectangleGeometry@@AEAAJIPEAM@Z @ 0x18001F914
 * Callers:
 *     ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18001F8D0 (-GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, unsigned int a2, float *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx

  v3 = 0;
  if ( a2 > 7 )
  {
    v11 = a2 - 8;
    if ( !v11 )
    {
      *a3 = *((float *)this + 33);
      return v3;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = *((_DWORD *)this + 34);
      goto LABEL_8;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = *((_DWORD *)this + 35);
      goto LABEL_8;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = *((_DWORD *)this + 36);
      goto LABEL_8;
    }
    if ( v14 == 1 )
    {
      v7 = *((_DWORD *)this + 37);
      goto LABEL_8;
    }
    goto LABEL_24;
  }
  if ( a2 == 7 )
  {
    v7 = *((_DWORD *)this + 32);
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = *((_DWORD *)this + 26);
    goto LABEL_8;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = *((_DWORD *)this + 27);
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v9 = v6 - 1;
    if ( !v9 )
    {
      v7 = *((_DWORD *)this + 29);
      goto LABEL_8;
    }
    v10 = v9 - 1;
    if ( !v10 )
    {
      v7 = *((_DWORD *)this + 30);
      goto LABEL_8;
    }
    if ( v10 == 1 )
    {
      v7 = *((_DWORD *)this + 31);
      goto LABEL_8;
    }
LABEL_24:
    v3 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x166u);
    return v3;
  }
  v7 = *((_DWORD *)this + 28);
LABEL_8:
  *(_DWORD *)a3 = v7;
  return v3;
}
