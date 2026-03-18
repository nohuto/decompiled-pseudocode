/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180163954
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x18007A548 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180163F58 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int128 v7; // xmm0
  _OWORD *v8; // rdx
  int v9; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0xF8u, 1, a2);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v6 = *(_QWORD *)a1 + 248 * v2;
    *(_OWORD *)v6 = *a2;
    *(_OWORD *)(v6 + 16) = a2[1];
    *(_OWORD *)(v6 + 32) = a2[2];
    *(_OWORD *)(v6 + 48) = a2[3];
    *(_OWORD *)(v6 + 64) = a2[4];
    *(_OWORD *)(v6 + 80) = a2[5];
    *(_OWORD *)(v6 + 96) = a2[6];
    v6 += 128LL;
    v7 = a2[7];
    v8 = a2 + 8;
    *(_OWORD *)(v6 - 16) = v7;
    *(_OWORD *)v6 = *v8;
    *(_OWORD *)(v6 + 16) = v8[1];
    *(_OWORD *)(v6 + 32) = v8[2];
    *(_OWORD *)(v6 + 48) = v8[3];
    *(_OWORD *)(v6 + 64) = v8[4];
    *(_OWORD *)(v6 + 80) = v8[5];
    *(_OWORD *)(v6 + 96) = v8[6];
    *(_QWORD *)(v6 + 112) = *((_QWORD *)v8 + 14);
    *(_DWORD *)(a1 + 24) = v4;
  }
  return v5;
}
