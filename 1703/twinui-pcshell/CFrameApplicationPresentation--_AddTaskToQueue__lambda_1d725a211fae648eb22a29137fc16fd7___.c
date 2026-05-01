/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___ @ 0x180069E64
 * Callers:
 *     ?UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ @ 0x180066920 (-UnpresentWindow@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_0cd635be87c787a0220700b97c104318___ @ 0x18006A9F4 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_0cd635be87c787a0220700b97c104318___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18006E9D0 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18006E9D0.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_1d725a211fae648eb22a29137fc16fd7___(
        _DWORD *a1,
        __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  IUnknown **v8; // rax
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD v14[4]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h]
  __int64 v17; // [rsp+70h] [rbp-98h]
  _QWORD v18[40]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v14[1] = -2LL;
  v14[3] = a2;
  if ( a1[12] == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x580,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    a2[2] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a2 + 2));
    v4 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return 2147947423LL;
  }
  else
  {
    v14[2] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v15[0] = a1;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
    v15[1] = a1;
    v6 = *a2;
    v16 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v17 = a2[1];
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v18,
      a2 + 2);
    v18[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    v7 = a1[10];
    v8 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_0cd635be87c787a0220700b97c104318___(v14, v15);
    v9 = Windows::Internal::ComTaskPool::RunTask(3, 2u, v7, 0, *v8, 0LL);
    v10 = v14[0];
    if ( v14[0] )
    {
      v14[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v18[0] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v15[0];
    if ( v15[0] )
    {
      v15[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v9 >= 0 )
      ++a1[49];
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
    a2[2] = (__int64)&CFramePresentationTelemetry::UnpresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a2 + 2));
    v13 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return (unsigned int)v9;
  }
}
