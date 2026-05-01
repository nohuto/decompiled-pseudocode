/*
 * XREFs of ?OnChromeOffsetsChanged@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@@Z @ 0x18004CD80
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x18004C150 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___ @ 0x18004E4D0 (CApplicationFrameService--_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationFrameService::OnChromeOffsetsChanged(
        CApplicationFrameService *this,
        struct IApplicationFrame *a2)
{
  int FrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9; // eax
  __int64 v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 v13; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+58h] [rbp-18h] BYREF

  v14[1] = -2LL;
  if ( (*(int (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 120LL))(a2, &v15) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, int *))(*(_QWORD *)a2 + 128LL))(a2, &v12) >= 0
    && (*(int (__fastcall **)(struct IApplicationFrame *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v14) >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v13 = 0LL;
    FrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9 = CApplicationFrameService::_FindFrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9___(
                                                              (char *)this - 40,
                                                              v14[0],
                                                              &v13);
    v5 = v13;
    if ( FrameWrapper__lambda_691d3b14a6f357c8b21f2100038d6bd9 >= 0 )
    {
      v11 = 0LL;
      v6 = (__int64 *)*((_QWORD *)this + 14);
      v7 = *v6;
      v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v11);
      if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v7 + 48))(
             v6,
             v5,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             v8) >= 0 )
      {
        *(_OWORD *)(v5 + 56) = v15;
        *(_DWORD *)(v5 + 72) = v12;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 488LL))(v11);
      }
      v9 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return 0LL;
}
