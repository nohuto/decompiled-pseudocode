/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005EE0
 * Callers:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180004CD0 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 * Callees:
 *     ??_E?$CTaskWrapper@V_lambda_2841a3f6d236310ca0a7ae73226eca51_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180005F40 (--_E-$CTaskWrapper@V_lambda_2841a3f6d236310ca0a7ae73226eca51_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx
  __int64 (__fastcall *v2)(LPVOID); // rax

  v1 = _InterlockedDecrement(a1 + 3);
  if ( !v1 )
  {
    if ( a1 )
    {
      v2 = *(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)a1 + 32LL);
      if ( v2 == Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2841a3f6d236310ca0a7ae73226eca51_>::`vector deleting destructor' )
        Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_2841a3f6d236310ca0a7ae73226eca51_>::`vector deleting destructor'((LPVOID)a1);
      else
        ((void (__fastcall *)(volatile signed __int32 *, __int64))v2)(a1, 1LL);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(CAudioDGProcess *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v1;
}
