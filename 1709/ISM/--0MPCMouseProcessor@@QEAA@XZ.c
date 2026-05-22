/*
 * XREFs of ??0MPCMouseProcessor@@QEAA@XZ @ 0x18004A1A8
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18004A5A0 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z @ 0x18005FF54 (-SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MPCMouseProcessor *__fastcall MPCMouseProcessor::MPCMouseProcessor(MPCMouseProcessor *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx

  v1 = (_QWORD *)((char *)this + 32);
  MPCInputProviderBase::MPCInputProviderBase((MPCMouseProcessor *)((char *)this + 32));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `IRawInputProvider'};
  *((_DWORD *)this + 149) = 1;
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGetClosestInteractiveBounds,MPCInputProviderBase>'};
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 5) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 7) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &MPCMouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCMouseProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 3) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IGetClosestInteractiveBounds,MPCInputProviderBase>'};
  *v1 = &MPCMouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 5) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,IMouseProcessorForwarding,ICursorBasedInputProcessor,IGetClosestInteractiveBounds,MPCInputProviderBase>::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 7) = &MPCMouseProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_WORD *)this + 342) = 1;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *(_QWORD *)((char *)this + 708) = 0LL;
  *(_QWORD *)((char *)this + 716) = 0LL;
  *(_QWORD *)((char *)this + 724) = 0LL;
  *(_QWORD *)((char *)this + 732) = 0LL;
  *(_QWORD *)((char *)this + 740) = 0LL;
  *(_QWORD *)((char *)this + 748) = 0LL;
  *((_DWORD *)this + 189) = 500;
  *((_WORD *)this + 380) = 0;
  *(_QWORD *)((char *)this + 764) = 0LL;
  *(_QWORD *)((char *)this + 772) = 0LL;
  *(_QWORD *)((char *)this + 780) = 0LL;
  *(_QWORD *)((char *)this + 788) = 0LL;
  *((_WORD *)this + 398) = 0;
  *((_DWORD *)this + 200) = 0;
  *((_DWORD *)this + 164) = 1142292480;
  *((_DWORD *)this + 165) = 1056964608;
  *((_DWORD *)this + 166) = 1044549468;
  *((_DWORD *)this + 167) = 1053609165;
  *((_DWORD *)this + 168) = 1043878380;
  *((_DWORD *)this + 169) = 982355657;
  *((_DWORD *)this + 170) = 977574822;
  if ( ((1LL << gdwDeviceFamily) & 0xA) != 0 )
  {
    *((_DWORD *)this + 167) = 1056964608;
    *((_DWORD *)this + 165) = 1070134723;
    *((_DWORD *)this + 166) = 1070134723;
    *((_DWORD *)this + 168) = 1056964608;
  }
  MPCInputProviderBase::SetStabilizerFlags(v1, 1LL);
  return this;
}
