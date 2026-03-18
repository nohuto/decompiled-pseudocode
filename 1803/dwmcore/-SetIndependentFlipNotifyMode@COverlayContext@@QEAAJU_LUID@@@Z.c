/*
 * XREFs of ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180167868
 * Callers:
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x1801525BC (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x180165CB0 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x1801725EC (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 */

__int64 __fastcall COverlayContext::SetIndependentFlipNotifyMode(COverlayContext *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v5; // rdi
  CDirectFlipInfo *v6; // rcx
  int v7; // eax
  int v9; // eax

  v2 = *((_DWORD *)this + 70);
  v3 = 0;
  v4 = 0;
  if ( !v2 )
    goto LABEL_5;
  v5 = *((_QWORD *)this + 32);
  while ( *(_QWORD *)(*(_QWORD *)(v5 + 248LL * v4 + 24) + 40LL) != a2 )
  {
    if ( ++v4 >= v2 )
      goto LABEL_5;
  }
  if ( v4 == -1 )
  {
LABEL_5:
    v6 = (CDirectFlipInfo *)*((_QWORD *)this + 132);
    if ( v6 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v6 + 4) + 40LL) == a2 )
      {
        v7 = CDirectFlipInfo::EnsureIndependentFlipState(v6, 1, 1);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x641u);
      }
    }
  }
  else
  {
    v9 = COverlayContext::EnsureIndependentFlipState(
           this,
           (struct COverlayContext::OverlayPlaneInfo *)(v5 + 248LL * v4),
           1,
           1);
    v3 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x63Bu);
  }
  return v3;
}
