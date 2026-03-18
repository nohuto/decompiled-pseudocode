/*
 * XREFs of ?InsertAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJAEBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180166470
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::InsertAt(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  _OWORD *v9; // r10
  _OWORD *v10; // rdx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  _OWORD *v26; // rdx
  _OWORD *v27; // r8
  _OWORD *v28; // r8
  __int128 v29; // xmm1
  _OWORD *v30; // rdx
  _OWORD *v32; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v32 = (_OWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 0xF8u, 1, 0, (unsigned __int64 *)&v32);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v7 = *(unsigned int *)(a1 + 24);
      v8 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v7 + 1;
      if ( (unsigned int)v7 > (unsigned int)v4 )
      {
        v9 = (_OWORD *)(v8 + 248 * v7);
        do
        {
          v10 = v9 + 8;
          LODWORD(v7) = v7 - 1;
          v11 = (_OWORD *)(v8 + 248LL * (unsigned int)v7);
          v12 = v11[1];
          *v9 = *v11;
          v13 = v11[2];
          v9[1] = v12;
          v14 = v11[3];
          v9[2] = v13;
          v15 = v11[4];
          v9[3] = v14;
          v16 = v11[5];
          v9[4] = v15;
          v17 = v11[6];
          v9[5] = v16;
          v18 = v11[7];
          v11 += 8;
          v9[6] = v17;
          v9 = (_OWORD *)((char *)v9 - 248);
          *(v10 - 1) = v18;
          v19 = v11[1];
          *v10 = *v11;
          v20 = v11[2];
          v10[1] = v19;
          v21 = v11[3];
          v10[2] = v20;
          v22 = v11[4];
          v10[3] = v21;
          v23 = v11[5];
          v10[4] = v22;
          v24 = v11[6];
          v25 = *((_QWORD *)v11 + 14);
          v10[5] = v23;
          v10[6] = v24;
          *((_QWORD *)v10 + 14) = v25;
        }
        while ( (unsigned int)v7 > (unsigned int)v4 );
      }
      v26 = v32;
      v27 = (_OWORD *)(v8 + 248 * v4);
      if ( v32 >= v27 && (unsigned __int64)v32 < 248 * (unsigned __int64)*(unsigned int *)(a1 + 24) + v8 - 248 )
        v26 = (_OWORD *)((char *)v32 + 248);
      *v27 = *v26;
      v27[1] = v26[1];
      v27[2] = v26[2];
      v27[3] = v26[3];
      v27[4] = v26[4];
      v27[5] = v26[5];
      v27[6] = v26[6];
      v28 = v27 + 8;
      v29 = v26[7];
      v30 = v26 + 8;
      *(v28 - 1) = v29;
      *v28 = *v30;
      v28[1] = v30[1];
      v28[2] = v30[2];
      v28[3] = v30[3];
      v28[4] = v30[4];
      v28[5] = v30[5];
      v28[6] = v30[6];
      *((_QWORD *)v28 + 14) = *((_QWORD *)v30 + 14);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1D5u);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x1CBu);
  }
  return v5;
}
