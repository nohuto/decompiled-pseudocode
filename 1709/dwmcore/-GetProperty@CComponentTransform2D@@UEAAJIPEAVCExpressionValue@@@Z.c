/*
 * XREFs of ?GetProperty@CComponentTransform2D@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180095350
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::GetProperty(CComponentTransform2D *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v10; // xmm0_8
  float v11; // xmm0_4

  v3 = 0;
  if ( !a2 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 9);
    goto LABEL_19;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 10);
    goto LABEL_19;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 11);
    goto LABEL_19;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v11 = *((float *)this + 26);
    goto LABEL_15;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v11 = *((float *)this + 26) * 57.295776;
LABEL_15:
    *(float *)a3 = v11;
    *((_DWORD *)a3 + 16) = 18;
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    *((_DWORD *)a3 + 16) = 35;
    v10 = *((_QWORD *)this + 12);
LABEL_19:
    *(_QWORD *)a3 = v10;
    goto LABEL_9;
  }
  if ( v8 != 1 )
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1A3u);
    return v3;
  }
  *((_DWORD *)a3 + 16) = 104;
  *(_OWORD *)a3 = *(_OWORD *)((char *)this + 108);
  *((_QWORD *)a3 + 2) = *(_QWORD *)((char *)this + 124);
LABEL_9:
  *((_BYTE *)a3 + 68) = 1;
  return v3;
}
