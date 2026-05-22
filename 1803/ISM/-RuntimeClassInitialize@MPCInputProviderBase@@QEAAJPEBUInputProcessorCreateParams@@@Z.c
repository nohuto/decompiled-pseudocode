/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180049778
 * Callers:
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18003ACE0 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800453D0 (-Create@MPCProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180047B80 (-Create@MPCHeadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ??$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1800493D8 (--$MakeAndInitialize@VMPCClickerProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800933B0 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180096BCC (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@$$QEAV234@@Z @ 0x18000C4F8 (--$emplace_back@V-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIContextua.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18004BA60 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180050738 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x180057DBC (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  struct IMPCInputProviderBase *v3; // rdi
  struct MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v5; // rbx
  __int64 **v6; // r14
  struct IMPCInputProviderBase **i; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  ISMTracing *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v14; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  *((_QWORD *)this + 5) = *((_QWORD *)a2 + 1);
  v3 = (MPCInputProviderBase *)((char *)this + 24);
  Instance = MPCHolographicInputManager::GetInstance();
  v5 = Instance;
  v6 = (__int64 **)((char *)Instance + 1968);
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)Instance + 246);
        i != *((struct IMPCInputProviderBase ***)Instance + 247);
        ++i )
  {
    if ( *i == v3 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
  }
  v14 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 8LL))(v3);
  std::vector<Microsoft::WRL::ComPtr<IContextualProcessor>>::emplace_back<Microsoft::WRL::ComPtr<IContextualProcessor>>(
    v6,
    (__int64 *)&v14);
  if ( v14 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( *((_QWORD *)v5 + 278) == *((_QWORD *)v5 + 279) )
    MPCHolographicInputManager::AddPrimaryInputProvider(v5, v3);
  if ( *((_QWORD *)v5 + 253) )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 288LL))(v3);
  v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 112LL))(v3);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v3 + 88LL))(v3);
  MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 2208), v9, v8);
  v10 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v10 )
  {
    if ( *v10 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputProviderBase_Create_(v11, *((const struct DeviceInfo **)this + 6));
    }
  }
  return 0LL;
}
