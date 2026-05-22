/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x1800930E8
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800934E0 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800420F0 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800578D0 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rbx
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  MPCGamepadProcessor *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable';
  *((_DWORD *)this + 575) = 1;
  *v1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( v3 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable';
  *v1 = &MPCGamepadProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_QWORD *)this + 288) = 0LL;
  *((_QWORD *)this + 289) = 0LL;
  *((_QWORD *)this + 290) = 0LL;
  memset_0((char *)this + 2328, 0, 0x6C8uLL);
  *((_DWORD *)this + 588) = 1736;
  *((_DWORD *)this + 1016) = 0;
  memset_0((char *)this + 4072, 0, 0x1C0uLL);
  *((_DWORD *)this + 1130) = 0;
  *((_WORD *)this + 2262) = 0;
  *((_BYTE *)this + 4526) = 0;
  memset_0((char *)this + 4528, 0, 0x38uLL);
  *((_QWORD *)this + 574) = 0LL;
  *((_DWORD *)this + 1150) = 1065353216;
  *((_QWORD *)this + 573) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_QWORD *)this + 577) = 0LL;
  *((_QWORD *)this + 578) = 0LL;
  *((_QWORD *)this + 579) = 0LL;
  *((_QWORD *)this + 580) = 0LL;
  *((_WORD *)this + 2324) = 0;
  *((_DWORD *)this + 1163) = 0;
  if ( *((_DWORD *)this + 107) )
  {
    *((_QWORD *)this + 53) = 0LL;
    RayStabilizer::Reset((MPCGamepadProcessor *)((char *)this + 384));
  }
  QueryPerformanceFrequency(&Frequency);
  result = this;
  *((double *)this + 573) = 1.0 / (double)(int)Frequency.LowPart;
  return result;
}
