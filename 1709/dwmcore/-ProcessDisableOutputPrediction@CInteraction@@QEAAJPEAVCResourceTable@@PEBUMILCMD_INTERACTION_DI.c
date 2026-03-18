/*
 * XREFs of ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z @ 0x1801699E4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::ProcessDisableOutputPrediction(
        CInteraction *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTION_DISABLEOUTPUTPREDICTION *a3)
{
  char v3; // dl

  v3 = *((_BYTE *)this + 217) & 0xFE | (*((_DWORD *)a3 + 2) != 0);
  *((_BYTE *)this + 217) = v3;
  if ( (v3 & 1) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  else
    _InterlockedDecrement((volatile signed __int32 *)&CCommonRegistryData::m_cForceDisableInteractionOutputPrediction);
  return 0LL;
}
