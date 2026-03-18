/*
 * XREFs of ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z @ 0x180192304
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessDisableOutputPrediction(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_DISABLEOUTPUTPREDICTION *a3)
{
  bool v3; // sf

  v3 = ((*((_BYTE *)this + 184) & 0x7F | (*((_DWORD *)a3 + 2) != 0 ? 0x80 : 0)) & 0x80u) != 0;
  *((_BYTE *)this + 184) = *((_BYTE *)this + 184) & 0x7F | (*((_DWORD *)a3 + 2) != 0 ? 0x80 : 0);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  else
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  return 0LL;
}
