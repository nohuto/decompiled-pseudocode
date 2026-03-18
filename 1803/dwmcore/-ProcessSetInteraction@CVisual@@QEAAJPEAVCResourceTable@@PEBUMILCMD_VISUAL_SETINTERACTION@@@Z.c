/*
 * XREFs of ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180050804
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x18004D868 (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    Resource = CResourceTable::GetResource((__int64)a2, v3, 0x52u);
    if ( Resource )
      v5 = (struct CInteraction *)(Resource - 8);
    else
      v5 = 0LL;
  }
  v8 = CVisual::SetInteraction(this, v5);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC20u);
  return v9;
}
