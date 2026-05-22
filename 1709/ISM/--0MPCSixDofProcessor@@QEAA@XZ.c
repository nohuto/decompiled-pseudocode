/*
 * XREFs of ??0MPCSixDofProcessor@@QEAA@XZ @ 0x180051E28
 * Callers:
 *     ?Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18004D8E0 (-Create@MPCSixDofProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MPCInputProviderBase@@QEAA@XZ @ 0x180039C6C (--0MPCInputProviderBase@@QEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  MPCInputProviderBase::MPCInputProviderBase(this);
  *((_DWORD *)this + 141) = 1;
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
  *((_DWORD *)this + 142) = 1056964608;
  *((_DWORD *)this + 143) = 1036831949;
  *((_DWORD *)this + 144) = 1097859072;
  *((_DWORD *)this + 145) = 1065353216;
  *((_DWORD *)this + 146) = 1015222895;
  *((_DWORD *)this + 147) = 1015222895;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 0x403B800000000000LL;
  *((_QWORD *)this + 76) = 0x4046800000000000LL;
  *((_QWORD *)this + 77) = 0x3FE99999A0000000LL;
  *((_QWORD *)this + 78) = 0x3F9EB851E0000000LL;
  *((_BYTE *)this + 632) = 1;
  *((_DWORD *)this + 159) = 1088421888;
  *((_DWORD *)this + 160) = 1065353216;
  *((_DWORD *)this + 161) = 1133903872;
  *((_DWORD *)this + 162) = 1148846080;
  *((_DWORD *)this + 163) = 981668463;
  *((_DWORD *)this + 164) = 1028443341;
  *((_DWORD *)this + 165) = 10;
  *((_DWORD *)this + 166) = 1016296636;
  *((_DWORD *)this + 167) = 1028443341;
  *((_DWORD *)this + 168) = 1028443341;
  *((_DWORD *)this + 169) = 1036831949;
  *((_DWORD *)this + 170) = 15625;
  *((_DWORD *)this + 171) = 1056964608;
  *((_DWORD *)this + 172) = 1045220557;
  *((_DWORD *)this + 173) = 8;
  *((_DWORD *)this + 174) = 1050253722;
  *((_DWORD *)this + 175) = 1048576000;
  *((_QWORD *)this + 88) = 0LL;
  *((_WORD *)this + 356) = 257;
  *((_BYTE *)this + 714) = 0;
  *((_DWORD *)this + 179) = 2;
  *((_WORD *)this + 360) = 0;
  memset((char *)this + 728, 0, 0x140uLL);
  *((_QWORD *)this + 131) = 0LL;
  memset((char *)this + 1056, 0, 0xB20uLL);
  *((_QWORD *)this + 488) = 0LL;
  *((_QWORD *)this + 489) = 0LL;
  *((_QWORD *)this + 490) = 0LL;
  *((_QWORD *)this + 491) = 0LL;
  *((_QWORD *)this + 492) = 0LL;
  *((_QWORD *)this + 493) = 0LL;
  *((_QWORD *)this + 494) = 0LL;
  *((_QWORD *)this + 495) = 0LL;
  *((_QWORD *)this + 496) = 0LL;
  *((_DWORD *)this + 994) = 0;
  *(_QWORD *)((char *)this + 3980) = 1065353216LL;
  *(_QWORD *)((char *)this + 3988) = 0LL;
  *(_QWORD *)((char *)this + 3996) = 0LL;
  *(_QWORD *)((char *)this + 4004) = 0LL;
  *(_QWORD *)((char *)this + 4012) = 0LL;
  *(_QWORD *)((char *)this + 4020) = 0LL;
  *(_QWORD *)((char *)this + 4028) = 0LL;
  *(_QWORD *)((char *)this + 4036) = 0LL;
  *(_QWORD *)((char *)this + 4044) = 0LL;
  *(_QWORD *)((char *)this + 4052) = 0LL;
  *(_QWORD *)((char *)this + 4060) = 0LL;
  *((_DWORD *)this + 1017) = -1082130432;
  *((_QWORD *)this + 509) = 0LL;
  *((_QWORD *)this + 510) = 0LL;
  *((_QWORD *)this + 511) = 0LL;
  *((_BYTE *)this + 4096) = 0;
  *((_QWORD *)this + 513) = 0LL;
  *((_QWORD *)this + 514) = 0LL;
  *((_QWORD *)this + 515) = 0LL;
  *((_QWORD *)this + 516) = 0LL;
  *((_QWORD *)this + 517) = 0LL;
  *((_QWORD *)this + 518) = 0LL;
  *((_QWORD *)this + 519) = 0LL;
  *((_QWORD *)this + 520) = 0LL;
  memset((char *)this + 4168, 0, 0x148uLL);
  *((_DWORD *)this + 1124) = 0;
  *((_BYTE *)this + 4500) = 1;
  *((_BYTE *)this + 4502) = 0;
  *((_QWORD *)this + 563) = 0LL;
  return this;
}
