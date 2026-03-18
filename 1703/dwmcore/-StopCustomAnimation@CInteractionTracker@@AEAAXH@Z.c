/*
 * XREFs of ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18016D390 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016DBC4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x18016E97C (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18016E9A8 (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x1800C1D3C (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimation(CInteractionTracker *this, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  struct CResource *v5; // rdx
  struct _RTL_GENERIC_TABLE **v6; // rcx

  if ( a2 < 2 )
  {
    v2 = (int)a2;
    v4 = *((_QWORD *)this + (int)a2 + 49);
    if ( v4 )
    {
      v5 = *(struct CResource **)(v4 + 8);
      if ( v5 )
      {
        *((_BYTE *)v5 + 208) &= ~1u;
        CResource::UnRegisterNotifierInternal(this, v5);
      }
      v6 = (struct _RTL_GENERIC_TABLE **)*((_QWORD *)this + v2 + 49);
      if ( v6 )
      {
        CWeakReferenceBase::Release(v6);
        *((_QWORD *)this + v2 + 49) = 0LL;
      }
    }
  }
}
