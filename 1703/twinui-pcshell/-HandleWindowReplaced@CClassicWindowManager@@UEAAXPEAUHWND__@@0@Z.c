/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x1800362B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180025750 (-_GetGITSitePtr@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_85c6a334ae9166c0f52272825a986cb2___ @ 0x180038944 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_85c6a334ae9166c0f52272825a986cb2___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  __int128 v3; // rdi
  IUnknown *v5; // rbx
  __int64 *v6; // rax
  bool v7; // bl
  __int64 v8; // rcx
  __int64 v9; // rcx
  PSRWLOCK v10; // rdi
  PVOID Ptr; // rbx
  int v12; // edi
  IUnknown **v13; // rax
  __int64 v14; // rcx
  __int128 v15; // [rsp+38h] [rbp-38h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-28h] BYREF
  int v17; // [rsp+50h] [rbp-20h]
  PVOID v18; // [rsp+58h] [rbp-18h] BYREF
  __int128 v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+90h] [rbp+20h] BYREF
  __int64 v21; // [rsp+98h] [rbp+28h] BYREF
  PVOID v22; // [rsp+A0h] [rbp+30h]

  *((_QWORD *)&v3 + 1) = a3;
  *(_QWORD *)&v3 = a2;
  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)(((unsigned __int64)this + 48) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 72) >> 64)));
  if ( (unsigned int)IsShellFrameWindow(v3) )
  {
    v20 = 0LL;
    v5 = (IUnknown *)*CWRLObjectWithGITSite::_GetGITSitePtr((__int64)this - 48, &v21);
    v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v20);
    v7 = IUnknown_QueryService(
           v5,
           &IID_IImmersiveApplicationManager,
           &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
           (void **)v6) >= 0;
    v8 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v7 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 152LL))(v20, v3);
    v9 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  v15 = v3;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  v22 = Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v18 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v19 = v15;
    v12 = (int)v10[13].Ptr;
    v13 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_85c6a334ae9166c0f52272825a986cb2___(
                         &v20,
                         &v18);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v12, 0, *v13, 0LL);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v18 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  if ( v17 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
