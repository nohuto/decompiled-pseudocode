/*
 * XREFs of ?_EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800DEAA0
 * Callers:
 *     ?_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1800DECBC (-_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveComponentCreator@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DF320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800DF320.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::_EnsureComponentCreators(LPVOID *this)
{
  HRESULT Instance; // ebx
  __int64 v3; // rdx
  LPVOID v5; // rcx
  volatile signed __int32 *v6; // rax
  volatile signed __int32 *v7; // rbx
  int Interface; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !this[10] )
  {
    Instance = CoCreateInstance(
                 &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 10);
    if ( Instance < 0 )
    {
      v3 = 488LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  if ( !this[12] )
  {
    Instance = CoCreateInstance(
                 &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 12);
    if ( Instance < 0 )
    {
      v3 = 492LL;
      goto LABEL_4;
    }
  }
  if ( !this[11] )
  {
    Instance = CoCreateInstance(
                 &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 11);
    if ( Instance < 0 )
    {
      v3 = 496LL;
      goto LABEL_4;
    }
  }
  if ( !this[13] )
  {
    v5 = this[13];
    if ( v5 )
    {
      this[13] = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
    this[13] = 0LL;
    v6 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      Interface = -2147024882;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1F4,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)Interface);
      return (unsigned int)Interface;
    }
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveComponentCreator>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &CoCreateInstanceImmersiveShellComponentCreator::`vftable';
    Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveComponentCreator>::QueryInterface(
                  v7,
                  &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                  this + 13);
    if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 32LL))(v7, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
    if ( Interface < 0 )
      goto LABEL_22;
  }
  return 0LL;
}
