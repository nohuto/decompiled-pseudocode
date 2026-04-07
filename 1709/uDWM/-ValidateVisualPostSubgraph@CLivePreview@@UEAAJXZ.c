/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x180069E90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x1800152B0 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180018570 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CLivePreview::ValidateVisualPostSubgraph(CLivePreview *this)
{
  unsigned int v2; // edi
  int updated; // eax

  v2 = 0;
  CVisual::ValidateVisualPostSubgraph(this);
  if ( (*((_BYTE *)this + 80) & 4) != 0 )
  {
    updated = CRenderDataVisual::UpdateRenderData(this);
    v2 = updated;
    if ( updated >= 0 )
      *((_DWORD *)this + 20) &= ~4u;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x6E7u);
  }
  return v2;
}
