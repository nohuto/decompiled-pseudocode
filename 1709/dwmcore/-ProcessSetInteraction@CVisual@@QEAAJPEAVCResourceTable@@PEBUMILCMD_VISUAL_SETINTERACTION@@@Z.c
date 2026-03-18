/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180051858
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004F894 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetInteraction(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETINTERACTION *a3)
{
  unsigned int v3; // eax
  struct CInteraction *v5; // rdx
  __int64 Resource; // rax
  int v8; // eax
  unsigned int v9; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v5 = 0LL;
  if ( v3 )
  {
    Resource = CResourceTable::GetResource(a2, v3, 76LL);
    if ( Resource )
      v5 = (struct CInteraction *)(Resource - 8);
    else
      v5 = 0LL;
  }
  v8 = CVisual::SetInteraction(this, v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB78u);
  return v9;
}
