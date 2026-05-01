/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1800379E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_85c6a334ae9166c0f52272825a986cb2___ @ 0x18003A1C4 (Windows--Internal--ComTaskPool--QueueTask__lambda_85c6a334ae9166c0f52272825a986cb2___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  IUnknown *v8; // rbx
  __int64 *v9; // rax
  bool v10; // bl
  IUnknown *v11; // rcx
  __int64 v12; // rcx
  PSRWLOCK v13; // rsi
  PVOID Ptr; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int128 v17; // [rsp+28h] [rbp-38h]
  PVOID v18; // [rsp+48h] [rbp-18h] BYREF
  __int128 v19; // [rsp+50h] [rbp-10h]
  IUnknown *punk; // [rsp+98h] [rbp+38h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+40h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)96));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  if ( (unsigned int)IsShellFrameWindow(a2) )
  {
    v21 = 0LL;
    punk = 0LL;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 7) + 32LL))(
      (char *)this - 56,
      &GUID_00000000_0000_0000_c000_000000000046,
      &punk);
    v8 = punk;
    v9 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v21);
    v10 = IUnknown_QueryService(
            v8,
            &IID_IImmersiveApplicationManager,
            &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
            (void **)v9) >= 0;
    v11 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v11->lpVtbl->Release)(v11);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64, HWND))(*(_QWORD *)v21 + 152LL))(v21, a2);
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  *(_QWORD *)&v17 = a2;
  *((_QWORD *)&v17 + 1) = a3;
  v13 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v18 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v19 = v17;
    Windows::Internal::ComTaskPool::QueueTask__lambda_85c6a334ae9166c0f52272825a986cb2___(
      v16,
      v15,
      LODWORD(v13[13].Ptr),
      &v18,
      -2LL);
    if ( v18 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
