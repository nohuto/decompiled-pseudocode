/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x180196C68
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180194AE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180195F9C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x180196CC8 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x180196D74 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800515A0 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  struct CResource *v5; // rdx
  CWeakReferenceBase *v6; // rcx

  v2 = a2;
  if ( (unsigned __int64)a2 < 2 )
  {
    v4 = *((_QWORD *)this + a2 + 63);
    if ( v4 )
    {
      v5 = *(struct CResource **)(v4 + 8);
      if ( v5 )
      {
        *((_BYTE *)v5 + 208) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v5);
      }
      v6 = (CWeakReferenceBase *)*((_QWORD *)this + v2 + 63);
      if ( v6 )
      {
        CWeakReferenceBase::Release(v6);
        *((_QWORD *)this + v2 + 63) = 0LL;
      }
    }
  }
}
