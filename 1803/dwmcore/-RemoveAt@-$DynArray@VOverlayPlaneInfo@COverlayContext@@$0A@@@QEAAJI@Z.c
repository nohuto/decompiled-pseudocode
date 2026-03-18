/*
 * XREFs of ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801675CC
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x18007A1B8 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A9B10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r11d
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rax

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v5 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v6 = 248LL * (v4 + 1);
        v7 = v4++;
        v8 = v5 + 248 * v7;
        v9 = *(_OWORD *)(v6 + v5 + 16);
        *(_OWORD *)v8 = *(_OWORD *)(v6 + v5);
        v10 = *(_OWORD *)(v6 + v5 + 32);
        *(_OWORD *)(v8 + 16) = v9;
        v11 = *(_OWORD *)(v6 + v5 + 48);
        *(_OWORD *)(v8 + 32) = v10;
        v12 = *(_OWORD *)(v6 + v5 + 64);
        *(_OWORD *)(v8 + 48) = v11;
        v13 = *(_OWORD *)(v6 + v5 + 80);
        *(_OWORD *)(v8 + 64) = v12;
        v14 = *(_OWORD *)(v6 + v5 + 96);
        *(_OWORD *)(v8 + 80) = v13;
        v15 = *(_OWORD *)(v6 + v5 + 112);
        *(_OWORD *)(v8 + 96) = v14;
        v8 += 128LL;
        v16 = *(_OWORD *)(v6 + v5 + 128);
        *(_OWORD *)(v8 - 16) = v15;
        v17 = *(_OWORD *)(v6 + v5 + 144);
        *(_OWORD *)v8 = v16;
        v18 = *(_OWORD *)(v6 + v5 + 160);
        *(_OWORD *)(v8 + 16) = v17;
        v19 = *(_OWORD *)(v6 + v5 + 176);
        *(_OWORD *)(v8 + 32) = v18;
        v20 = *(_OWORD *)(v6 + v5 + 192);
        *(_OWORD *)(v8 + 48) = v19;
        v21 = *(_OWORD *)(v6 + v5 + 208);
        *(_OWORD *)(v8 + 64) = v20;
        v22 = *(_OWORD *)(v6 + v5 + 224);
        v23 = *(_QWORD *)(v6 + v5 + 240);
        *(_OWORD *)(v8 + 80) = v21;
        *(_OWORD *)(v8 + 96) = v22;
        *(_QWORD *)(v8 + 112) = v23;
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x19Cu);
  }
  return v3;
}
