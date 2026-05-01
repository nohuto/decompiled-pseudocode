/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800024D0
 * Callers:
 *     ?OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z @ 0x180002100 (-OnCommitLimitChangeRoutine@CMemoryManager@System@Windows@@CAX_K0@Z.c)
 *     ?Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ @ 0x1800021D0 (-Release@AppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAKXZ.c)
 *     ??$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@@12@AEA_K0@Z @ 0x1800023C0 (--$Make@VAppMemoryUsageLimitChangingEventArgs@System@Windows@@AEA_KAEA_K@Details@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180008820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180008820.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppMemoryUsageLimitChangingEventArgs@System@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180008830 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180008830.c)
 * Callees:
 *     ??_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z @ 0x1800021E0 (--_EAppMemoryUsageLimitChangingEventArgs@System@Windows@@UEAAPEAXI@Z.c)
 *     ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180003C40 (-DecrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::System::IAppMemoryUsageLimitChangingEventArgs,Microsoft::WRL::FtmBase>::Release(
        Windows::System::AppMemoryUsageLimitChangingEventArgs *this)
{
  signed __int64 v1; // rax
  Windows::System::AppMemoryUsageLimitChangingEventArgs *v2; // r8
  unsigned __int32 v3; // ebx
  signed __int64 v4; // rtt
  Windows::System::AppMemoryUsageLimitChangingEventArgs *(__fastcall *v5)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char); // rax
  void (__fastcall *v6)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), Windows::System::AppMemoryUsageLimitChangingEventArgs *); // rax

  v1 = *((_QWORD *)this + 8);
  v2 = this;
  while ( v1 >= 0 )
  {
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 8, v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_4;
  }
  v3 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 16));
LABEL_4:
  if ( !v3 )
  {
    if ( this )
    {
      v5 = *(Windows::System::AppMemoryUsageLimitChangingEventArgs *(__fastcall **)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, char))(*(_QWORD *)this + 64LL);
      if ( v5 == Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor' )
        Windows::System::AppMemoryUsageLimitChangingEventArgs::`vector deleting destructor'(this, 1);
      else
        ((void (__fastcall *)(Windows::System::AppMemoryUsageLimitChangingEventArgs *, __int64, Windows::System::AppMemoryUsageLimitChangingEventArgs *))v5)(
          this,
          1LL,
          this);
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v6 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, __int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), Windows::System::AppMemoryUsageLimitChangingEventArgs *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
        Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount,
          v2);
      else
        v6(
          Microsoft::WRL::Details::ModuleBase::module_,
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount,
          v2);
    }
  }
  return v3;
}
