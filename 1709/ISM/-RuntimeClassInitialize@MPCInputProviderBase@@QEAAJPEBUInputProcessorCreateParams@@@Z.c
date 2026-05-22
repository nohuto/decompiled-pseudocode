/*
 * XREFs of ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40
 * Callers:
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800372E4 (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004A698 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004D7E8 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180053A9C (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180054270 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x1800563FC (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18005934C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$emplace_back@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAX$$QEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@Z @ 0x1800599AC (--$emplace_back@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIMPCInput.c)
 *     ?MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z @ 0x18005F9B8 (-MPCInputProviderBase_Create_@ISMTracing@@QEAAXPEBUDeviceInfo@@@Z.c)
 *     ?Initialize@MPCPerfCounter@@QEAAXKI@Z @ 0x1800635BC (-Initialize@MPCPerfCounter@@QEAAXKI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCInputProviderBase::RuntimeClassInitialize(
        MPCInputProviderBase *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  char *v9; // rdi
  __int64 v10; // rax
  MPCHolographicInputManager *v11; // rbx
  __int64 **v12; // r14
  char **i; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  ISMTracing *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 6) = *(_QWORD *)a2;
  v3 = *((_QWORD *)a2 + 1);
  *((_QWORD *)this + 5) = v3;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 64LL))(v3);
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    *((_QWORD *)this + 7) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 88LL))(
         v4,
         *((_QWORD *)this + 6),
         (char *)this + 56);
  if ( v6 >= 0 )
  {
    v9 = (char *)this + 24;
    MPCHolographicInputManager::GetInstance();
    v11 = (MPCHolographicInputManager *)v10;
    v12 = (__int64 **)(v10 + 3080);
    for ( i = *(char ***)(v10 + 3080); i != *(char ***)(v10 + 3088); ++i )
    {
      if ( *i == v9 )
      {
        v6 = -2147024809;
        v7 = 30LL;
        goto LABEL_5;
      }
    }
    v19 = (__int64)this + 24;
    if ( this != (MPCInputProviderBase *)-24LL )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))((char *)this + 24);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::emplace_back<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v12,
      &v19);
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    if ( *((_QWORD *)v11 + 417) == *((_QWORD *)v11 + 418) )
      MPCHolographicInputManager::AddPrimaryInputProvider(v11, (MPCInputProviderBase *)((char *)this + 24));
    if ( *((_QWORD *)v11 + 393) )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 280LL))((char *)this + 24);
    v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 112LL))((char *)this + 24);
    v15 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v9 + 88LL))((char *)this + 24);
    MPCPerfCounter::Initialize((MPCInputProviderBase *)((char *)this + 392), v15, v14);
    v16 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
    if ( v16 )
    {
      if ( *v16 )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputProviderBase_Create_(v17, *((const struct DeviceInfo **)this + 6));
      }
    }
    return 0LL;
  }
  else
  {
    v7 = 27LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
}
