/*
 * XREFs of ?_EnsureLauncher@CRealmActivationHistory@@AEAAJXZ @ 0x18004CB30
 * Callers:
 *     ?SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z @ 0x18004C700 (-SetActiveApp@CRealmActivationHistory@@UEAAJW4IAM_APPLICATION_REALM@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealmActivationHistory::_EnsureLauncher(CRealmActivationHistory *this)
{
  unsigned int Service; // ebx
  __int64 *v2; // rdi
  IUnknown *v3; // rbx
  __int64 *v4; // rax
  IUnknown *v5; // rcx
  IUnknown *punk; // [rsp+48h] [rbp+10h] BYREF

  Service = 0;
  v2 = (__int64 *)((char *)this + 416);
  if ( !*((_QWORD *)this + 52) )
  {
    punk = 0LL;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 5) + 32LL))(
      (char *)this + 40,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    v3 = punk;
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v2);
    Service = IUnknown_QueryService(
                v3,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v4);
    v5 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v5->lpVtbl->Release)(v5);
    }
  }
  return Service;
}
