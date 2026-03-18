/*
 * XREFs of ?SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z @ 0x1800A1830
 * Callers:
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A25F8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x18016C7C4 (-ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x18016C840 (-ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18016C914 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IN.c)
 * Callees:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800B3EAC (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 */

void __fastcall CBaseExpression::SetTargetObjectHandle(CBaseExpression *this, int a2)
{
  char *v3; // rbx
  struct CSparseStorage::DataInfo *SlotForData; // rax

  if ( a2 == `CBaseExpression::SetTargetObjectHandle'::`2'::sc_defaultValue )
  {
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x20000000u;
  }
  else
  {
    v3 = (char *)this + 264;
    SlotForData = CSparseStorage::FindSlotForData((CBaseExpression *)((char *)this + 264), 3u, 4u);
    *((_DWORD *)SlotForData + 1) = a2;
    *(_DWORD *)SlotForData &= 0x83FFFFFF;
    *(_DWORD *)SlotForData |= 0x3000000u;
    *(_DWORD *)(*(_QWORD *)v3 + 4LL) |= 0x20000000u;
  }
}
