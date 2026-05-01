/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveApplicationWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800296D0
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIImmersiveApplicationWindow@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1800A3CB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_1800A3CB0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IImmersiveApplicationWindow>::Release(
        _QWORD *a1,
        volatile int *a2)
{
  unsigned int result; // eax
  _DWORD *v4; // rcx
  unsigned int v5; // edi
  CImmersiveApplicationWindow *(__fastcall *v6)(CImmersiveApplicationWindow *, char); // rax
  __int64 v7; // rcx
  void (*v8)(void); // rax

  result = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)((char *)a1 + 44), a2);
  v5 = result;
  if ( !result )
  {
    if ( a1 )
    {
      v6 = *(CImmersiveApplicationWindow *(__fastcall **)(CImmersiveApplicationWindow *, char))(*a1 + 72LL);
      if ( v6 == CImmersiveApplicationWindow::`vector deleting destructor' )
      {
        *a1 = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        a1[4] = &CImmersiveApplicationWindow::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveApplicationWindow>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationWindow>>'};
        *v4 = -1073741823;
        v7 = a1[3];
        if ( v7 )
        {
          a1[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        operator delete(a1, (const struct std::nothrow_t *)0x38);
      }
      else
      {
        v6((CImmersiveApplicationWindow *)a1, 1);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v8 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      if ( (char *)v8 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
      {
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
        return v5;
      }
      v8();
    }
    return v5;
  }
  return result;
}
