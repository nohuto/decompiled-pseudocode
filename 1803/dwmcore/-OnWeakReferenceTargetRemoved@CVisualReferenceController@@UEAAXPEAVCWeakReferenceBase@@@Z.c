/*
 * XREFs of ?OnWeakReferenceTargetRemoved@CVisualReferenceController@@UEAAXPEAVCWeakReferenceBase@@@Z @ 0x180027FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@V?$CWeakReference@VCVisual@@@@@@YAXAEAPEAV?$CWeakReference@VCVisual@@@@@Z @ 0x180034E00 (--$ReleaseInterface@V-$CWeakReference@VCVisual@@@@@@YAXAEAPEAV-$CWeakReference@VCVisual@@@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800512F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CVisualReferenceController::OnWeakReferenceTargetRemoved(
        struct CWeakReferenceBase **this,
        struct CWeakReferenceBase *a2)
{
  if ( a2 == this[8] )
  {
    ReleaseInterface<CWeakReference<CVisual>>();
    CResource::NotifyOnChanged(this, 0LL, this);
  }
}
