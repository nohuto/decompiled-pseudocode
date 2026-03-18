/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x1800A00E0
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x18009F8A8 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x1800BC220 (-InsertAt@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5)
{
  char v6; // di
  unsigned int v7; // r8d
  unsigned int v8; // eax
  __int64 v9; // r10
  int v10; // xmm1_4
  signed int v11; // eax
  unsigned int v12; // ebx
  _DWORD v14[6]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  v7 = *((_DWORD *)a2 + 6);
  v8 = 0;
  if ( v7 )
  {
    v9 = *a2;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v9 + 16LL * v8) - *(float *)a4)) & _xmm) > 0.0000011920929 )
    {
      if ( *(float *)(v9 + 16LL * v8) > *(float *)a4 )
        goto LABEL_12;
      if ( ++v8 >= v7 )
        goto LABEL_6;
    }
    if ( *(_DWORD *)(v9 + 16LL * v8 + 12) == a3 )
    {
      if ( !a5 )
      {
        v12 = -2147024809;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x5Bu);
        return v12;
      }
      v6 = 1;
    }
LABEL_12:
    if ( !v6 )
      goto LABEL_6;
    if ( a5 == 1 )
    {
      *(_DWORD *)(v9 + 16LL * v8 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v9 + 16LL * v8 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    v10 = *(_DWORD *)(a4 + 4);
    v14[0] = *(_DWORD *)a4;
    v14[2] = *(_DWORD *)(a4 + 8);
    v14[1] = v10;
    v14[3] = a3;
    v11 = DynArray<CoordMap::RampEntry,0>::InsertAt(a2, v14);
    v12 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, 0x7Du);
      return v12;
    }
  }
  return 0;
}
