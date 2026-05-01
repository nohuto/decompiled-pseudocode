/*
 * XREFs of ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180009E70
 * Callers:
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@W7EAAKXZ @ 0x180008270 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@U.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBA@EAAKXZ @ 0x180008280 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180008280.c)
 *     ?Release@?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@WBI@EAAKXZ @ 0x180008290 (-Release@-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManager_ea_180008290.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // edi
  int v2; // ebx
  void (*v3)(void); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 56) & 4) == 0 && v1 == 1 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      goto LABEL_8;
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 56);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 4) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_8:
      v3();
    }
  }
  return v1;
}
