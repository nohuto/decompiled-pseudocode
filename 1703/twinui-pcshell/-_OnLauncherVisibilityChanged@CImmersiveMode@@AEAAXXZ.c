/*
 * XREFs of ?_OnLauncherVisibilityChanged@CImmersiveMode@@AEAAXXZ @ 0x1800322F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___::Run @ 0x180032D20 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b9e009682738098b72449fb04d8aa113___--Run.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x180030200 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_OnLauncherVisibilityChanged(CImmersiveMode *this)
{
  IUnknown *v2; // rbx
  __int64 *v3; // rax
  bool v4; // bl
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned __int64 i; // r14
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  __int64 v18; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  v2 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this + 24, &v18);
  v3 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v17);
  v4 = IUnknown_QueryService(
         v2,
         (const GUID *const)&SID_ImmersiveLauncher,
         &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
         (void **)v3) >= 0;
  v5 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v17 + 56LL))(v17, &v15) >= 0 && v15 )
  {
    v6 = v17;
    v7 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 88LL))(v6, &v16);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = v16;
  if ( *((_QWORD *)this + 42) != v16 )
  {
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v9 = *((_QWORD *)this + 42);
    *((_QWORD *)this + 42) = v8;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  for ( i = 0LL; i < *((_QWORD *)this + 49); ++i )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 48) + 8 * i);
    v12 = *((_DWORD *)this + 72);
    *(_BYTE *)(v11 + 13) = (unsigned int)SHIsSameObject(
                                           *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))v11,
                                           *((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 42)) != 0;
    CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(v11, v12);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
