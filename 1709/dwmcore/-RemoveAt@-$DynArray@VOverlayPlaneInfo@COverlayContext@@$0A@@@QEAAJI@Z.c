/*
 * XREFs of ?RemoveAt@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJI@Z @ 0x1801444A8
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180067244 (-NotifyVisitedContent@COverlayContext@@QEAAJPEAVCVisual@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v6; // r11
  unsigned int v7; // r9d
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  __int64 v10; // r8
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = v4 + 1;
        v8 = (_OWORD *)(v6 + 248LL * (v4 + 1));
        v9 = v8[1];
        v10 = v6 + 248LL * v4;
        *(_OWORD *)v10 = *v8;
        v11 = v8[2];
        *(_OWORD *)(v10 + 16) = v9;
        v12 = v8[3];
        *(_OWORD *)(v10 + 32) = v11;
        v13 = v8[4];
        *(_OWORD *)(v10 + 48) = v12;
        v14 = v8[5];
        *(_OWORD *)(v10 + 64) = v13;
        v15 = v8[6];
        *(_OWORD *)(v10 + 80) = v14;
        v16 = v8[7];
        v8 += 8;
        *(_OWORD *)(v10 + 96) = v15;
        v10 += 128LL;
        v17 = *v8;
        *(_OWORD *)(v10 - 16) = v16;
        v18 = v8[1];
        *(_OWORD *)v10 = v17;
        v19 = v8[2];
        *(_OWORD *)(v10 + 16) = v18;
        v20 = v8[3];
        *(_OWORD *)(v10 + 32) = v19;
        v21 = v8[4];
        *(_OWORD *)(v10 + 48) = v20;
        v22 = v8[5];
        *(_OWORD *)(v10 + 64) = v21;
        v23 = v8[6];
        v24 = *((_QWORD *)v8 + 14);
        *(_OWORD *)(v10 + 80) = v22;
        *(_OWORD *)(v10 + 96) = v23;
        *(_QWORD *)(v10 + 112) = v24;
        v4 = v7;
      }
      while ( v7 < *((_DWORD *)a1 + 6) - 1 );
    }
    --*((_DWORD *)a1 + 6);
  }
  else
  {
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x193u);
  }
  return v3;
}
