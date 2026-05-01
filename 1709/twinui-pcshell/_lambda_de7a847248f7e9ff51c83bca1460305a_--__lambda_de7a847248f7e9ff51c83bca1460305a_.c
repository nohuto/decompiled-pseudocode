/*
 * XREFs of _lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_ @ 0x180061B6C
 * Callers:
 *     _Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged_::_1_::dtor$2 @ 0x1801E90B0 (_Windows--Internal--Shell--Desktop--ViewManagerInterop--ObjectWithVisibility--Raise_ea_1801E90B0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@Multitasking@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800605A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISwitchItemSort@M.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_de7a847248f7e9ff51c83bca1460305a_::__lambda_de7a847248f7e9ff51c83bca1460305a_(__int64 a1)
{
  volatile signed __int64 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *(volatile signed __int64 **)(a1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Multitasking::ISwitchItemSort,Microsoft::WRL::FtmBase>::Release(v2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return result;
}
