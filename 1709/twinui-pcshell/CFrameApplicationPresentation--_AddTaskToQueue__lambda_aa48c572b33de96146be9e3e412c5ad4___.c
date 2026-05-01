/*
 * XREFs of CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4___ @ 0x18006C198
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x1800682F0 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___ @ 0x18006CB60 (Windows--Internal--ComTaskPool--QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180070A9C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_180070A9C.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFrameApplicationPresentation::_AddTaskToQueue__lambda_aa48c572b33de96146be9e3e412c5ad4___(
        unsigned int *a1,
        __int64 *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A8h]
  _QWORD v16[40]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  if ( a1[16] == 2 )
  {
    v4 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
    a2[2] = (__int64)&CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a2 + 2));
    v5 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  else
  {
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v13[0] = a1;
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    v13[1] = a1;
    v6 = *a2;
    v14 = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v15 = a2[1];
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
      v16,
      a2 + 2);
    v16[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    v4 = Windows::Internal::ComTaskPool::QueueTask__lambda_11a7567f3465c52bdf1b4059be609446___(
           v8,
           v7,
           a1[14],
           v13,
           -2LL);
    v16[0] = &CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
    v9 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v13[0];
    if ( v13[0] )
    {
      v13[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v4 >= 0 )
      ++a1[53];
    (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 16LL))(a1);
    a2[2] = (__int64)&CFramePresentationTelemetry::PresentWindow::`vftable';
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a2 + 2);
    wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a2 + 2));
    v11 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return (unsigned int)v4;
}
