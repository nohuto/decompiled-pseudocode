/*
 * XREFs of ?TerminateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4PLM_TERMINATE_FLAGS@@PEAW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z @ 0x18000A500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByApplication@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1800192E4 (--$_FindFirstApplication@VCImmersiveAppFinderByApplication@@@CApplicationManager@@AEAAJAEBVCImme.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::TerminateApplication(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  IUnknown *v8; // rbx
  void **v9; // rax
  HRESULT Service; // ebx
  IUnknown *v11; // rcx
  bool v12; // bl
  IUnknown *v13; // rbx
  __int64 i; // rdi
  __int64 v15; // r14
  IUnknown *v16; // rcx
  __int64 v17; // rcx
  IUnknown *v19; // [rsp+30h] [rbp-30h] BYREF
  IUnknown *punk[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v23; // [rsp+80h] [rbp+20h] BYREF

  v21[1] = -2LL;
  v21[0] = 0LL;
  punk[0] = 0LL;
  LODWORD(v23) = 1;
  (*(void (__fastcall **)(__int64, GUID *, IUnknown **))(*(_QWORD *)(a1 - 288) + 32LL))(
    a1 - 288,
    &GUID_00000000_0000_0000_c000_000000000046,
    punk);
  v8 = punk[0];
  v9 = (void **)IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v21);
  Service = IUnknown_QueryService(
              v8,
              (const GUID *const)&SID_ProcessLifetimeManagerControl,
              &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d,
              v9);
  v11 = punk[0];
  if ( punk[0] )
  {
    punk[0] = 0LL;
    ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
  }
  if ( Service >= 0 )
  {
    Service = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(*(_QWORD *)v21[0] + 184LL))(
                v21[0],
                a2,
                a3,
                a4);
    if ( Service >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v19 = 0LL;
      v23 = a2;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v12 = (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByApplication>(a1 - 344, &v23, &v19, 0LL) >= 0;
      if ( a2 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      if ( v12 )
      {
        punk[0] = (IUnknown *)(a1 - 344);
        v13 = v19;
        punk[1] = v19;
        if ( v19 )
          ((void (__fastcall *)(IUnknown *))v19->lpVtbl->AddRef)(v19);
        for ( i = *(_QWORD *)(a1 + 304); i; --i )
        {
          v15 = *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * i - 8);
          if ( (unsigned int)SHIsSameObject(v13, v15)
            || ((unsigned __int8 (__fastcall *)(IUnknown *, __int64))v13->lpVtbl[7].QueryInterface)(v13, v15) )
          {
            CApplicationManager::_ForgetApplicationNoLock(a1 - 344, v15, 2LL);
          }
        }
        if ( v13 )
          ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      Service = 0;
      v16 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(IUnknown *))v16->lpVtbl->Release)(v16);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x876,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)Service);
  }
  v17 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)Service;
}
