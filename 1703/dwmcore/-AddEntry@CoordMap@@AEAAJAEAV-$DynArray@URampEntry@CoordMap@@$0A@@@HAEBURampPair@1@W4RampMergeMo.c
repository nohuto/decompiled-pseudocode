/*
 * XREFs of ?AddEntry@CoordMap@@AEAAJAEAV?$DynArray@URampEntry@CoordMap@@$0A@@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180057F88
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x180057750 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertAt@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z @ 0x1800C5800 (-InsertAt@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJAEBURampEntry@CoordMap@@I@Z.c)
 */

__int64 __fastcall CoordMap::AddEntry(__int64 a1, __int64 *a2, int a3, __int64 a4, int a5)
{
  unsigned int v7; // r8d
  unsigned int v8; // r10d
  char v9; // dl
  __int64 v10; // r11
  int v11; // xmm1_4
  int v12; // eax
  unsigned int v13; // ebx
  _DWORD v15[6]; // [rsp+30h] [rbp-18h] BYREF

  v7 = *((_DWORD *)a2 + 6);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *a2;
    while ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v10 + 16LL * v8) - *(float *)a4)) & _xmm) > 0.0000011920929 )
    {
      if ( *(float *)(v10 + 16LL * v8) > *(float *)a4 )
        goto LABEL_12;
      if ( ++v8 >= v7 )
        goto LABEL_6;
    }
    if ( *(_DWORD *)(v10 + 16LL * v8 + 12) == a3 )
    {
      if ( !a5 )
      {
        v13 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Bu);
        return v13;
      }
      v9 = 1;
    }
LABEL_12:
    if ( !v9 )
      goto LABEL_6;
    if ( a5 == 1 )
    {
      *(_DWORD *)(v10 + 16LL * v8 + 4) = *(_DWORD *)(a4 + 4);
    }
    else if ( a5 == 2 )
    {
      *(_DWORD *)(v10 + 16LL * v8 + 8) = *(_DWORD *)(a4 + 8);
    }
  }
  else
  {
LABEL_6:
    v11 = *(_DWORD *)(a4 + 4);
    v15[0] = *(_DWORD *)a4;
    v15[2] = *(_DWORD *)(a4 + 8);
    v15[1] = v11;
    v15[3] = a3;
    v12 = DynArray<CoordMap::RampEntry,0>::InsertAt(a2, v15);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x7Du);
      return v13;
    }
  }
  return 0;
}
