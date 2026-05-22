/*
 * XREFs of ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180053A9C
 * Callers:
 *     ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180052A60 (-Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A368 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcess.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x180053D50 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$all.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180056B1C (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<MPCProcessor,IInputProcessor,InputProcessorCreateParams * &>(
        _QWORD *a1,
        const struct InputProcessorCreateParams **a2)
{
  MPCInputProviderBase *v4; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  MPCHolographicInputManager *Instance; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a1 = 0LL;
  v4 = (MPCInputProviderBase *)operator new(0x250uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = (__int64)v4;
  if ( !v4 )
    return (unsigned int)-2147024882;
  MPCInputProviderBase::MPCInputProviderBase(v4);
  *(_DWORD *)(v5 + 564) = 1;
  *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *(_QWORD *)(v5 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *(_QWORD *)(v5 + 16) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *(_QWORD *)(v5 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  v8 = Microsoft::WRL::Details::ModuleBase::module_;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v5 = &MPCProcessor::`vftable'{for `IInputProcessor'};
  *(_QWORD *)(v5 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *(_QWORD *)(v5 + 16) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *(_QWORD *)(v5 + 24) = &MPCProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *(_QWORD *)(v5 + 568) = 0LL;
  *(_QWORD *)(v5 + 576) = 0LL;
  *(_QWORD *)(v5 + 568) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buyheadnode(
                            v8,
                            v7);
  *(_BYTE *)(v5 + 589) = 0;
  v9 = MPCInputProviderBase::RuntimeClassInitialize((MPCInputProviderBase *)v5, *a2);
  v6 = v9;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(v5 + 584) = 0;
    *(_BYTE *)(v5 + 588) = 0;
    Instance = MPCHolographicInputManager::GetInstance();
    v9 = MPCHolographicInputManager::SetProviderPrimary(Instance, (struct IMPCInputProviderBase *)(v5 + 24));
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      goto LABEL_11;
    }
    v10 = 26LL;
  }
  else
  {
    v10 = 20LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
    (const char *)(unsigned int)v9);
LABEL_11:
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( (int)Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                v5,
                &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                a1) < 0 )
    {
      v6 = -2147467262;
    }
    else
    {
      v6 = 0;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
  }
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 564), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 64LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return (unsigned int)v6;
}
