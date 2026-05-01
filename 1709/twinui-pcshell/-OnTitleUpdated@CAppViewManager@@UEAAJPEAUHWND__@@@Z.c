/*
 * XREFs of ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18003ECA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::OnTitleUpdated(CAppViewManager *this, HWND a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 11);
  v5 = *v4;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v9);
  if ( (*(int (__fastcall **)(__int64 *, HWND, GUID *, __int64 *))(v5 + 40))(
         v4,
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         v6) >= 0 )
    (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v9 + 200LL))(v9, a2);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 0LL;
}
