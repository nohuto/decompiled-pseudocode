/*
 * XREFs of ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x1801447A8
 * Callers:
 *     ?SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z @ 0x180130F74 (-SetIndependentFlipNotifyMode@CRenderTargetManager@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180149268 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 */

__int64 __fastcall COverlayContext::SetIndependentFlipNotifyMode(COverlayContext *this, struct _LUID a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  unsigned int v4; // r8d
  __int64 v5; // rdi
  CDirectFlipInfo *v6; // rcx
  signed int v7; // eax
  signed int v9; // eax

  v2 = *((_DWORD *)this + 68);
  v3 = 0;
  v4 = 0;
  if ( !v2 )
    goto LABEL_5;
  v5 = *((_QWORD *)this + 31);
  while ( *(_QWORD *)(*(_QWORD *)(v5 + 248LL * v4 + 24) + 40LL) != a2 )
  {
    if ( ++v4 >= v2 )
      goto LABEL_5;
  }
  if ( v4 == -1 )
  {
LABEL_5:
    v6 = (CDirectFlipInfo *)*((_QWORD *)this + 131);
    if ( v6 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v6 + 4) + 40LL) == a2 )
      {
        v7 = CDirectFlipInfo::EnsureIndependentFlipState(v6, 1, 1);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x620u);
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
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x61Au);
  }
  return v3;
}
