/*
 * XREFs of ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x18016F178
 * Callers:
 *     ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x18016A6C4 (--0CInteractionTracker@@QEAA@PEAVCComposition@@@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18016E19C (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x18016E588 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

void __fastcall CInteractionTracker::UpdatePositionRoundingSuggestion(CInteractionTracker *this)
{
  int v1; // eax
  char v2; // dl
  float *v4; // rax
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  char v9; // cl

  v1 = *((_DWORD *)this + 38);
  v2 = 0;
  if ( !v1
    || v1 == 1
    && (v4 = (float *)*((_QWORD *)this + 68)) != 0LL
    && (v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[93]) & _xmm), v5 < 0.1)
    && (v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[94]) & _xmm), v6 < 0.1)
    && (v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[96]) & _xmm), v7 <= 0.0000011920929)
    && (v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4[97]) & _xmm), v8 <= 0.0000011920929) )
  {
    v2 = 1;
  }
  v9 = *((_BYTE *)this + 620);
  if ( (v9 & 1) != v2 )
  {
    *((_BYTE *)this + 620) = v2 | v9 & 0xFE;
    CResource::InvalidateAnimationSources(this);
  }
}
