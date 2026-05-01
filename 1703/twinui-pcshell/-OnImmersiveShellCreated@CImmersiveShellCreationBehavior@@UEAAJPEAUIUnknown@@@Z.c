/*
 * XREFs of ?OnImmersiveShellCreated@CImmersiveShellCreationBehavior@@UEAAJPEAUIUnknown@@@Z @ 0x1800CAAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x1800CA92C (-_ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::OnImmersiveShellCreated(
        CImmersiveShellCreationBehavior *this,
        struct IUnknown *a2)
{
  HRESULT Service; // ebx
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  Service = CImmersiveShellCreationBehavior::_ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 24));
  if ( Service >= 0 )
  {
    v7 = 0LL;
    v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v7);
    Service = IUnknown_QueryService(
                a2,
                (const GUID *const)&SID_ImmersiveShellHookService,
                &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                (void **)v4);
    if ( Service >= 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, 7LL);
    v5 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return (unsigned int)Service;
}
