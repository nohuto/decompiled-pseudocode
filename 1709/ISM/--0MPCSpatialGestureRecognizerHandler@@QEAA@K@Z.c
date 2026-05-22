/*
 * XREFs of ??0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z @ 0x1800639D4
 * Callers:
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180061BD4 (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180063D64 (-RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ.c)
 *     ?SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z @ 0x1800645AC (-SetMode@MPCSpatialGestureRecognizerHandler@@AEAAXW4MPC2DGestureMode@@@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
MPCSpatialGestureRecognizerHandler *__fastcall MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
        MPCSpatialGestureRecognizerHandler *this,
        int a2)
{
  _QWORD *v3; // r14
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  HRESULT v6; // eax
  int ActivationFactory; // eax
  __int64 v8; // r15
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  HRESULT v13; // eax
  HSTRING v14; // rdi
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v19[1] = -2LL;
  v19[2] = this;
  *(_QWORD *)this = &MPCSpatialGestureRecognizerHandler::`vftable';
  *((_DWORD *)this + 2) = a2;
  v3 = (_QWORD *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v4 = (__int64 *)((char *)this + 24);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v5 = (__int64 *)((char *)this + 120);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 172) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_BYTE *)this + 200) = 0;
  v19[0] = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(
         L"Windows.UI.Input.Spatial.SpatialGestureRecognizer",
         0x31u,
         &hstringHeader,
         &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_77214186_57b9_3150_8382_698b24e264d0, v19);
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)ActivationFactory);
    __debugbreak();
  }
  v8 = v19[0];
  v9 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3;
  if ( *v3 )
  {
    *v3 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v9)[2])(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v8 + 48LL))(v8, 0LL, v3);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v3)(
          *v3,
          &GUID_10d1aeec_4246_416e_9cb0_e8273ec2e793,
          v4);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x31,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(this);
  MPCSpatialGestureRecognizerHandler::SetMode(this, 0LL);
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Perception.PerceptionTimestampHelper", 0x2Cu, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = string;
  v15 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = RoGetActivationFactory(v14, &GUID_d2b11f53_48f3_4131_9edc_4979a97e16bd, v5);
  if ( v16 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
  v17 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return this;
}
