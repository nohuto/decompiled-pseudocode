/*
 * XREFs of ??1?$pair@IV?$ComPtr@VDisplayBinding@@@WRL@Microsoft@@@std@@QEAA@XZ @ 0x180013CF0
 * Callers:
 *     _GestureTargetingComponent::OnHitTest_::_1_::dtor$0 @ 0x1800CCE4D (_GestureTargetingComponent--OnHitTest_--_1_--dtor$0.c)
 *     _InputRedirectionComponent::OnHitTest_::_1_::dtor$0 @ 0x1800CD485 (_InputRedirectionComponent--OnHitTest_--_1_--dtor$0.c)
 *     _DWMInputRouter::BindDevicesOfTypeToDisplayBinding_::_1_::dtor$1 @ 0x1800CD545 (_DWMInputRouter--BindDevicesOfTypeToDisplayBinding_--_1_--dtor$1.c)
 *     _DWMInputRouter::BindDevicesOfTypeToDisplayBinding_::_1_::dtor$2 @ 0x1800CD551 (_DWMInputRouter--BindDevicesOfTypeToDisplayBinding_--_1_--dtor$2.c)
 *     _DWMInputRouter::s_HitTestHandler_::_1_::dtor$8 @ 0x1800CD5D5 (_DWMInputRouter--s_HitTestHandler_--_1_--dtor$8.c)
 *     _EdgeGestureComponent::OnHitTest_::_1_::dtor$0 @ 0x1800CDDA9 (_EdgeGestureComponent--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$3 @ 0x1800D08F3 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$3.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$26 @ 0x1800D08FF (_ContextualProcessorManager--OnHitTest_--_1_--dtor$26.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$1 @ 0x1800D1774 (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$1.c)
 *     _TargetingArbitrationComponent::OnHitTest_::_1_::dtor$3 @ 0x1800D17AD (_TargetingArbitrationComponent--OnHitTest_--_1_--dtor$3.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$1 @ 0x1800D17C5 (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$1.c)
 *     _TargetingArbitrationComponent::OnGetTargetWithFocus_::_1_::dtor$3 @ 0x1800D17FE (_TargetingArbitrationComponent--OnGetTargetWithFocus_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>::~pair<unsigned int,Microsoft::WRL::ComPtr<DisplayBinding>>(
        _QWORD *a1)
{
  __int64 v2; // rcx

  v2 = a1[1];
  if ( v2 )
  {
    a1[1] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
