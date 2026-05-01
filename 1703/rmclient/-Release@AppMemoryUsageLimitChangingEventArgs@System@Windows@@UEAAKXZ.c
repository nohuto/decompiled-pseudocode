/*
 * XREFs of ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x180004040
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180001E30 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ @ 0x1800084E0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@W7EAAKXZ.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ @ 0x1800084F0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003AB0 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x1800040C0 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::AppMemoryUsageLimitChangingEventArgs::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  signed __int64 v1; // rax
  unsigned __int32 v2; // ebx
  signed __int64 v3; // rtt
  void *(__fastcall *v4)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden, unsigned int); // rax
  void (*v5)(void); // rax

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 - 1, v1);
    if ( v3 == v1 )
      goto LABEL_4;
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v2 )
  {
    if ( this )
    {
      v4 = *(void *(__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *__hidden, unsigned int))(*(_QWORD *)this + 64LL);
      if ( v4 == Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor' )
        Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor'(this, 1u);
      else
        v4(this, 1u);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
      else
        v5();
    }
  }
  return v2;
}
