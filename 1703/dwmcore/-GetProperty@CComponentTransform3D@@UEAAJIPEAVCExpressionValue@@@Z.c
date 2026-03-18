/*
 * XREFs of ?GetProperty@CComponentTransform3D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18002B9F0
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18002D960 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::GetProperty(CComponentTransform3D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // eax
  float v15; // xmm0_4
  __int128 v16; // [rsp+30h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-20h]

  v3 = 0;
  v4 = a2 - 12;
  if ( !v4 )
  {
    v15 = *((float *)this + 53);
    goto LABEL_21;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v15 = *((float *)this + 53) * 57.295776;
LABEL_21:
    *(float *)a3 = v15;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_5;
  }
  v6 = v5 - 4;
  if ( v6 )
  {
    v10 = v6 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        *((_DWORD *)a3 + 16) = 35;
        *(_QWORD *)a3 = *((_QWORD *)this + 19);
        goto LABEL_5;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        *((_DWORD *)a3 + 16) = 71;
        *(_OWORD *)a3 = *(_OWORD *)((char *)this + 196);
        goto LABEL_5;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v3 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1DAu);
          return v3;
        }
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *((_QWORD *)this + 23);
        v14 = *((_DWORD *)this + 48);
      }
      else
      {
        *((_DWORD *)a3 + 16) = 52;
        *(_QWORD *)a3 = *(_QWORD *)((char *)this + 172);
        v14 = *((_DWORD *)this + 45);
      }
    }
    else
    {
      *((_DWORD *)a3 + 16) = 52;
      *(_QWORD *)a3 = *((_QWORD *)this + 20);
      v14 = *((_DWORD *)this + 42);
    }
    *((_DWORD *)a3 + 2) = v14;
  }
  else
  {
    v16 = *(_OWORD *)((char *)this + 216);
    v7 = *(_OWORD *)((char *)this + 232);
    v17 = *(_OWORD *)((char *)this + 248);
    v8 = *(_OWORD *)((char *)this + 264);
    *((_DWORD *)a3 + 16) = 265;
    *(_OWORD *)a3 = v16;
    *((_OWORD *)a3 + 1) = v7;
    *((_OWORD *)a3 + 2) = v17;
    *((_OWORD *)a3 + 3) = v8;
  }
LABEL_5:
  *((_BYTE *)a3 + 68) = 1;
  return v3;
}
