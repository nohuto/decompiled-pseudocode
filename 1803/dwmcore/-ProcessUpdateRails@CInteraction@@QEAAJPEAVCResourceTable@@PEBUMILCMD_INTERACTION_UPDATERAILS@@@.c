/*
 * XREFs of ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x180028AAC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18002820C (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::ProcessUpdateRails(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_UPDATERAILS *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax

  v5 = CInteraction::SetRailsEnabled_RenderThread((__int64)this, *((_DWORD *)a3 + 2) != 0, 0);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1D7u);
  }
  else
  {
    v7 = CInteraction::SetRailsEnabled_RenderThread((__int64)this, *((_DWORD *)a3 + 3) != 0, 1u);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1D9u);
  }
  return v6;
}
