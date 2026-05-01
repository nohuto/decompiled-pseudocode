/*
 * XREFs of ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180009E30
 * Callers:
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x1800080D0 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UI.c)
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800080E0 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerS_ea_1800080E0.c)
 *     ?AddRef@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800080F0 (-AddRef@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerS_ea_1800080F0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::AddRef(
        __int64 a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
  if ( (*(_BYTE *)(a1 + 56) & 4) == 0 && v1 == 2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return v1;
}
