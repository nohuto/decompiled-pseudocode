/*
 * XREFs of ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180054270
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A368 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcess.c)
 *     ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180054E40 (-SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x18005561C (--0MPCClickerProcessor@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18005FB40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCClickerProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCClickerProcessor *v5; // rax
  int v6; // edi
  MPCClickerProcessor *v7; // rbx
  int v8; // eax
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCClickerProcessor *)operator new(0xDA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v7 = MPCClickerProcessor::MPCClickerProcessor(v5);
  v8 = MPCInputProviderBase::RuntimeClassInitialize(v7, a1);
  v6 = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)((char *)v7 + 3452) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v7 + 865) = 0;
    *((_QWORD *)v7 + 433) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)v7 + 868) = 0;
    MPCClickerProcessor::SendInputDetectedIfController(v7, *((struct DeviceInfo **)v7 + 6));
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcclickerprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v6 >= 0 )
  {
    *a2 = 0LL;
    if ( (int)Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>::CanCastTo(
                (__int64)v7,
                &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
                a2) < 0 )
    {
      v6 = -2147467262;
    }
    else
    {
      v6 = 0;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    }
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 141, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(MPCClickerProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
        v9 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          goto LABEL_19;
      }
    }
  }
  else if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7 + 141, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(MPCClickerProcessor *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
      v9 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_19:
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(v9);
    }
  }
  return (unsigned int)v6;
}
