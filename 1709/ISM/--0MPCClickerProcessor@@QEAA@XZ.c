/*
 * XREFs of ??0MPCClickerProcessor@@QEAA@XZ @ 0x18005561C
 * Callers:
 *     ?Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180054270 (-Create@MPCClickerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MPCClickerProcessor *__fastcall MPCClickerProcessor::MPCClickerProcessor(MPCClickerProcessor *this)
{
  struct Microsoft::WRL::Details::ModuleBase *v2; // rcx
  MPCClickerProcessor *result; // rax

  MPCInputProviderBase::MPCInputProviderBase(this);
  v2 = Microsoft::WRL::Details::ModuleBase::module_;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_DWORD *)this + 141) = 1;
  if ( v2 )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v2 + 8LL))(v2);
  *((_DWORD *)this + 855) = 0;
  *((_DWORD *)this + 856) = 0;
  *((_DWORD *)this + 857) = 0;
  *((_DWORD *)this + 858) = 0;
  *((_DWORD *)this + 859) = 0;
  *((_DWORD *)this + 860) = 0;
  *((_DWORD *)this + 861) = 0;
  *(_QWORD *)this = &MPCClickerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCClickerProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_DWORD *)this + 869) = 1000593162;
  *((_DWORD *)this + 870) = 1000593162;
  result = this;
  *((_BYTE *)this + 3416) = 0;
  *((_BYTE *)this + 3448) = 0;
  *((_DWORD *)this + 871) = 1077936128;
  *((_DWORD *)this + 872) = 1036831949;
  return result;
}
