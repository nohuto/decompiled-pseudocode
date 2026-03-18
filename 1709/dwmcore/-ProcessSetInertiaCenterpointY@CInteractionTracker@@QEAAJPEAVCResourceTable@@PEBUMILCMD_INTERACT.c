/*
 * XREFs of ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x18016C840
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z @ 0x1800A1830 (-SetTargetObjectHandle@CBaseExpression@@QEAAXI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??4?$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z @ 0x18016AA10 (--4-$ComPtr@VCConditionalExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCConditionalExpression@@@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 */

__int64 __fastcall CInteractionTracker::ProcessSetInertiaCenterpointY(
        CInteractionTracker *this,
        struct CResourceTable *a2,
        const struct MILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY *a3)
{
  __int64 *v4; // rbx
  __int64 Resource; // rax

  v4 = (__int64 *)((char *)this + 432);
  Resource = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x24u);
  Microsoft::WRL::ComPtr<CConditionalExpression>::operator=(v4, Resource);
  if ( *v4 )
    CBaseExpression::SetTargetObjectHandle((CBaseExpression *)*v4, *((_DWORD *)a3 + 1));
  if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 376LL) |= 4u;
  return 0LL;
}
