/*
 * XREFs of ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800754E0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisualPostSubgraph@CVisual@@UEAAJXZ @ 0x180023BC0 (-ValidateVisualPostSubgraph@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x6E7u);
  }
  return v2;
}
