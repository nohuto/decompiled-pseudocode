/*
 * XREFs of ?HandleWindowReplaced@CClassicWindowManager@@UEAAXPEAUHWND__@@0@Z @ 0x18011A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___ @ 0x1801196EC (CIAMGlobals--QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindowManager::HandleWindowReplaced(CClassicWindowManager *this, HWND a2, HWND a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // r14d
  void *v8; // rcx
  __int64 (__fastcall *v9)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  RTL_SRWLOCK *v10; // rcx
  bool v11; // bl
  __int128 v12; // [rsp+28h] [rbp-28h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+40h] [rbp-10h]
  IUnknown *punk; // [rsp+88h] [rbp+38h] BYREF
  void *ppvOut; // [rsp+90h] [rbp+40h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v13 = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v14 = v7;
  if ( (unsigned int)IsShellFrameWindow(a2) )
  {
    ppvOut = 0LL;
    punk = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    v9 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this - 7) + 32LL);
    v10 = (RTL_SRWLOCK *)((char *)this - 56);
    if ( v9 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v10, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    else
      v9(v10, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
    v11 = IUnknown_QueryService(
            punk,
            &IID_IImmersiveApplicationManager,
            &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
            &ppvOut) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
    if ( v11 )
      (*(void (__fastcall **)(void *, HWND))(*(_QWORD *)ppvOut + 160LL))(ppvOut, a2);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&ppvOut);
  }
  *(_QWORD *)&v12 = a2;
  *((_QWORD *)&v12 + 1) = a3;
  CIAMGlobals::QueueViewManagementTask__lambda_baf5fa06f24787c535c6de70fdf76b60___(v8, &v12);
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
