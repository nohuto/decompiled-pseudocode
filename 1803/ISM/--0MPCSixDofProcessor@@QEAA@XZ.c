/*
 * XREFs of ??0MPCSixDofProcessor@@QEAA@XZ @ 0x180041A8C
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18003ADD0 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x1800420F0 (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  MPCInputProviderBase::MPCInputProviderBase(this);
  *((_DWORD *)this + 573) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCSixDofProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCSixDofProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &MPCSixDofProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_WORD *)this + 1148) = 0;
  *((_BYTE *)this + 2298) = 0;
  *((_DWORD *)this + 575) = 0;
  *((_DWORD *)this + 576) = 2;
  *((_WORD *)this + 1154) = 0;
  memset_0((char *)this + 2312, 0, 0x140uLL);
  *((_QWORD *)this + 329) = 0LL;
  *((_QWORD *)this + 330) = 0LL;
  *((_QWORD *)this + 331) = 0LL;
  *((_QWORD *)this + 332) = 0LL;
  *((_QWORD *)this + 333) = 0LL;
  *((_QWORD *)this + 334) = 0LL;
  *((_QWORD *)this + 335) = 0LL;
  *((_QWORD *)this + 336) = 0LL;
  *((_QWORD *)this + 337) = 0LL;
  *((_DWORD *)this + 676) = 0;
  *(_QWORD *)((char *)this + 2708) = 1065353216LL;
  *(_QWORD *)((char *)this + 2716) = 0LL;
  *(_QWORD *)((char *)this + 2724) = 0LL;
  *(_QWORD *)((char *)this + 2732) = 0LL;
  *(_QWORD *)((char *)this + 2740) = 0LL;
  *(_QWORD *)((char *)this + 2748) = 0LL;
  *(_QWORD *)((char *)this + 2756) = 0LL;
  *(_QWORD *)((char *)this + 2764) = 0LL;
  *(_QWORD *)((char *)this + 2772) = 0LL;
  *(_QWORD *)((char *)this + 2780) = 0LL;
  *(_QWORD *)((char *)this + 2788) = 0LL;
  *((_DWORD *)this + 699) = -1082130432;
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = 0LL;
  *((_QWORD *)this + 352) = 0LL;
  *((_BYTE *)this + 2824) = 0;
  *((_QWORD *)this + 354) = 0LL;
  *((_QWORD *)this + 355) = 0LL;
  *((_QWORD *)this + 356) = 0LL;
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 359) = 0LL;
  *((_QWORD *)this + 360) = 0LL;
  *((_QWORD *)this + 361) = 0LL;
  memset_0((char *)this + 2896, 0, 0x148uLL);
  *((_BYTE *)this + 3224) = 1;
  *((_DWORD *)this + 807) = 0;
  *((_WORD *)this + 1616) = 1;
  *((_BYTE *)this + 3234) = 0;
  *((_DWORD *)this + 809) = 0;
  *((_WORD *)this + 1620) = 0;
  *(_QWORD *)((char *)this + 3244) = 0LL;
  return this;
}
