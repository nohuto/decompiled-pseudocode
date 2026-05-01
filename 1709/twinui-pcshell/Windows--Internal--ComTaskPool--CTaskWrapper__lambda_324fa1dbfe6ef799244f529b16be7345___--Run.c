/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_324fa1dbfe6ef799244f529b16be7345___::Run @ 0x180154E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_324fa1dbfe6ef799244f529b16be7345___::Run(
        __int64 a1)
{
  IUnknown *v2; // rbx
  __int64 *v3; // rax
  HRESULT Service; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  __int64 v8; // [rsp+40h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = *(IUnknown **)(*(_QWORD *)(a1 + 24) + 64LL);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v8);
  Service = IUnknown_QueryService(
              v2,
              (const GUID *const)&SID_ImmersiveLauncher,
              &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
              (void **)v3);
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 80LL))(
                v8,
                *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL));
    if ( Service >= 0 )
    {
      Service = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 64LL))(v8, 11LL, 6LL);
      if ( Service >= 0 )
        goto LABEL_8;
      v5 = 72LL;
    }
    else
    {
      v5 = 71LL;
    }
  }
  else
  {
    v5 = 70LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarproxy.cpp",
    (const char *)(unsigned int)Service);
LABEL_8:
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
