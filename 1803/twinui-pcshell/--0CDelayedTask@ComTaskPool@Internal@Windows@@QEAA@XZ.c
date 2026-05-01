/*
 * XREFs of ??0CDelayedTask@ComTaskPool@Internal@Windows@@QEAA@XZ @ 0x180087DE8
 * Callers:
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x1800879B8 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

Windows::Internal::ComTaskPool::CDelayedTask *__fastcall Windows::Internal::ComTaskPool::CDelayedTask::CDelayedTask(
        Windows::Internal::ComTaskPool::CDelayedTask *this)
{
  void (*v2)(void); // rax
  Windows::Internal::ComTaskPool::CDelayedTask *result; // rax

  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v2 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v2 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v2();
  }
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &Windows::Internal::ComTaskPool::CDelayedTask::`vftable';
  result = this;
  *((_QWORD *)this + 4) = 0LL;
  return result;
}
