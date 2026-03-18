/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18013FD30
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180140340 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x180143F0C (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(
        __int64 a1,
        _OWORD *a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rcx
  __int128 v8; // xmm0
  _OWORD *v9; // rdx
  signed int v10; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xF8u, 1, a2);
    v6 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    v7 = *(_QWORD *)a1 + 248 * v4;
    *(_OWORD *)v7 = *a2;
    *(_OWORD *)(v7 + 16) = a2[1];
    *(_OWORD *)(v7 + 32) = a2[2];
    *(_OWORD *)(v7 + 48) = a2[3];
    *(_OWORD *)(v7 + 64) = a2[4];
    *(_OWORD *)(v7 + 80) = a2[5];
    *(_OWORD *)(v7 + 96) = a2[6];
    v7 += 128LL;
    v8 = a2[7];
    v9 = a2 + 8;
    *(_OWORD *)(v7 - 16) = v8;
    *(_OWORD *)v7 = *v9;
    *(_OWORD *)(v7 + 16) = v9[1];
    *(_OWORD *)(v7 + 32) = v9[2];
    *(_OWORD *)(v7 + 48) = v9[3];
    *(_OWORD *)(v7 + 64) = v9[4];
    *(_OWORD *)(v7 + 80) = v9[5];
    *(_OWORD *)(v7 + 96) = v9[6];
    *(_QWORD *)(v7 + 112) = *((_QWORD *)v9 + 14);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
