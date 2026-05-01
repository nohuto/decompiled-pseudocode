/*
 * XREFs of _lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_ @ 0x1800F8B20
 * Callers:
 *     _CImmersiveApp::_ScheduleApplicationNotifications_::_1_::dtor$10 @ 0x1800B4130 (_CImmersiveApp--_ScheduleApplicationNotifications_--_1_--dtor$10.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180047140 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChange.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_(__int64 a1)
{
  ClientWindowReadyForPresentationEventArgs *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(ClientWindowReadyForPresentationEventArgs **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
