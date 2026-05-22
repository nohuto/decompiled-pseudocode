/*
 * XREFs of ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18004D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceUpdate@@UIInputFocusListener@@UIMPCInputProviderBase@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003A368 (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18004D7E8 (-RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x180051E28 (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCSixDofProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  __int64 v4; // rax
  MPCSixDofProcessor *v5; // rax
  unsigned int v6; // edi
  LARGE_INTEGER *v7; // rbx
  int v8; // eax
  struct Microsoft::WRL::Details::ModuleBase *v9; // rcx

  v4 = 2LL;
  do
  {
    *a2 = 0LL;
    --v4;
  }
  while ( v4 );
  v5 = (MPCSixDofProcessor *)operator new(0x11A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v5 )
    return (unsigned int)-2147024882;
  v7 = (LARGE_INTEGER *)MPCSixDofProcessor::MPCSixDofProcessor(v5);
  MPCSixDofProcessor::RuntimeClassInitialize(v7, a1);
  v6 = v8;
  if ( v8 >= 0 )
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
      if ( _InterlockedExchangeAdd(&v7[70].HighPart, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(LARGE_INTEGER *, __int64))(v7->QuadPart + 64))(v7, 1LL);
        v9 = Microsoft::WRL::Details::ModuleBase::module_;
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          goto LABEL_16;
      }
    }
  }
  else if ( v7 )
  {
    if ( _InterlockedExchangeAdd(&v7[70].HighPart, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(LARGE_INTEGER *, __int64))(v7->QuadPart + 64))(v7, 1LL);
      v9 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_16:
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(v9);
    }
  }
  return v6;
}
