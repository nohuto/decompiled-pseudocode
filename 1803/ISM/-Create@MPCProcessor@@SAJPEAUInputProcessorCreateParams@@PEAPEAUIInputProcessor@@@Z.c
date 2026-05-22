/*
 * XREFs of ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800453D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800420F0 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044180 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180044180.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180044200 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPC_ea_180044200.c)
 *     ?InitializeConstants@MPCProcessor@@EEAAXXZ @ 0x180045730 (-InitializeConstants@MPCProcessor@@EEAAXXZ.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@XZ @ 0x18004728C (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$all.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180049778 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCInputProviderBase *v5; // rax
  __int64 v6; // rbx
  int Interface; // edi
  __int64 v8; // rdx
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCInputProviderBase *)operator new(0x910uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = (__int64)v5;
  if ( v5 )
  {
    MPCInputProviderBase::MPCInputProviderBase(v5);
    *(_DWORD *)(v6 + 2292) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
    *(_QWORD *)(v6 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
    *(_QWORD *)(v6 + 16) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
    *(_QWORD *)(v6 + 24) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
    v9 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &MPCProcessor::`vftable'{for `IInputProcessor'};
    *(_QWORD *)(v6 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
    *(_QWORD *)(v6 + 16) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
    *(_QWORD *)(v6 + 24) = &MPCProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
    *(_QWORD *)(v6 + 2296) = 0LL;
    *(_QWORD *)(v6 + 2304) = 0LL;
    *(_QWORD *)(v6 + 2296) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buyheadnode(
                               v9,
                               v8);
    *(_WORD *)(v6 + 2312) = 0;
    v10 = MPCInputProviderBase::RuntimeClassInitialize((MPCInputProviderBase *)v6, a1);
    Interface = v10;
    if ( v10 >= 0 )
    {
      MPCProcessor::InitializeConstants((MPCProcessor *)(v6 + 24));
      Interface = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcprocessor.cpp",
        (const char *)(unsigned int)v10);
    }
    if ( Interface >= 0 )
      Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::QueryInterface(
                    v6,
                    &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                    (__int64 *)a2);
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release((volatile signed __int32 *)v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)Interface;
}
