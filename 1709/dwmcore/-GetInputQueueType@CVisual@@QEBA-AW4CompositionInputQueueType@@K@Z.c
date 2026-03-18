/*
 * XREFs of ?GetInputQueueType@CVisual@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x18004F5FC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@@KPEAPEAXIPEAIPEAPEAUHWND__@@3PEAU_LUID@@PEAVCMILMatrix@@4PEA_NPEA_K@Z @ 0x180090BF4 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisualTree@@HHKW4DIT_HITTESTATTRIBUTES@@PEAUHMONITOR__@.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18004ECAC (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@K@Z @ 0x1800BA31C (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@K@Z.c)
 */

__int64 __fastcall CVisual::GetInputQueueType(CVisual *a1)
{
  struct CInteraction *InteractionInternal; // rax
  unsigned int v2; // r10d
  unsigned int v3; // r11d
  __int64 v4; // rcx

  InteractionInternal = CVisual::GetInteractionInternal(a1);
  if ( InteractionInternal )
  {
    v4 = *((_QWORD *)InteractionInternal + 16);
    if ( v4 )
      return (unsigned int)CInputSinkStruct::GetInputQueueType(v4, v3);
  }
  return v2;
}
