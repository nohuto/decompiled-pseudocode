/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180004414
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180004500 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x180004DE0 (-InsertAt@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r8d
  char v6; // bl
  unsigned int v7; // eax
  __int64 v8; // r10
  float v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // eax
  unsigned int v12; // ebx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *((_DWORD *)a2 + 6);
  v6 = 0;
  v7 = 0;
  if ( v5 )
  {
    v8 = *a2;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v8 + 16LL * v7) - *(float *)a4)) & _xmm) > 0.0000011920929 )
    {
      if ( *(float *)(v8 + 16LL * v7) > *(float *)a4 )
        goto LABEL_12;
      if ( ++v7 >= v5 )
        goto LABEL_6;
    }
    if ( !*(_DWORD *)(v8 + 16LL * v7 + 12) )
    {
      if ( !a5 )
      {
        v12 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x5Bu);
        return v12;
      }
      v6 = 1;
    }
LABEL_12:
    if ( !v6 )
      goto LABEL_6;
    if ( a5 == 1 )
    {
      *(_DWORD *)(v8 + 16LL * v7 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v8 + 16LL * v7 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    v9 = *(float *)a4;
    v10 = *(_DWORD *)(a4 + 4);
    v14[3] = 0;
    *(float *)v14 = v9;
    v14[2] = *(_DWORD *)(a4 + 8);
    v14[1] = v10;
    v11 = DynArray<CoordMap::RampEntry,0>::InsertAt(a2, v14);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x7Du);
      return v12;
    }
  }
  return 0;
}
