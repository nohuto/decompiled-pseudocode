/*
 * XREFs of ?_EnsureComponentCreators@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CAB50
 * Callers:
 *     ?_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@AEBU_GUID@@PEAPEAX@Z @ 0x1800CAD30 (-_CreateComponentWithSxs@CImmersiveShellCreationBehavior@@AEAAJ_NPEBUIMMERSIVE_SHELL_COMPONENT@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CB360 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Mi.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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

  if ( !this[8] )
  {
    Instance = CoCreateInstance(
                 &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 8);
    if ( Instance < 0 )
    {
      v3 = 471LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
  }
  if ( !this[10] )
  {
    Instance = CoCreateInstance(
                 &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 10);
    if ( Instance < 0 )
    {
      v3 = 475LL;
      goto LABEL_4;
    }
  }
  if ( !this[9] )
  {
    Instance = CoCreateInstance(
                 &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85,
                 0LL,
                 1u,
                 &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                 this + 9);
    if ( Instance < 0 )
    {
      v3 = 479LL;
      goto LABEL_4;
    }
  }
  if ( !this[11] )
  {
    v5 = this[11];
    if ( v5 )
    {
      this[11] = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
    }
    this[11] = 0LL;
    v6 = (volatile signed __int32 *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( !v6 )
    {
      Interface = -2147024882;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x1E3,
        (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
        (const char *)(unsigned int)Interface);
      return (unsigned int)Interface;
    }
    *((_DWORD *)v6 + 3) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveComponentCreator,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v7 = &CoCreateInstanceImmersiveShellComponentCreator::`vftable';
    Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                  v7,
                  &GUID_329e4902_ae76_4a2c_a557_e9c4aa2ab9d8,
                  this + 11);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
    if ( Interface < 0 )
      goto LABEL_19;
  }
  return 0LL;
}
