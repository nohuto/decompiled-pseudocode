/*
 * XREFs of ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180061BD4
 * Callers:
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x18005A9FC (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005594 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180016CD8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063244 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00VFtmBase@23@@Details@WRL@Micros.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x180063878 (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z @ 0x1800639D4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C0358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800C03BC (--0ManipulationInjector@@QEAA@XZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800C0560 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=54
MPCGestureHandler *__fastcall MPCGestureHandler::MPCGestureHandler(
        MPCGestureHandler *this,
        struct IInputProcessorHost *a2)
{
  _QWORD *v4; // rbx
  bool v5; // r15
  _DWORD *v6; // rsi
  unsigned int v7; // ebx
  int v8; // ebx
  const char *v9; // r9
  bool v10; // al
  __int64 v11; // rcx
  void *v12; // rbx
  HMONITOR v13; // rdx
  const char *v14; // r9
  void *v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // r8d
  _DWORD *v18; // rbx
  int v19; // eax
  MPCSpatialGestureRecognizerHandler *v20; // rax
  const char *v21; // r9
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  int *pdwType; // [rsp+20h] [rbp-40h]
  const char *pcbData; // [rsp+30h] [rbp-30h]
  int v26; // [rsp+40h] [rbp-20h] BYREF
  int v27; // [rsp+44h] [rbp-1Ch] BYREF
  DWORD v28; // [rsp+48h] [rbp-18h] BYREF
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp-10h] BYREF
  __int64 v30; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  MPCSpatialGestureRecognizerHandler *v32; // [rsp+B0h] [rbp+50h]
  unsigned int pvData; // [rsp+B8h] [rbp+58h] BYREF

  v30 = -2LL;
  v4 = (_QWORD *)((char *)this + 24);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>((char *)this + 24);
  *((_QWORD *)this + 9) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  v5 = 0;
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 10) = &MPCGestureHandler::`vftable';
  v6 = (_DWORD *)((char *)this + 88);
  ManipulationInjector::ManipulationInjector((MPCGestureHandler *)((char *)this + 88));
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_QWORD *)this + 116) = 0LL;
  *((_DWORD *)this + 234) = 0;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 123) = 0LL;
  *((_DWORD *)this + 248) = 0;
  *((_BYTE *)this + 996) = 0;
  v7 = 100;
  *((_DWORD *)this + 250) = 100;
  *((_BYTE *)this + 1008) = 0;
  *((_QWORD *)this + 127) = 0LL;
  *((_QWORD *)this + 128) = 0LL;
  pvData = 0;
  v28 = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\DWM",
          L"TouchHoverReportThrottleTimeInMs",
          0x10u,
          0LL,
          &pvData,
          &v28) )
    v7 = pvData;
  QueryPerformanceFrequency(&Frequency);
  *((_QWORD *)this + 128) = Frequency.QuadPart * v7 / 1000;
  v27 = 0;
  pdwType = &v27;
  v8 = NtQueryWnfStateData(&WNF_HOLO_DISPLAY_QUALITY_LEVEL, 0LL, 0LL, &v26) | 0x10000000;
  if ( (int)(v8 + 0x80000000) < 0 || v8 == -805306333 )
  {
    v8 = 0;
    wil::details::in1diag3::Log_HrIfMsg(
      retaddr,
      (void *)0x1443,
      (unsigned int)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8000FFFFLL,
      0,
      (bool)"Inconsistent state data size in wnf_query",
      pcbData);
    v5 = v26 != 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1441,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)(unsigned int)v8);
  }
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcthrottleableinputhelper.cpp",
      (const char *)(unsigned int)v8);
  v10 = v5 && (unsigned int)v27 < 2;
  *((_BYTE *)this + 1008) = v10;
  if ( *((struct IInputProcessorHost **)this + 115) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputProcessorHost *))(*(_QWORD *)a2 + 8LL))(a2);
    v11 = *((_QWORD *)this + 115);
    *((_QWORD *)this + 115) = a2;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  if ( !*((_QWORD *)this + 115) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v9);
    __debugbreak();
  }
  v12 = operator new(0xA40uLL);
  memset(v12, 0, 0xA40uLL);
  v15 = (void *)*((_QWORD *)this + 114);
  *((_QWORD *)this + 114) = v12;
  if ( v15 )
    operator delete(v15);
  if ( !*((_QWORD *)this + 114) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v14);
    __debugbreak();
  }
  if ( *v6 != 5 )
  {
    ManipulationInjector::EndManipulation((MPCGestureHandler *)((char *)this + 88), 0);
    *v6 = 5;
    *(_QWORD *)((char *)this + 820) = 0LL;
  }
  if ( *((_DWORD *)this + 44) )
  {
    v16 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x5A8, v17, (const char *)v16, (int)pdwType);
    __debugbreak();
  }
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 110) = (char *)this + 80;
  ManipulationInjector::Initialize((MPCGestureHandler *)((char *)this + 88), v13, 0LL);
  v18 = (_DWORD *)*((_QWORD *)this + 114);
  *v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 115) + 32LL))(*((_QWORD *)this + 115));
  *(_DWORD *)(*((_QWORD *)this + 114) + 4LL) = 8;
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 115) + 40LL))(
          *((_QWORD *)this + 115),
          *((_QWORD *)this + 114),
          (char *)this + 8);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v19);
    __debugbreak();
  }
  v32 = (MPCSpatialGestureRecognizerHandler *)operator new(0xD0uLL);
  v20 = MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(v32, **((_DWORD **)this + 114));
  v22 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 116);
  *((_QWORD *)this + 116) = v20;
  if ( v22 )
    (**v22)(v22, 1LL);
  if ( !*((_QWORD *)this + 116) )
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x28,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v21);
  return this;
}
