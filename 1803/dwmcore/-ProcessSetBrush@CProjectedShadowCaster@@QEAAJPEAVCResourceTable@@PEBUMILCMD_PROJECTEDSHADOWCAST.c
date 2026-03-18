/*
 * XREFs of ?ProcessSetBrush@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETBRUSH@@@Z @ 0x1801A07B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z @ 0x1801A0D9C (-SetBrush@CProjectedShadowCaster@@AEAAXPEAVCSpriteVisualContent@@@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetBrush(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWCASTER_SETBRUSH *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  struct CSpriteVisualContent *Resource; // rax

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CSpriteVisualContent *)CResourceTable::GetResource((__int64)a2, v5, 0x12u)) != 0LL )
  {
    if ( Resource != *((struct CSpriteVisualContent **)this + 13) )
      CProjectedShadowCaster::SetBrush(this, Resource);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x95u);
  }
  return v3;
}
