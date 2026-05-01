/*
 * XREFs of ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000A630
 * Callers:
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAJPEAW4TrustLevel@@@Z @ 0x1800081C0 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics.c)
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x1800081D0 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryM_ea_1800081D0.c)
 *     ?GetTrustLevel@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x1800081E0 (-GetTrustLevel@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryM_ea_1800081E0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
    *a2 = (*(__int64 (**)(void))(v2 + 16))();
  else
    *a2 = 2;
  return 0LL;
}
