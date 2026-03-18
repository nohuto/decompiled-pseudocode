/*
 * XREFs of ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18018A6F4
 * Callers:
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x180086A24 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x180085584 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     Template_x @ 0x18013BE18 (Template_x.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CManipulationManager::NotifyVisualPropertyChange(
        CManipulationManager *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct CInteraction *InteractionInternal; // rax

  v3 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 592) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_x(v8, &MIDMANIPULATION_UPDATE_VISUAL_PROP, (__int64)a2);
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    if ( InteractionInternal )
    {
      *((_OWORD *)InteractionInternal + 8) = *(_OWORD *)a3;
      *((_OWORD *)InteractionInternal + 9) = *((_OWORD *)a3 + 1);
      *((_OWORD *)InteractionInternal + 10) = *((_OWORD *)a3 + 2);
      *((_OWORD *)InteractionInternal + 11) = *((_OWORD *)a3 + 3);
      *((_DWORD *)InteractionInternal + 48) = *((_DWORD *)a3 + 16);
    }
  }
  else
  {
    return (unsigned int)CManipulationManager::QueueMidManipulationUpdate(this, 4LL, a2);
  }
  return v7;
}
