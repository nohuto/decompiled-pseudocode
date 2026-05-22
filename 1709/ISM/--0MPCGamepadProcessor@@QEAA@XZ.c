/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180036FC8
 * Callers:
 *     ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180037410 (-Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     ?SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z @ 0x18005FF54 (-SetStabilizerFlags@MPCInputProviderBase@@IEAAXW4MethodFlags@RayStabilizer@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v1; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v3; // rcx
  MPCGamepadProcessor *result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 8);
  MPCInputProviderBase::MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable';
  *((_DWORD *)this + 143) = 1;
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
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  memset((char *)this + 600, 0, 0xB20uLL);
  *((_DWORD *)this + 862) = 0;
  memset((char *)this + 3456, 0, 0x1C0uLL);
  *((_DWORD *)this + 976) = 0;
  *((_WORD *)this + 1954) = 0;
  *((_BYTE *)this + 3910) = 0;
  *((_DWORD *)this + 978) = 1045220557;
  *((_DWORD *)this + 979) = 1036831949;
  *((_DWORD *)this + 980) = 1088421888;
  *((_DWORD *)this + 981) = 1022739087;
  *((_DWORD *)this + 982) = 1025087898;
  *((_DWORD *)this + 983) = 1088421888;
  *((_DWORD *)this + 984) = 0x40000000;
  memset((char *)this + 3940, 0, 0x30uLL);
  *((_QWORD *)this + 500) = 0LL;
  *((_QWORD *)this + 499) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 1002) = 1065353216;
  *((_QWORD *)this + 502) = 0LL;
  *((_QWORD *)this + 503) = 0LL;
  *((_QWORD *)this + 504) = 0LL;
  *((_QWORD *)this + 505) = 0LL;
  *((_QWORD *)this + 506) = 0LL;
  *((_QWORD *)this + 507) = 0LL;
  *((_WORD *)this + 2032) = 0;
  *((_DWORD *)this + 1017) = 0;
  MPCInputProviderBase::SetStabilizerFlags(v1, 0LL);
  QueryPerformanceFrequency(&Frequency);
  result = this;
  *((double *)this + 499) = 1.0 / (double)(int)Frequency.LowPart;
  return result;
}
